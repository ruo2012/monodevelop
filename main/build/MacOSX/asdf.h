#pragma clang diagnostic ignored "-Wdeprecated-declarations"
#pragma clang diagnostic ignored "-Wtypedef-redefinition"
#pragma clang diagnostic ignored "-Wobjc-designated-initializers"
#include <stdarg.h>
#include <objc/objc.h>
#include <objc/runtime.h>
#include <objc/message.h>
#import <Foundation/Foundation.h>
#import <AppKit/AppKit.h>
#import <CloudKit/CloudKit.h>
#import <MediaPlayer/MediaPlayer.h>
#import <Vision/Vision.h>
#import <AVFoundation/AVFoundation.h>
#import <Accounts/Accounts.h>
#import <Contacts/Contacts.h>
#import <CoreData/CoreData.h>
#import <QuartzCore/QuartzCore.h>
#import <WebKit/WebKit.h>
#import <QuartzCore/QuartzCore.h>
#import <Metal/Metal.h>
#import <CoreLocation/CoreLocation.h>
#import <CoreWlan/CoreWlan.h>
#import <EventKit/EventKit.h>
#import <GameController/GameController.h>
#import <GameplayKit/GameplayKit.h>
#define GL_DO_NOT_WARN_IF_MULTI_GL_VERSION_HEADERS_INCLUDED 1
#import <GLKit/GLKit.h>
#import <Intents/Intents.h>
#import <IOSurface/IOSurfaceObjC.h>
#import <JavaScriptCore/JavaScriptCore.h>
#import <MapKit/MapKit.h>
#import <MetalKit/MetalKit.h>
#import <MetalPerformanceShaders/MetalPerformanceShaders.h>
#import <ModelIO/ModelIO.h>
#import <MultipeerConnectivity/MultipeerConnectivity.h>
#import <Quartz/Quartz.h>
#import <GameKit/GameKit.h>
#import <CoreML/CoreML.h>
#import <IOBluetooth/IOBluetooth.h>
#import <CoreBluetooth/CoreBluetooth.h>
#import <AVKit/AVKit.h>
#import <SceneKit/SceneKit.h>
#import <SpriteKit/SpriteKit.h>
#import <Quartz/Quartz.h>
#import <Quartz/Quartz.h>
#import <SafariServices/SafariServices.h>
#import <Quartz/Quartz.h>
#import <AudioUnit/AudioUnit.h>
#import <StoreKit/StoreKit.h>
#import <CoreGraphics/CoreGraphics.h>
#import <NotificationCenter/NotificationCenter.h>
#import <MediaLibrary/MediaLibrary.h>
#import <ScriptingBridge/ScriptingBridge.h>
#import <FinderSync/FinderSync.h>
#import <Social/Social.h>
#import <LocalAuthentication/LocalAuthentication.h>
#import <CoreMedia/CoreMedia.h>

@class CoreImage_CIAccordionFoldTransition;
@class CoreImage_CICompositingFilter;
@class CoreImage_CIAdditionCompositing;
@class CoreImage_CIAffineFilter;
@class CoreImage_CIAffineClamp;
@class CoreImage_CIAffineTile;
@class CoreImage_CIAffineTransform;
@class CoreImage_CIAreaAverage;
@class CoreImage_CIAreaHistogram;
@class CoreImage_CIAreaMaximum;
@class CoreImage_CIAreaMaximumAlpha;
@class CoreImage_CIAreaMinimum;
@class CoreImage_CIAreaMinimumAlpha;
@class CoreImage_CIAreaMinMaxRed;
@class CoreImage_CIImageGenerator;
@class CoreImage_CIAttributedTextImageGenerator;
@class CoreImage_CICodeGenerator;
@class CoreImage_CIAztecCodeGenerator;
@class CoreImage_CIBarcodeGenerator;
@class CoreImage_CICmykHalftone;
@class CoreImage_CICMYKHalftone;
@class CoreImage_CITransitionFilter;
@class CoreImage_CIBarsSwipeTransition;
@class CoreImage_CIBicubicScaleTransform;
@class CoreImage_CIBlendFilter;
@class CoreImage_CIBlendWithMask;
@class CoreImage_CIBlendWithAlphaMask;
@class CoreImage_CIBlendWithBlueMask;
@class CoreImage_CIBlendWithRedMask;
@class CoreImage_CIBloom;
@class CoreImage_CILinearBlur;
@class CoreImage_CIBokehBlur;
@class CoreImage_CIBoxBlur;
@class CoreImage_CIDistortionFilter;
@class CoreImage_CIBumpDistortion;
@class CoreImage_CIBumpDistortionLinear;
@class CoreImage_CICheckerboardGenerator;
@class CoreImage_CICircleSplashDistortion;
@class CoreImage_CIScreenFilter;
@class CoreImage_CICircularScreen;
@class CoreImage_CICircularWrap;
@class CoreImage_CIClamp;
@class CoreImage_CICode128BarcodeGenerator;
@class CoreImage_CIColorBlendMode;
@class CoreImage_CIColorBurnBlendMode;
@class CoreImage_CIColorClamp;
@class CoreImage_CIColorControls;
@class CoreImage_CIColorCrossPolynomial;
@class CoreImage_CIColorCube;
@class CoreImage_CIColorCubesMixedWithMask;
@class CoreImage_CIColorCubeWithColorSpace;
@class CoreImage_CIColorCurves;
@class CoreImage_CIColorDodgeBlendMode;
@class CoreImage_CIColorInvert;
@class CoreImage_CIColorMap;
@class CoreImage_CIColorMatrix;
@class CoreImage_CIColorMonochrome;
@class CoreImage_CIColorPolynomial;
@class CoreImage_CIColorPosterize;
@class CoreImage_CIColumnAverage;
@class CoreImage_CIComicEffect;
@class CoreImage_CIConstantColorGenerator;
@class CoreImage_CIConvolutionCore;
@class CoreImage_CIConvolution3X3;
@class CoreImage_CIConvolution5X5;
@class CoreImage_CIConvolution7X7;
@class CoreImage_CIConvolution9Horizontal;
@class CoreImage_CIConvolution9Vertical;
@class CoreImage_CICopyMachineTransition;
@class CoreImage_CICrop;
@class CoreImage_CICrystallize;
@class CoreImage_CIDarkenBlendMode;
@class CoreImage_CIDepthBlurEffect;
@class CoreImage_CIDepthDisparityConverter;
@class CoreImage_CIDepthOfField;
@class CoreImage_CIDepthToDisparity;
@class CoreImage_CIDifferenceBlendMode;
@class CoreImage_CIDiscBlur;
@class CoreImage_CIDisintegrateWithMaskTransition;
@class CoreImage_CIDisparityToDepth;
@class CoreImage_CIDisplacementDistortion;
@class CoreImage_CIDissolveTransition;
@class CoreImage_CIDivideBlendMode;
@class CoreImage_CIDotScreen;
@class CoreImage_CIDroste;
@class CoreImage_CIEdgePreserveUpsampleFilter;
@class CoreImage_CIEdges;
@class CoreImage_CIEdgeWork;
@class CoreImage_CITileFilter;
@class CoreImage_CIEightfoldReflectedTile;
@class CoreImage_CIExclusionBlendMode;
@class CoreImage_CIExposureAdjust;
@class CoreImage_CIFaceBalance;
@class CoreImage_CIFalseColor;
@class CoreImage_CIFlashTransition;
@class CoreImage_CIFourfoldReflectedTile;
@class CoreImage_CIFourfoldRotatedTile;
@class CoreImage_CIFourfoldTranslatedTile;
@class CoreImage_CIGammaAdjust;
@class CoreImage_CIGaussianBlur;
@class CoreImage_CIGaussianGradient;
@class CoreImage_CIGlassDistortion;
@class CoreImage_CIGlassLozenge;
@class CoreImage_CIGlideReflectedTile;
@class CoreImage_CIGloom;
@class CoreImage_CIHardLightBlendMode;
@class CoreImage_CIHatchedScreen;
@class CoreImage_CIHeightFieldFromMask;
@class CoreImage_CIHexagonalPixellate;
@class CoreImage_CIHighlightShadowAdjust;
@class CoreImage_CIHistogramDisplayFilter;
@class CoreImage_CIHoleDistortion;
@class CoreImage_CIHueAdjust;
@class CoreImage_CIHueBlendMode;
@class CoreImage_CIHueSaturationValueGradient;
@protocol CIImageProvider;
@class CoreImage_CIKaleidoscope;
@class CoreImage_CILabDeltaE;
@class CoreImage_CILanczosScaleTransform;
@class CoreImage_CILenticularHaloGenerator;
@class CoreImage_CILightenBlendMode;
@class CoreImage_CILightTunnel;
@class CoreImage_CILinearBurnBlendMode;
@class CoreImage_CILinearDodgeBlendMode;
@class CoreImage_CILinearGradient;
@class CoreImage_CILinearToSRGBToneCurve;
@class CoreImage_CILineOverlay;
@class CoreImage_CILineScreen;
@class CoreImage_CILuminosityBlendMode;
@class CoreImage_CIMaskedVariableBlur;
@class CoreImage_CIMaskToAlpha;
@class CoreImage_CIMaximumComponent;
@class CoreImage_CIMaximumCompositing;
@class CoreImage_CIMedianFilter;
@class CoreImage_CIMinimumComponent;
@class CoreImage_CIMinimumCompositing;
@class CoreImage_CIModTransition;
@class CoreImage_CIMorphology;
@class CoreImage_CIMorphologyGradient;
@class CoreImage_CIMorphologyMaximum;
@class CoreImage_CIMorphologyMinimum;
@class CoreImage_CIMotionBlur;
@class CoreImage_CIMultiplyBlendMode;
@class CoreImage_CIMultiplyCompositing;
@class CoreImage_CINinePartStretched;
@class CoreImage_CINinePartTiled;
@class CoreImage_CINoiseReduction;
@class CoreImage_CIOpTile;
@class CoreImage_CIOverlayBlendMode;
@class CoreImage_CIPageCurlTransition;
@class CoreImage_CIPageCurlWithShadowTransition;
@class CoreImage_CIParallelogramTile;
@class CoreImage_CIPdf417BarcodeGenerator;
@class CoreImage_CIPerspectiveTransform;
@class CoreImage_CIPerspectiveCorrection;
@class CoreImage_CIPerspectiveTile;
@class CoreImage_CIPerspectiveTransformWithExtent;
@class CoreImage_CIPhotoEffect;
@class CoreImage_CIPhotoEffectChrome;
@class CoreImage_CIPhotoEffectFade;
@class CoreImage_CIPhotoEffectInstant;
@class CoreImage_CIPhotoEffectMono;
@class CoreImage_CIPhotoEffectNoir;
@class CoreImage_CIPhotoEffectProcess;
@class CoreImage_CIPhotoEffectTonal;
@class CoreImage_CIPhotoEffectTransfer;
@class CoreImage_CIPinchDistortion;
@class CoreImage_CIPinLightBlendMode;
@class CoreImage_CIPixellate;
@class CoreImage_CIPointillize;
@class CoreImage_CIQRCodeGenerator;
@class CoreImage_CIRadialGradient;
@class CoreImage_CIRandomGenerator;
@class CoreImage_CIRippleTransition;
@class CoreImage_CIRowAverage;
@class CoreImage_CISaturationBlendMode;
@class CoreImage_CIScreenBlendMode;
@class CoreImage_CISepiaTone;
@class CoreImage_CIShadedMaterial;
@class CoreImage_CISharpenLuminance;
@class CoreImage_CISixfoldReflectedTile;
@class CoreImage_CISixfoldRotatedTile;
@class CoreImage_CISmoothLinearGradient;
@class CoreImage_CISoftLightBlendMode;
@class CoreImage_CISourceAtopCompositing;
@class CoreImage_CISourceInCompositing;
@class CoreImage_CISourceOutCompositing;
@class CoreImage_CISourceOverCompositing;
@class CoreImage_CISpotColor;
@class CoreImage_CISpotLight;
@class CoreImage_CISRGBToneCurveToLinear;
@class CoreImage_CIStarShineGenerator;
@class CoreImage_CIStraightenFilter;
@class CoreImage_CIStretchCrop;
@class CoreImage_CIStripesGenerator;
@class CoreImage_CISubtractBlendMode;
@class CoreImage_CISunbeamsGenerator;
@class CoreImage_CISwipeTransition;
@class CoreImage_CITemperatureAndTint;
@class CoreImage_CITextImageGenerator;
@class CoreImage_CIThermal;
@class CoreImage_CIToneCurve;
@class CoreImage_CITorusLensDistortion;
@class CoreImage_CITriangleKaleidoscope;
@class CoreImage_CITriangleTile;
@class CoreImage_CITwelvefoldReflectedTile;
@class CoreImage_CITwirlDistortion;
@class CoreImage_CIUnsharpMask;
@class CoreImage_CIVibrance;
@class CoreImage_CIVignette;
@class CoreImage_CIVignetteEffect;
@class CoreImage_CIVortexDistortion;
@class CoreImage_CIWhitePointAdjust;
@class CoreImage_CIXRay;
@class CoreImage_CIZoomBlur;
@class AVFoundation_InternalAVAudioPlayerDelegate;
@class AVFoundation_InternalAVAudioRecorderDelegate;
@protocol NSLayerDelegateContentsScaleUpdating;
@protocol NSMenuValidation;
@class Foundation_InternalNSNotificationHandler;
@class Foundation_NSUrlProtocolClient;
@class __monomac_internal_ActionDispatcher;
@class __MonoMac_NSAlertDidEndDispatcher;
@protocol IKImageBrowserDelegate;
@protocol IKSaveOptionsDelegate;
@protocol NSToolTipOwner;
@class __MonoMac_NSActionDispatcher;
@class __MonoMac_ActionDispatcher;
@class __Xamarin_NSTimerActionDispatcher;
@class __MonoMac_NSAsyncActionDispatcher;
@class Xwt_Mac_WindowBackend;
@class MonoDevelop_MacIntegration_ThemedMacWindowBackend;
@class Xwt_Mac_DialogBackend;
@class MonoDevelop_MacIntegration_ThemedMacDialogBackend;
@class Xwt_Mac_AlertDialogBackend;
@class MonoDevelop_MacIntegration_ThemedMacAlertDialogBackend;
@class MonoDevelop_MacIntegration_MDLabel;
@class MonoDevelop_MacIntegration_AlertButtonWrapper;
@class MonoDevelop_MacIntegration_MainToolbar_NSFocusButton;
@class RunButton;
@class MonoDevelop_MacIntegration_MainToolbar_ColoredButtonCell;
@class MonoDevelop_MacIntegration_MainToolbar_StatusIcon;
@class MonoDevelop_MacIntegration_MainToolbar_CancelButton;
@class MonoDevelop_MacIntegration_MainToolbar_VerticallyCenteredTextFieldCell;
@class MonoDevelop_MacIntegration_MainToolbar_AwesomeBar;
@class MonoDevelop_MacIntegration_MainToolbar_ButtonBarContainer;
@class MonoDevelop_MacIntegration_SelectEncodingPanel_EncodingSource;
@class MonoDevelop_MacIntegration_SelectEncodingPanel_EncodingAllDelegate;
@class MonoDevelop_MacIntegration_SelectEncodingPanel_EncodingSelectedDelegate;
@class MonoDevelop_MacIntegration_SelectEncodingPanel;
@class MonoDevelop_MacIntegration_SelectEncodingPopUpButton;
@class MonoDevelop_MacIntegration_MainToolbar_SearchBar_DarkThemeSearchFieldCell;
@class MonoDevelop_MacIntegration_MainToolbar_SearchBar;
@class MonoDevelop_MacIntegration_MainToolbar_ButtonBar_DarkThemeSegmentedCell;
@class MonoDevelop_MacIntegration_MainToolbar_ButtonBar;
@class MonoDevelop_MacIntegration_MainToolbar_SelectorView;
@class MonoDevelop_MacIntegration_MainToolbar_BuildResultsView;
@class MonoDevelop_MacIntegration_MainToolbar_ProgressView;
@class MonoDevelop_MacIntegration_MainToolbar_StatusBar;
@class MonoDevelop_MacIntegration_MainToolbar_SelectorView_PathSelectorView_NSPathComponentCellFocusable;
@class MonoDevelop_MacIntegration_MainToolbar_SelectorView_PathSelectorView;
@class MonoDevelop_Components_AtkCocoaHelper_RealAccessibilityElementProxy;
@class MonoDevelop_Components_AtkCocoaHelper_RealAccessibilityElementButtonProxy;
@class MonoDevelop_Components_AtkCocoaHelper_RealAccessibilityElementNavigableStaticTextProxy;
@class MonoDevelop_Components_Mac_MDLinkMenuItem;
@class MonoDevelop_Components_Mac_MDMenuHeaderItem;
@class MonoDevelop_Components_Mac_MDServicesMenuItem;
@class MonoDevelop_Components_Mac_MDMenu;
@class MonoDevelop_Components_Mac_MDMenuItem_MDExpandedArrayItem;
@class MonoDevelop_Components_Mac_MDMenuItem;
@class MonoDevelop_Components_Mac_MDSubMenuItem;
@class MonoDevelop_Components_Mac_GtkEmbed;
@class MonoDevelop_Components_ContextMenuExtensionsMac_NSLocationAwareMenu_ContextMenuDelegate;
@class MonoDevelop_Components_ContextMenuExtensionsMac_NSLocationAwareMenu;
@class NETunnelNetworkSettings;
@class NEPacketTunnelNetworkSettings;
@class PHAdjustmentData;
@class PHObject;
@class PHAsset;
@class PHCollection;
@class PHAssetCollection;
@class PHChange;
@class PHCloudIdentifier;
@class PHCollectionList;
@class PHContentEditingInput;
@class PHContentEditingOutput;
@class PHFetchOptions;
@class PHFetchResult;
@class PHFetchResultChangeDetails;
@class PHImageManager;
@class PHImageRequestOptions;
@class PHLivePhoto;
@protocol EAAccessoryDelegate;
@protocol PHLivePhotoFrame;
@class EASession;
@class PHObjectChangeDetails;
@protocol PHPhotoLibraryChangeObserver;
@class PHProject;
@class PHProjectChangeRequest;
@protocol PHContentEditingController;
@class PHProjectElement;
@class PHProjectAssetElement;
@class PHProjectExtensionContext;
@protocol PHProjectExtensionController;
@class PHProjectInfo;
@class PHProjectJournalEntryElement;
@class PHProjectRegionOfInterest;
@class PHProjectSection;
@class PHProjectSectionContent;
@class PHProjectTextElement;
@class PHProjectTypeDescription;
@class CNContactPicker;
@protocol CNContactPickerDelegate;
@class CNContactViewController;
@class AUAudioUnitViewConfiguration;
@class AUViewController;
@class NEAppRule;
@class NEVPNProtocol;
@class NEDNSProxyProviderProtocol;
@class NEDNSSettings;
@class NEEvaluateConnectionRule;
@class NEFilterProviderConfiguration;
@class NEFlowMetaData;
@class NEIPv4Route;
@class NEIPv4Settings;
@class NEIPv6Route;
@class NEIPv6Settings;
@class NEOnDemandRule;
@class NEOnDemandRuleConnect;
@class NEOnDemandRuleDisconnect;
@class NEOnDemandRuleEvaluateConnection;
@class NEOnDemandRuleIgnore;
@class NEPacket;
@class NEProxyServer;
@class NEProxySettings;
@class NETunnelProviderProtocol;
@class NEVPNConnection;
@class NETunnelProviderSession;
@class NEVPNIKEv2SecurityAssociationParameters;
@class NEVPNProtocolIPSec;
@class NEVPNProtocolIKEv2;
@class NWEndpoint;
@class NWBonjourServiceEndpoint;
@class NWHostEndpoint;
@class NWPath;
@protocol NWTCPConnectionAuthenticationDelegate;
@class NWTLSParameters;
@class Foundation_NSUrlSessionHandler_WrappedNSInputStream;
@class NotificationCenter_NCWidgetListViewController__NCWidgetListViewDelegate;
@class NotificationCenter_NCWidgetSearchViewController__NCWidgetSearchViewDelegate;
@class CoreAnimation_CAAnimation__CAAnimationDelegate;
@class Foundation_NSNetService__NSNetServiceDelegate;
@class Foundation_NSNetServiceBrowser__NSNetServiceBrowserDelegate;
@class __NSObject_Disposer;
@class __XamarinObjectObserver;
@class CoreLocation_CLLocationManager__CLLocationManagerDelegate;
@class AVFoundation_AVCaptureFileOutput_recordingProxy;
@class AppKit_NSAlert__NSAlertDelegate;
@class AppKit_NSAnimation__NSAnimationDelegate;
@class Foundation_NSStream__NSStreamDelegate;
@class AppKit_NSApplication__NSApplicationDelegate;
@class Foundation_NSThread_ActionThread;
@class WebKit_DomNode_DomNodeEventProxy;
@class WebKit_DomNode_DomNodeEventProxy2;
@class __NSGestureRecognizerToken;
@class __NSClickGestureRecognizer;
@class NEProvider;
@class NETunnelProvider;
@class NEPacketTunnelProvider;
@class NEVPNManager;
@class AppKit_NSTextField__NSTextFieldDelegate;
@class AppKit_NSComboBox__NSComboBoxDelegate;
@class AppKit_NSDatePicker__NSDatePickerCellDelegate;
@class AppKit_NSDatePickerCell__NSDatePickerCellDelegate;
@class WebKit_WebView__WebFrameLoadDelegate;
@class WebKit_WebView__WebDownloadDelegate;
@class WebKit_WebView__WebResourceLoadDelegate;
@class WebKit_WebView__WebUIDelegate;
@class WebKit_WebView__WebPolicyDelegate;
@class __NSDocumentDuplicateCallback;
@class Foundation_NSUserNotificationCenter__NSUserNotificationCenterDelegate;
@class AppKit_NSGestureRecognizer__NSGestureRecognizerDelegate;
@class __NSGestureRecognizerParameterlessToken;
@class __NSGestureRecognizerParametrizedToken;
@class AppKit_NSDrawer__NSDrawerDelegate;
@class GameKit_GKGameCenterViewController__GKGameCenterControllerDelegate;
@class GameKit_GKAchievementViewController__GKAchievementViewControllerDelegate;
@class CoreBluetooth_CBCentralManager__CBCentralManagerDelegate;
@class CoreBluetooth_CBPeripheralManager__CBPeripheralManagerDelegate;
@class GameKit_GKFriendRequestComposeViewController__GKFriendRequestComposeViewControllerDelegate;
@class CoreBluetooth_CBPeripheral__CBPeripheralDelegate;
@class AppKit_NSImage__NSImageDelegate;
@class PdfKit_PdfDocument__PdfDocumentDelegate;
@class __NSMagnificationGestureRecognizer;
@class AppKit_NSMatrix__NSMatrixDelegate;
@class GameKit_GKLeaderboardViewController__GKLeaderboardViewControllerDelegate;
@class GameKit_GKMatch__GKMatchDelegate;
@class GameKit_GKMatchmakerViewController__GKMatchmakerViewControllerDelegate;
@class PdfKit_PdfView__PdfViewDelegate;
@class AppKit_NSPageController__NSPageControllerDelegate;
@class __NSPanGestureRecognizer;
@class Foundation_NSKeyedArchiver__NSKeyedArchiverDelegate;
@class Foundation_NSKeyedUnarchiver__NSKeyedUnarchiverDelegate;
@class AppKit_NSPathCell__NSPathCellDelegate;
@class PHLivePhotoEditingContext;
@class ExternalAccessory_EAAccessory__EAAccessoryDelegate;
@class EAAccessory;
@class EAAccessoryManager;
@class PHPhotoLibrary;
@class __NSPressGestureRecognizer;
@class Foundation_NSCache__NSCacheDelegate;
@class __NSRotationGestureRecognizer;
@class AppKit_NSRuleEditor__NSRuleEditorDelegate;
@class AppKit_NSSearchField__NSSearchFieldDelegate;
@class AppKit_NSSavePanel__NSOpenSavePanelDelegate;
@class AppKit_NSTableView__NSTableViewDelegate;
@class AppKit_NSSharingService__NSSharingServiceDelegate;
@class AppKit_NSSound__NSSoundDelegate;
@class AppKit_NSSharingServicePicker__NSSharingServicePickerDelegate;
@class AppKit_NSTextStorage__NSTextStorageDelegate;
@class AppKit_NSWindow__NSWindowDelegate;
@class ImageKit_IKCameraDeviceView__IKCameraDeviceViewDelegate;
@class ImageKit_IKDeviceBrowserView__IKDeviceBrowserViewDelegate;
@class AppKit_NSTabView__NSTabViewDelegate;
@class ImageKit_IKImageBrowserView__IKImageBrowserDelegate;
@class ImageKit_IKSaveOptions__IKSaveOptionsDelegate;
@class AppKit_NSText__NSTextDelegate;
@class ImageKit_IKScannerDeviceView__IKScannerDeviceViewDelegate;
@class NEAppProxyFlow;
@class NEAppProxyProvider;
@class NETunnelProviderManager;
@class NEAppProxyProviderManager;
@class NEAppProxyTCPFlow;
@class ScriptingBridge_SBApplication__SBApplicationDelegate;
@class NEAppProxyUDPFlow;
@class AppKit_NSTouchBar__NSTouchBarDelegate;
@class NEFilterManager;
@class NEFilterProvider;
@class AppKit_NSTextView__NSTextViewDelegate;
@class NEPacketTunnelFlow;
@class Foundation_NSMetadataQuery__NSMetadataQueryDelegate;
@class AppKit_NSToolbar__NSToolbarDelegate;
@class NWTCPConnection;
@class NWUDPSession;
@class SceneKit_SCNPhysicsWorld__SCNPhysicsContactDelegate;
@class MapKit_MKMapView__MKMapViewDelegate;
@class SpriteKit_SKPhysicsWorld__SKPhysicsContactDelegate;
@class StoreKit_SKRequest__SKRequestDelegate;
@class StoreKit_SKProductsRequest__SKProductsRequestDelegate;
@class Foundation_NSUrlSessionHandler_NSUrlSessionHandlerDelegate;
@class Xwt_Gtk_Mac_GtkMacSaveFileDialogBackend;
@class Xwt_Gtk_Mac_WebViewBackend_XwtWebUIDelegate;
@class Xwt_Gtk_Mac_GtkMacOpenFileDialogBackend;
@class Xwt_Gtk_Mac_GtkMacSelectFolderBackend;
@class Xwt_Mac_WidgetView;
@class Xwt_Mac_CustomAlignedContainer;
@class Xwt_Mac_TextFieldView;
@class Xwt_Mac_CustomTextFieldCell;
@class Xwt_Mac_AppDelegate;
@class Xwt_Mac_TabView;
@class Xwt_Mac_TreeItem;
@class Xwt_Mac_TreeSource;
@class Xwt_Mac_WidgetPlacementWrapper;
@class Xwt_Mac_WindowBackendController;
@class Xwt_Mac_TextTableCell;
@class Xwt_Mac_ImageTableCell;
@class Xwt_Mac_TableRow;
@class Xwt_Mac_ListSource;
@class Xwt_Mac_ScrollView;
@class Xwt_Mac_MenuBackend;
@class Xwt_Mac_PopUpButton;
@class Xwt_Mac_ComboDataSource;
@class Xwt_Mac_MacFrame;
@class Xwt_Mac_CustomContentView;
@class Xwt_Mac_CustomScrollView;
@class Xwt_Mac_DummyClipView;
@class Xwt_Mac_CustomClipView;
@class Xwt_Mac_NormalClipView;
@class Xwt_Mac_SeparatorWidget;
@class Xwt_Mac_CustomSplitView;
@class Xwt_Mac_ProgressIndicatorView;
@class Xwt_Mac_MacExpander;
@class Xwt_Mac_ExpanderWidget;
@class Xwt_Mac_CollapsibleBox;
@class Xwt_Mac_LinkLabelView;
@class Xwt_Mac_FileDialogBackend;
@class Xwt_Mac_OpenFileDialogBackend;
@class XwtPasteboardOwner;
@class Xwt_Mac_CustomWidgetView;
@class Xwt_Mac_CustomScroller;
@class Xwt_Mac_MacDatePicker;
@class Xwt_Mac_MacSlider;
@class Xwt_Mac_MacSliderCell;
@class Xwt_Mac_CheckBoxTableCell;
@class Xwt_Mac_MacWebView;
@class Xwt_Mac_XwtWebUIDelegate;
@class Xwt_Mac_SaveFileDialogBackend;
@class Xwt_Mac_MacColorWell;
@class Xwt_Mac_MacCalendar;
@class Xwt_Mac_FontPanelDelegate;
@class Xwt_Mac_RadioButtonTableCell;
@class Xwt_Mac_MacButton;
@class Xwt_Mac_TreeViewBackend_TreeDelegate;
@class Xwt_Mac_CompositeCell;
@class Xwt_Mac_CustomImage;
@class Xwt_Mac_CanvasView;
@class Xwt_Mac_CustomTextField_CustomCell;
@class Xwt_Mac_CustomTextField;
@class Xwt_Mac_MacComboBox;
@class Xwt_Mac_PanedBackend_SplitViewDelegate;
@class Xwt_Mac_MacSpinButton_VibrancyStepper;
@class Xwt_Mac_MacSpinButton;
@class Xwt_Mac_PopoverBackend_NSAppearanceCustomizationPopover;
@class Xwt_Mac_SelectFolderDialogBackend;
@class Xwt_Mac_MacMenuButton;
@class Xwt_Mac_CanvasTableCell;
@class Xwt_Mac_MacTextView;
@class Xwt_Mac_CustomSecureTextField;
@class Xwt_Mac_NSTableViewBackend_ListDelegate;
@class Xwt_Mac_NSTableViewBackend;
@class Xwt_Mac_OutlineViewBackend;
@class Xwt_Mac_PopupWindowBackend;
@class Xwt_Mac_MacButton_ColoredButtonCell;
@class Xwt_Mac_CustomTextField_CustomEditor;
@class Xwt_Mac_PopoverBackend_FactoryViewController_ContainerView;
@class Xwt_Mac_PopoverBackend_FactoryViewController;
@class Xwt_Mac_MacMenuButton_ColoredPopUpButtonCell;

@interface CoreImage_CIAccordionFoldTransition : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICompositingFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAdditionCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineClamp : CoreImage_CIAffineFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineTile : CoreImage_CIAffineFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAffineTransform : CoreImage_CIAffineFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaAverage : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaHistogram : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMaximum : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMaximumAlpha : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinimum : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinimumAlpha : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAreaMinMaxRed : CoreImage_CIAreaMaximum {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIImageGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAttributedTextImageGenerator : CoreImage_CIImageGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICodeGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIAztecCodeGenerator : CoreImage_CICodeGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBarcodeGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICmykHalftone : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICMYKHalftone : CoreImage_CICmykHalftone {
}
	-(id) init;
@end

@interface CoreImage_CITransitionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBarsSwipeTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBicubicScaleTransform : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithMask : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithAlphaMask : CoreImage_CIBlendWithMask {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithBlueMask : CoreImage_CIBlendWithMask {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBlendWithRedMask : CoreImage_CIBlendWithMask {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBloom : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBokehBlur : CoreImage_CILinearBlur {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBoxBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDistortionFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBumpDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIBumpDistortionLinear : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICheckerboardGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircleSplashDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIScreenFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircularScreen : CoreImage_CIScreenFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICircularWrap : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIClamp : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICode128BarcodeGenerator : CoreImage_CICodeGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorBurnBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorClamp : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorControls : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCrossPolynomial : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCube : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCubesMixedWithMask : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCubeWithColorSpace : CoreImage_CIColorCube {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorCurves : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorDodgeBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorInvert : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMap : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMatrix : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorMonochrome : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorPolynomial : CoreImage_CIColorCrossPolynomial {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColorPosterize : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIColumnAverage : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIComicEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConstantColorGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolutionCore : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution3X3 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution5X5 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution7X7 : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution9Horizontal : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIConvolution9Vertical : CoreImage_CIConvolutionCore {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICopyMachineTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICrop : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CICrystallize : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDarkenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthBlurEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthDisparityConverter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthOfField : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDepthToDisparity : CoreImage_CIDepthDisparityConverter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDifferenceBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDiscBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisintegrateWithMaskTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisparityToDepth : CoreImage_CIDepthDisparityConverter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDisplacementDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDissolveTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDivideBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDotScreen : CoreImage_CIScreenFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIDroste : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdgePreserveUpsampleFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdges : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEdgeWork : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITileFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIEightfoldReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIExclusionBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIExposureAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFaceBalance : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFalseColor : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFlashTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldRotatedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIFourfoldTranslatedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGammaAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaussianBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGaussianGradient : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlassDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlassLozenge : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGlideReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIGloom : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHardLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHatchedScreen : CoreImage_CIScreenFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHeightFieldFromMask : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHexagonalPixellate : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHighlightShadowAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHistogramDisplayFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHoleDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIHueSaturationValueGradient : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@protocol CIImageProvider
	@required -(void) provideImageData:(void *)p0 bytesPerRow:(NSUInteger)p1 origin:(NSUInteger)p2 :(NSUInteger)p3 size:(NSUInteger)p4 :(NSUInteger)p5 userInfo:(NSObject *)p6;
@end

@interface CoreImage_CIKaleidoscope : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILabDeltaE : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILanczosScaleTransform : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILenticularHaloGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILightenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILightTunnel : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearBurnBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearDodgeBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearGradient : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILinearToSRGBToneCurve : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILineOverlay : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILineScreen : CoreImage_CIScreenFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CILuminosityBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaskedVariableBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaskToAlpha : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaximumComponent : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMaximumCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMedianFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMinimumComponent : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMinimumCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIModTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphology : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyGradient : CoreImage_CIMorphology {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyMaximum : CoreImage_CIMorphology {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMorphologyMinimum : CoreImage_CIMorphology {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMotionBlur : CoreImage_CILinearBlur {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMultiplyBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIMultiplyCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINinePartStretched : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINinePartTiled : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CINoiseReduction : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIOpTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIOverlayBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPageCurlTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPageCurlWithShadowTransition : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIParallelogramTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPdf417BarcodeGenerator : CoreImage_CICodeGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTransform : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveCorrection : CoreImage_CIPerspectiveTransform {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTile : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPerspectiveTransformWithExtent : CoreImage_CIPerspectiveTransform {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectChrome : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectFade : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectInstant : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectMono : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectNoir : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectProcess : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectTonal : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPhotoEffectTransfer : CoreImage_CIPhotoEffect {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPinchDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPinLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPixellate : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIPointillize : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIQRCodeGenerator : CoreImage_CICodeGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRadialGradient : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRandomGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRippleTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIRowAverage : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISaturationBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIScreenBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISepiaTone : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIShadedMaterial : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISharpenLuminance : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISixfoldReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISixfoldRotatedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISmoothLinearGradient : CoreImage_CILinearGradient {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISoftLightBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceAtopCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceInCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceOutCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISourceOverCompositing : CoreImage_CICompositingFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISpotColor : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISpotLight : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISRGBToneCurveToLinear : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStarShineGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStraightenFilter : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStretchCrop : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIStripesGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISubtractBlendMode : CoreImage_CIBlendFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISunbeamsGenerator : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CISwipeTransition : CoreImage_CITransitionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITemperatureAndTint : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITextImageGenerator : CoreImage_CIImageGenerator {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIThermal : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIToneCurve : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITorusLensDistortion : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITriangleKaleidoscope : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITriangleTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITwelvefoldReflectedTile : CoreImage_CITileFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CITwirlDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIUnsharpMask : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVibrance : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVignette : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVignetteEffect : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIVortexDistortion : CoreImage_CIDistortionFilter {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIWhitePointAdjust : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIXRay : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface CoreImage_CIZoomBlur : CIFilter {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@protocol NSLayerDelegateContentsScaleUpdating
@end

@protocol NSMenuValidation
	@required -(BOOL) validateMenuItem:(NSMenuItem *)p0;
@end

@interface Foundation_NSUrlProtocolClient : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@protocol IKImageBrowserDelegate
@end

@protocol IKSaveOptionsDelegate
@end

@protocol NSToolTipOwner
	@required -(NSString *) view:(NSView *)p0 stringForToolTip:(NSInteger)p1 point:(CGPoint)p2 userData:(void *)p3;
@end

@interface Xwt_Mac_WindowBackend : NSWindow {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) observeValueForKeyPath:(NSString *)p0 ofObject:(NSObject *)p1 change:(NSDictionary *)p2 context:(void *)p3;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface MonoDevelop_MacIntegration_ThemedMacWindowBackend : Xwt_Mac_WindowBackend {
}
	-(id) init;
@end

@interface Xwt_Mac_DialogBackend : Xwt_Mac_WindowBackend {
}
	-(void) cancelOperation:(NSObject *)p0;
	-(id) init;
@end

@interface MonoDevelop_MacIntegration_ThemedMacDialogBackend : Xwt_Mac_DialogBackend {
}
	-(id) init;
@end

@interface Xwt_Mac_AlertDialogBackend : NSAlert {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface MonoDevelop_MacIntegration_ThemedMacAlertDialogBackend : Xwt_Mac_AlertDialogBackend {
}
	-(id) init;
@end

@interface MonoDevelop_MacIntegration_MainToolbar_NSFocusButton : NSButton {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) keyDown:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface MonoDevelop_MacIntegration_MainToolbar_AwesomeBar : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) viewDidMoveToWindow;
	-(void) viewWillMoveToSuperview:(NSView *)p0;
	-(void) viewDidMoveToSuperview;
	-(void) mouseDown:(NSEvent *)p0;
	-(CGRect) frame;
	-(void) setFrame:(CGRect)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface MonoDevelop_MacIntegration_MainToolbar_ButtonBarContainer : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) keyDown:(NSEvent *)p0;
	-(BOOL) becomeFirstResponder;
	-(BOOL) resignFirstResponder;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface MonoDevelop_MacIntegration_MainToolbar_SelectorView_PathSelectorView : NSPathControl {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(CGSize) sizeThatFits:(CGSize)p0;
	-(BOOL) accessibilityPerformShowMenu;
	-(void) mouseDown:(NSEvent *)p0;
	-(void) keyDown:(NSEvent *)p0;
	-(BOOL) becomeFirstResponder;
	-(void) viewDidChangeBackingProperties;
	-(void) viewDidMoveToWindow;
	-(BOOL) isEnabled;
	-(void) setEnabled:(BOOL)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface MonoDevelop_Components_Mac_GtkEmbed : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) isGtkView;
	-(CGRect) frame;
	-(void) setFrame:(CGRect)p0;
	-(void) viewDidMoveToSuperview;
	-(void) removeFromSuperview;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface NETunnelNetworkSettings : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(id) DNSSettings;
	-(void) setDNSSettings:(id)p0;
	-(id) proxySettings;
	-(void) setProxySettings:(id)p0;
	-(NSString *) tunnelRemoteAddress;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithTunnelRemoteAddress:(NSString *)p0;
@end

@interface NEPacketTunnelNetworkSettings : NETunnelNetworkSettings {
}
	-(id) IPv4Settings;
	-(void) setIPv4Settings:(id)p0;
	-(id) IPv6Settings;
	-(void) setIPv6Settings:(id)p0;
	-(NSNumber *) MTU;
	-(void) setMTU:(NSNumber *)p0;
	-(NSNumber *) tunnelOverheadBytes;
	-(void) setTunnelOverheadBytes:(NSNumber *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithTunnelRemoteAddress:(NSString *)p0;
@end

@interface PHAdjustmentData : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSData *) data;
	-(NSString *) formatIdentifier;
	-(NSString *) formatVersion;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithFormatIdentifier:(NSString *)p0 formatVersion:(NSString *)p1 data:(NSData *)p2;
@end

@interface PHObject : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(NSString *) localIdentifier;
@end

@interface PHAsset : PHObject {
}
	-(BOOL) canPerformEditOperation:(NSInteger)p0;
	-(NSString *) burstIdentifier;
	-(NSUInteger) burstSelectionTypes;
	-(NSDate *) creationDate;
	-(double) duration;
	-(BOOL) isFavorite;
	-(BOOL) isHidden;
	-(CLLocation *) location;
	-(NSUInteger) mediaSubtypes;
	-(NSInteger) mediaType;
	-(NSDate *) modificationDate;
	-(NSUInteger) pixelHeight;
	-(NSUInteger) pixelWidth;
	-(BOOL) representsBurst;
	-(NSUInteger) sourceType;
	-(BOOL) isSyncFailureHidden;
@end

@interface PHCollection : PHObject {
}
	-(BOOL) canPerformEditOperation:(NSInteger)p0;
	-(BOOL) canContainAssets;
	-(BOOL) canContainCollections;
	-(NSString *) localizedTitle;
@end

@interface PHAssetCollection : PHCollection {
}
	-(CLLocation *) approximateLocation;
	-(NSInteger) assetCollectionSubtype;
	-(NSInteger) assetCollectionType;
	-(NSDate *) endDate;
	-(NSUInteger) estimatedAssetCount;
	-(NSArray *) localizedLocationNames;
	-(NSDate *) startDate;
	-(id) init;
@end

@interface PHChange : NSObject {
}
	-(id) changeDetailsForFetchResult:(id)p0;
	-(id) changeDetailsForObject:(id)p0;
	-(id) init;
@end

@interface PHCloudIdentifier : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) stringValue;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithStringValue:(NSString *)p0;
@end

@interface PHCollectionList : PHCollection {
}
	-(NSInteger) collectionListSubtype;
	-(NSInteger) collectionListType;
	-(NSDate *) endDate;
	-(NSArray *) localizedLocationNames;
	-(NSDate *) startDate;
	-(id) init;
@end

@interface PHContentEditingInput : NSObject {
}
	-(id) adjustmentData;
	-(AVAsset *) audiovisualAsset;
	-(AVAsset *) avAsset;
	-(NSDate *) creationDate;
	-(NSImage *) displaySizeImage;
	-(int) fullSizeImageOrientation;
	-(NSURL *) fullSizeImageURL;
	-(id) livePhoto;
	-(CLLocation *) location;
	-(NSUInteger) mediaSubtypes;
	-(NSInteger) mediaType;
	-(NSInteger) playbackStyle;
	-(NSString *) uniformTypeIdentifier;
	-(id) init;
@end

@interface PHContentEditingOutput : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(id) adjustmentData;
	-(void) setAdjustmentData:(id)p0;
	-(NSURL *) renderedContentURL;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithContentEditingInput:(id)p0;
@end

@interface PHFetchOptions : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(NSUInteger) fetchLimit;
	-(void) setFetchLimit:(NSUInteger)p0;
	-(BOOL) includeAllBurstAssets;
	-(void) setIncludeAllBurstAssets:(BOOL)p0;
	-(NSUInteger) includeAssetSourceTypes;
	-(void) setIncludeAssetSourceTypes:(NSUInteger)p0;
	-(BOOL) includeHiddenAssets;
	-(void) setIncludeHiddenAssets:(BOOL)p0;
	-(NSPredicate *) predicate;
	-(void) setPredicate:(NSPredicate *)p0;
	-(NSArray *) sortDescriptors;
	-(void) setSortDescriptors:(NSArray *)p0;
	-(BOOL) wantsIncrementalChangeDetails;
	-(void) setWantsIncrementalChangeDetails:(BOOL)p0;
	-(id) init;
@end

@interface PHFetchResult : NSObject {
}
	-(BOOL) containsObject:(NSObject *)p0;
	-(NSObject *) copyWithZone:(id)p0;
	-(NSUInteger) countOfAssetsWithMediaType:(NSInteger)p0;
	-(void) enumerateObjectsUsingBlock:(id)p0;
	-(void) enumerateObjectsWithOptions:(NSUInteger)p0 usingBlock:(id)p1;
	-(void) enumerateObjectsAtIndexes:(NSIndexSet *)p0 options:(NSUInteger)p1 usingBlock:(id)p2;
	-(NSInteger) indexOfObject:(NSObject *)p0;
	-(NSInteger) indexOfObject:(NSObject *)p0 inRange:(NSRange)p1;
	-(NSObject *) objectAtIndex:(NSInteger)p0;
	-(NSObject *) objectAtIndexedSubscript:(NSInteger)p0;
	-(void *) objectsAtIndexes:(NSIndexSet *)p0;
	-(NSInteger) count;
	-(NSObject *) lastObject;
	-(NSObject *) firstObject;
@end

@interface PHFetchResultChangeDetails : NSObject {
}
	-(void) enumerateMovesWithBlock:(id)p0;
	-(NSIndexSet *) changedIndexes;
	-(NSArray *) changedObjects;
	-(id) fetchResultAfterChanges;
	-(id) fetchResultBeforeChanges;
	-(BOOL) hasIncrementalChanges;
	-(BOOL) hasMoves;
	-(NSIndexSet *) insertedIndexes;
	-(NSArray *) insertedObjects;
	-(NSIndexSet *) removedIndexes;
	-(NSArray *) removedObjects;
	-(id) init;
@end

@interface PHImageManager : NSObject {
}
	-(void) cancelImageRequest:(int)p0;
	-(int) requestImageDataForAsset:(id)p0 options:(id)p1 resultHandler:(id)p2;
	-(int) requestImageForAsset:(id)p0 targetSize:(CGSize)p1 contentMode:(NSInteger)p2 options:(id)p3 resultHandler:(id)p4;
	-(id) init;
@end

@interface PHImageRequestOptions : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(NSInteger) deliveryMode;
	-(void) setDeliveryMode:(NSInteger)p0;
	-(BOOL) isNetworkAccessAllowed;
	-(void) setNetworkAccessAllowed:(BOOL)p0;
	-(CGRect) normalizedCropRect;
	-(void) setNormalizedCropRect:(CGRect)p0;
	-(id) progressHandler;
	-(void) setProgressHandler:(id)p0;
	-(NSInteger) resizeMode;
	-(void) setResizeMode:(NSInteger)p0;
	-(BOOL) isSynchronous;
	-(void) setSynchronous:(BOOL)p0;
	-(NSInteger) version;
	-(void) setVersion:(NSInteger)p0;
	-(id) init;
@end

@interface PHLivePhoto : NSObject {
}
	-(CGSize) size;
@end

@protocol EAAccessoryDelegate
	@optional -(void) accessoryDidDisconnect:(id)p0;
@end

@protocol PHLivePhotoFrame
	@required @property (nonatomic, assign, readonly) CIImage * image;
	@required @property (nonatomic, assign, readonly) CMTime time;
	@required @property (nonatomic, assign, readonly) NSInteger type;
	@required @property (nonatomic, assign, readonly) CGFloat renderScale;
@end

@interface EASession : NSObject {
}
	-(id) accessory;
	-(NSInputStream *) inputStream;
	-(NSOutputStream *) outputStream;
	-(NSString *) protocolString;
	-(id) initWithAccessory:(id)p0 forProtocol:(NSString *)p1;
@end

@interface PHObjectChangeDetails : NSObject {
}
	-(BOOL) assetContentChanged;
	-(NSObject *) objectAfterChanges;
	-(NSObject *) objectBeforeChanges;
	-(BOOL) objectWasDeleted;
	-(id) init;
@end

@protocol PHPhotoLibraryChangeObserver
	@required -(void) photoLibraryDidChange:(id)p0;
@end

@interface PHProject : PHAssetCollection {
}
	-(NSData *) projectExtensionData;
	-(id) init;
@end

@interface PHProjectChangeRequest : NSObject {
}
	-(void) setKeyAsset:(id)p0;
	-(NSData *) projectExtensionData;
	-(void) setProjectExtensionData:(NSData *)p0;
	-(NSString *) title;
	-(void) setTitle:(NSString *)p0;
	-(id) init;
	-(id) initWithProject:(id)p0;
@end

@protocol PHContentEditingController
	@required @property (nonatomic, assign, readonly) BOOL shouldShowCancelConfirmation;
	@required -(BOOL) canHandleAdjustmentData:(id)p0;
	@required -(void) startContentEditingWithInput:(id)p0 placeholderImage:(NSImage *)p1;
	@required -(void) finishContentEditingWithCompletionHandler:(id)p0;
	@required -(void) cancelContentEditing;
@end

@interface PHProjectElement : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(CGRect) placement;
	-(double) weight;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface PHProjectAssetElement : PHProjectElement {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) annotation;
	-(id) cloudAssetIdentifier;
	-(CGRect) cropRect;
	-(NSArray *) regionsOfInterest;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface PHProjectExtensionContext : NSExtensionContext {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(id) photoLibrary;
	-(id) project;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@protocol PHProjectExtensionController
	@optional -(NSArray *) supportedProjectTypes;
	@required -(void) beginProjectWithExtensionContext:(id)p0 projectInfo:(id)p1 completion:(id)p2;
	@required -(void) resumeProjectWithExtensionContext:(id)p0 completion:(id)p1;
	@required -(void) finishProjectWithCompletionHandler:(id)p0;
@end

@interface PHProjectInfo : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSInteger) creationSource;
	-(NSString *) projectType;
	-(NSArray *) sections;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface PHProjectJournalEntryElement : PHProjectElement {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(id) assetElement;
	-(NSDate *) date;
	-(id) textElement;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface PHProjectRegionOfInterest : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) identifier;
	-(CGRect) rect;
	-(double) weight;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface PHProjectSection : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSArray *) sectionContents;
	-(NSInteger) sectionType;
	-(NSString *) title;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface PHProjectSectionContent : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(double) aspectRatio;
	-(NSArray *) cloudAssetIdentifiers;
	-(NSArray *) elements;
	-(NSInteger) numberOfColumns;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface PHProjectTextElement : PHProjectElement {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSAttributedString *) attributedText;
	-(NSString *) text;
	-(NSInteger) textElementType;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface PHProjectTypeDescription : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSImage *) image;
	-(NSString *) localizedDescription;
	-(NSString *) localizedTitle;
	-(NSString *) projectType;
	-(NSArray *) subtypeDescriptions;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithProjectType:(NSString *)p0 title:(NSString *)p1 description:(NSString *)p2 image:(NSImage *)p3 subtypeDescriptions:(NSArray *)p4;
	-(id) initWithProjectType:(NSString *)p0 title:(NSString *)p1 description:(NSString *)p2 image:(NSImage *)p3;
@end

@interface CNContactPicker : NSObject {
}
	-(void) close;
	-(void) showRelativeToRect:(CGRect)p0 ofView:(NSView *)p1 preferredEdge:(NSUInteger)p2;
	-(id) delegate;
	-(void) setDelegate:(id)p0;
	-(NSArray *) displayedKeys;
	-(void) setDisplayedKeys:(NSArray *)p0;
	-(id) init;
@end

@protocol CNContactPickerDelegate
	@optional -(void) contactPicker:(id)p0 didSelectContact:(CNContact *)p1;
	@optional -(void) contactPicker:(id)p0 didSelectContactProperty:(CNContactProperty *)p1;
	@optional -(void) contactPickerWillClose:(id)p0;
	@optional -(void) contactPickerDidClose:(id)p0;
@end

@interface CNContactViewController : NSViewController {
}
	-(CNContact *) contact;
	-(void) setContact:(CNContact *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface AUAudioUnitViewConfiguration : NSObject {
}
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(CGFloat) height;
	-(BOOL) hostHasController;
	-(CGFloat) width;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithWidth:(CGFloat)p0 height:(CGFloat)p1 hostHasController:(BOOL)p2;
@end

@interface AUViewController : NSViewController {
}
	-(void) beginRequestWithExtensionContext:(NSExtensionContext *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithNibName:(NSString *)p0 bundle:(NSBundle *)p1;
@end

@interface NEAppRule : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) matchDesignatedRequirement;
	-(NSArray *) matchDomains;
	-(void) setMatchDomains:(NSArray *)p0;
	-(NSString *) matchPath;
	-(void) setMatchPath:(NSString *)p0;
	-(NSString *) matchSigningIdentifier;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithSigningIdentifier:(NSString *)p0;
	-(id) initWithSigningIdentifier:(NSString *)p0 designatedRequirement:(NSString *)p1;
@end

@interface NEVPNProtocol : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(BOOL) disconnectOnSleep;
	-(void) setDisconnectOnSleep:(BOOL)p0;
	-(NSData *) identityData;
	-(void) setIdentityData:(NSData *)p0;
	-(NSString *) identityDataPassword;
	-(void) setIdentityDataPassword:(NSString *)p0;
	-(NSData *) identityReference;
	-(void) setIdentityReference:(NSData *)p0;
	-(NSData *) passwordReference;
	-(void) setPasswordReference:(NSData *)p0;
	-(id) proxySettings;
	-(void) setProxySettings:(id)p0;
	-(NSString *) serverAddress;
	-(void) setServerAddress:(NSString *)p0;
	-(NSString *) username;
	-(void) setUsername:(NSString *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEDNSProxyProviderProtocol : NEVPNProtocol {
}
	-(NSString *) providerBundleIdentifier;
	-(void) setProviderBundleIdentifier:(NSString *)p0;
	-(NSDictionary *) providerConfiguration;
	-(void) setProviderConfiguration:(NSDictionary *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEDNSSettings : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) domainName;
	-(void) setDomainName:(NSString *)p0;
	-(NSArray *) matchDomains;
	-(void) setMatchDomains:(NSArray *)p0;
	-(BOOL) matchDomainsNoSearch;
	-(void) setMatchDomainsNoSearch:(BOOL)p0;
	-(NSArray *) searchDomains;
	-(void) setSearchDomains:(NSArray *)p0;
	-(NSArray *) servers;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithServers:(NSArray *)p0;
@end

@interface NEEvaluateConnectionRule : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSInteger) action;
	-(NSArray *) matchDomains;
	-(NSURL *) probeURL;
	-(void) setProbeURL:(NSURL *)p0;
	-(NSArray *) useDNSServers;
	-(void) setUseDNSServers:(NSArray *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithMatchDomains:(NSArray *)p0 andAction:(NSInteger)p1;
@end

@interface NEFilterProviderConfiguration : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(BOOL) filterBrowsers;
	-(void) setFilterBrowsers:(BOOL)p0;
	-(BOOL) filterSockets;
	-(void) setFilterSockets:(BOOL)p0;
	-(NSData *) identityReference;
	-(void) setIdentityReference:(NSData *)p0;
	-(NSString *) organization;
	-(void) setOrganization:(NSString *)p0;
	-(NSData *) passwordReference;
	-(void) setPasswordReference:(NSData *)p0;
	-(NSString *) serverAddress;
	-(void) setServerAddress:(NSString *)p0;
	-(NSString *) username;
	-(void) setUsername:(NSString *)p0;
	-(NSDictionary <NSString *, NSObject *>*) vendorConfiguration;
	-(void) setVendorConfiguration:(NSDictionary <NSString *, NSObject *>*)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEFlowMetaData : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) sourceAppSigningIdentifier;
	-(NSData *) sourceAppUniqueIdentifier;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEIPv4Route : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) destinationAddress;
	-(NSString *) destinationSubnetMask;
	-(NSString *) gatewayAddress;
	-(void) setGatewayAddress:(NSString *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithDestinationAddress:(NSString *)p0 subnetMask:(NSString *)p1;
@end

@interface NEIPv4Settings : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSArray *) addresses;
	-(NSArray *) excludedRoutes;
	-(void) setExcludedRoutes:(NSArray *)p0;
	-(NSArray *) includedRoutes;
	-(void) setIncludedRoutes:(NSArray *)p0;
	-(NSArray *) subnetMasks;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithAddresses:(NSArray *)p0 subnetMasks:(NSArray *)p1;
@end

@interface NEIPv6Route : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) destinationAddress;
	-(NSNumber *) destinationNetworkPrefixLength;
	-(NSString *) gatewayAddress;
	-(void) setGatewayAddress:(NSString *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithDestinationAddress:(NSString *)p0 networkPrefixLength:(NSNumber *)p1;
@end

@interface NEIPv6Settings : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSArray *) addresses;
	-(NSArray *) excludedRoutes;
	-(void) setExcludedRoutes:(NSArray *)p0;
	-(NSArray *) includedRoutes;
	-(void) setIncludedRoutes:(NSArray *)p0;
	-(NSArray *) networkPrefixLengths;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithAddresses:(NSArray *)p0 networkPrefixLengths:(NSArray *)p1;
@end

@interface NEOnDemandRule : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSInteger) action;
	-(NSArray *) DNSSearchDomainMatch;
	-(void) setDNSSearchDomainMatch:(NSArray *)p0;
	-(NSArray *) DNSServerAddressMatch;
	-(void) setDNSServerAddressMatch:(NSArray *)p0;
	-(NSInteger) interfaceTypeMatch;
	-(void) setInterfaceTypeMatch:(NSInteger)p0;
	-(NSURL *) probeURL;
	-(void) setProbeURL:(NSURL *)p0;
	-(NSArray *) SSIDMatch;
	-(void) setSSIDMatch:(NSArray *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEOnDemandRuleConnect : NEOnDemandRule {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEOnDemandRuleDisconnect : NEOnDemandRule {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEOnDemandRuleEvaluateConnection : NEOnDemandRule {
}
	-(NSArray *) connectionRules;
	-(void) setConnectionRules:(NSArray *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEOnDemandRuleIgnore : NEOnDemandRule {
}
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEPacket : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSData *) data;
	-(id) metadata;
	-(unsigned char) protocolFamily;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithData:(NSData *)p0 protocolFamily:(unsigned char)p1;
@end

@interface NEProxyServer : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSString *) address;
	-(BOOL) authenticationRequired;
	-(void) setAuthenticationRequired:(BOOL)p0;
	-(NSString *) password;
	-(void) setPassword:(NSString *)p0;
	-(NSInteger) port;
	-(NSString *) username;
	-(void) setUsername:(NSString *)p0;
	-(id) initWithCoder:(NSCoder *)p0;
	-(id) initWithAddress:(NSString *)p0 port:(NSInteger)p1;
@end

@interface NEProxySettings : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(BOOL) autoProxyConfigurationEnabled;
	-(void) setAutoProxyConfigurationEnabled:(BOOL)p0;
	-(NSArray *) exceptionList;
	-(void) setExceptionList:(NSArray *)p0;
	-(BOOL) excludeSimpleHostnames;
	-(void) setExcludeSimpleHostnames:(BOOL)p0;
	-(BOOL) HTTPEnabled;
	-(void) setHTTPEnabled:(BOOL)p0;
	-(id) HTTPServer;
	-(void) setHTTPServer:(id)p0;
	-(BOOL) HTTPSEnabled;
	-(void) setHTTPSEnabled:(BOOL)p0;
	-(id) HTTPSServer;
	-(void) setHTTPSServer:(id)p0;
	-(NSArray *) matchDomains;
	-(void) setMatchDomains:(NSArray *)p0;
	-(NSString *) proxyAutoConfigurationJavaScript;
	-(void) setProxyAutoConfigurationJavaScript:(NSString *)p0;
	-(NSURL *) proxyAutoConfigurationURL;
	-(void) setProxyAutoConfigurationURL:(NSURL *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NETunnelProviderProtocol : NEVPNProtocol {
}
	-(NSString *) providerBundleIdentifier;
	-(void) setProviderBundleIdentifier:(NSString *)p0;
	-(NSDictionary <NSString *, NSObject *>*) providerConfiguration;
	-(void) setProviderConfiguration:(NSDictionary <NSString *, NSObject *>*)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEVPNConnection : NSObject {
}
	-(BOOL) startVPNTunnelAndReturnError:(NSError **)p0;
	-(BOOL) startVPNTunnelWithOptions:(NSDictionary *)p0 andReturnError:(NSError **)p1;
	-(void) stopVPNTunnel;
	-(NSDate *) connectedDate;
	-(id) manager;
	-(NSInteger) status;
	-(id) init;
@end

@interface NETunnelProviderSession : NEVPNConnection {
}
	-(BOOL) sendProviderMessage:(NSData *)p0 returnError:(NSError **)p1 responseHandler:(id)p2;
	-(BOOL) startTunnelWithOptions:(NSDictionary <NSString *, NSObject *>*)p0 andReturnError:(NSError **)p1;
	-(void) stopTunnel;
	-(id) init;
@end

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(NSInteger) diffieHellmanGroup;
	-(void) setDiffieHellmanGroup:(NSInteger)p0;
	-(NSInteger) encryptionAlgorithm;
	-(void) setEncryptionAlgorithm:(NSInteger)p0;
	-(NSInteger) integrityAlgorithm;
	-(void) setIntegrityAlgorithm:(NSInteger)p0;
	-(int) lifetimeMinutes;
	-(void) setLifetimeMinutes:(int)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEVPNProtocolIPSec : NEVPNProtocol {
}
	-(NSInteger) authenticationMethod;
	-(void) setAuthenticationMethod:(NSInteger)p0;
	-(NSString *) localIdentifier;
	-(void) setLocalIdentifier:(NSString *)p0;
	-(NSString *) remoteIdentifier;
	-(void) setRemoteIdentifier:(NSString *)p0;
	-(NSData *) sharedSecretReference;
	-(void) setSharedSecretReference:(NSData *)p0;
	-(BOOL) useExtendedAuthentication;
	-(void) setUseExtendedAuthentication:(BOOL)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NEVPNProtocolIKEv2 : NEVPNProtocolIPSec {
}
	-(NSInteger) certificateType;
	-(void) setCertificateType:(NSInteger)p0;
	-(id) childSecurityAssociationParameters;
	-(NSInteger) deadPeerDetectionRate;
	-(void) setDeadPeerDetectionRate:(NSInteger)p0;
	-(BOOL) disableMOBIKE;
	-(void) setDisableMOBIKE:(BOOL)p0;
	-(BOOL) disableRedirect;
	-(void) setDisableRedirect:(BOOL)p0;
	-(BOOL) enablePFS;
	-(void) setEnablePFS:(BOOL)p0;
	-(BOOL) enableRevocationCheck;
	-(void) setEnableRevocationCheck:(BOOL)p0;
	-(id) IKESecurityAssociationParameters;
	-(NSInteger) maximumTLSVersion;
	-(void) setMaximumTLSVersion:(NSInteger)p0;
	-(NSInteger) minimumTLSVersion;
	-(void) setMinimumTLSVersion:(NSInteger)p0;
	-(NSString *) serverCertificateCommonName;
	-(void) setServerCertificateCommonName:(NSString *)p0;
	-(NSString *) serverCertificateIssuerCommonName;
	-(void) setServerCertificateIssuerCommonName:(NSString *)p0;
	-(BOOL) strictRevocationCheck;
	-(void) setStrictRevocationCheck:(BOOL)p0;
	-(BOOL) useConfigurationAttributeInternalIPSubnet;
	-(void) setUseConfigurationAttributeInternalIPSubnet:(BOOL)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NWEndpoint : NSObject {
}
	-(NSObject *) copyWithZone:(id)p0;
	-(void) encodeWithCoder:(NSCoder *)p0;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NWBonjourServiceEndpoint : NWEndpoint {
}
	-(NSString *) domain;
	-(NSString *) name;
	-(NSString *) type;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NWHostEndpoint : NWEndpoint {
}
	-(NSString *) hostname;
	-(NSString *) port;
	-(id) init;
	-(id) initWithCoder:(NSCoder *)p0;
@end

@interface NWPath : NSObject {
}
	-(BOOL) isEqualToPath:(id)p0;
	-(BOOL) isExpensive;
	-(NSInteger) status;
	-(id) init;
@end

@protocol NWTCPConnectionAuthenticationDelegate
	@optional -(BOOL) shouldProvideIdentityForConnection:(id)p0;
	@optional -(void) provideIdentityForConnection:(id)p0 completionHandler:(id)p1;
	@optional -(BOOL) shouldEvaluateTrustForConnection:(id)p0;
	@optional -(void) evaluateTrustForConnection:(id)p0 peerCertificateChain:(NSArray *)p1 completionHandler:(id)p2;
@end

@interface NWTLSParameters : NSObject {
}
	-(NSUInteger) maximumSSLProtocolVersion;
	-(void) setMaximumSSLProtocolVersion:(NSUInteger)p0;
	-(NSUInteger) minimumSSLProtocolVersion;
	-(void) setMinimumSSLProtocolVersion:(NSUInteger)p0;
	-(NSSet <NSNumber *>*) SSLCipherSuites;
	-(void) setSSLCipherSuites:(NSSet <NSNumber *>*)p0;
	-(NSData *) TLSSessionID;
	-(void) setTLSSessionID:(NSData *)p0;
	-(id) init;
@end

@interface __NSGestureRecognizerToken : NSObject {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface NEProvider : NSObject {
}
	-(id) createTCPConnectionToEndpoint:(id)p0 enableTLS:(BOOL)p1 TLSParameters:(id)p2 delegate:(NSObject *)p3;
	-(id) createUDPSessionToEndpoint:(id)p0 fromEndpoint:(id)p1;
	-(void) displayMessage:(NSString *)p0 completionHandler:(id)p1;
	-(void) sleepWithCompletionHandler:(id)p0;
	-(void) wake;
	-(id) defaultPath;
@end

@interface NETunnelProvider : NEProvider {
}
	-(void) handleAppMessage:(NSData *)p0 completionHandler:(id)p1;
	-(void) setTunnelNetworkSettings:(id)p0 completionHandler:(id)p1;
	-(NSArray *) appRules;
	-(id) protocolConfiguration;
	-(BOOL) reasserting;
	-(void) setReasserting:(BOOL)p0;
	-(NSInteger) routingMethod;
@end

@interface NEPacketTunnelProvider : NETunnelProvider {
}
	-(void) cancelTunnelWithError:(NSError *)p0;
	-(id) createTCPConnectionThroughTunnelToEndpoint:(id)p0 enableTLS:(BOOL)p1 TLSParameters:(id)p2 delegate:(id)p3;
	-(id) createUDPSessionThroughTunnelToEndpoint:(id)p0 fromEndpoint:(id)p1;
	-(void) startTunnelWithOptions:(NSDictionary <NSString *, NSObject *>*)p0 completionHandler:(id)p1;
	-(void) stopTunnelWithReason:(NSInteger)p0 completionHandler:(id)p1;
	-(id) packetFlow;
	-(id) init;
@end

@interface NEVPNManager : NSObject {
}
	-(void) loadFromPreferencesWithCompletionHandler:(id)p0;
	-(void) removeFromPreferencesWithCompletionHandler:(id)p0;
	-(void) saveToPreferencesWithCompletionHandler:(id)p0;
	-(void) setAuthorization:(void *)p0;
	-(id) connection;
	-(BOOL) isEnabled;
	-(void) setEnabled:(BOOL)p0;
	-(NSString *) localizedDescription;
	-(void) setLocalizedDescription:(NSString *)p0;
	-(BOOL) isOnDemandEnabled;
	-(void) setOnDemandEnabled:(BOOL)p0;
	-(NSArray *) onDemandRules;
	-(void) setOnDemandRules:(NSArray *)p0;
	-(id) protocol;
	-(void) setProtocol:(id)p0;
	-(id) protocolConfiguration;
	-(void) setProtocolConfiguration:(id)p0;
@end

@interface __NSGestureRecognizerParameterlessToken : __NSGestureRecognizerToken {
}
	-(void) target;
@end

@interface __NSGestureRecognizerParametrizedToken : __NSGestureRecognizerToken {
}
	-(void) target:(NSGestureRecognizer *)p0;
@end

@interface PHLivePhotoEditingContext : NSObject {
}
	-(void) cancel;
	-(void) prepareLivePhotoForPlaybackWithTargetSize:(CGSize)p0 options:(NSDictionary *)p1 completionHandler:(id)p2;
	-(void) saveLivePhotoToOutput:(id)p0 options:(NSDictionary *)p1 completionHandler:(id)p2;
	-(float) audioVolume;
	-(void) setAudioVolume:(float)p0;
	-(CMTime) duration;
	-(id) frameProcessor;
	-(void) setFrameProcessor:(id)p0;
	-(CIImage *) fullSizeImage;
	-(int) orientation;
	-(CMTime) photoTime;
	-(id) initWithLivePhotoEditingInput:(id)p0;
@end

@interface EAAccessory : NSObject {
}
	-(BOOL) isConnected;
	-(NSUInteger) connectionID;
	-(NSString *) dockType;
	-(NSString *) firmwareRevision;
	-(NSString *) hardwareRevision;
	-(NSString *) manufacturer;
	-(NSString *) modelNumber;
	-(NSString *) name;
	-(NSArray *) protocolStrings;
	-(NSString *) serialNumber;
	-(NSObject *) delegate;
	-(void) setDelegate:(NSObject *)p0;
@end

@interface EAAccessoryManager : NSObject {
}
	-(void) registerForLocalNotifications;
	-(void) unregisterForLocalNotifications;
	-(NSArray *) connectedAccessories;
@end

@interface PHPhotoLibrary : NSObject {
}
	-(void) performChanges:(id)p0 completionHandler:(id)p1;
	-(BOOL) performChangesAndWait:(id)p0 error:(NSError **)p1;
	-(void) registerChangeObserver:(id)p0;
	-(void) unregisterChangeObserver:(id)p0;
@end

@interface NEAppProxyFlow : NSObject {
}
	-(void) closeReadWithError:(NSError *)p0;
	-(void) closeWriteWithError:(NSError *)p0;
	-(void) openWithLocalEndpoint:(id)p0 completionHandler:(id)p1;
	-(id) metaData;
@end

@interface NEAppProxyProvider : NETunnelProvider {
}
	-(void) cancelProxyWithError:(NSError *)p0;
	-(BOOL) handleNewFlow:(id)p0;
	-(void) startProxyWithOptions:(NSDictionary <NSString *, NSObject *>*)p0 completionHandler:(id)p1;
	-(void) stopProxyWithReason:(NSInteger)p0 completionHandler:(id)p1;
@end

@interface NETunnelProviderManager : NEVPNManager {
}
	-(NSArray *) copyAppRules;
	-(NSInteger) routingMethod;
	-(id) init;
@end

@interface NEAppProxyProviderManager : NETunnelProviderManager {
}
@end

@interface NEAppProxyTCPFlow : NEAppProxyFlow {
}
	-(void) readDataWithCompletionHandler:(id)p0;
	-(void) writeData:(NSData *)p0 withCompletionHandler:(id)p1;
	-(id) remoteEndpoint;
@end

@interface NEAppProxyUDPFlow : NEAppProxyFlow {
}
	-(void) readDatagramsWithCompletionHandler:(id)p0;
	-(void) writeDatagrams:(NSArray *)p0 sentByEndpoints:(NSArray *)p1 completionHandler:(id)p2;
	-(id) localEndpoint;
@end

@interface NEFilterManager : NSObject {
}
	-(void) loadFromPreferencesWithCompletionHandler:(id)p0;
	-(void) removeFromPreferencesWithCompletionHandler:(id)p0;
	-(void) saveToPreferencesWithCompletionHandler:(id)p0;
	-(BOOL) isEnabled;
	-(void) setEnabled:(BOOL)p0;
	-(NSString *) localizedDescription;
	-(void) setLocalizedDescription:(NSString *)p0;
	-(id) providerConfiguration;
	-(void) setProviderConfiguration:(id)p0;
@end

@interface NEFilterProvider : NEProvider {
}
	-(void) startFilterWithCompletionHandler:(id)p0;
	-(void) stopFilterWithReason:(NSInteger)p0 completionHandler:(id)p1;
	-(id) filterConfiguration;
	-(id) init;
@end

@interface NEPacketTunnelFlow : NSObject {
}
	-(void) readPacketObjectsWithCompletionHandler:(id)p0;
	-(void) readPacketsWithCompletionHandler:(id)p0;
	-(BOOL) writePacketObjects:(NSArray *)p0;
	-(BOOL) writePackets:(NSArray *)p0 withProtocols:(NSArray *)p1;
	-(id) init;
@end

@interface NWTCPConnection : NSObject {
}
	-(void) cancel;
	-(void) readLength:(NSUInteger)p0 completionHandler:(id)p1;
	-(void) readMinimumLength:(NSUInteger)p0 maximumLength:(NSUInteger)p1 completionHandler:(id)p2;
	-(void) write:(NSData *)p0 completionHandler:(id)p1;
	-(void) writeClose;
	-(id) connectedPath;
	-(id) endpoint;
	-(NSError *) error;
	-(BOOL) hasBetterPath;
	-(id) localAddress;
	-(id) remoteAddress;
	-(NSInteger) state;
	-(NSData *) txtRecord;
	-(BOOL) isViable;
	-(id) init;
	-(id) initWithUpgradeForConnection:(id)p0;
@end

@interface NWUDPSession : NSObject {
}
	-(void) cancel;
	-(void) setReadHandler:(id)p0 maxDatagrams:(NSUInteger)p1;
	-(void) tryNextResolvedEndpoint;
	-(void) writeDatagram:(NSData *)p0 completionHandler:(id)p1;
	-(void) writeMultipleDatagrams:(NSArray *)p0 completionHandler:(id)p1;
	-(id) currentPath;
	-(id) endpoint;
	-(BOOL) hasBetterPath;
	-(NSUInteger) maximumDatagramLength;
	-(id) resolvedEndpoint;
	-(NSInteger) state;
	-(BOOL) isViable;
	-(id) init;
	-(id) initWithUpgradeForSession:(id)p0;
@end

@interface Xwt_Gtk_Mac_GtkMacSaveFileDialogBackend : NSSavePanel {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Gtk_Mac_GtkMacOpenFileDialogBackend : NSOpenPanel {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Gtk_Mac_GtkMacSelectFolderBackend : NSOpenPanel {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_WidgetView : NSView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) isFlipped;
	-(BOOL) acceptsFirstResponder;
	-(void) drawRect:(CGRect)p0;
	-(void) updateTrackingAreas;
	-(void) rightMouseDown:(NSEvent *)p0;
	-(void) rightMouseUp:(NSEvent *)p0;
	-(void) mouseDown:(NSEvent *)p0;
	-(void) mouseUp:(NSEvent *)p0;
	-(void) mouseEntered:(NSEvent *)p0;
	-(void) mouseExited:(NSEvent *)p0;
	-(void) mouseMoved:(NSEvent *)p0;
	-(void) mouseDragged:(NSEvent *)p0;
	-(void) keyDown:(NSEvent *)p0;
	-(void) keyUp:(NSEvent *)p0;
	-(void) setFrameSize:(CGSize)p0;
	-(void) resetCursorRects;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Xwt_Mac_AppDelegate : NSObject<NSApplicationDelegate> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) applicationDidFinishLaunching:(NSNotification *)p0;
	-(void) applicationWillFinishLaunching:(NSNotification *)p0;
	-(void) handleGetURLEvent:(NSAppleEventDescriptor *)p0 withReplyEvent:(NSAppleEventDescriptor *)p1;
	-(void) applicationDidChangeScreenParameters:(NSNotification *)p0;
	-(NSUInteger) applicationShouldTerminate:(NSApplication *)p0;
	-(void) applicationDidUnhide:(NSNotification *)p0;
	-(void) application:(NSApplication *)p0 openFiles:(NSArray *)p1;
	-(NSMenu *) applicationDockMenu:(NSApplication *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Xwt_Mac_WindowBackendController : NSWindowController {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_MenuBackend : NSMenu {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_ProgressIndicatorView : NSProgressIndicator {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) resetCursorRects;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_CollapsibleBox : NSBox {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) isFlipped;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_FileDialogBackend : NSOpenPanel {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_OpenFileDialogBackend : Xwt_Mac_FileDialogBackend {
}
	-(id) init;
@end

@interface Xwt_Mac_MacSlider : NSSlider {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) resetCursorRects;
	-(BOOL) allowsVibrancy;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_MacSliderCell : NSSliderCell {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(double) maxValue;
	-(void) setMaxValue:(double)p0;
	-(double) minValue;
	-(void) setMinValue:(double)p0;
	-(BOOL) allowsTickMarkValuesOnly;
	-(void) setAllowsTickMarkValuesOnly:(BOOL)p0;
	-(double) tickMarkValueAtIndex:(NSInteger)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) copyWithZone: (NSZone *)zone;
	-(id) init;
@end

@interface Xwt_Mac_SaveFileDialogBackend : NSSavePanel {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_CustomImage : NSImage {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(void) drawIt:(NSObject *)p0;
	-(NSObject *) copyWithZone:(id)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Xwt_Mac_MacSpinButton : Xwt_Mac_WidgetView {
}
	-(void) resizeSubviewsWithOldSize:(CGSize)p0;
	-(void) scrollWheel:(NSEvent *)p0;
@end

@interface Xwt_Mac_PopoverBackend_NSAppearanceCustomizationPopover : NSPopover<NSAppearanceCustomization> {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end

@interface Xwt_Mac_SelectFolderDialogBackend : Xwt_Mac_FileDialogBackend {
}
	-(id) init;
@end

@interface Xwt_Mac_NSTableViewBackend : NSTableView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSObject *) dataSource;
	-(void) setDataSource:(NSObject *)p0;
	-(void) addTableColumn:(NSTableColumn *)p0;
	-(void) reloadData;
	-(void) reloadDataForRowIndexes:(NSIndexSet *)p0 columnIndexes:(NSIndexSet *)p1;
	-(void) updateTrackingAreas;
	-(void) rightMouseDown:(NSEvent *)p0;
	-(void) rightMouseUp:(NSEvent *)p0;
	-(void) mouseDown:(NSEvent *)p0;
	-(void) mouseUp:(NSEvent *)p0;
	-(void) mouseEntered:(NSEvent *)p0;
	-(void) mouseExited:(NSEvent *)p0;
	-(void) mouseMoved:(NSEvent *)p0;
	-(void) mouseDragged:(NSEvent *)p0;
	-(void) keyDown:(NSEvent *)p0;
	-(void) keyUp:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Xwt_Mac_OutlineViewBackend : NSOutlineView {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(NSObject *) dataSource;
	-(void) setDataSource:(NSObject *)p0;
	-(void) addTableColumn:(NSTableColumn *)p0;
	-(void) expandItem:(NSObject *)p0;
	-(void) expandItem:(NSObject *)p0 expandChildren:(BOOL)p1;
	-(void) collapseItem:(NSObject *)p0;
	-(void) collapseItem:(NSObject *)p0 collapseChildren:(BOOL)p1;
	-(void) reloadData;
	-(void) reloadDataForRowIndexes:(NSIndexSet *)p0 columnIndexes:(NSIndexSet *)p1;
	-(void) reloadItem:(NSObject *)p0;
	-(void) reloadItem:(NSObject *)p0 reloadChildren:(BOOL)p1;
	-(void) updateTrackingAreas;
	-(void) rightMouseDown:(NSEvent *)p0;
	-(void) rightMouseUp:(NSEvent *)p0;
	-(void) mouseDown:(NSEvent *)p0;
	-(void) mouseUp:(NSEvent *)p0;
	-(void) mouseEntered:(NSEvent *)p0;
	-(void) mouseExited:(NSEvent *)p0;
	-(void) mouseMoved:(NSEvent *)p0;
	-(void) mouseDragged:(NSEvent *)p0;
	-(BOOL) conformsToProtocol:(void *)p0;
@end

@interface Xwt_Mac_PopupWindowBackend : NSPanel {
}
	-(void) release;
	-(id) retain;
	-(int) xamarinGetGCHandle;
	-(void) xamarinSetGCHandle: (int) gchandle;
	-(BOOL) canBecomeKeyWindow;
	-(void) mouseExited:(NSEvent *)p0;
	-(void) observeValueForKeyPath:(NSString *)p0 ofObject:(NSObject *)p1 change:(NSDictionary *)p2 context:(void *)p3;
	-(BOOL) conformsToProtocol:(void *)p0;
	-(id) init;
@end


