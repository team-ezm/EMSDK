//
//  EZMNativeScanViewController.h
//  EMScannerModule
//
//  Created by xuchang on 2021/3/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZMNativeScanViewController : UIViewController
@property (nonatomic, copy) void(^competition)(NSString *);
@end

NS_ASSUME_NONNULL_END
