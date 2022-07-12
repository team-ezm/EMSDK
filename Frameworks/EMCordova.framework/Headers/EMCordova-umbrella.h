#ifdef __OBJC__
#import <UIKit/UIKit.h>
#else
#ifndef FOUNDATION_EXPORT
#if defined(__cplusplus)
#define FOUNDATION_EXPORT extern "C"
#else
#define FOUNDATION_EXPORT extern
#endif
#endif
#endif

#import "CDV.h"
#import "CDVAppDelegate.h"
#import "CDVAvailability.h"
#import "CDVAvailabilityDeprecated.h"
#import "CDVCommandDelegate.h"
#import "CDVCommandDelegateImpl.h"
#import "CDVCommandQueue.h"
#import "CDVConst.h"
#import "CDVInvokedUrlCommand.h"
#import "CDVMacros.h"
#import "CDVPlugin.h"
#import "CDVPluginResult.h"
#import "CDVScreenOrientationDelegate.h"
#import "CDVTimer.h"
#import "CDVViewController.h"
#import "CDVWebViewEngineProtocol.h"
#import "EMCordova.h"

FOUNDATION_EXPORT double EMCordovaVersionNumber;
FOUNDATION_EXPORT const unsigned char EMCordovaVersionString[];

