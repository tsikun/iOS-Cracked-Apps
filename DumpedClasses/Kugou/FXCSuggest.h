//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FXBasePostInput.h"

@class NSString;

@interface FXCSuggest : FXBasePostInput
{
    long long _userId;
    NSString *_contact;
    NSString *_content;
}

@property(retain, nonatomic) NSString *content; // @synthesize content=_content;
@property(retain, nonatomic) NSString *contact; // @synthesize contact=_contact;
@property(nonatomic) long long userId; // @synthesize userId=_userId;
- (void).cxx_destruct;

@end
