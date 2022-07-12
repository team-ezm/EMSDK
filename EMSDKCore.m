//
//  EMSDKCore.m
//  EMSDK
//
//  Created by xuchang on 2021/7/30.
//

#import "EMSDKCore.h"
#import <EMCenterModule/EMSDKEngine.h>

@implementation EMSDKCore

+ (BOOL)initWithKey:(NSString *)key{
    
#if EMBETA
    [EMSDKEngine environment:YES];
#else
    [EMSDKEngine environment:NO];
#endif
    
    return [EMSDKEngine initWithKey:key];
}

+ (void)showWithStartURL:(NSURL *)startURL
              fullscreen:(BOOL)fullscreen
          viewController:(UIViewController *)viewController{
    [EMSDKEngine showWithStartURL:startURL fullscreen:fullscreen viewController:viewController];
}


+ (void)showWithStartURL:(NSURL *)startURL
            toolbarTitle:(NSString *)toolbarTitle
        toolbarBackColor:(NSString *)toolbarBackColor
       toolbarTitleColor:(NSString *)toolbarTitleColor
           isShowBackBtn:(BOOL)isShowBackBtn
           isHideToolBar:(BOOL)isHideToolBar
    isHideFunctionButton:(BOOL)isHideFunctionButton
        isHideButtonLine:(BOOL)isHideButtonLine
          viewController:(UIViewController *)viewController{
    [EMSDKEngine showWithStartURL:startURL toolbarTitle:toolbarTitle toolbarBackColor:toolbarBackColor toolbarTitleColor:toolbarTitleColor isShowBackBtn:isShowBackBtn isHideToolBar:isHideToolBar isHideFunctionButton:isHideFunctionButton isHideButtonLine:isHideButtonLine viewController:viewController];
}

+ (void)showWithStartURL:(NSURL *)startURL
            toolbarTitle:(NSString *)toolbarTitle
        toolbarBackColor:(NSString *)toolbarBackColor
        toolbarDarkBackColor:(NSString *)toolbarDarkBackColor
       toolbarTitleColor:(NSString *)toolbarTitleColor
       toolbarTitleDarkColor:(NSString *)toolbarTitleDarkColor
           isShowBackBtn:(BOOL)isShowBackBtn
           isHideToolBar:(BOOL)isHideToolBar
    isHideFunctionButton:(BOOL)isHideFunctionButton
        isHideButtonLine:(BOOL)isHideButtonLine
          viewController:(UIViewController *)viewController{
    [EMSDKEngine showWithStartURL:startURL toolbarTitle:toolbarTitle toolbarBackColor:toolbarBackColor toolbarTitleColor:toolbarTitleColor isShowBackBtn:isShowBackBtn isHideToolBar:isHideToolBar isHideFunctionButton:isHideFunctionButton isHideButtonLine:isHideButtonLine viewController:viewController];
}

+ (void)getBindAppletListWithPage:(NSInteger)page size:(NSInteger)size success:(nullable void (^)(NSArray * _Nullable))success failure:(nullable void (^)(NSString * _Nonnull))failure{
    [EMSDKEngine getBindAppletListWithPage:page size:size success:success failure:failure];
}


+ (void)openAppletWithId:(NSString *)uniqueCode viewController:(UIViewController *)viewController{
    [EMSDKEngine openAppletWithId:uniqueCode viewController:viewController];
}

+ (void)openAppletWithId:(NSString *)uniqueCode
            toolbarTitle:(NSString *)toolbarTitle
        toolbarBackColor:(NSString *)toolbarBackColor
       toolbarTitleColor:(NSString *)toolbarTitleColor
           isShowBackBtn:(BOOL)isShowBackBtn
           isHideToolBar:(BOOL)isHideToolBar
    isHideFunctionButton:(BOOL)isHideFunctionButton
        isHideButtonLine:(BOOL)isHideButtonLine
          viewController:(UIViewController *)viewController{
    [EMSDKEngine openAppletWithId:uniqueCode toolbarTitle:toolbarTitle toolbarBackColor:toolbarBackColor toolbarTitleColor:toolbarTitleColor isShowBackBtn:isShowBackBtn isHideToolBar:isHideToolBar isHideFunctionButton:isHideFunctionButton isHideButtonLine:isHideButtonLine viewController:viewController];
}


+ (void)openAppletWithId:(NSString *)uniqueCode
            toolbarTitle:(NSString *)toolbarTitle
        toolbarBackColor:(NSString *)toolbarBackColor
        toolbarDarkBackColor:(NSString *)toolbarDarkBackColor
       toolbarTitleColor:(NSString *)toolbarTitleColor
       toolbarTitleDarkColor:(NSString *)toolbarTitleDarkColor
           isShowBackBtn:(BOOL)isShowBackBtn
           isHideToolBar:(BOOL)isHideToolBar
    isHideFunctionButton:(BOOL)isHideFunctionButton
        isHideButtonLine:(BOOL)isHideButtonLine
          viewController:(UIViewController *)viewController{
    [EMSDKEngine openAppletWithId:uniqueCode toolbarTitle:toolbarTitle toolbarBackColor:toolbarBackColor toolbarDarkBackColor:toolbarDarkBackColor toolbarTitleColor:toolbarTitleColor toolbarTitleDarkColor:toolbarTitleDarkColor isShowBackBtn:isShowBackBtn isHideToolBar:isHideToolBar isHideFunctionButton:isHideFunctionButton isHideButtonLine:isHideButtonLine viewController:viewController];
}
@end
