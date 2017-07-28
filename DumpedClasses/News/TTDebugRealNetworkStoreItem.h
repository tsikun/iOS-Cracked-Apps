//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSDate, NSError, NSString;

@interface TTDebugRealNetworkStoreItem : NSObject <NSCoding>
{
    NSString *_requestID;
    NSDate *_startTime;
    NSError *_error;
    double _duration;
    long long _hasTriedTimes;
    NSString *_requestUrl;
}

@property(copy, nonatomic) NSString *requestUrl; // @synthesize requestUrl=_requestUrl;
@property(nonatomic) long long hasTriedTimes; // @synthesize hasTriedTimes=_hasTriedTimes;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSError *error; // @synthesize error=_error;
@property(retain, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end
