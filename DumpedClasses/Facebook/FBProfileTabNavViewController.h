//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComponentScrollEventListener-Protocol.h"
#import "FBFullScreenTransitionBoundsProvider-Protocol.h"
#import "FBListViewKitScrollEventListener-Protocol.h"
#import "FBPersonTimelineTapResponderDataSource-Protocol.h"
#import "FBPersonTimelineTapResponderDelegate-Protocol.h"
#import "FBPresentableViewController-Protocol.h"
#import "FBProfileActionBarEventListener-Protocol.h"
#import "FBProfileCoverPhotoUploadFlowControllerDelegate-Protocol.h"
#import "FBProfileFriendingActionManagerDelegate-Protocol.h"
#import "FBProfileIntroCardComponentTapResponder-Protocol.h"
#import "FBProfileIntroCardEditViewControllerPresenterProtocol-Protocol.h"
#import "FBProfilePersonUpdateListener-Protocol.h"
#import "FBProfilePhotoOpenerDelegate-Protocol.h"
#import "FBProfilePictureUploadFlowControllerDelegate-Protocol.h"
#import "FBProfileStartupFlowTraitsProtocol-Protocol.h"
#import "FBProfileVideoUploadFlowControllerDelegate-Protocol.h"
#import "FBRootGraphQLQuerySectionComponentListener-Protocol.h"

@class FBContextualTimelineHeaderConfiguration, FBFeedToolboxManager, FBFeedViewControllerLifecycleStatus, FBListViewController, FBMemPerson, FBPersonTimelineTapResponder, FBProfileCoverPhotoComponentUploadListenerAnnouncer, FBProfileCoverPhotoUploadFlowController, FBProfileInlineComposerManager, FBProfileIntroCardEditViewControllerPresenter, FBProfileIntroCardSectionScrollingListenerAnnouncer, FBProfilePhotoOpener, FBProfilePictureUploadFlowController, FBProfileSessionLogger, FBProfileSingleEditStatusListenerAnnouncer, FBProfileStatusBar, FBProfileToolbox, FBProfileTraits, FBProfileVideoComponentListenerAnnouncer, FBProfileWaitTimeLogger, FBProfileWaterMarkTracker, FBScrollViewPositionModifyingController, FBTimelineAnalytics, FBTimer, FBTransparentNavigationBarFader, FBUnderlayLoadingIndicatorViewController, FBUserSession, NSObject, NSString, UIButton;

@interface FBProfileTabNavViewController : UIViewController <FBComponentScrollEventListener, FBFullScreenTransitionBoundsProvider, FBListViewKitScrollEventListener, FBPersonTimelineTapResponderDataSource, FBPersonTimelineTapResponderDelegate, FBPresentableViewController, FBProfileActionBarEventListener, FBProfileCoverPhotoUploadFlowControllerDelegate, FBProfileFriendingActionManagerDelegate, FBProfileIntroCardComponentTapResponder, FBProfileIntroCardEditViewControllerPresenterProtocol, FBProfilePersonUpdateListener, FBProfilePhotoOpenerDelegate, FBProfilePictureUploadFlowControllerDelegate, FBProfileVideoUploadFlowControllerDelegate, FBRootGraphQLQuerySectionComponentListener, FBProfileStartupFlowTraitsProtocol>
{
    FBUserSession *_session;
    FBListViewController *_tabBarListController;
    FBMemPerson *_person;
    FBContextualTimelineHeaderConfiguration *_configuration;
    FBFeedToolboxManager *_feedToolboxManager;
    FBTimelineAnalytics *_timelineAnalytics;
    FBProfileTraits *_profileTraits;
    FBProfileSingleEditStatusListenerAnnouncer *_singleEditStatusAnnouncer;
    _Bool _isEditProfileMode;
    UIButton *_rightBarCogButton;
    FBProfileStatusBar *_floatingProfileStatusBar;
    NSObject *_scenePath;
    FBProfilePhotoOpener *_photoOpener;
    FBPersonTimelineTapResponder *_profileTapResponder;
    FBProfileVideoComponentListenerAnnouncer *_profileVideoComponentListenerAnnouncer;
    _Bool _underlayEnabled;
    NSString *_framesEntryPoint;
    FBUnderlayLoadingIndicatorViewController *_loadingIndicatorViewController;
    _Bool _hasRunStartupFlow;
    FBProfileCoverPhotoComponentUploadListenerAnnouncer *_profileCoverPhotoComponentUploadListenerAnnouncer;
    FBProfileInlineComposerManager *_inlineComposerManager;
    FBProfileIntroCardSectionScrollingListenerAnnouncer *_introCardScrollingListenerAnnouncer;
    _Bool _transparentNavBar;
    FBTransparentNavigationBarFader *_navigationBarFader;
    FBScrollViewPositionModifyingController *_scrollPositionModifyingController;
    _Bool _profileNuxHasTriggered;
    FBTimer *_profileNuxDidUpdatedPersonTimer;
    _Bool _profileNuxHasShown;
    NSString *_analyticsModule;
    FBProfileWaterMarkTracker *_profileWaterMarkTracker;
    _Bool _shouldEnableIntroCardSingleEntryEdit;
    FBProfileIntroCardEditViewControllerPresenter *_profileIntroCardEditVCPresenter;
    _Bool _shouldEnableProfileEdit;
    FBProfileToolbox *_profileToolbox;
    FBFeedViewControllerLifecycleStatus *_feedStatus;
    FBProfileWaitTimeLogger *_protilePerfLogger;
    FBProfileWaitTimeLogger *_initialStoriesWaitTimeLogger;
    _Bool _singleListRootQueryDidCompleteLoad;
    FBProfileSessionLogger *_profileSessionLogger;
    FBProfileCoverPhotoUploadFlowController *_coverPhotoUploadFlowController;
    FBProfilePictureUploadFlowController *_profilePictureUploadFlowController;
}

- (void).cxx_destruct;
- (void)showAfterVisitSurveyIfNeeded;
- (void)didCompleteLoad;
- (void)didFailLoad;
- (void)didStartLoad;
- (void)scrollViewWillBeginDragging:(struct FBScrollViewState)arg1;
- (struct CGRect)fullScreenTransitionBoundsForView:(id)arg1;
- (void)scrollToIntroSection;
- (_Bool)alreadyOpenWithViewController:(id)arg1;
@property(readonly, nonatomic) unsigned long long preferredPresentationOptions;
- (void)personObjectDidUpdate:(id)arg1;
- (void)coverPhotoUploadFailed;
- (void)coverPhotoUploadStarted;
- (void)_setFramesEntryPoint:(id)arg1;
- (void)_queryProfilePictureAndUpdateCLC;
- (void)_queryCoverPhotoAndUpdateCLC;
- (void)profilePhotoOpener:(id)arg1 didDeletePhoto:(id)arg2;
- (void)_reloadStickyStatusBar:(_Bool)arg1;
- (void)_setupNavigationRightBarButton;
- (void)setupCogButton:(id)arg1 target:(id)arg2;
- (void)profileIntroCardDidTapUpdateInfoFooterButton;
- (void)profileIntroCardDidTapSingleEntryEditButton;
- (void)profileIntroCardOtherAccountsComponentUpdateInfo;
- (void)profileIntroCardPublicAboutComponentUpdateInfo;
- (_Bool)_switchOnAndOffForProfileInlineSingleEditWithReferrerType:(id)arg1;
- (void)_switchOnAndOffForProfileInlineSingleEditByTappingCogIcon;
- (void)_navigateToProfileEdit;
- (id)person;
- (id)scrollView;
- (void)openCoverPhotoWithPhoto:(id)arg1;
- (void)coverPhotoDidChange:(id)arg1;
@property(readonly, nonatomic) FBProfileCoverPhotoUploadFlowController *coverPhotoUploadFlowController; // @synthesize coverPhotoUploadFlowController=_coverPhotoUploadFlowController;
- (void)profilePictureFailChange:(id)arg1;
- (void)profilePictureWillChange:(id)arg1;
- (void)profileVideoUploadDidFail:(id)arg1 uploadFlowController:(id)arg2;
- (void)profileVideoDidUploadWithServerVideoID:(id)arg1 uploadFlowController:(id)arg2;
- (void)profileVideoWillUpload:(id)arg1;
- (void)openProfilePhotoOrVideoForPerson:(id)arg1 uploadFlowController:(id)arg2;
- (void)profilePictureDidChange:(id)arg1;
@property(readonly, nonatomic) FBProfilePictureUploadFlowController *profilePictureUploadFlowController; // @synthesize profilePictureUploadFlowController=_profilePictureUploadFlowController;
- (id)profileIntroCardEditVCPresenter;
- (void)timelineTapresponder:(id)arg1 handleChangeCoverPhoto:(id)arg2;
- (void)timelineTapresponder:(id)arg1 handleChangeProfilePicture:(id)arg2;
- (void)openProfileRefresher;
- (void)timelineTapResponderDidReport:(id)arg1;
- (void)profileFriendingActionManager:(id)arg1 forTargetID:(id)arg2;
- (void)timelineTapResponderHandleSyncTimelineData:(id)arg1 onNextView:(_Bool)arg2;
- (void)timelineTapResponder:(id)arg1 didDeletePhoto:(id)arg2;
- (void)presentFriendingUpsellDialog:(id)arg1;
- (void)timelineTapResponder:(id)arg1 didBlockFromConfirmationView:(id)arg2;
- (void)actionBarDidTapButtonWithType:(id)arg1;
- (void)_internalPresentWithNavigationInfo:(id)arg1;
- (id)timelineTapResponder:(id)arg1 viewForPresentingActionSheetFromView:(id)arg2;
- (void)showCoverActionSheet:(id)arg1 withPhoto:(id)arg2;
- (void)showProfileVideoFullscreen;
- (void)showProfilePictureActionSheet:(id)arg1 person:(id)arg2;
- (_Bool)isViewingSelf;
- (id)analyticsExtras;
- (id)analyticsModule;
- (void)_handleStartupFlowTraits:(id)arg1;
- (void)_runStartupFlowTraits:(id)arg1;
- (void)runStartupTraits:(id)arg1;
- (void)scrollViewDidScrollWithState:(struct FBScrollViewState)arg1;
- (id)title;
- (_Bool)fb_useDefaultSearchText;
- (id)fb_searchContext;
- (void)willMoveToParentViewController:(id)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (unsigned long long)fb_searchFieldStyle;
- (id)initWithSession:(id)arg1 person:(id)arg2 timelineAnalytics:(id)arg3 configuration:(id)arg4 profileTraits:(id)arg5 profileSessionLogger:(id)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) unsigned long long preferredPresentationMethod;
@property(readonly) Class superclass;

@end
