//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface WXContactProfileExt : NSObject
{
    int _type;
    NSString *_displayName;
    NSString *_displayContent;
    NSString *_action;
    long long _index;
}

+ (id)transformedValue:(id)arg1;
+ (id)reverseTransformedValue:(id)arg1;
@property(nonatomic) long long index; // @synthesize index=_index;
@property(nonatomic) int type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *action; // @synthesize action=_action;
@property(retain, nonatomic) NSString *displayContent; // @synthesize displayContent=_displayContent;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
- (void).cxx_destruct;

@end
