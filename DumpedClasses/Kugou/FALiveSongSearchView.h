//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FAView.h"

#import "FALCSongSearchHistoryTableViewDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"
#import "UITextFieldDelegate.h"

@class FALCSongSearchHistoryTableView, FALiveVodSongSheetView, NSMutableArray, NSString, UILabel, UITableView, UITextField, UIView;

@interface FALiveSongSearchView : FAView <UITableViewDelegate, UITableViewDataSource, UITextFieldDelegate, FALCSongSearchHistoryTableViewDelegate>
{
    int _requestType;
    id <FALiveSongSearchViewDelegate> _songSearchViewDelegate;
    id <FALiveContainViewDelegate> _containViewDelegate;
    unsigned long long _price;
    UITableView *_tableView;
    FALCSongSearchHistoryTableView *_historyTableView;
    NSMutableArray *_searchSongArray;
    UITextField *_textField;
    double _startTop;
    double _startHeight;
    NSString *_keyword;
    unsigned long long _pageNum;
    FALiveVodSongSheetView *_songSheetView;
    UIView *_headerView;
    UIView *_tableViewHeaderView;
    UILabel *_priceLabel;
}

@property(retain, nonatomic) UILabel *priceLabel; // @synthesize priceLabel=_priceLabel;
@property(retain, nonatomic) UIView *tableViewHeaderView; // @synthesize tableViewHeaderView=_tableViewHeaderView;
@property(retain, nonatomic) UIView *headerView; // @synthesize headerView=_headerView;
@property(retain, nonatomic) FALiveVodSongSheetView *songSheetView; // @synthesize songSheetView=_songSheetView;
@property(nonatomic) int requestType; // @synthesize requestType=_requestType;
@property(nonatomic) unsigned long long pageNum; // @synthesize pageNum=_pageNum;
@property(copy, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property(nonatomic) double startHeight; // @synthesize startHeight=_startHeight;
@property(nonatomic) double startTop; // @synthesize startTop=_startTop;
@property(retain, nonatomic) UITextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) NSMutableArray *searchSongArray; // @synthesize searchSongArray=_searchSongArray;
@property(retain, nonatomic) FALCSongSearchHistoryTableView *historyTableView; // @synthesize historyTableView=_historyTableView;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) unsigned long long price; // @synthesize price=_price;
@property(nonatomic) __weak id <FALiveContainViewDelegate> containViewDelegate; // @synthesize containViewDelegate=_containViewDelegate;
@property(nonatomic) __weak id <FALiveSongSearchViewDelegate> songSearchViewDelegate; // @synthesize songSearchViewDelegate=_songSearchViewDelegate;
- (void).cxx_destruct;
- (void)songHistoryTableViewDidSelectAtPosition:(long long)arg1 string:(id)arg2 isClearContentView:(_Bool)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (void)searchSongWithKeyWord:(id)arg1 isMore:(_Bool)arg2;
- (void)dealSearchSongWithKeyWord:(id)arg1;
- (void)postShowRemindNotice;
- (void)vodSongWithRow:(long long)arg1 andIsUseCard:(_Bool)arg2;
- (void)openChargeViewController;
- (void)hiddenVodSheet;
- (void)vodSongWithTitle:(id)arg1 WithName:(id)arg2 withPrice:(long long)arg3 withLeft:(long long)arg4 withDiscountName:(id)arg5 withIndex:(long long)arg6;
- (void)vodMVSongWithIndex:(long long)arg1 alertTitle:(id)arg2;
- (void)mvSongWithIndex:(long long)arg1;
- (void)vodSongWithIndex:(long long)arg1;
- (id)liveRoomInfo;
- (void)keyboardWillHide:(id)arg1;
- (void)keyboardWillShow:(id)arg1;
- (void)valueDidChange:(id)arg1;
- (void)endSearchBtnClick;
- (void)beginSearch;
- (void)dealloc;
- (void)layoutSubviews;
- (void)initTopView;
- (void)initView;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

