//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UILabel, UIView;

@interface QYPPFeedDetailMutiVoteItemView : UIButton
{
    _Bool _itemEnable;
    CDUnknownBlockType _selectClick;
    UIButton *_select;
    UIButton *_portrait;
    UIView *_progress;
    UILabel *_content;
    UILabel *_number;
    double _scale;
    CDUnknownBlockType _portraitClick;
}

@property(copy, nonatomic) CDUnknownBlockType portraitClick; // @synthesize portraitClick=_portraitClick;
@property(nonatomic) _Bool itemEnable; // @synthesize itemEnable=_itemEnable;
@property(nonatomic) double scale; // @synthesize scale=_scale;
@property(retain, nonatomic) UILabel *number; // @synthesize number=_number;
@property(retain, nonatomic) UILabel *content; // @synthesize content=_content;
@property(retain, nonatomic) UIView *progress; // @synthesize progress=_progress;
@property(retain, nonatomic) UIButton *portrait; // @synthesize portrait=_portrait;
@property(retain, nonatomic) UIButton *select; // @synthesize select=_select;
@property(copy, nonatomic) CDUnknownBlockType selectClick; // @synthesize selectClick=_selectClick;
- (void).cxx_destruct;
- (double)contentWidth;
- (void)layoutSubviews;
- (void)setEnable:(_Bool)arg1;
- (_Bool)enable;
- (void)setPortraitClickEvent:(CDUnknownBlockType)arg1;
- (void)setSelectClickEvent:(CDUnknownBlockType)arg1;
- (_Bool)voteSelect;
- (void)setVoteSelect:(_Bool)arg1;
- (void)setVote:(unsigned long long)arg1 scale:(double)arg2 vote:(_Bool)arg3 animate:(_Bool)arg4;
- (void)setVotePortrait:(id)arg1 placeholder:(id)arg2;
- (void)setVoteTitle:(id)arg1;
- (void)reset;
- (void)onSelectClick;
- (void)onPortraitClick;
- (void)createSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

@end

