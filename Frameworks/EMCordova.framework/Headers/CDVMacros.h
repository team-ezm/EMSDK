//
//  CDVMacros.h
//  Cordova
//
//  Created by X on 2020/4/2.
//  Copyright © 2020 it. All rights reserved.
//

#ifndef CDVMacros_h
#define CDVMacros_h

// 通知中心
#define HCMNotificationCenter [NSNotificationCenter defaultCenter]


// 字体
#define HCM_FONT(s) [UIFont systemFontOfSize:s]
#define HCM_LIGHT_FONT(s) [UIFont systemFontOfSize:s weight:UIFontWeightLight]
#define HCM_MEDIUM_FONT(s) [UIFont systemFontOfSize:s weight:UIFontWeightMedium]

// 屏幕尺寸
#define HCM_SCREEN_SIZE ([UIScreen mainScreen].bounds.size)
#define HCM_SCREEN_WIDTH (HCM_SCREEN_SIZE.width)
#define HCM_SCREEN_HEIGHT (HCM_SCREEN_SIZE.height)

// 适配，相对6手机
#define HCM_SCREEN_WIDTH_RATIO (HCM_SCREEN_WIDTH / 375.0) // 屏幕宽度的比例
#define HCM_SCREEN_HEIGHT_RATIO (HCM_SCREEN_WIDTH / 667.0) // 屏幕高度的比例
#define HCM_ADAPTED_WIDTH(width)  (ceilf((width) * HCM_SCREEN_WIDTH_RATIO)) // 适配后得到的宽度
#define HCM_ADAPTED_HEIGHT(height) (ceilf((height) * HCM_SCREEN_WIDTH_RATIO)) // 适配后得到的高度

// 1像素高度
#define HCM_ONE_PIXE_HEIGHT (1.0f / [UIScreen mainScreen].scale)

// console print
#ifdef DEBUG
#define HCMString  [NSString stringWithFormat:@"%s", __FILE__].lastPathComponent
#define HCM_LOG(...) printf("%s 第%d行: %s\n\n", [HCMString UTF8String] ,__LINE__, [[NSString stringWithFormat:__VA_ARGS__] UTF8String]);
#else
#define HCM_LOG(...)
#endif


#define HCM_LOG_FUNCTION_NAME HCM_LOG(@"%s", __func__);
// 颜色
#define HCM_RGBA_COLOR(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]
#define HCM_RGB_COLOR(r, g, b) HCM_RGBA_COLOR((r), (g), (b), 255)
#define HCM_RANDOM_COLOR HCM_RGB_COLOR(arc4random_uniform(255), arc4random_uniform(255), arc4random_uniform(255))

#define HCMViewDefaultBackgroundColor UIColorHex(0xECECED)
// 顶部/底部栏1px分隔线
#define HCMToolBarSeparatorColor      UIColorHex(0xDBD6D6)
// 列表1px分隔线
#define HCMListViewSeparatorColor     UIColorHex(0xDFDFDD)


#define _Is_Nil_Or_Null_Obj(obj) (!obj || ([(obj) isEqual:[NSNull null]]) || [(obj) isKindOfClass:[NSNull class]])
#define _Is_Empty_String(string) ([(string) isKindOfClass:[NSNull class]] || !(string) || ![(string) length])
#define _Is_Empty_Array(array) ([(array) isKindOfClass:[NSNull class]] || !(array) || ![(array) count])
#define _Is_Empty_Dictionary(dictionary) ([(dictionary) isKindOfClass:[NSNull class]] || !(dictionary) || ![(dictionary) count])

// 文件
#define HCM_TEMP_DIRECTORY_PATH NSTemporaryDirectory()
#define HCM_DOMAIN_DIRECTORY_PATH [NSSearchPathForDirectoriesInDomains(NSDocumentDirectory, NSUserDomainMask, YES) objectAtIndex:0]
#define HCM_CACHES_DIRECTORY_PATH                  [NSSearchPathForDirectoriesInDomains(NSCachesDirectory, NSUserDomainMask, YES) objectAtIndex:0]


#define HCM_USER_DEFAULTS(suiteName) (([[NSUserDefaults alloc] initWithSuiteName:suiteName]) ? [[NSUserDefaults alloc] initWithSuiteName:suiteName] : [NSUserDefaults standardUserDefaults])

#define IS_IPHONEX  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size) : NO)

#define HCM_IMAGE_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"images"]

#define HCM_VIDEO_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"videos"]

#define HCM_AUDIO_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"audios"]

#define HCM_TEMP_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"tmp"]

#define HCM_OTHER_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"other"]

#define HCM_WORD_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"word"]

#define HCM_EXCEL_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"excel"]

#define HCM_PPT_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"ppt"]


#define HCM_PDF_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"pdf"]

#define HCM_ZIP_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"zip"]

#define HCM_TEXT_CACHE_PATH [[HCM_CACHES_DIRECTORY_PATH stringByAppendingPathComponent:kCacheFolderName] stringByAppendingPathComponent:@"text"]


/** 获取状态栏高度 */
#define State_Bar_H  ( ( ![[UIApplication sharedApplication] isStatusBarHidden] ) ? [[UIApplication sharedApplication] statusBarFrame].size.height : (IS_IPHONEX_SET?44.f:20.f))
//是否是iPhoneX、iPhoneXS
#define EM_IS_IPHONEX_XS   (HCM_SCREEN_HEIGHT == 812.f)
//是否是iPhoneXR、iPhoneX Max
#define EM_IS_IPHONEXR_XSMax   (HCM_SCREEN_HEIGHT == 896.f)

#define IS_IPHONEX_SET  (EM_IS_IPHONEX_XS||EM_IS_IPHONEXR_XSMax)  //是否是iPhoneX系列手机

#endif /* CDVMacros_h */
