//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@protocol TTDetailNatantViewBase <NSObject>

@optional
@property(copy, nonatomic) CDUnknownBlockType scrollInOrOutBlock;
@property(copy, nonatomic) CDUnknownBlockType relayOutBlock;
@property(copy, nonatomic) NSString *eventLabel;
@property(nonatomic) _Bool hasShow;
- (void)fontChanged;
- (void)checkVisableRelatedArticlesAtContentOffset:(double)arg1 referViewHeight:(double)arg2;
- (void)trackEventIfNeededWithStyle:(NSString *)arg1;
- (void)trackEventIfNeeded;
- (void)reloadData:(id)arg1;
@end

