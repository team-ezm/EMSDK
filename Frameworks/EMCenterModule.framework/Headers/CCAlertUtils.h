//
//  CCAlertUtils.h
//  ColdChain
//
//  Created by X on 2017/10/10.
//  Copyright © 2017年 supconit. All rights reserved.
//

#import <Foundation/Foundation.h>


@interface CCAlertUtils : NSObject

+ (void)tipMessage:(NSString *)msg;
+ (void)tipMessage:(NSString *)msg delay:(CGFloat)seconds;
+ (void)tipMessage:(NSString *)msg delay:(CGFloat)seconds completion:(void (^)(void))completion;

+ (void)alert:(NSString *)msg;
+ (void)alert:(NSString *)msg action:(void(^)(void))action;
+ (void)alert:(NSString *)msg cancel:(NSString *)cancel;
+ (void)alert:(NSString *)msg cancel:(NSString *)cancel action:(void(^)(void))action;
+ (void)alertTitle:(NSString *)title message:(NSString *)msg cancel:(NSString *)cancel;
+ (void)alertTitle:(NSString *)title message:(NSString *)msg cancel:(NSString *)cancel action:(void(^)(void))action;
+ (void)alertTitle:(NSString *)title message:(NSString *)msg cancelButtonTitle:(NSString *)cancelButtonTitle cancelAction:(void(^)(void))cancelAction otherButtonTitle:(NSString *)otherButtonTitle otherAction:(void(^)(void))otherAction;


+ (void)showLoadingAlertView;
+ (void)showLoadingAlertView:(NSString *)alertText;
+ (void)showLoadingAlertView:(NSString *)alertText inView:(UIView *)view;

+ (void)hideLoadingAlertView:(UIView *)view;





/**
 浮层展示一个信息
 
 @param message 信息
 */
+ (void)toast:(NSString *)message;

/**
 浮层展示一个信息
 
 @param message 信息
 @param duration 持续时间（以秒为单位）
 */
+ (void)toast:(NSString *)message duration:(CGFloat)duration;

/**
 转菊花
 */
+ (void)loading;

/**
 隐藏菊花
 */
+ (void)hideloading;

/**
 alert提示框

 @param message 内容
 @param title 标题
 @param okTitle 确认标题
 @param cancelTitle 取消标题
 @param callback 回调
 */
+ (void)alert:(NSString *)message title:(NSString *)title okTitle:(NSString *)okTitle cancelTitle:(NSString *)cancelTitle callback:(void(^)(NSInteger))callback;

/**
 alert提示框
 
 @param message 内容
 @param title 标题
 @param okTitle 确认标题
 @param callback 回调
 */
+ (void)alert:(NSString *)message title:(NSString *)title okTitle:(NSString *)okTitle callback:(void(^)(NSInteger))callback;


/**
 alert提示框
 
 @param message 内容
 @param title 标题
 @param okTitle 确认标题
 */
+ (void)alert:(NSString *)message title:(NSString *)title okTitle:(NSString *)okTitle;


/**
 alert提示框
 
 @param message 内容
 @param okTitle 确认标题
 @param cancelTitle 取消标题
 @param callback 回调
 */
+ (void)alert:(NSString *)message okTitle:(NSString *)okTitle cancelTitle:(NSString *)cancelTitle callback:(void(^)(NSInteger))callback;


/**
 alert提示框
 
 @param message 内容
 @param okTitle 确认标题
 @param callback 回调
 */
+ (void)alert:(NSString *)message okTitle:(NSString *)okTitle callback:(void(^)(NSInteger))callback;


/**
 alert提示框
 
 @param message 内容
 @param okTitle 确认标题
 */
+ (void)alert:(NSString *)message okTitle:(NSString *)okTitle;

@end
