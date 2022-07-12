//
//  EMSDKCore.h
//  EMSDK
//
//  Created by xuchang on 2021/7/30.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EMSDKCore : NSObject

/// 初始化SDK
/// @param key 初始化的KEY
+ (BOOL)initWithKey:(NSString *)key;

/// 打开小程序
/// @param startURL 小程序首页地址
/// @param fullscreen 是否全屏
/// @param viewController 控制器
+ (void)showWithStartURL:(NSURL *)startURL
              fullscreen:(BOOL)fullscreen
          viewController:(UIViewController *)viewController;

/// 打开小程序，带有系统导航栏（不适配暗黑模式）
/// @param startURL 小程序首页地址
/// @param toolbarTitle 导航栏标题
/// @param toolbarBackColor 导航栏背景颜色
/// @param toolbarTitleColor 导航栏标题颜色
/// @param isShowBackBtn 是否显示返回按钮
/// @param isHideToolBar 是否隐藏导航栏
/// @param isHideFunctionButton 是否隐藏右侧更多按钮
/// @param isHideButtonLine 是否隐藏导航栏线的分割线
/// @param viewController 控制器
+ (void)showWithStartURL:(NSURL *)startURL
            toolbarTitle:(NSString *)toolbarTitle
        toolbarBackColor:(NSString *)toolbarBackColor
       toolbarTitleColor:(NSString *)toolbarTitleColor
           isShowBackBtn:(BOOL)isShowBackBtn
           isHideToolBar:(BOOL)isHideToolBar
    isHideFunctionButton:(BOOL)isHideFunctionButton
        isHideButtonLine:(BOOL)isHideButtonLine
          viewController:(UIViewController *)viewController;


/// 打开小程序，带有系统导航栏（适配暗黑模式）
/// @param startURL 小程序首页地址
/// @param toolbarTitle 导航栏标题
/// @param toolbarBackColor 导航栏背景颜色(浅色模式)
/// @param toolbarDarkBackColor 导航栏背景颜色(深色模式)
/// @param toolbarTitleColor 导航栏标题颜色(浅色模式)
/// @param toolbarTitleDarkColor 导航栏标题颜色(深色模式)
/// @param isShowBackBtn 是否显示返回按钮
/// @param isHideToolBar 是否隐藏导航栏
/// @param isHideFunctionButton 是否隐藏右侧更多按钮
/// @param isHideButtonLine 是否隐藏导航栏线的分割线
/// @param viewController 控制器
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
          viewController:(UIViewController *)viewController;



/// 获取SDK下绑定的小程序列表
/// @param page 获取列表第几页数据
/// @param size 每页的数据长度
/// @param success 成功回调
/// @param failure 失败回调
+ (void)getBindAppletListWithPage:(NSInteger)page
                             size:(NSInteger)size
                          success:(nullable void (^)(NSArray * _Nullable))success
                          failure:(nullable void (^)(NSString * _Nonnull))failure;


/// 打开小程序
/// @param uniqueCode 小程序唯一标识
/// @param viewController 控制器
+ (void)openAppletWithId:(NSString *)uniqueCode
          viewController:(UIViewController *)viewController;

/// 打开小程序
/// @param uniqueCode 小程序唯一标识
/// @param toolbarTitle 导航栏标题
/// @param toolbarBackColor 导航栏背景颜色
/// @param toolbarTitleColor 导航栏标题颜色
/// @param isShowBackBtn 是否显示返回按钮
/// @param isHideToolBar 是否隐藏导航栏
/// @param isHideFunctionButton 是否隐藏右侧更多按钮
/// @param isHideButtonLine 是否隐藏导航栏线的分割线
/// @param viewController 控制器
+ (void)openAppletWithId:(NSString *)uniqueCode
            toolbarTitle:(NSString *)toolbarTitle
        toolbarBackColor:(NSString *)toolbarBackColor
       toolbarTitleColor:(NSString *)toolbarTitleColor
           isShowBackBtn:(BOOL)isShowBackBtn
           isHideToolBar:(BOOL)isHideToolBar
    isHideFunctionButton:(BOOL)isHideFunctionButton
        isHideButtonLine:(BOOL)isHideButtonLine
          viewController:(UIViewController *)viewController;



/// 打开小程序，带有系统导航栏（适配暗黑模式）
/// @param uniqueCode 小程序唯一标识
/// @param toolbarTitle 导航栏标题
/// @param toolbarBackColor 导航栏背景颜色(浅色模式)
/// @param toolbarDarkBackColor 导航栏背景颜色(深色模式)
/// @param toolbarTitleColor 导航栏标题颜色(浅色模式)
/// @param toolbarTitleDarkColor 导航栏标题颜色(深色模式)
/// @param isShowBackBtn 是否显示返回按钮
/// @param isHideToolBar 是否隐藏导航栏
/// @param isHideFunctionButton 是否隐藏右侧更多按钮
/// @param isHideButtonLine 是否隐藏导航栏线的分割线
/// @param viewController 控制器
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
          viewController:(UIViewController *)viewController;

@end

NS_ASSUME_NONNULL_END
