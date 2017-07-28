//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCBlurView, UIImageView, UILabel;

@interface NMPlayAllSectionView : UIView
{
    MCBlurView *_blurView;
    UIView *_fakeView;
    UIView *_highlightView;
    UILabel *_playLabel;
    UIImageView *_icon;
    UILabel *_totalLabel;
    UIView *_bottomLine;
    double _bottomMarginX;
    _Bool _isHighlighted;
    _Bool _needBlurView;
    long long _count;
}

@property(nonatomic) _Bool needBlurView; // @synthesize needBlurView=_needBlurView;
@property(nonatomic) _Bool isHighlighted; // @synthesize isHighlighted=_isHighlighted;
@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (void)showCount:(_Bool)arg1;
- (void)setBottomMarginX:(double)arg1;
- (void)layoutBottom;
- (void)layoutSubviews;
- (void)handleThemeChanged:(id)arg1;
- (id)initWithSongCount:(long long)arg1;

@end
