#import <Foundation/Foundation.h>
#import <EMCordova/CDVPlugin.h>


typedef NS_ENUM(NSUInteger, CDVDestinationType) {
    DestinationTypeNativeUri = 0, // 相册
    DestinationTypeFileUri // 本地文件
};


@class CDVInvokedUrlCommand;
@interface CDVImagePicker : UIImagePickerController

@property (assign, nonatomic) NSInteger quality;
@property (copy, nonatomic)   NSString* callbackId;
@property (copy, nonatomic)   NSString* mimeType;
@property (nonatomic, assign) CDVDestinationType destinationType;
@property (nonatomic, assign) BOOL saveToAlbum;
@property (nonatomic, assign) CGFloat maxSize;

@end

@interface YDMCamera : CDVPlugin <UIImagePickerControllerDelegate, UINavigationControllerDelegate>

@property (nonatomic, assign) BOOL inUse;
@property (nonatomic, strong) CDVImagePicker *pickerController;

- (void)takePhoto:(CDVInvokedUrlCommand*)command;
- (void)shootVideo:(CDVInvokedUrlCommand*)command;
@end




