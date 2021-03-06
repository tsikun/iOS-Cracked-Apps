//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PlayerBaseViewController.h"

#import "IQYWebViewProtocol-Protocol.h"
#import "QYNextIdleWebviewPhoneDelegate-Protocol.h"
#import "TouchViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSDictionary, NSString, Playershare, QYNextIdleWebviewPhone, QYPlayerControllerCenter, QYPlayerViewController, TouchView, UIView, UIViewController;
@protocol QYPlayerControllerDelegate;

@interface QYPlayerController : PlayerBaseViewController <TouchViewDelegate, QYNextIdleWebviewPhoneDelegate, IQYWebViewProtocol, UIGestureRecognizerDelegate>
{
    UIViewController *_parentController;
    QYPlayerControllerCenter *_playControllerCenter;
    int _playerType;
    _Bool _isOpenFromQimoShortCut;
    UIView *_PIPMaskView;
    TouchView *_nextIdleMaskView;
    _Bool _isShowingRewardOverLay;
    _Bool _shouldRorate;
    _Bool _isDefaultLands;
    _Bool _isOfflineToRotate;
    _Bool _isNeedShowFeedbackBtn;
    _Bool _isShareSuspension;
    _Bool _playerKeyboardActive;
    _Bool _isSimplePlayer;
    _Bool _isOutsideVideo;
    _Bool _isCurrentMute;
    int _playerOpenType;
    int _openType;
    id <QYPlayerControllerDelegate> _delegate;
    Playershare *_playerDataShare;
    QYPlayerViewController *_playerVC;
    UIViewController *_playerController;
    NSDictionary *_cardTypeDict;
    id _paopaoDelegate;
    SEL _paopaoActionSel;
    NSString *_tuneType;
    NSString *_thridAppUrl;
    CDUnknownBlockType _closePlayerCallback;
    long long _playerOpenBaseType;
    NSString *_aid;
    NSString *_tvid;
    NSString *_ctype;
    long long _countOfCovers;
    QYNextIdleWebviewPhone *_nextIdleView;
}

+ (id)getQYPlayerControllerVersion;
+ (void)resetQYPlayerConfig;
+ (_Bool)isPlayerScreenIsLocked;
+ (void)setShouldMute:(_Bool)arg1;
+ (_Bool)isAirPlayActive;
+ (int)clearCache;
+ (void)createAdsLogFile;
+ (id)sharedInstance;
@property(retain, nonatomic) QYNextIdleWebviewPhone *nextIdleView; // @synthesize nextIdleView=_nextIdleView;
@property(nonatomic) long long countOfCovers; // @synthesize countOfCovers=_countOfCovers;
@property(nonatomic) int openType; // @synthesize openType=_openType;
@property(nonatomic) _Bool isCurrentMute; // @synthesize isCurrentMute=_isCurrentMute;
@property(copy, nonatomic) NSString *ctype; // @synthesize ctype=_ctype;
@property(copy, nonatomic) NSString *tvid; // @synthesize tvid=_tvid;
@property(copy, nonatomic) NSString *aid; // @synthesize aid=_aid;
@property(nonatomic) long long playerOpenBaseType; // @synthesize playerOpenBaseType=_playerOpenBaseType;
@property(copy, nonatomic) CDUnknownBlockType closePlayerCallback; // @synthesize closePlayerCallback=_closePlayerCallback;
@property(copy, nonatomic) NSString *thridAppUrl; // @synthesize thridAppUrl=_thridAppUrl;
@property(copy, nonatomic) NSString *tuneType; // @synthesize tuneType=_tuneType;
@property(nonatomic) int playerOpenType; // @synthesize playerOpenType=_playerOpenType;
@property(nonatomic) _Bool isOutsideVideo; // @synthesize isOutsideVideo=_isOutsideVideo;
@property(nonatomic) _Bool isSimplePlayer; // @synthesize isSimplePlayer=_isSimplePlayer;
@property(nonatomic) _Bool isOpenFromQimoShortCut; // @synthesize isOpenFromQimoShortCut=_isOpenFromQimoShortCut;
@property(nonatomic) SEL paopaoActionSel; // @synthesize paopaoActionSel=_paopaoActionSel;
@property(nonatomic) __weak id paopaoDelegate; // @synthesize paopaoDelegate=_paopaoDelegate;
@property(nonatomic) _Bool playerKeyboardActive; // @synthesize playerKeyboardActive=_playerKeyboardActive;
@property(nonatomic) _Bool isShareSuspension; // @synthesize isShareSuspension=_isShareSuspension;
@property(retain, nonatomic) NSDictionary *cardTypeDict; // @synthesize cardTypeDict=_cardTypeDict;
@property(nonatomic) _Bool isNeedShowFeedbackBtn; // @synthesize isNeedShowFeedbackBtn=_isNeedShowFeedbackBtn;
@property(nonatomic) _Bool isOfflineToRotate; // @synthesize isOfflineToRotate=_isOfflineToRotate;
@property(nonatomic) _Bool isDefaultLands; // @synthesize isDefaultLands=_isDefaultLands;
@property(nonatomic) __weak UIViewController *playerController; // @synthesize playerController=_playerController;
@property(nonatomic) _Bool shouldRorate; // @synthesize shouldRorate=_shouldRorate;
@property(retain, nonatomic) QYPlayerControllerCenter *playControllerCenter; // @synthesize playControllerCenter=_playControllerCenter;
@property(retain, nonatomic) QYPlayerViewController *playerVC; // @synthesize playerVC=_playerVC;
@property(retain, nonatomic) Playershare *playerDataShare; // @synthesize playerDataShare=_playerDataShare;
@property(nonatomic) int playerType; // @synthesize playerType=_playerType;
@property(nonatomic) __weak id <QYPlayerControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)appStoreFromH5Closed;
- (void)closeInnerWebPage:(id)arg1;
- (_Bool)webView:(id)arg1 shouldStartLoadWithRequest:(id)arg2 navigationType:(long long)arg3;
- (void)webView:(id)arg1 didFailLoadWithError:(id)arg2;
- (void)webViewDidFinishLoad:(id)arg1;
- (void)webViewDidStartLoad:(id)arg1;
- (_Bool)isPlayerCovered;
- (void)removeCoverForPlayer;
- (void)addCoverForPlayer;
- (void)removeNextIldeMaskView;
- (void)touchHandle;
- (void)createNextIdleMaskView:(struct CGRect)arg1;
- (void)loginDone:(id)arg1;
- (void)loginOpened;
- (void)removeNextIdleWeb;
- (void)closeNextIdleWebForRedirectJump:(_Bool)arg1;
- (void)closeNextIdleWeb;
- (void)removeNextIdleWebview;
- (void)showHalfWebViewWithWebInfo:(id)arg1;
- (void)sendPlayerOperationNotification:(unsigned long long)arg1;
- (void)closeCallbackByManual:(_Bool)arg1;
- (void)cleanWithManualClose:(_Bool)arg1;
- (_Bool)playerIsOpenFromModuleRouting;
- (void)showInAppPurchase:(id)arg1;
- (_Bool)isCurrentPlayerInUse;
- (void)recoverFromPIP;
- (void)showShareByUserInfo:(id)arg1 shareType:(int)arg2;
- (void)showWebVcFromType:(int)arg1 webInfo:(id)arg2;
- (void)showAccountWithType:(int)arg1 userInfo:(id)arg2;
- (void)showInParentController:(id)arg1;
- (void)showOutsideAddDanmuData:(id)arg1;
- (void)pausePlayerByCoverView;
- (void)sendWebViewLoadPingback:(int)arg1;
- (_Bool)isPlayingInside;
- (void)resetQimoFromShortCut;
- (_Bool)isQimoReopenFromShortCut;
- (_Bool)isPushed;
- (_Bool)isExistPushed;
- (_Bool)reopenFromPaopao;
- (void)offlineSharePaopaoBack;
- (void)jumpToUserPage:(id)arg1;
- (void)changeToMiniScreenWithFinishBlock:(CDUnknownBlockType)arg1;
- (void)changeToMiniScreenModeForShare;
- (void)backPlayerFromEcommerce:(int)arg1;
- (void)nextIdleWebViewClosed;
- (void)backPlayerFromWebVc:(int)arg1;
- (int)currentScreenMode;
- (_Bool)isExistSuspension;
- (_Bool)isHasEpisode;
- (_Bool)isFromBroadcast;
- (void)dingyueForUCard:(id)arg1;
- (void)backPlayerFromModifyPassport:(id)arg1;
- (void)backPlayerFromQiXiu;
- (void)logEventWithParameterDict:(id)arg1;
- (void)blockShowPingBackWithParameterDict:(id)arg1;
- (void)updateAid:(id)arg1 tvid:(id)arg2 ctype:(id)arg3;
- (void)actionForPlayerWithEvent:(id)arg1 inCell:(id)arg2 h5Title:(id)arg3;
- (void)actionFromPlayerByEvent:(id)arg1 cell:(id)arg2 h5Title:(id)arg3;
- (void)actionWithEventFromPlayer:(id)arg1 inCell:(id)arg2;
- (void)startWaitToPush;
- (id)getAirPlayPushItem;
- (void)openAirPlayTest;
- (void)openDLNATest;
- (void)prepareDLNATest;
- (void)goBackPlayFromMovieTicket;
- (void)goBackPlayFromRead;
- (void)goBackPlayFromShare;
- (void)goBackPlayFromPaopaoActor;
- (void)goBackPlayFromPaopao;
- (void)PlayerWillDisAppearAnimationEnd;
- (void)PlayerAppearAnimationEnd;
- (void)setVolumeLevelAfterEnterQiXiu;
- (void)enterRead:(id)arg1 toHomePage:(_Bool)arg2;
- (void)enterQiXiu:(id)arg1;
- (void)rewardVideoSuccess:(id)arg1;
- (void)closeRewardView;
- (void)playerOpenRewardView:(id)arg1;
- (void)registrationJumpWithConfiguration:(id)arg1 userInfo:(id)arg2;
- (void)moduleRoutingWithConfiguration:(id)arg1 userInfo:(id)arg2;
- (void)jumpToPaopaoPausePlayer;
- (void)backFromEOpenModule;
- (void)resetVolumeForCorver;
- (void)changeVolumeForCorver;
- (void)enterDongleMallWithDic:(id)arg1;
- (void)enterPaoPaoWithDicDataWithPlayer;
- (void)enterPaoPaoWithDicDataFromActorLink:(id)arg1;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)viewWillLayoutSubviews;
- (void)willBeShowedAfterCommonVCDismissed;
- (void)willBeShowed;
- (void)clean;
- (_Bool)isBaozhangPopViewShowing;
- (void)commitBaozhangData:(id)arg1;
- (_Bool)isResponseGesture;
- (_Bool)isMiniScreen;
- (void)qmPausePlay;
- (void)showAccessoryViews;
- (void)autoHideAccessoryViews;
- (id)getContentViewController;
- (id)getContentView;
- (double)playerCurrentTime;
- (id)playerData;
- (void)showAlert:(id)arg1;
- (_Bool)isShowingRewardOverLay;
- (_Bool)isShowingRead;
- (_Bool)isShareViewShowing;
- (void)afterAccountViewClosed:(id)arg1;
- (void)removeSelf;
- (void)closePlayer:(_Bool)arg1 isManualClose:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)pageViewShowPingBackWithParameterDict:(id)arg1;
- (void)pageViewShowPingBackWithRpage:(id)arg1;
- (void)blockshowPingbackWithBlock:(id)arg1 position:(id)arg2 rpage:(id)arg3;
- (void)addLongYuanStatistics:(id)arg1 rpage:(id)arg2 block:(id)arg3;
- (void)playerController:(id)arg1 closePlayer:(_Bool)arg2 isManualClose:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)showPIPMaskView:(_Bool)arg1;
- (_Bool)isPlayerFront;
- (void)dismissPlayer;
- (void)openOutsidePlayerByData:(id)arg1;
- (void)openPlayerByData:(id)arg1;
- (void)setEnergerManager;
- (void)showPlayerWithType:(int)arg1 parent:(id)arg2;
- (void)playerAnimation:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (id)init;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

