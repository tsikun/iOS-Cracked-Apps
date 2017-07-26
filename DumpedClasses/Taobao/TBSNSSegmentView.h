//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIScrollView.h"

@class NSArray, TBSNSSegmentStyle, UIView;

@interface TBSNSSegmentView : UIScrollView
{
    _Bool _autoSelectOnMoving;
    float _animationScale;
    float _curItemWidth;
    TBSNSSegmentStyle *_segmentStyle;
    long long _selectedIndex;
    CDUnknownBlockType _selectedBlock;
    UIView *_line;
    UIView *_bottomline;
    NSArray *_titles;
    NSArray *_items;
}

@property(nonatomic) float curItemWidth; // @synthesize curItemWidth=_curItemWidth;
@property(retain, nonatomic) NSArray *items; // @synthesize items=_items;
@property(retain, nonatomic) NSArray *titles; // @synthesize titles=_titles;
@property(retain, nonatomic) UIView *bottomline; // @synthesize bottomline=_bottomline;
@property(retain, nonatomic) UIView *line; // @synthesize line=_line;
@property(copy, nonatomic) CDUnknownBlockType selectedBlock; // @synthesize selectedBlock=_selectedBlock;
@property(nonatomic) float animationScale; // @synthesize animationScale=_animationScale;
@property(nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property(nonatomic) _Bool autoSelectOnMoving; // @synthesize autoSelectOnMoving=_autoSelectOnMoving;
@property(retain, nonatomic) TBSNSSegmentStyle *segmentStyle; // @synthesize segmentStyle=_segmentStyle;
- (void).cxx_destruct;
- (void)onAnimation:(float)arg1;
- (void)updateUI;
- (id)getItemByIndex:(long long)arg1;
- (void)endMoveToIndex:(float)arg1;
- (void)moveToIndex:(float)arg1;
- (void)changeScrollOfSet:(long long)arg1 animated:(_Bool)arg2;
- (void)changeLine:(float)arg1;
- (void)_setSelectedIndex:(long long)arg1;
- (void)onClicked:(id)arg1;
- (void)clear;
- (id)blendImage:(id)arg1 withTintColor:(id)arg2 andBlendMode:(int)arg3;
- (id)getSelectIconColor;
- (void)createItemViews:(id)arg1 atIndex:(long long)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
