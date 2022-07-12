//
//  YDMMiniInfoView.h
//  EMCenterModule
//
//  Created by X on 2020/4/16.
//

#import <UIKit/UIKit.h>


@interface YDMMiniInfoView : UIView
@property (weak, nonatomic) IBOutlet UIImageView *iconView;
@property (weak, nonatomic) IBOutlet UILabel *titleLabel;
@property (weak, nonatomic) IBOutlet UIButton *cancelButton;
@property (strong, nonatomic) IBOutlet UITapGestureRecognizer *tap;
@end

