#import <EMCordova/CDVPlugin.h>

@class CDVInvokedUrlCommand;

@interface Scanner : CDVPlugin
/**扫描二维码/条形码*/
- (void)scan:(CDVInvokedUrlCommand*)command;
/**生成条形码,默认CODE128类型条码*/
- (void)createBarcode:(CDVInvokedUrlCommand*)command;

@end
