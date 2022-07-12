//
//  YDMAnimotionLoading.h
//  HomeyComb Mobile
//
//  Created by 柳婷 on 2019/4/22.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface YDMAnimotionLoading : UIView
-(instancetype)initWithFrame:(CGRect)frame;
//开始动画
- (void)startAnimating;
//结束动画
- (void)stopAnimating;
-(void)buildUI;
@end

NS_ASSUME_NONNULL_END
