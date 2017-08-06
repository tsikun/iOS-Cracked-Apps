//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GWBaseTableViewController.h"

#import "GWPageContentDelegate-Protocol.h"

@class GWCinema, Movie, NSString, UIColor;

@interface GWChangCiPageContentViewController : GWBaseTableViewController <GWPageContentDelegate>
{
    UIColor *_backgroundColor;
    CDUnknownBlockType _isProviderRequest;
    GWCinema *_currentCinema;
    Movie *_currentMovie;
    CDUnknownBlockType _refreshBlock;
}

@property(copy, nonatomic) CDUnknownBlockType refreshBlock; // @synthesize refreshBlock=_refreshBlock;
@property(retain, nonatomic) Movie *currentMovie; // @synthesize currentMovie=_currentMovie;
@property(retain, nonatomic) GWCinema *currentCinema; // @synthesize currentCinema=_currentCinema;
@property(copy, nonatomic) CDUnknownBlockType isProviderRequest; // @synthesize isProviderRequest=_isProviderRequest;
@property(copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)contentViewDidLoad;
- (id)scrollView;
- (void)beginRefreshFromHeader;
- (void)refreshPageControllerWithBlock:(CDUnknownBlockType)arg1;
- (void)showRequestViewIfNeed;
- (_Bool)isRequest;
- (void)reloadData;
- (void)clearAndRequestModel;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
