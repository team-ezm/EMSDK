//
//  ViewController.m
//  SDKTest
//
//  Created by xuchang on 2021/7/1.
//

#import "ViewController.h"
#import <EMSDK/EMSDK.h>

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UISwitch *NavOpen;
@property (weak, nonatomic) IBOutlet UISwitch *isHideButtonLine;
@property (weak, nonatomic) IBOutlet UISwitch *isHideFunctionButton;
@property (weak, nonatomic) IBOutlet UISwitch *isHideToolBar;
@property (weak, nonatomic) IBOutlet UISwitch *isShowBackBtn;
@property (weak, nonatomic) IBOutlet UISwitch *fullscreen;
@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
    
    [[NSNotificationCenter defaultCenter] addObserver:self selector:@selector(log:) name:@"CDVConsoleLogNotification" object:nil];
    
    [EMSDKCore initWithKey:@"zbKuvGC36FAdc5J5S+4EpPKDUirYsZ/IDrPGnAjanRE0TYjNU7u4JKHeNsaypAI/twyXEXXmHA8L3Ob7Uojb8isaP6dzydXIznbutq8AeFp/pFJBrVHZ8unYTCN3TdzME+7OuOQJnZACtXv418LZK1cZaAwMLpyiWV55+rcOZWuZG9iWS7DPnShQMUIgcd9O0HN/aog0RC2X8whFo2VyBR21FEWbEjPLWEMEGi6eaz2AP4BYmCTC0cW+ck5bmXfe"];
}

- (void)log:(NSNotification *)noti{
    NSLog(@"%@",[noti.object lastObject]);
}


- (IBAction)btk:(id)sender {
    
    // http://10.10.21.3:8080/hot/uploader/offline/index.html
    
    
    if (self.NavOpen.isOn) {

    
        [EMSDKCore showWithStartURL:[NSURL URLWithString:@"https://www.yd-mobile.cn/www/offline/pages/plugins/videopreviewer.html"] toolbarTitle:@"how are you" toolbarBackColor:@"" toolbarTitleColor:@"" isShowBackBtn:self.isShowBackBtn.isOn isHideToolBar:self.isHideToolBar.isOn isHideFunctionButton:self.isHideFunctionButton.isOn isHideButtonLine:self.isHideButtonLine.on viewController:self];
        
    } else {

        [EMSDKCore showWithStartURL:[NSURL URLWithString:@"https://www.yd-mobile.cn"] fullscreen:self.fullscreen.isOn viewController:self];
    }
}

@end
