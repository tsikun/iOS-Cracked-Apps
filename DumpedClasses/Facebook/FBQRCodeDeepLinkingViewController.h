//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class FBUserSession, NSString, UIActivityIndicatorView;

@interface FBQRCodeDeepLinkingViewController : UIViewController
{
    FBUserSession *_session;
    NSString *_qrcodeID;
    UIActivityIndicatorView *_spinner;
}

@property(retain, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
- (void).cxx_destruct;
- (void)finishWithViewDismissal;
- (void)handleError:(id)arg1;
- (void)qrcodeDownloadResponseBlockHelper:(id)arg1 error:(id)arg2;
- (void)handleDownloadError:(id)arg1;
- (void)initSpinner;
- (void)sendGraphAPICallToRecordScanHistory;
- (void)decode;
- (void)viewWillLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)initWithSession:(id)arg1 andQRCodeID:(id)arg2;

@end
