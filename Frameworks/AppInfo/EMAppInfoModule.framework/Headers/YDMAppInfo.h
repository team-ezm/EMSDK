//
//  YDMAppInfo.h
//  HomeyComb Mobile
//
//  Created by X on 2019/6/18.
//  Copyright © 2019年 supconit. All rights reserved.
//

#import <EMCordova/CDVPlugin.h>

@class CDVInvokedUrlCommand;

NS_ASSUME_NONNULL_BEGIN

@interface YDMAppInfo : CDVPlugin
/** 获取应用相关信息 */
- (void)getAppInfo:(CDVInvokedUrlCommand*)command;
@end

NS_ASSUME_NONNULL_END
