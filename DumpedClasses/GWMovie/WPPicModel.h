//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWObject.h"

@class NSString;

@interface WPPicModel : GWObject
{
    NSString *_displayURL;
    NSString *_originalURL;
    NSString *_classifyURL;
    NSString *_thumbnailURL;
}

+ (id)mj_ignoredPropertyNames;
+ (id)mj_replacedKeyFromPropertyName;
@property(retain, nonatomic) NSString *thumbnailURL; // @synthesize thumbnailURL=_thumbnailURL;
@property(retain, nonatomic) NSString *classifyURL; // @synthesize classifyURL=_classifyURL;
@property(retain, nonatomic) NSString *originalURL; // @synthesize originalURL=_originalURL;
@property(retain, nonatomic) NSString *displayURL; // @synthesize displayURL=_displayURL;
- (void).cxx_destruct;
- (id)imageCacheOfUrl:(id)arg1;
- (id)higherQualityCache;
- (id)midQualityCache;
- (id)higherQualityUrl;
- (id)midQualityUrl;
- (id)lowerQualityUrl;

@end
