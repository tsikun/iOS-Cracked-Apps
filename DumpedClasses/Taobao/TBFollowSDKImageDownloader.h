//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TBFollowSDKImageDownloader : NSObject
{
    id <SDWebImageOperation> _toastImgOperation;
    id <SDWebImageOperation> _cardImgOperation;
}

+ (id)shareInstance;
@property(retain, nonatomic) id <SDWebImageOperation> cardImgOperation; // @synthesize cardImgOperation=_cardImgOperation;
@property(retain, nonatomic) id <SDWebImageOperation> toastImgOperation; // @synthesize toastImgOperation=_toastImgOperation;
- (void).cxx_destruct;
- (void)cancelDownload;
- (void)downloaderImageWithToastURL:(id)arg1 cardURL:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

