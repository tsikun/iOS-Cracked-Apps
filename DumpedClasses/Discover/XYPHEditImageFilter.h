//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYRKModel.h"

@class NSString, UIImage;

@interface XYPHEditImageFilter : XYRKModel
{
    NSString *_name;
    NSString *_displayName;
    NSString *_key;
    UIImage *_filterImage;
}

+ (id)JSONKeyPathsByPropertyKey;
@property(retain, nonatomic) UIImage *filterImage; // @synthesize filterImage=_filterImage;
@property(copy, nonatomic) NSString *key; // @synthesize key=_key;
@property(copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;

@end
