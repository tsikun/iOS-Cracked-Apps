//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBNuxBannerViewController-Protocol.h"

@class FBQPPromotion, FBQuickPromotionInterstitialFullScreenView, FBUserSession, NSString;
@protocol FBNuxBannerControllerDelegate;

@interface FBQuickPromotionMessagesInterstitialNuxViewController : UIViewController <FBNuxBannerViewController>
{
    FBQuickPromotionInterstitialFullScreenView *_interstitialView;
    FBQPPromotion *_promotion;
    FBUserSession *_session;
    id <FBNuxBannerControllerDelegate> _delegate;
}

@property(nonatomic) __weak id <FBNuxBannerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_handleButtonTapEvent:(id)arg1;
- (void)_handleSecondaryButtonClick:(id)arg1;
- (void)_handlePrimaryButtonClick:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (id)initWithSession:(id)arg1 promotion:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
