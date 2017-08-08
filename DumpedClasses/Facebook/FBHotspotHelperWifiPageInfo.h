//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class FBMemNearbyPublicWifi, NSNumber, NSString;

@interface FBHotspotHelperWifiPageInfo : FBValueObject <NSCopying>
{
    FBMemNearbyPublicWifi *_memWifi;
    NSString *_category;
    NSString *_hours;
    NSNumber *_cellIndex;
}

@property(readonly, copy, nonatomic) NSNumber *cellIndex; // @synthesize cellIndex=_cellIndex;
@property(readonly, copy, nonatomic) NSString *hours; // @synthesize hours=_hours;
@property(readonly, copy, nonatomic) NSString *category; // @synthesize category=_category;
@property(readonly, copy, nonatomic) FBMemNearbyPublicWifi *memWifi; // @synthesize memWifi=_memWifi;
- (void).cxx_destruct;
- (id)initWithMemWifi:(id)arg1 category:(id)arg2 hours:(id)arg3 cellIndex:(id)arg4;

@end
