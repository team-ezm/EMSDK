//  Cordova
//
//  Created by X on 2019/12/13.
//  Copyright © 2019 it. All rights reserved.
//

#import <Foundation/Foundation.h>

#if __has_include(<EMCordova/CDV.h>)
#import <EMCordova/CDVPlugin.h>
#import <EMCordova/CDVAppDelegate.h>
#import <EMCordova/CDVPluginResult.h>
#import <EMCordova/CDVViewController.h>
#import <EMCordova/CDVCommandDelegate.h>
#import <EMCordova/CDVInvokedUrlCommand.h>
#import <EMCordova/CDVCommandDelegateImpl.h>
#import <EMCordova/CDVWebViewEngineProtocol.h>
#import <EMCordova/CDVScreenOrientationDelegate.h>
#import <EMCordova/CDVMacros.h>
#import <EMCordova/CDVConst.h>
#import <EMCordova/CDVCommandQueue.h>
#else
#import "CDVPlugin.h"
#import "CDVAppDelegate.h"
#import "CDVPluginResult.h"
#import "CDVViewController.h"
#import "CDVCommandDelegate.h"
#import "CDVInvokedUrlCommand.h"
#import "CDVCommandDelegateImpl.h"
#import "CDVWebViewEngineProtocol.h"
#import "CDVScreenOrientationDelegate.h"
#import "CDVMacros.h"
#import "CDVConst.h"
#import "CDVCommandQueue.h"
#endif

