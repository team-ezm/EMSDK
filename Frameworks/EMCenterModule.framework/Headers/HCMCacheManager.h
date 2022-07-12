//
//  HCMCacheManager.h
//  HomeyComb Mobile
//
//  Created by X on 2019/3/14.
//

#import <Foundation/Foundation.h>
#import <YYCache/YYCache.h>

@interface HCMCacheManager : NSObject
//@property (nonatomic, strong, readonly) YYCache *cache;
//+ (instancetype)sharedManager;
/**
 * 以下方法都为同步操作，为阻塞当前线程直至操作完成
 */
/** 获取供平台用的缓存 */
+ (NSMutableDictionary *)privateCachedKeyValues;
/** 设置供平台用的缓存并缓存到本地和内存 */
+ (void)setPrivateCachedKeyValues:(NSDictionary *)keyValues;
+ (void)setPrivateCachedObject:(id)obj forKey:(NSString *)key;
/** 删除供平台用的缓存 */
+ (void)removePrivateCachedKeyValues;
+ (void)removePrivateCachedObjectForKey:(NSString *)key;
/** 获取供平台用的指定key的缓存 */
+ (id)privateCachedObjectForKey:(NSString *)key;
+ (id)privateCachedObjectForKey:(NSString *)key default:(id)def;




/** 获取供用户用的缓存 */
+ (NSMutableDictionary *)publicCachedKeyValues;
/** 设置供用户用的缓存并缓存到本地和内存 */
+ (void)setPublicCachedKeyValues:(NSDictionary *)keyValues;
+ (void)setPublicCachedObject:(id)obj forKey:(NSString *)key;
/** 删除供用户用的缓存 */
+ (void)removePublicCachedKeyValues;
+ (void)removePublicCachedObjectForKey:(NSString *)key;
/** 获取供用户用的指定key的缓存 */
+ (id)publicCachedObjectForKey:(NSString *)key;
+ (id)publicCachedObjectForKey:(NSString *)key default:(id)def;

+ (NSMutableDictionary *)publicMiniCachedKeyValues:(NSString *)mId;
+ (void)setMini:(NSString *)mId cachedKeyValues:(NSDictionary *)keyValues;
+ (id)mini:(NSString *)mid cachedObjectForKey:(NSString *)key;
+ (void)removeMiniCachedKeyValues:(NSString *)mId;
+ (void)removeMiniCachedKeyValues:(NSString *)mId forKey:(NSString *)key;
@end
