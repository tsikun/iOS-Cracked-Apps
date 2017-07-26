//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QLNewPseudoEditableViewController.h"

#import "P_QLDragToRefresh.h"
#import "P_QLScrollDataLoadHelperHost.h"
#import "QLJumpObjectOpenUrlDelegate.h"
#import "QLONAPosterViewActionDelegata.h"
#import "QNBWatchRecordUIDataManagerDelegate.h"
#import "UILoginViewButtonDelegate.h"
#import "UIWXLoginViewButtonDelegate.h"

@class NSMutableArray, NSString, QLQQLoginShowPopView, QLScrollDataLoadHelper, QLWXLoginShowPopView, UIImageView;

@interface QLNewRecentPlayController : QLNewPseudoEditableViewController <QLONAPosterViewActionDelegata, QNBWatchRecordUIDataManagerDelegate, P_QLScrollDataLoadHelperHost, P_QLDragToRefresh, UIWXLoginViewButtonDelegate, UILoginViewButtonDelegate, QLJumpObjectOpenUrlDelegate>
{
    NSMutableArray *items;
    NSMutableArray *sections;
    _Bool _draging;
    UIImageView *_imgHeadShadow;
    _Bool _isTableUpdating;
    _Bool _hasNextPage;
    _Bool _isLoadingPosters;
    _Bool _isPrevAllSelected;
    id <QLRecentPlayCtlSuperHierarchyDelegate> _fatherCtl;
    QLWXLoginShowPopView *_loginView;
    QLQQLoginShowPopView *_loginQQView;
    long long _dataType;
    QLScrollDataLoadHelper *_dlHelper;
}

+ (_Bool)OpenJumpUrlWithobject;
@property(nonatomic) _Bool isPrevAllSelected; // @synthesize isPrevAllSelected=_isPrevAllSelected;
@property(nonatomic) _Bool isLoadingPosters; // @synthesize isLoadingPosters=_isLoadingPosters;
@property(retain, nonatomic) QLScrollDataLoadHelper *dlHelper; // @synthesize dlHelper=_dlHelper;
@property(nonatomic) _Bool hasNextPage; // @synthesize hasNextPage=_hasNextPage;
@property(nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property(nonatomic) _Bool isTableUpdating; // @synthesize isTableUpdating=_isTableUpdating;
@property(retain, nonatomic) QLQQLoginShowPopView *loginQQView; // @synthesize loginQQView=_loginQQView;
@property(retain, nonatomic) QLWXLoginShowPopView *loginView; // @synthesize loginView=_loginView;
@property(nonatomic) __weak id <QLRecentPlayCtlSuperHierarchyDelegate> fatherCtl; // @synthesize fatherCtl=_fatherCtl;
- (void).cxx_destruct;
- (void)doReportShowUp;
- (id)pathStrForRemark;
- (void)ClickLogin:(id)arg1;
- (void)ClickWXLogin:(id)arg1;
- (void)loginChange:(id)arg1;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (void)preProcessPoster:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)getWatchRecord:(id)arg1;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)scroll_dlh_loadData:(_Bool)arg1 direction:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(_Bool)arg2;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (id)subtitleForEmpty;
- (id)titleForEmpty;
- (void)itemDeselectAll;
- (void)itemSelectAll;
- (unsigned long long)getAllCount;
- (_Bool)isDataSourceEmpty;
- (void)dragReload:(_Bool)arg1;
- (_Bool)hasFootterDragRefresh;
- (_Bool)hasHeaderDragRefresh;
- (id)dragRefreshView;
- (void)showErrorView;
- (struct CGRect)frameOfPageStatusView;
- (void)showEmpty:(_Bool)arg1;
- (void)enterForground:(id)arg1;
- (void)reportPageShowUp;
- (double)heightOfFatherNaviBarHeight;
- (void)refreshNaviBarItem;
- (void)showNaviBarItem;
- (void)hideNaviBarItem;
- (_Bool)navigationBarHidden;
- (void)showHeaderViewBottomShadow:(_Bool)arg1;
- (_Bool)isAllSelected;
- (_Bool)shouldSelectForIndexPath:(id)arg1;
- (void)deleteBatch;
- (_Bool)shouldAlldelete;
- (void)viewDidLoad;
- (_Bool)isEmpty;
- (void)loadRecentPlayItemsFromDB:(CDUnknownBlockType)arg1;
- (long long)numberOfSelectedItem;
- (id)getRecentplayReportTime;
- (void)setRecentplayReportTime;
- (int)getDayWithNow:(CDStruct_79f9e052)arg1 last:(CDStruct_79f9e052)arg2;
- (id)pageDescription;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)didReceiveMemoryWarning;
- (void)reloadTableData;
- (void)refreshTableviewHeight;
- (void)viewWillAppear:(_Bool)arg1;
- (void)popUp:(_Bool)arg1;
- (void)dealloc;
- (void)doThingsWithPopUp;
- (void)historyListUpdate:(id)arg1;
- (void)watchRecordUIDataChange:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithDataType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
