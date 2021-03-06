//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMAlreadyDownloadView.h"

#import "CMScrollIndexBarDelegate.h"
#import "MCSearchBarDelegate.h"
#import "NMAlreadyDownloadSongExpiredNotifyViewDelegate.h"
#import "NMMixedSongAddToPlaylistProgressViewDelegate.h"
#import "NMPlaylistManipulateDelegate.h"
#import "NMPlaylistSectionHeaderViewDelegate.h"
#import "NMScrollableTabViewDelegate.h"
#import "NMSongManageCellDelegate.h"
#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class CMScrollIndexBar, NMAlreadyDownloadResourceHeaderView, NMAlreadyDownloadSongExpiredNotifyView, NMMenuData, NMMenuDownSide, NMMixedSongAddToPlaylistProgressView, NMMyDownloadViewController, NMNoNetButton, NMPlaylistManipulateView, NMScrollableTabView, NMSong, NMTableViewContainer, NSMutableArray, NSMutableDictionary, NSString;

@interface NMAlreadyDownloadSongView : NMAlreadyDownloadView <MCSearchBarDelegate, NMSongManageCellDelegate, NMPlaylistManipulateDelegate, NMPlaylistSectionHeaderViewDelegate, NMMixedSongAddToPlaylistProgressViewDelegate, NMAlreadyDownloadSongExpiredNotifyViewDelegate, UITableViewDataSource, UITableViewDelegate, NMScrollableTabViewDelegate, CMScrollIndexBarDelegate>
{
    NSMutableArray *_songViewDataSource;
    NSMutableArray *_selectedSongArray;
    NSMutableArray *_alphabetSongArray;
    NSMutableDictionary *_songSectionIndexDict;
    NSMutableArray *_songIndexBarArray;
    NSMutableDictionary *_artistViewDataSource;
    NSMutableDictionary *_invalidArtistViewDataSource;
    NSMutableArray *_alphabetArtistArray;
    NSMutableDictionary *_artistSectionIndexDict;
    NSMutableArray *_artistIndexBarArray;
    NSMutableDictionary *_albumViewDataSource;
    NSMutableDictionary *_invalidAlbumViewDataSource;
    NSMutableArray *_alphabetAlbumArray;
    NSMutableDictionary *_albumSectionIndexDict;
    NSMutableArray *_albumIndexBarArray;
    NSMutableArray *_expiredSongArray;
    NMAlreadyDownloadSongExpiredNotifyView *_expiredNotifyView;
    _Bool _isLoading;
    unsigned long long _sortMode;
    long long _currentTabIndex;
    _Bool _firstShow;
    NSMutableArray *_searchDisplayArray;
    _Bool _isSearching;
    _Bool _needLoadData;
    NMAlreadyDownloadResourceHeaderView *_headerView;
    NMTableViewContainer *_tableViewContainer;
    NMMenuDownSide *_manageMenu;
    NMMenuData *_manageMenuItemSort;
    NMMenuData *_manageMenuItemMultiple;
    NMMenuData *_manageMenuItemiPod;
    NMMenuDownSide *_sortMenu;
    NMMenuData *_sortAtoZ;
    NMMenuData *_sortTime;
    _Bool _underMultiple;
    NMPlaylistManipulateView *_manipulateView;
    _Bool _isHidingMessageView;
    NMMixedSongAddToPlaylistProgressView *_iPodPorgressView;
    NMNoNetButton *_gotoiPodButton;
    _Bool _autoPlay;
    NMScrollableTabView *_tabView;
    CMScrollIndexBar *_indexBar;
    id <NMAlreadyDownloadSongViewDelegate> _delegate;
    NMMyDownloadViewController *_parentViewController;
    CDUnknownBlockType _autoPlayStartedBlock;
    NMSong *_currentSong;
}

@property(retain, nonatomic) NMSong *currentSong; // @synthesize currentSong=_currentSong;
@property(copy, nonatomic) CDUnknownBlockType autoPlayStartedBlock; // @synthesize autoPlayStartedBlock=_autoPlayStartedBlock;
@property(nonatomic) _Bool autoPlay; // @synthesize autoPlay=_autoPlay;
@property(nonatomic) __weak NMMyDownloadViewController *parentViewController; // @synthesize parentViewController=_parentViewController;
@property(nonatomic) __weak id <NMAlreadyDownloadSongViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) CMScrollIndexBar *indexBar; // @synthesize indexBar=_indexBar;
@property(retain, nonatomic) NMScrollableTabView *tabView; // @synthesize tabView=_tabView;
- (void).cxx_destruct;
- (id)currentLogPage;
- (void)addClickActionLog:(id)arg1 resourceId:(id)arg2;
- (void)addPageLog;
- (void)dealloc;
- (_Bool)checkNeedShowExpiredNotifyView;
- (void)closeExpiredNotifyView:(id)arg1;
- (void)gotoExpiredDetail:(id)arg1;
- (void)gotoiPodButtonClicked:(id)arg1;
- (void)mixedSongAddToPlaylistProgressView:(id)arg1 closeButtonClicked:(id)arg2;
- (void)deleteDownloadButtonClicked:(id)arg1;
- (void)addToPlaylistButtonClicked:(id)arg1;
- (void)playNextButtonClicked:(id)arg1;
- (void)resetForMultiple;
- (void)exitMultiple;
- (void)enterSort;
- (void)enteriPod;
- (void)enterMultiple;
- (void)playlistSectionHeaderView:(id)arg1 manageButtonClicked:(id)arg2;
- (void)updateSelectedSong:(id)arg1 checked:(_Bool)arg2;
- (void)onCheckBoxAll:(id)arg1;
- (void)songManageCell:(id)arg1 cellChecked:(_Bool)arg2;
- (void)playSelcetedSongList:(id)arg1 selectedIndex:(long long)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (void)resignSearchBar;
- (void)exitSearch;
- (void)switchExpiredNotifyView:(_Bool)arg1;
- (void)switchHeaderView:(_Bool)arg1;
- (void)switchPlayAllButton:(_Bool)arg1;
- (_Bool)mcsearchBarShouldReturn:(id)arg1;
- (void)mcsearchBarTextDidChange:(id)arg1;
- (void)mcsearchBarDidBeginEditing:(id)arg1;
- (void)gotoShowAlphabetMode;
- (void)gotoShowTimeMode;
- (void)playAllButtonClicked;
- (void)updateDataSourceAfterDeleteDownloadViewSource:(id)arg1;
- (void)doDeleteAlbum:(id)arg1;
- (void)doDeleteArtist:(id)arg1;
- (void)removeArtistImage:(id)arg1;
- (void)doDeleteSong:(id)arg1 viewMode:(unsigned long long)arg2;
- (void)deleteAlbum:(id)arg1;
- (void)deleteArtist:(id)arg1;
- (void)deleteSong:(id)arg1;
- (void)hideiPodProgressView;
- (void)showiPodProgressView;
- (void)mixedSongAddToPlaylistChanged:(id)arg1;
- (void)downloadSongChanged:(id)arg1;
- (void)tableReloadData;
- (void)tableReloadData:(id)arg1;
- (void)switchViewButtonClicked:(id)arg1;
- (void)scrollIndexSelectionDidChange:(id)arg1 index:(int)arg2 title:(id)arg3;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewWillEndDragging:(id)arg1 withVelocity:(struct CGPoint)arg2 targetContentOffset:(inout struct CGPoint *)arg3;
- (void)scrollableTabViewSelectionDidChange:(id)arg1;
- (void)configIndexBar;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (void)tableView:(id)arg1 commitEditingStyle:(long long)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 titleForDeleteConfirmationButtonForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 editingStyleForRowAtIndexPath:(id)arg2;
- (_Bool)tableView:(id)arg1 canEditRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)albumTabProcessSelectRowAtIndexPath:(id)arg1;
- (void)artistTabProcessSelectRowAtIndexPath:(id)arg1;
- (void)playSongsFromIndexPath:(id)arg1 isPlayAll:(_Bool)arg2;
- (void)songTabProcessSelectRowAtIndexPath:(id)arg1;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)loadAlbumSectionIndex;
- (void)loadArtistSectionIndex;
- (void)loadSongSectionIndex;
- (void)prepareAlphabet;
- (void)generateArtistViewDisplaySource;
- (void)generateAlbumViewDisplaySource;
- (void)generateSongViewDisplaySource;
- (void)generateThreeViewDisplaySource;
- (void)refreshAlbumArtistViewDataSource;
- (void)updateTabViewCount;
- (void)refreshThreeView;
- (void)refreshDataAndView;
- (void)scrollTableView;
- (void)sourceScrollToCurrentSong;
- (void)updateTabView;
- (void)downloadSongsDidLoad:(id)arg1;
- (id)sortDownloadSongAndIpod:(id)arg1 iPodArray:(id)arg2;
- (void)downloadSongsDidLoadWithCount:(id)arg1;
- (void)loadDownloadSongs;
- (void)refreshForVipStatusUpdated;
- (void)loadData;
- (void)firstLoadData;
- (void)hideView;
- (void)viewWillAppear;
- (void)showView;
- (void)layoutSubviews;
- (void)configTableViewContentInset;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

