//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYPlayerFloatingHeaderViewBase.h"

#import "IQYDataLoadManagerDelegate-Protocol.h"
#import "QYIphoneToolBarDelegate-Protocol.h"
#import "QYTableViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class IQYCard3URLManager, IQYHandleReplyManager, NSDictionary, NSIndexPath, NSString, QYIphoneToolBar, QYPlayerController, QYTableView, QYUBlockDataV3, QYUPageDataV3, UILabel, UITableViewCell, UITapGestureRecognizer, UIView;
@protocol QYIphoneAllRepliesViewDelegate;

@interface QYIphoneAllRepliesView : QYPlayerFloatingHeaderViewBase <IQYDataLoadManagerDelegate, QYIphoneToolBarDelegate, UIGestureRecognizerDelegate, UITableViewDataSource, UITableViewDelegate, QYTableViewDelegate>
{
    IQYCard3URLManager *_allRepliesDataManager;
    IQYHandleReplyManager *_sendReplyManager;
    QYPlayerController *_playerController;
    UILabel *_titleLable;
    _Bool _canShowInputBox;
    _Bool _canFakeWrite;
    _Bool _isLiked;
    id <QYIphoneAllRepliesViewDelegate> delegate;
    UIView *_shadowView;
    QYIphoneToolBar *_toolBar;
    NSIndexPath *_curCommentPath;
    NSDictionary *_commentDic;
    QYUBlockDataV3 *_commentReplyBlock87;
    QYTableView *_replyTableView;
    QYUPageDataV3 *_pageData;
    NSString *_nextUrl;
    UITableViewCell *_showAllRepliedCell;
    UIView *_pannelHeaderView;
    UITapGestureRecognizer *_padHideGesture;
}

@property(retain) UITapGestureRecognizer *padHideGesture; // @synthesize padHideGesture=_padHideGesture;
@property(retain, nonatomic) UIView *pannelHeaderView; // @synthesize pannelHeaderView=_pannelHeaderView;
@property(nonatomic) _Bool isLiked; // @synthesize isLiked=_isLiked;
@property(retain, nonatomic) UITableViewCell *showAllRepliedCell; // @synthesize showAllRepliedCell=_showAllRepliedCell;
@property(copy, nonatomic) NSString *nextUrl; // @synthesize nextUrl=_nextUrl;
@property(retain, nonatomic) QYUPageDataV3 *pageData; // @synthesize pageData=_pageData;
@property(retain, nonatomic) QYTableView *replyTableView; // @synthesize replyTableView=_replyTableView;
@property(nonatomic) _Bool canFakeWrite; // @synthesize canFakeWrite=_canFakeWrite;
@property(nonatomic) _Bool canShowInputBox; // @synthesize canShowInputBox=_canShowInputBox;
@property(retain, nonatomic) QYUBlockDataV3 *commentReplyBlock87; // @synthesize commentReplyBlock87=_commentReplyBlock87;
@property(retain, nonatomic) NSDictionary *commentDic; // @synthesize commentDic=_commentDic;
@property(retain, nonatomic) NSIndexPath *curCommentPath; // @synthesize curCommentPath=_curCommentPath;
@property(retain, nonatomic) QYIphoneToolBar *toolBar; // @synthesize toolBar=_toolBar;
@property(retain, nonatomic) UIView *shadowView; // @synthesize shadowView=_shadowView;
@property(nonatomic) __weak id <QYIphoneAllRepliesViewDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)keyboardDidHide:(id)arg1;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)removeThirdLoginObserver;
- (void)removeObserverForKeyboard;
- (void)registerObserverForKeyBoard;
- (void)resignObserver;
- (void)removeObserver;
- (void)addThirdLoginObserver;
- (void)openToolBar;
- (void)sendReplyToHost:(id)arg1 indexPath:(id)arg2 pingbackDic:(id)arg3;
- (id)getParentView;
- (id)getCommentCardId;
- (id)fakeCommentBlocks;
- (void)jumpToNativePageWithEvent:(id)arg1 cell:(id)arg2;
- (void)sendClickPingbackByEvent:(id)arg1 cardData:(id)arg2;
- (void)handleWithEvent:(id)arg1 cell:(id)arg2;
- (id)cellCheck:(id)arg1 tableView:(id)arg2 indexPath:(id)arg3;
- (id)reuseDefaultCellByTableView:(id)arg1 indexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (void)addGestureForHideBar;
- (void)removeGestureWhenHide;
- (void)closeShadowWhenHide;
- (void)addShadowWhenEding;
- (void)allowControllerToRotate:(_Bool)arg1;
- (void)toolBarBeginEdited;
- (void)toolBarFinishEdited;
- (void)hideToolBar;
- (void)removeKeyBoard;
- (void)likeFailedWithCode:(id)arg1;
- (void)retryComment:(id)arg1;
- (void)showAddReplyPromptViewWithSuccess:(_Bool)arg1 withType:(int)arg2;
- (void)sendBtnClickPingback;
- (void)sendContentFromToolBar:(id)arg1;
- (id)stringFromDate:(id)arg1;
- (void)setReplyBlockWithContent:(id)arg1 replyId:(id)arg2;
- (void)createReplyDummy:(id)arg1;
- (void)sendReplyAndCreateDummy:(id)arg1;
- (void)sendReplyToServer:(id)arg1 replyId:(id)arg2 content:(id)arg3;
- (void)shouldGetDataInTableView:(id)arg1;
- (void)shouldRefreshInTableView:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)refreshAfterAddFakeReply:(id)arg1 indexPath:(id)arg2;
- (void)refreshAfterAddFakeReply;
- (void)addDummyToReplyView;
- (void)getReplyFaild;
- (void)getReplyfaildZero;
- (void)loadDataEndNoData;
- (void)tableReloadNoData;
- (void)loadReplyDataEnd;
- (void)createToolBar;
- (void)didMoveToSuperview;
- (void)createTableView;
- (void)initSubViews;
- (void)headerBtnClick;
- (id)initWithFrame:(struct CGRect)arg1 playerController:(id)arg2;
- (void)closeToolBarWhenLike;
- (void)closeSelf;
- (void)mergeCommentWithPage:(id)arg1;
- (void)orderByPriority;
- (void)sendShowPingback;
- (void)organizePageData:(_Bool)arg1;
- (void)setMyPageData:(id)arg1;
- (void)dataLoadManagerFinished:(id)arg1;
- (void)dataLoadManagerFailed:(id)arg1;
- (void)sendReplyWithCmtId:(id)arg1 replyId:(id)arg2 content:(id)arg3;
- (void)getAllrepliesDataWithUrl:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

