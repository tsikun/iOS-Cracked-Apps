//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface APBResponse : NSObject
{
    int resultType;
    NSString *failReason;
    NSMutableDictionary *successResult;
    NSString *_token;
}

@property(copy, nonatomic) NSString *token; // @synthesize token=_token;
@property(retain, nonatomic) NSMutableDictionary *successResult; // @synthesize successResult;
@property(copy, nonatomic) NSString *failReason; // @synthesize failReason;
@property(nonatomic) int resultType; // @synthesize resultType;
- (void).cxx_destruct;
- (id)initWithResultType:(int)arg1 failReason:(id)arg2 token:(id)arg3 successResult:(id)arg4;
- (id)init;

@end

