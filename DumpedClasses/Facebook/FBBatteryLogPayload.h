//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface FBBatteryLogPayload : NSObject
{
    NSMutableDictionary *_payload;
    struct mutex m;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)setPayload:(id)arg1 forKey:(id)arg2;
- (id)batteryLogPayload;
- (id)init;

@end
