
#import <EMCordova/CDVPlugin.h>

@class CDVInvokedUrlCommand;

@interface YDMModal : CDVPlugin
/**提示消息，默认2s,最小0.5s*/
- (void)toast:(CDVInvokedUrlCommand*)command;

@end



