//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ALAssetsLibrary.h"

@interface ALAssetsLibrary (TTAddition)
+ (_Bool)ttAlertControllerEnabled;
+ (id)fullResolutionImageFromAsset:(id)arg1;
+ (id)ttGetBigImageFromAsset:(id)arg1;
+ (id)fullSizeImageForAssetRepresentation:(id)arg1;
+ (id)defaultAssetsLibrary;
- (void)saveImg:(id)arg1 toAlbum:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)saveImg:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)saveImg:(id)arg1;
@end

