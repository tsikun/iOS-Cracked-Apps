//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SSImpressionParams : NSObject
{
    NSString *_categoryID;
    NSString *_concernID;
    unsigned long long _refer;
    unsigned long long _cellStyle;
    unsigned long long _cellSubStyle;
    NSString *_actionType;
}

@property(copy, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(nonatomic) unsigned long long cellSubStyle; // @synthesize cellSubStyle=_cellSubStyle;
@property(nonatomic) unsigned long long cellStyle; // @synthesize cellStyle=_cellStyle;
@property(nonatomic) unsigned long long refer; // @synthesize refer=_refer;
@property(copy, nonatomic) NSString *concernID; // @synthesize concernID=_concernID;
@property(copy, nonatomic) NSString *categoryID; // @synthesize categoryID=_categoryID;
- (void).cxx_destruct;

@end
