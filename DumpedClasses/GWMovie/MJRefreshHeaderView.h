//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MJRefreshBaseView.h"

@class NSDate, UILabel;

@interface MJRefreshHeaderView : MJRefreshBaseView
{
    CDUnknownBlockType _animationWillStartBlock;
    CDUnknownBlockType _animationDidEndBlock;
    NSDate *_lastUpdateTime;
    UILabel *_lastUpdateTimeLabel;
}

+ (id)header;
@property(nonatomic) __weak UILabel *lastUpdateTimeLabel; // @synthesize lastUpdateTimeLabel=_lastUpdateTimeLabel;
@property(retain, nonatomic) NSDate *lastUpdateTime; // @synthesize lastUpdateTime=_lastUpdateTime;
@property(copy, nonatomic) CDUnknownBlockType animationDidEndBlock; // @synthesize animationDidEndBlock=_animationDidEndBlock;
@property(copy, nonatomic) CDUnknownBlockType animationWillStartBlock; // @synthesize animationWillStartBlock=_animationWillStartBlock;
- (void).cxx_destruct;
- (void)setState:(int)arg1;
- (void)adjustStateWithContentOffset;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)updateTimeLabel;
- (void)willMoveToSuperview:(id)arg1;
- (void)layoutSubviews;

@end
