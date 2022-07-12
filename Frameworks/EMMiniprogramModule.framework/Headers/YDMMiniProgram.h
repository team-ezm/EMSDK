#import <EMCordova/CDVPlugin.h>

@class CDVInvokedUrlCommand;

NS_ASSUME_NONNULL_BEGIN

@interface YDMMiniProgram : CDVPlugin
/**打开小程序*/
- (void)openMiniProgram:(CDVInvokedUrlCommand*)command;
/**根据大程序id获取小程序列表*/
- (void)getMiniProgramList:(CDVInvokedUrlCommand*)command;
/**关闭小程序*/
- (void)closeTopPageMiniProgram:(CDVInvokedUrlCommand*)command;
/**删除存储的本地小程序--小程序唯一编码*/
- (void)deleteNoUseFile:(NSString *)uniqueCode;
/**跳转小程序*/
//- (void)presentMiniProgremVC:(NSURL *)pathUrl;
- (void)presentMiniProgremVC:(NSURL *)pathUrl miniInfo:(NSDictionary *)info;
- (void)closeMiniProgram;
@end

NS_ASSUME_NONNULL_END





