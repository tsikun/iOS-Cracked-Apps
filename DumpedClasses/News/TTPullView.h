//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SSThemedView.h"

@class NSString, SSThemedLabel, UIScrollView;

@interface TTPullView : SSThemedView
{
    NSString *_pullText;
    NSString *_loadingText;
    NSString *_noMoreText;
    NSString *_initText;
    _Bool _isObserving;
    _Bool _isObservingContentInset;
    _Bool _displayTips;
    _Bool _isPullUp;
    _Bool _enabled;
    _Bool _isUserPullAndRefresh;
    _Bool _hasNetError;
    int _state;
    int _direction;
    long long _lastTime;
    CDUnknownBlockType _actionHandler;
    UIScrollView *_scrollView;
    SSThemedView *_bgView;
    id <TTRefreshViewDelegate> _delegate;
    SSThemedLabel *_titleLabel;
    SSThemedLabel *_arrowLabel;
    struct UIEdgeInsets _restingContentInset;
}

@property(nonatomic) _Bool hasNetError; // @synthesize hasNetError=_hasNetError;
@property(nonatomic) struct UIEdgeInsets restingContentInset; // @synthesize restingContentInset=_restingContentInset;
@property(retain, nonatomic) SSThemedLabel *arrowLabel; // @synthesize arrowLabel=_arrowLabel;
@property(retain, nonatomic) SSThemedLabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(nonatomic) __weak id <TTRefreshViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) SSThemedView *bgView; // @synthesize bgView=_bgView;
@property(nonatomic) _Bool isUserPullAndRefresh; // @synthesize isUserPullAndRefresh=_isUserPullAndRefresh;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
@property(nonatomic) _Bool isPullUp; // @synthesize isPullUp=_isPullUp;
@property(nonatomic) _Bool displayTips; // @synthesize displayTips=_displayTips;
@property(nonatomic) _Bool isObservingContentInset; // @synthesize isObservingContentInset=_isObservingContentInset;
@property(nonatomic) _Bool isObserving; // @synthesize isObserving=_isObserving;
@property(readonly, nonatomic) int direction; // @synthesize direction=_direction;
@property(nonatomic) __weak UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(copy, nonatomic) CDUnknownBlockType actionHandler; // @synthesize actionHandler=_actionHandler;
@property(nonatomic) long long lastTime; // @synthesize lastTime=_lastTime;
@property(nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (void)gestureRecognizerUpdate:(id)arg1;
- (void)setScrollViewContentInsetWithOutObserve:(struct UIEdgeInsets)arg1;
- (void)stopAnimation:(_Bool)arg1;
- (void)doHandler;
- (void)resetScrollInsets;
- (void)setScrollInsets:(_Bool)arg1;
- (void)processPullUp:(float)arg1;
- (void)processPullDown:(float)arg1;
- (void)contentOffsetChange:(id)arg1;
- (void)contentSizeChange:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)removeObserve:(id)arg1;
- (void)startObserve;
- (void)layoutLabels;
- (void)willMoveToWindow:(id)arg1;
- (void)willMoveToSuperview:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1 pullDirection:(int)arg2 initText:(id)arg3 pullText:(id)arg4 loadingText:(id)arg5 noMoreText:(id)arg6;
- (id)initWithFrame:(struct CGRect)arg1 pullDirection:(int)arg2;

@end

