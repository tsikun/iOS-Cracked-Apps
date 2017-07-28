//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class FALCWeekDynamicList, NSString, UIButton, UILabel, UITableView;

@interface FALiveWeekDynamicController : FAView <UITableViewDataSource, UITableViewDelegate>
{
    long long _weekStarUserId;
    UITableView *_tableView;
    FALCWeekDynamicList *_dynamicList;
    UILabel *_timeLab;
    long long _style;
    UIButton *_tipsBtn;
}

@property(retain, nonatomic) UIButton *tipsBtn; // @synthesize tipsBtn=_tipsBtn;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
@property(retain, nonatomic) UILabel *timeLab; // @synthesize timeLab=_timeLab;
@property(retain, nonatomic) FALCWeekDynamicList *dynamicList; // @synthesize dynamicList=_dynamicList;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) long long weekStarUserId; // @synthesize weekStarUserId=_weekStarUserId;
- (void).cxx_destruct;
- (void)dealloc;
- (void)enterRoomSEL;
- (void)tipsBtnClick;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)reloadDynamicInfo;
- (void)showNoDataViewAndCallBack;
- (void)getWeekStarDynamicList;
- (void)detailBtnClick:(id)arg1;
- (void)configSubViews;
- (id)initWithFrame:(struct CGRect)arg1 style:(long long)arg2 weekStarUserId:(long long)arg3;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
