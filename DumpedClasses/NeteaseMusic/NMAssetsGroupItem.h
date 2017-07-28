//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString, UIImage;

@interface NMAssetsGroupItem : NSObject
{
}

+ (id)assetGroupItemWithAssetsGroup:(id)arg1;
- (_Bool)isEqualToGroupItem:(id)arg1;
- (_Bool)isSavedPhotos;
- (void)enumerateAssetsAtIndexes:(id)arg1 options:(unsigned long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
@property(readonly, nonatomic) _Bool valid;
@property(readonly, nonatomic) NSString *identifier;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) unsigned long long assetsCount;
- (id)posterWithSize:(struct CGSize)arg1;
@property(readonly, nonatomic) UIImage *poster;

@end
