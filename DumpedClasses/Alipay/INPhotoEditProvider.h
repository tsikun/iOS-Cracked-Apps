//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData;

@interface INPhotoEditProvider : NSObject
{
    id <INPhotoEditDataSource> _dataSource;
    id _imageAsset;
    NSData *_imageData;
}

@property(retain, nonatomic) NSData *imageData; // @synthesize imageData=_imageData;
@property(retain, nonatomic) id imageAsset; // @synthesize imageAsset=_imageAsset;
@property(nonatomic) __weak id <INPhotoEditDataSource> dataSource; // @synthesize dataSource=_dataSource;
- (void).cxx_destruct;

@end

