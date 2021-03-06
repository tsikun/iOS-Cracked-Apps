//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYMMovieCommonViewController.h"

#import "QYDataManagerDelegate-Protocol.h"
#import "QYMCinemaDetailTimeCellDelegate-Protocol.h"
#import "QYMGalleryViewDelegate-Protocol.h"
#import "QYMTableViewDelegate-Protocol.h"
#import "QYMovieOperationAdViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSArray, NSMutableArray, NSString, NSTimer, NotesView, QYCinemaCollectManager, QYCinemaData, QYCinemaDetailData, QYCinemaDetailManager, QYCinemaMovieData, QYCinemaMovieIdSessionData, QYCinemaMovieSessionManager, QYMCinemaDetailCouponView, QYMCinemaMovieSessionData, QYMCinemaSegment, QYMGalleryView, QYMMovieStackView, QYMTableView, QYMovieOperationAdView, UIButton, UIImageView, UILabel, UIView;

@interface QYMCinemaDetailViewController : QYMMovieCommonViewController <QYDataManagerDelegate, QYMGalleryViewDelegate, QYMCinemaDetailTimeCellDelegate, QYMTableViewDelegate, UITableViewDataSource, UITableViewDelegate, QYMovieOperationAdViewDelegate>
{
    UIView *_header;
    UIView *_tipView;
    UIView *_topView;
    UILabel *_titleLabel;
    UIView *_line;
    UIView *_line1;
    UIView *_line2;
    UIView *_sline;
    UILabel *_addressLabel;
    UIImageView *_phoneView;
    UIButton *_phoneBtn;
    UIButton *_favBtn;
    UIImageView *_detailInfoArrow;
    QYMGalleryView *_centerView;
    UIView *_bottomView;
    UILabel *_movieLabel;
    UILabel *_scoreLabel;
    QYMCinemaSegment *_cinemaSeg;
    QYMovieOperationAdView *_operationAdView;
    UIView *_activiryRemindView;
    UIImageView *_imageView;
    NotesView *_sessionLoadingView;
    QYMCinemaDetailCouponView *_couponView;
    _Bool _isReleased;
    _Bool _isShownOff;
    _Bool _isFavorite;
    _Bool _isRefresh;
    _Bool _movieIdSeesionSuccess;
    QYCinemaData *_cinemaData;
    QYCinemaDetailManager *_cinemaMgr;
    QYCinemaCollectManager *_collectMgr;
    QYCinemaMovieSessionManager *_sessionMgr;
    QYCinemaDetailData *_detailData;
    QYCinemaMovieData *_movieData;
    QYMCinemaMovieSessionData *_sessionData;
    QYCinemaMovieIdSessionData *_movieIdSessionData;
    NSArray *_movieArray;
    NSString *_movieID;
    long long _currentMovieIndex;
    QYMTableView *_cinemaDetailTableView;
    long long _selectData;
    NSMutableArray *_movieIds;
    QYMMovieStackView *_cinemaInfoStackView;
    NSString *_currentTime;
    NSTimer *_timer;
    NSString *_currentDate;
}

@property(copy, nonatomic) NSString *currentDate; // @synthesize currentDate=_currentDate;
@property(retain, nonatomic) NSTimer *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) NSString *currentTime; // @synthesize currentTime=_currentTime;
@property(nonatomic) _Bool movieIdSeesionSuccess; // @synthesize movieIdSeesionSuccess=_movieIdSeesionSuccess;
@property(retain, nonatomic) QYMMovieStackView *cinemaInfoStackView; // @synthesize cinemaInfoStackView=_cinemaInfoStackView;
@property(retain, nonatomic) NSMutableArray *movieIds; // @synthesize movieIds=_movieIds;
@property(nonatomic) long long selectData; // @synthesize selectData=_selectData;
@property(retain, nonatomic) QYMTableView *cinemaDetailTableView; // @synthesize cinemaDetailTableView=_cinemaDetailTableView;
@property(nonatomic) _Bool isRefresh; // @synthesize isRefresh=_isRefresh;
@property(nonatomic) _Bool isFavorite; // @synthesize isFavorite=_isFavorite;
@property(nonatomic) long long currentMovieIndex; // @synthesize currentMovieIndex=_currentMovieIndex;
@property(nonatomic) _Bool isShownOff; // @synthesize isShownOff=_isShownOff;
@property(nonatomic) _Bool isReleased; // @synthesize isReleased=_isReleased;
@property(retain, nonatomic) NSString *movieID; // @synthesize movieID=_movieID;
@property(retain, nonatomic) NSArray *movieArray; // @synthesize movieArray=_movieArray;
@property(retain, nonatomic) QYCinemaMovieIdSessionData *movieIdSessionData; // @synthesize movieIdSessionData=_movieIdSessionData;
@property(retain, nonatomic) QYMCinemaMovieSessionData *sessionData; // @synthesize sessionData=_sessionData;
@property(retain, nonatomic) QYCinemaMovieData *movieData; // @synthesize movieData=_movieData;
@property(retain, nonatomic) QYCinemaDetailData *detailData; // @synthesize detailData=_detailData;
@property(retain, nonatomic) QYCinemaMovieSessionManager *sessionMgr; // @synthesize sessionMgr=_sessionMgr;
@property(retain, nonatomic) QYCinemaCollectManager *collectMgr; // @synthesize collectMgr=_collectMgr;
@property(retain, nonatomic) QYCinemaDetailManager *cinemaMgr; // @synthesize cinemaMgr=_cinemaMgr;
@property(retain, nonatomic) QYCinemaData *cinemaData; // @synthesize cinemaData=_cinemaData;
- (void).cxx_destruct;
- (void)toBack;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (id)itemAtIndexPath:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)cinemaDetailTimeCell:(id)arg1 buttonClickedAtIndex:(long long)arg2;
- (void)toActivityView:(id)arg1;
- (void)galleryView:(id)arg1 selectedAtIndex:(long long)arg2 withData:(id)arg3;
- (void)galleryView:(id)arg1 scrollAtIndex:(long long)arg2 withData:(id)arg3;
- (void)dataManagerFailed:(id)arg1;
- (void)dataManagerFinished:(id)arg1;
- (void)actionSheet:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)shouldRefreshInTableView:(id)arg1;
- (void)sendSessionRequest:(id)arg1;
- (void)sendRequest;
- (void)redrawHeaderView;
- (void)loadCouponData:(id)arg1;
- (void)hideMoreCouponData;
- (void)showMoreCouponData;
- (void)showCinemaAddressNavigation;
- (void)goToCinemaDetailInfoView;
- (void)callCinema;
- (void)touchInTopView:(id)arg1;
- (void)refreshCinemaStoreStatus;
- (void)cancelFavorite;
- (void)saveFavorite;
- (void)layoutAddressString:(id)arg1;
- (id)getRoundCornerLabelWithFont:(id)arg1 color:(id)arg2 text:(id)arg3;
- (id)getLabelWithFont:(id)arg1 withTextColor:(id)arg2;
- (void)refreshView;
- (_Bool)isFindCinemaMovieFromMovieID;
- (_Bool)isFindCinemaMovieFromSelected;
- (void)retryRequest;
- (void)setCinemaData:(id)arg1 withMovieID:(id)arg2 withDate:(id)arg3;
- (void)setCinemaData:(id)arg1 withMovieID:(id)arg2;
- (void)seatCannotChoose;
- (void)toSeatView;
- (void)toMovieDetail;
- (void)qyCommonViewDisappear;
- (void)qyCommonViewAppear;
- (void)showSessionIsLoading;
- (void)showNextSession;
- (void)showSessions;
- (void)addTipView:(id)arg1 currentIndexData:(id)arg2;
- (void)addOperationAdView:(id)arg1;
- (void)showEmptyViewBySession:(id)arg1;
- (void)reloadSessionsByIndex:(long long)arg1;
- (void)refreshCinemaSegment;
- (void)refreshBottom;
- (void)initTableView;
- (void)initCinemaSegment;
- (void)initBottom;
- (void)initCenter;
- (void)initCouponView;
- (void)initTop;
- (void)initTabBar;
- (void)statusBarClick;
- (void)didReceiveMemoryWarning;
- (void)getCurrentDate;
- (void)stopTimer;
- (void)starTimer;
- (void)viewDidLoad;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

