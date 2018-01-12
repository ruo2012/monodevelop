// 
// CodeAnalysisRunner.cs
//
// Author:
//       Mike Krüger <mkrueger@xamarin.com>
// 
// Copyright (c) 2012 Xamarin Inc. (http://xamarin.com)
// 
// Permission is hereby granted, free of charge, to any person obtaining a copy
// of this software and associated documentation files (the "Software"), to deal
// in the Software without restriction, including without limitation the rights
// to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
// copies of the Software, and to permit persons to whom the Software is
// furnished to do so, subject to the following conditions:
// 
// The above copyright notice and this permission notice shall be included in
// all copies or substantial portions of the Software.
// 
// THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
// IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
// FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
// AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
// LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
// OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
// THE SOFTWARE.
//#define PROFILE
using System;
using System.Linq;
using MonoDevelop.AnalysisCore;
using System.Collections.Generic;
using MonoDevelop.Ide.Gui;
using System.Threading;
using MonoDevelop.CodeIssues;
using Microsoft.CodeAnalysis.Diagnostics;
using Microsoft.CodeAnalysis.CodeFixes;
using MonoDevelop.CodeActions;
using MonoDevelop.Core;
using MonoDevelop.AnalysisCore.Gui;
using Microsoft.CodeAnalysis.CSharp;
using Microsoft.CodeAnalysis;
using System.Threading.Tasks;
using System.Diagnostics;
using MonoDevelop.Ide.Editor;
using System.Collections.Immutable;
using System.Globalization;

namespace MonoDevelop.CodeIssues
{
	static class CodeDiagnosticRunner
	{
		static MonoDevelopWorkspaceDiagnosticAnalyzerProviderService.OptionsTable options =
			((MonoDevelopWorkspaceDiagnosticAnalyzerProviderService)Ide.Composition.CompositionManager.GetExportedValue<IWorkspaceDiagnosticAnalyzerProviderService> ()).Options; 
		
		static TraceListener consoleTraceListener = new ConsoleTraceListener ();

		static bool SkipContext (DocumentContext ctx)
		{
			return (ctx.IsAdHocProject || !(ctx.Project is MonoDevelop.Projects.DotNetProject));
		}

		public static async Task<IEnumerable<Result>> Check (AnalysisDocument analysisDocument, CancellationToken cancellationToken, ImmutableArray<DiagnosticData> results)
		{
			var input = analysisDocument.DocumentContext;
			if (!AnalysisOptions.EnableFancyFeatures || input.Project == null || !input.IsCompileableInProject || input.AnalysisDocument == null)
				return Enumerable.Empty<Result> ();
			if (SkipContext (input))
				return Enumerable.Empty<Result> ();
			try {
#if DEBUG
				Debug.Listeners.Add (consoleTraceListener);
#endif

				var resultList = new List<Result> (results.Length);
				foreach (var data in results) {
					if (data.Id.StartsWith ("CS", StringComparison.Ordinal))
						continue;

					if (DataHasTag (data, WellKnownDiagnosticTags.EditAndContinue))
						continue;

					var diagnostic = await data.ToDiagnosticAsync (analysisDocument, cancellationToken);
					if (!options.GetDiagnosticDescriptor (data.Id).GetIsEnabled (diagnostic.Descriptor))
						continue;
					resultList.Add (new DiagnosticResult (diagnostic));
				}
				return resultList;
			} catch (OperationCanceledException) {
				return Enumerable.Empty<Result> ();
			} catch (AggregateException ae) {
				ae.Flatten ().Handle (ix => ix is OperationCanceledException);
				return Enumerable.Empty<Result> ();
			} catch (Exception e) {
				LoggingService.LogError ("Error while running diagnostics.", e);
				return Enumerable.Empty<Result> ();
			}
		}

		static async Task<Diagnostic> ToDiagnosticAsync (this DiagnosticData data, AnalysisDocument analysisDocument, CancellationToken cancellationToken)
		{
			var project = analysisDocument.DocumentContext.AnalysisDocument.Project;
			var location = await data.DataLocation.ConvertLocationAsync (project, cancellationToken).ConfigureAwait (false);
			var additionalLocations = await data.AdditionalLocations.ConvertLocationsAsync (project, cancellationToken).ConfigureAwait (false);

			var severity = options.GetDiagnosticDescriptor (data.Id).GetSeverity (data.Id, data.Severity);
			return Diagnostic.Create (
				data.Id, data.Category, data.Message, severity, data.DefaultSeverity,
				data.IsEnabledByDefault, GetWarningLevel (severity), data.IsSuppressed, data.Title, data.Description, data.HelpLink,
				location, additionalLocations, customTags: data.CustomTags, properties: data.Properties);
		}

		static bool DataHasTag (DiagnosticData desc, string tag)
		{
			return desc.CustomTags.Any (c => CultureInfo.InvariantCulture.CompareInfo.Compare (c, tag) == 0);
		}

		static int GetWarningLevel (DiagnosticSeverity severity)
		{
			return severity == DiagnosticSeverity.Error ? 0 : 1;
		}

	}
}
