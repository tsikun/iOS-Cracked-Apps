//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBEntityCardViewControllerProtocol-Protocol.h"

@class FBUserSession, NSDictionary, NSString;
@protocol FBEntityCardFriendingActionDelegate;

@interface FBProfileDiscoveryPivotCardViewController : UIViewController <FBEntityCardViewControllerProtocol>
{
    FBUserSession *_session;
    NSDictionary *_impressionLoggingExtras;
    UIViewController *_dashboardViewController;
    id <FBEntityCardFriendingActionDelegate> friendingActionDelegate;
}

@property(nonatomic) __weak id <FBEntityCardFriendingActionDelegate> friendingActionDelegate; // @synthesize friendingActionDelegate;
- (void).cxx_destruct;
- (id)analyticsModule;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)impressionLoggingExtras;
- (void)setIsSelected:(_Bool)arg1;
- (struct CGRect)activityIndicatorViewFrameForCardHeight:(double)arg1;
- (void)updateEntity:(id)arg1 reloadData:(_Bool)arg2 isInitialEntity:(_Bool)arg3 isParentViewAnimating:(_Bool)arg4 userInfo:(id)arg5;
- (void)prefetchImagesForEntities:(id)arg1;
- (void)setAnalytics:(id)arg1 cardConfigListener:(id)arg2;
- (void)prepareForReuse;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
