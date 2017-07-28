//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "UITextFieldDelegate.h"

@class KGCustomTextField, NSString, NSTimer, UIButton;

@interface KGColorRingAlertView : UIView <UITextFieldDelegate>
{
    KGCustomTextField *_phoneNumberTextField;
    KGCustomTextField *_vaildCodeTextField;
    id <KGColorRingAlertViewDelegate> _delegate;
    UIView *_contentView;
    UIButton *_getVaildCodeButton;
    long long _index;
    _Bool _bePresented;
    _Bool _beShow;
    NSTimer *timer;
    long long time;
    _Bool dismissWithoutAnimation;
}

+ (void)_removeAlertViewFormMaskWindow:(id)arg1;
+ (void)_addAlertViewOnMaskWindow:(id)arg1;
+ (void)_dismissMaskWindow;
+ (void)_presentMaskWindow;
+ (void)_popAlertViewFromStack;
+ (void)_pushAlertViewInStack:(id)arg1;
+ (id)_getStackTopAlertView;
@property(retain, nonatomic) KGCustomTextField *vaildCodeTextField; // @synthesize vaildCodeTextField=_vaildCodeTextField;
@property(retain, nonatomic) KGCustomTextField *phoneNumberTextField; // @synthesize phoneNumberTextField=_phoneNumberTextField;
- (void).cxx_destruct;
- (void)timerFired:(id)arg1;
- (void)dealloc;
- (void)keyBoardHide:(id)arg1;
- (void)keyboardShow:(id)arg1;
- (void)clickedButtonAtIndex:(long long)arg1;
- (void)cancelButtonClicked:(id)arg1 index:(long long)arg2;
- (void)confirmButtonClicked:(id)arg1 index:(long long)arg2;
- (void)getVaildCodeButtonClicked:(id)arg1 index:(long long)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)stop_timer:(_Bool)arg1;
- (void)dismissAlertViewWithAnimated:(_Bool)arg1;
- (void)handleNotification:(id)arg1;
- (void)show;
- (void)setVaildCodeButtonEnable:(_Bool)arg1;
- (void)tapClicked:(id)arg1;
- (id)initWithMessage:(id)arg1 Delegate:(id)arg2 CancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4 RowIndex:(long long)arg5 needDissmissAnimation:(_Bool)arg6;
- (id)initWithMessage:(id)arg1 Delegate:(id)arg2 CancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4 RowIndex:(long long)arg5;
- (void)_dismissAlertView1;
- (void)_dismissAlertView;
- (void)_bounceDidStop;
- (void)_bounce0Animation;
- (struct CGAffineTransform)_transformForOrientation;
- (id)initWithMessage:(id)arg1 Delegate:(id)arg2 CancelButtonTitle:(id)arg3 confirmButtonTitle:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
