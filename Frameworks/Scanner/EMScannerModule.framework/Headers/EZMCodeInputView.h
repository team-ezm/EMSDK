//
//  EZMCodeInputView.h
//  EMScannerModule
//
//  Created by xuchang on 2021/3/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface EZMCodeInputView : UIView
@property (nonatomic, copy) void(^callback)(NSString *);
@property (nonatomic, copy) void(^cancel)(void);
+ (instancetype)show:(UIView *)aView;
@end

NS_ASSUME_NONNULL_END
