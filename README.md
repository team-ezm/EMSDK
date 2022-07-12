# EMSDK
## 使用指南

1. 申请Key

http://183.129.145.5:8084/demo/#/

2. pod 集成

`pod 'EMSDK'`

3. 初始化
```
#import <EMSDK/EMSDK.h>

[EMSDKCore initWithKey:@"1234567890"];

[EMSDKCore showWithStartURL:[NSURL URLWithString:@"http://10.10.21.3:8080/hot/uploader/offline/index.html"] fullscreen:NO viewController:self];
```

4. 注意
> 使用 Scanner 时，需要向 info.plist 中引入相机的使用权限；


