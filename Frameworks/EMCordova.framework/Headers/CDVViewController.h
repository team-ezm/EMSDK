/*
 Licensed to the Apache Software Foundation (ASF) under one
 or more contributor license agreements.  See the NOTICE file
 distributed with this work for additional information
 regarding copyright ownership.  The ASF licenses this file
 to you under the Apache License, Version 2.0 (the
 "License"); you may not use this file except in compliance
 with the License.  You may obtain a copy of the License at

 http://www.apache.org/licenses/LICENSE-2.0

 Unless required by applicable law or agreed to in writing,
 software distributed under the License is distributed on an
 "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 KIND, either express or implied.  See the License for the
 specific language governing permissions and limitations
 under the License.
 */

#import <UIKit/UIKit.h>
#import "CDVScreenOrientationDelegate.h"

@protocol CDVWebViewEngineProtocol;
@protocol CDVCommandDelegate;

@class CDVCommandQueue;
@class CDVPlugin;

typedef NS_ENUM(NSUInteger, MainViewControllerOriginType) {
    MainViewControllerOriginTypeNone,
    MainViewControllerOriginTypeMini, // From mini
    MainViewControllerOriginTypeMap,  // From map
};


@interface CDVViewController : UIViewController <CDVScreenOrientationDelegate>

@property (nonatomic, readonly, strong) CDVCommandQueue* commandQueue;
@property (nonatomic, readonly, strong) id <CDVCommandDelegate> commandDelegate;

@property (nonatomic, readonly, strong) id <CDVWebViewEngineProtocol> webViewEngine;
@property (nonatomic, readonly, weak) IBOutlet UIView* webView;


@property (nonatomic, readonly, strong) NSMutableDictionary* pluginObjects;
@property (nonatomic, readonly, strong) NSDictionary* pluginsMap;
@property (nonatomic, readonly, strong) NSMutableDictionary* settings;
@property (nonatomic, readonly, strong) NSMutableArray* startupPluginNames;


@property (nonatomic, readwrite, copy) NSString* configFile;
@property (nonatomic, readwrite, copy) NSString* wwwFolderName;
@property (nonatomic, readwrite, copy) NSString* startPage;
@property (nonatomic, readwrite, strong) NSDictionary *launchOptions;

@property (nonatomic, assign) MainViewControllerOriginType type;
@property (nonatomic, strong) NSDictionary *miniInfo;

/**
	Takes/Gives an array of UIInterfaceOrientation (int) objects
	ex. UIInterfaceOrientationPortrait
*/
@property (nonatomic, readwrite, strong) NSArray* supportedOrientations;

- (void)loadSettings;

- (NSString*)appURLScheme;
- (NSURL*)errorURL;

- (UIColor*)colorFromColorString:(NSString*)colorString;
- (NSArray*)parseInterfaceOrientations:(NSArray*)orientations;
- (BOOL)supportsOrientation:(UIInterfaceOrientation)orientation;

- (id)getCommandInstance:(NSString*)pluginName;
- (void)parseSettingsWithParser:(NSObject <NSXMLParserDelegate>*)delegate;

- (NSURL*)appUrl;

/// 获取配置到config.xml里key的值
/// @param key key
- (id)settingForKey:(NSString *)key;
- (BOOL)isDebug;
@end
