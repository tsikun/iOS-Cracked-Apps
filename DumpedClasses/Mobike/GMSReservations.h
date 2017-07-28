//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary, NSMutableSet;

@interface GMSReservations : NSObject
{
    NSMutableDictionary *_map;
    NSMutableSet *_cache;
}

- (void).cxx_destruct;
- (void)removeAllReservations;
- (id)indexesOfReservedItemsForArray:(id)arg1;
- (_Bool)isReserved:(id)arg1;
- (void)cancelReservationForClient:(void *)arg1;
- (void)reserveSet:(id)arg1 forClient:(void *)arg2;

@end
