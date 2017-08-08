//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface FBFriendRequestTabSectionManager : NSObject
{
    NSMutableArray *_orderedSectionTypes;
    NSMutableArray *_virtualSectionIndexes;
    NSMutableArray *_previousVirtualSectionIndexes;
    NSMutableArray *_sectionInsertedStates;
}

- (void).cxx_destruct;
- (_Bool)swapSectionsPutFirstSection:(unsigned long long)arg1 inFrontOfSecondSection:(unsigned long long)arg2;
- (void)_updateSectionIndexes;
- (void)setSectionInserted:(_Bool)arg1 forSection:(unsigned long long)arg2;
- (_Bool)sectionIsInserted:(unsigned long long)arg1;
- (unsigned long long)_indexForSectionType:(unsigned long long)arg1 useIndexesArray:(id)arg2;
- (unsigned long long)previousIndexForSectionType:(unsigned long long)arg1;
- (unsigned long long)indexForSectionType:(unsigned long long)arg1;
- (id)init;

@end
