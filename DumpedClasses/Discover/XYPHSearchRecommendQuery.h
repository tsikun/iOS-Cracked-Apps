//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString, XYPHSearchRecommendDesc;

@interface XYPHSearchRecommendQuery : XYRKModel
{
    NSString *_searchType;
    NSString *_text;
    XYPHSearchRecommendDesc *_desc;
}

+ (id)descJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) XYPHSearchRecommendDesc *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *text; // @synthesize text=_text;
@property(retain, nonatomic) NSString *searchType; // @synthesize searchType=_searchType;
- (void).cxx_destruct;

@end
