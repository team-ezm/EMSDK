//
//  CrashExceptionHandler.h
//  HomeyComb Mobile
//
//  Created by 柳婷 on 2019/3/11.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "HCMCacheManager.h"
NS_ASSUME_NONNULL_BEGIN

@interface CrashExceptionHandler : NSObject
@property (assign, nonatomic) BOOL dismissed;
@property(nonatomic,strong) NSString *appID;//平台唯一标识符
@property(nonatomic,assign) BOOL isRelease;
+ (instancetype)sharedInstance;
#pragma mark -- 事件统计日志
- (void)getSaveEventData:(NSDictionary *)eventDict;
#pragma mark -- 启动、崩溃次数统计
- (void)getSaveStartCount;
#pragma mark -- 新增用户提交
- (NSString *)dictAddUsersData:(NSString *)userid isAdd:(BOOL)isAddUser logServe:(NSString *)logServe;
@end

NS_ASSUME_NONNULL_END




