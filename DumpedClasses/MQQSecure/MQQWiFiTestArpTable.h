//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary;

@interface MQQWiFiTestArpTable : NSObject
{
    NSDictionary *_ipToMacDictionary;
}

+ (id)ipAddressStringFromIpAddressNumber:(unsigned int)arg1;
+ (unsigned long long)ip2mac:(id)arg1;
+ (id)arpTable;
- (unsigned long long)macAddressForIpAddress:(id)arg1;
- (id)ipToMacDictionary;
- (id)ipAddressList;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end
