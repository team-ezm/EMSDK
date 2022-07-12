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
#import <UserNotifications/UserNotifications.h>

@protocol CDVWebViewEngineProtocol;
@protocol CDVCommandDelegate;

/** WKWebView开始加载页面时的通知，每一次触发 [ webView: didStartProvisionalNavigation: ]时 */
UIKIT_EXTERN NSString* const CDVPluginResetNotification;
/** WKWebView加载完页面时的通知，每一次触发[ webView:didFinishNavigation: ] 时 */
UIKIT_EXTERN NSString* const CDVPageDidLoadNotification;

/** delegate回调方法[ application openURL: sourceApplication: annotation: ]被触发时的通知 */
UIKIT_EXTERN NSString* const CDVPluginHandleOpenURLNotification;
UIKIT_EXTERN NSString* const CDVPluginHandleOpenURLWithAppSourceAndAnnotationNotification;


UIKIT_EXTERN NSString* const CDVViewWillAppearNotification;
UIKIT_EXTERN NSString* const CDVViewDidAppearNotification;
UIKIT_EXTERN NSString* const CDVViewWillDisappearNotification;
UIKIT_EXTERN NSString* const CDVViewDidDisappearNotification;
UIKIT_EXTERN NSString* const CDVViewWillLayoutSubviewsNotification;
UIKIT_EXTERN NSString* const CDVViewDidLayoutSubviewsNotification;
UIKIT_EXTERN NSString* const CDVViewWillTransitionToSizeNotification;

UIKIT_EXTERN NSString* const CDVConsoleLogNotification;


@interface CDVPlugin : NSObject

@property (nonatomic, readonly, weak) UIView* webView;
@property (nonatomic, readonly, weak) id <CDVWebViewEngineProtocol> webViewEngine;

@property (nonatomic, weak) UIViewController* viewController;
@property (nonatomic, weak) id <CDVCommandDelegate> commandDelegate;

@property (readonly, assign) BOOL hasPendingOperation;


- (void)pluginInitialize;
- (void)dispose;


- (void)handleOpenURL:(NSNotification*)notification;
- (void)handleOpenURLWithApplicationSourceAndAnnotation:(NSNotification*)notification;

/** UIApplicationWillTerminateNotification */
- (void)onAppTerminate;
/** UIApplicationDidReceiveMemoryWarningNotification */
- (void)onMemoryWarning;
/** UIApplicationDidEnterBackgroundNotification */
- (void)onBackground;
/** UIApplicationDidBecomeActiveNotification */
- (void)onActive;
/** UIApplicationWillEnterForegroundNotification */
- (void)willBackground;
/** UIApplicationWillResignActiveNotification */
- (void)willResignActive;
/** webView:didStartProvisionalNavigation: */
- (void)onReset;


- (id)appDelegate;
- (NSDictionary *)launchOptions;
/** 插件Framework后通过此方法获取config.xml中的值 */
- (id)settingForKey:(NSString *)key;
/** 插件Framework后通过此方法判断当前运行环境 */
- (BOOL)isDebug;
/** 判断当前执行环境是否是小应用 */
- (BOOL)isMiniApp;

- (void)didRegisterForRemoteNotificationsWithDeviceToken:(NSData *)deviceToken;
- (void)didFailToRegisterForRemoteNotificationsWithError:(NSError *)error;
- (void)applicationContinueUserActivity:(NSUserActivity *)userActivity;

- (void)didReceiveRemoteNotification:(NSDictionary *)userInfo
fetchCompletionHandler:(void (^)(UIBackgroundFetchResult result))completionHandler;
- (void)didReceiveRemoteNotification:(NSDictionary *)userInfo;

- (void)didRegisterUserNotificationSettings:(UIUserNotificationSettings *)notificationSettings;
- (void)didReceiveLocalNotification:(UILocalNotification *)notification;

@end
