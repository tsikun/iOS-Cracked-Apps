//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSString, UIImage;

@protocol MADataCache <NSObject>
- (void)didReceiveMemoryWarning;
- (UIImage *)cachedImage:(struct MATile)arg1 withCacheKey:(NSString *)arg2;

@optional
- (void)removeAllCachedImagesForCacheKey:(NSString *)arg1;
- (void)removeAllCachedImages;
- (void)addImage:(UIImage *)arg1 forTile:(struct MATile)arg2 withCacheKey:(NSString *)arg3;
@end

