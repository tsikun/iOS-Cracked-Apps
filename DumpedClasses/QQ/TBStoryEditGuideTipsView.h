//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UIGestureRecognizerDelegate.h"

@class NSString, UIImageView, UILabel;

@interface TBStoryEditGuideTipsView : UIView <UIGestureRecognizerDelegate>
{
    UIImageView *_bubbleBody;
    UIImageView *_bubbleHead;
    UILabel *_tipsLabel;
    UIView *_tmpView;
    id <TBStoryEditGuideTipsDelegate> _delegate;
}

+ (struct CGSize)getSizeOfText:(id)arg1 withFont:(id)arg2;
@property(nonatomic) __weak id <TBStoryEditGuideTipsDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)isShowing;
- (void)updateBubbleHeadFrameFitScreen;
- (void)updateSelfFrameFitScreen;
- (void)updateUIFramesWithTargetView:(id)arg1 parentView:(id)arg2 withText:(id)arg3;
- (id)getPositionAnimation;
- (id)getAlphaAnimation;
- (void)startAnimation:(id)arg1;
- (void)stopAnimate;
- (void)startAnimateWithTargetView:(id)arg1 parentView:(id)arg2 withText:(id)arg3 withDelegate:(id)arg4;
- (void)handleTapTips:(id)arg1;
- (void)dealloc;
- (void)doInitGestureRecognizer;
- (void)doInitTipsLabel;
- (void)doInitImageViews;
- (void)doInitUI;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
