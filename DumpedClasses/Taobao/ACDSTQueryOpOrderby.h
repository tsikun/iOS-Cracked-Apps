//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ACDSTQueryOption.h"

@class NSMutableArray;

@interface ACDSTQueryOpOrderby : ACDSTQueryOption
{
    NSMutableArray *_items;
}

@property(retain, nonatomic) NSMutableArray *items; // @synthesize items=_items;
- (void).cxx_destruct;
- (id)toJson:(id)arg1;
- (id)toString;
- (id)addOrderbyItem:(id)arg1;

@end

