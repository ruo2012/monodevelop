﻿//
// GlobalPackagesExtractor.cs
//
// Author:
//       Matt Ward <matt.ward@xamarin.com>
//
// Copyright (c) 2016 Xamarin Inc. (http://xamarin.com)
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

using System.IO;
using System.Threading;
using System.Threading.Tasks;
using MonoDevelop.Projects;
using NuGet.Logging;
using NuGet.Packaging;
using NuGet.Packaging.Core;
using NuGet.Packaging.PackageExtraction;
using NuGet.Protocol.Core.Types;
using MonoDevelop.Core;

namespace MonoDevelop.PackageManagement
{
	internal static class GlobalPackagesExtractor
	{
		const int BufferSize = 8192;

		public static async Task Extract (
			Solution solution,
			PackageIdentity packageIdentity,
			DownloadResourceResult downloadResult,
			CancellationToken token)
		{
			string globalPackagesFolder = await GetPackagesDirectory (solution);

			var defaultPackagePathResolver = new VersionFolderPathResolver (globalPackagesFolder);

			string hashPath = defaultPackagePathResolver.GetHashPath (packageIdentity.Id, packageIdentity.Version);

			if (File.Exists (hashPath))
				return;

			var versionFolderPathContext = new VersionFolderPathContext (
				packageIdentity,
				globalPackagesFolder,
				NullLogger.Instance,
				false,
				PackageSaveMode.Defaultv3,
				false,
				PackageExtractionBehavior.XmlDocFileSaveMode);

			downloadResult.PackageStream.Position = 0;
			await PackageExtractor.InstallFromSourceAsync (
				stream => downloadResult.PackageStream.CopyToAsync (stream, BufferSize, token),
				versionFolderPathContext,
				token);
		}

		static Task<string> GetPackagesDirectory (Solution solution)
		{
			return Runtime.RunInMainThread (() => {
				return MSBuildNuGetImportGenerator.GetPackagesRootDirectory (solution);
			});
		}
	}
}
