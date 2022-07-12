//
//  UIButton+YDMButton.h
//  HomeyComb Mobile
//
//  Created by 柳婷 on 2019/5/10.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

@interface UIButton (YDMButton)
// 设置可点击范围到按钮边缘的距离
-(void)setEnLargeEdge:(CGFloat)size;

// 设置可点击范围到按钮上、右、下、左的距离
-(void)setEnlargeEdgeWithTop:(CGFloat)top right:(CGFloat)right bottom:(CGFloat)bottom left:(CGFloat)left;
@end

NS_ASSUME_NONNULL_END
