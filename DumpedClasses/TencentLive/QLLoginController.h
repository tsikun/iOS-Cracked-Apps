//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLBaseTableViewController.h"

#import "QLLoginDelegate.h"

@class NSData, NSString, UIButton, UILabel, UITextField, UIView;

@interface QLLoginController : QLBaseTableViewController <QLLoginDelegate>
{
    UITextField *tfQQNO;
    UITextField *tfPassword;
    UIButton *btnLogin;
    UIButton *btnQuickLogin;
    UIView *verifyCodeView;
    UIButton *btnVerifyCode;
    UITextField *tfVerifyCode;
    NSData *rememberPwdSig;
    UIButton *_btnPrivacy;
    UIButton *_btnRegister;
    UILabel *_lblPrompt;
    UIButton *_btnPrivacyTwo;
    int _loginResult;
    id <QLLoginControllerDelegate> _loginDelegate;
}

@property(nonatomic) id <QLLoginControllerDelegate> loginDelegate; // @synthesize loginDelegate=_loginDelegate;
@property(nonatomic) int loginResult; // @synthesize loginResult=_loginResult;
- (void).cxx_destruct;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)cancelLogin:(id)arg1;
- (void)loginNeedVerifyPicture:(id)arg1;
- (void)loginFailedWithErrorMsg:(id)arg1;
- (void)loginSuccess;
- (void)handleVerifyCode:(id)arg1;
- (void)refreshVerifyCode:(id)arg1;
- (void)resignEditor:(id)arg1;
- (void)textFieldChanged:(id)arg1;
- (void)textFieldDone:(id)arg1;
- (void)didLoginFailWithError:(id)arg1;
- (void)didLoginOK;
- (void)cancelLogin;
- (void)loginButtonClicked:(id)arg1;
- (void)relayoutFootViewWithHasVerifyView:(_Bool)arg1;
- (void)changeUIBeforeLogginIn;
- (void)privacyDown:(id)arg1;
- (void)registerDown:(id)arg1;
- (void)relayoutTabBar;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)popController;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (id)pageDescription;
- (void)viewDidUnload;
- (void)viewDidLoad;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
