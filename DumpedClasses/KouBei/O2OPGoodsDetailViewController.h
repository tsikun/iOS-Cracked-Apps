//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "O2OPBaseViewController.h"

#import "BEEPhotoBrowserDelegate-Protocol.h"
#import "O2OPSchemeProtocol-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class APExceptionView, NSString, O2OPGoodsDetailModel, O2OPGoodsDetailNavigationBar, UIButton, UILabel, UITableView, UIView, VZFPagingView;

@interface O2OPGoodsDetailViewController : O2OPBaseViewController <UITableViewDelegate, UITableViewDataSource, BEEPhotoBrowserDelegate, O2OPSchemeProtocol>
{
    _Bool _shouldShowOrderListGuide;
    O2OPGoodsDetailNavigationBar *_navigationBar;
    UIView *_contentView;
    UITableView *_tableView;
    VZFPagingView *_galleryView;
    UILabel *_indexLabel;
    UIButton *_buyButton;
    APExceptionView *_exceptionView;
    O2OPGoodsDetailModel *_detailModel;
    NSString *_shareId;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(nonatomic) _Bool shouldShowOrderListGuide; // @synthesize shouldShowOrderListGuide=_shouldShowOrderListGuide;
@property(copy, nonatomic) NSString *shareId; // @synthesize shareId=_shareId;
@property(retain, nonatomic) O2OPGoodsDetailModel *detailModel; // @synthesize detailModel=_detailModel;
@property(retain, nonatomic) APExceptionView *exceptionView; // @synthesize exceptionView=_exceptionView;
@property(retain, nonatomic) UIButton *buyButton; // @synthesize buyButton=_buyButton;
@property(retain, nonatomic) UILabel *indexLabel; // @synthesize indexLabel=_indexLabel;
@property(retain, nonatomic) VZFPagingView *galleryView; // @synthesize galleryView=_galleryView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) O2OPGoodsDetailNavigationBar *navigationBar; // @synthesize navigationBar=_navigationBar;
- (void).cxx_destruct;
- (id)pageParams;
- (id)pageSpm;
- (id)retrieveCommentItems;
- (void)rewardCommentNotiHandler:(id)arg1;
- (void)likeCommentNotiHandler:(id)arg1;
- (void)refresh:(id)arg1;
- (void)tickingDidEnd:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)itemForCellAtIndexPath:(id)arg1;
- (void)CDPViewsDidLoad:(id)arg1;
- (void)loadCDPData;
- (void)showExceptionView:(id)arg1;
- (void)showInvalidPage;
- (void)invalidateButtonAction;
- (void)reload;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)showLoading:(id)arg1;
- (void)locate;
- (void)buyButtonPressed:(id)arg1;
- (void)updateBottomView;
- (void)photoBrowser:(id)arg1 didChangeToIndex:(unsigned long long)arg2;
- (id)photoBrowser:(id)arg1 photoAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPhotosInPhotoBrowser:(id)arg1;
- (void)imageTapped:(id)arg1;
- (void)updateIndexLabel;
- (void)layoutIndexLabel;
- (void)updateHeaderView;
- (void)updateNavigationBar;
- (void)setupNavigationBar;
- (_Bool)autohideNavigationBar;
- (void)showOrderListGuideIfNeeded;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)dealloc;
- (_Bool)isSameVCForScheme:(id)arg1;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

