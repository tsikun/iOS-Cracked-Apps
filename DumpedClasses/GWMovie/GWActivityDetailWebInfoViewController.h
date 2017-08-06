//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

#import "UIScrollViewDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class GWActivity, GWActivityWebViewController, GWCinema, Movie, NSString, UIView;

@interface GWActivityDetailWebInfoViewController : GWBaseTableViewController <UIScrollViewDelegate, UITableViewDelegate, UITableViewDataSource, UIWebViewDelegate>
{
    _Bool _noShowLoading;
    _Bool _flag;
    _Bool _initLoadFinished;
    CDUnknownBlockType _updateViewHeightBlock;
    GWActivity *_activity;
    double _webViewheight;
    GWActivityWebViewController *_activityWebViewController;
    Movie *_releatedMovie;
    GWCinema *_releatedCinema;
    UIView *_activityWebView;
}

+ (id)activityDetailWebInoViewControllerWithActivity:(id)arg1;
@property(nonatomic) _Bool initLoadFinished; // @synthesize initLoadFinished=_initLoadFinished;
@property(retain, nonatomic) UIView *activityWebView; // @synthesize activityWebView=_activityWebView;
@property(nonatomic) _Bool flag; // @synthesize flag=_flag;
@property(retain, nonatomic) GWCinema *releatedCinema; // @synthesize releatedCinema=_releatedCinema;
@property(retain, nonatomic) Movie *releatedMovie; // @synthesize releatedMovie=_releatedMovie;
@property(retain, nonatomic) GWActivityWebViewController *activityWebViewController; // @synthesize activityWebViewController=_activityWebViewController;
@property(nonatomic) double webViewheight; // @synthesize webViewheight=_webViewheight;
@property(retain, nonatomic) GWActivity *activity; // @synthesize activity=_activity;
@property(nonatomic) _Bool noShowLoading; // @synthesize noShowLoading=_noShowLoading;
@property(copy, nonatomic) CDUnknownBlockType updateViewHeightBlock; // @synthesize updateViewHeightBlock=_updateViewHeightBlock;
- (void).cxx_destruct;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (double)tableView:(id)arg1 heightForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForFooterInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (id)scrollView;
- (void)loadActivityWebWithActivityId:(id)arg1;
- (void)dealloc;
- (void)requestRelatedInfo:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
