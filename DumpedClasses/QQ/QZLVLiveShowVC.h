//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZoneWebViewController.h"

#import "QAVChangeRoleDelegate.h"

@class NSDictionary, NSMutableArray, NSString, QZLiveViewController, UIPanGestureRecognizer, UITapGestureRecognizer;

@interface QZLVLiveShowVC : QZoneWebViewController <QAVChangeRoleDelegate>
{
    NSMutableArray *_debugRoleButtonsArray;
    long long _statusBarStyle;
    _Bool _isMoving;
    _Bool _isInitialPos;
    _Bool _isClearMode;
    _Bool _isAllow;
    QZLiveViewController *_parentController;
    UIPanGestureRecognizer *_slideRecognizer;
    UITapGestureRecognizer *_tapRecognizer;
    long long _panDirection;
    NSDictionary *_registerLiveQuery;
    struct CGPoint _startTouchPoint;
    struct CGRect _forbidDragTouchRect;
}

@property(retain, nonatomic) NSDictionary *registerLiveQuery; // @synthesize registerLiveQuery=_registerLiveQuery;
@property(nonatomic) _Bool isAllow; // @synthesize isAllow=_isAllow;
@property(nonatomic) _Bool isClearMode; // @synthesize isClearMode=_isClearMode;
@property(nonatomic) struct CGRect forbidDragTouchRect; // @synthesize forbidDragTouchRect=_forbidDragTouchRect;
@property(nonatomic) long long panDirection; // @synthesize panDirection=_panDirection;
@property(nonatomic) struct CGPoint startTouchPoint; // @synthesize startTouchPoint=_startTouchPoint;
@property(retain, nonatomic) UITapGestureRecognizer *tapRecognizer; // @synthesize tapRecognizer=_tapRecognizer;
@property(retain, nonatomic) UIPanGestureRecognizer *slideRecognizer; // @synthesize slideRecognizer=_slideRecognizer;
@property(nonatomic) _Bool isInitialPos; // @synthesize isInitialPos=_isInitialPos;
@property(nonatomic) _Bool isMoving; // @synthesize isMoving=_isMoving;
@property(nonatomic) __weak QZLiveViewController *parentController; // @synthesize parentController=_parentController;
- (void).cxx_destruct;
- (void)hideInputBar;
- (void)didReceiveMemoryWarning;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)dispatchToJsOperationCode:(unsigned long long)arg1;
- (void)dispatchToJsStatusCode:(unsigned long long)arg1;
- (void)onMicMsg:(id)arg1;
- (void)checkLiveState:(id)arg1;
- (void)openOtherLive:(id)arg1 hostUin:(id)arg2;
- (void)registerLiveState:(id)arg1;
- (void)h5HostLeave;
- (void)configGesture;
- (void)OnChangeRoleDelegate:(int)arg1 WithErrinfo:(id)arg2;
- (void)changeRoleDebug:(id)arg1;
- (void)hideOrShowChangeRoleButton;
- (void)addChangeRoleButton;
- (void)configCustomUI;
- (void)isAllowClean:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)dealloc;
- (void)viewDidLoad;
- (void)tapRecognizerReceiver:(id)arg1;
- (void)moveToInitial;
- (void)moveToTarget;
- (void)paningGestureReceive:(id)arg1;
- (void)checkPanDirection:(id)arg1;
- (float)checkOffsetX:(float)arg1;
- (void)moveViewToX:(float)arg1;
- (void)targetFrame;
- (void)initialFrame;
- (void)panStop;
- (void)panStart;
- (id)topView;
- (void)uninstallPanGestureRecognizer;
- (void)installPanGestureRecognizer;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
