//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface AVFSMonitorAdapter : NSObject
{
    NSMutableDictionary *_adapters;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) NSMutableDictionary *adapters; // @synthesize adapters=_adapters;
- (void).cxx_destruct;
- (Class)classPerformProtocol:(id)arg1;
- (void)registerAdapter:(Class)arg1 forProtocol:(id)arg2;
- (id)init;

@end

