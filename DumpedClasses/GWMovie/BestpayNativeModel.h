//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSString;

@interface BestpayNativeModel : NSObject
{
    NSString *_orderInfo;
    unsigned long long _launchType;
    NSString *_scheme;
}

+ (_Bool)isSuccessFromString:(id)arg1 withPaySchema:(id)arg2;
+ (id)paramsFromKeyValueStr:(id)arg1;
+ (id)paramsFromString:(id)arg1 withPaySchema:(id)arg2;
@property(retain, nonatomic) NSString *scheme; // @synthesize scheme=_scheme;
@property(nonatomic) unsigned long long launchType; // @synthesize launchType=_launchType;
@property(retain, nonatomic) NSString *orderInfo; // @synthesize orderInfo=_orderInfo;
- (void).cxx_destruct;

@end

