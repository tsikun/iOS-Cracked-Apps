//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSCondition, NSMutableArray;

@interface FailedItems : NSObject
{
    NSMutableArray *failItems;
    NSCondition *m_itemLock;
}

- (void)removeAllItems;
- (_Bool)isFailedItem:(id)arg1;
- (void)deleteFailedItem:(id)arg1;
- (void)addFailedItem:(id)arg1;
- (void)dealloc;
- (id)init;

@end

