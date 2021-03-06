//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBSearchCommonDownloaderProtocol-Protocol.h"
#import "FBSearchResultsDownloaderDelegate-Protocol.h"
#import "FBSearchResultsTabConfigDownloaderProtocol-Protocol.h"

@class FBGraphQLQuery, FBGraphSearchResultsDownloader, FBMemGraphSearchQuery, FBSearchResultsAnnouncers, FBUserSession, NSArray, NSMutableArray, NSString;
@protocol FBSearchResultsDownloaderDelegate, FBSearchResultsTabConfigDownloaderDelegate;

@interface FBSearchParallelResultsDownloader : NSObject <FBSearchResultsDownloaderDelegate, FBSearchCommonDownloaderProtocol, FBSearchResultsTabConfigDownloaderProtocol>
{
    FBUserSession *_session;
    FBGraphSearchResultsDownloader *_contextModuleDownloader;
    FBGraphSearchResultsDownloader *_nonContextModuleDownloader;
    unsigned long long _contextModuleDownloaderState;
    unsigned long long _nonContextModuleDownloaderState;
    NSMutableArray *_connections;
    NSMutableArray *_requestsStatuses;
    NSMutableArray *_isCachedResponses;
    FBSearchResultsAnnouncers *_announcers;
    _Bool _logForTTI;
    NSString *_clientResultsSessionID;
    _Bool _tabBarLoaded;
    _Bool _saveCapacityOnInitialLoad;
    id <FBSearchResultsDownloaderDelegate> _delegate;
    id <FBSearchResultsTabConfigDownloaderDelegate> _tabConfigDelegate;
}

@property(readonly, nonatomic) _Bool saveCapacityOnInitialLoad; // @synthesize saveCapacityOnInitialLoad=_saveCapacityOnInitialLoad;
@property(nonatomic) __weak id <FBSearchResultsTabConfigDownloaderDelegate> tabConfigDelegate; // @synthesize tabConfigDelegate=_tabConfigDelegate;
@property(nonatomic) __weak id <FBSearchResultsDownloaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_resetCache;
@property(readonly, copy, nonatomic) NSString *cursorForForwardPagination;
@property(readonly, copy, nonatomic) NSString *resultsSessionLoggingUnitId;
@property(readonly, copy, nonatomic) NSString *typeaheadSessionID;
@property(readonly, nonatomic) FBGraphQLQuery *lastGraphQLQuery;
@property(readonly, nonatomic) FBMemGraphSearchQuery *rootQuery;
@property(readonly, nonatomic) FBMemGraphSearchQuery *currentQuery;
@property(readonly, nonatomic) FBMemGraphSearchQuery *correctedQuery;
@property(readonly, copy, nonatomic) NSString *spellerConfidence;
@property(readonly, copy, nonatomic) NSArray *needleFilters;
@property(readonly, copy, nonatomic) NSString *verticalToLog;
@property(readonly, copy, nonatomic) NSString *postSearchIntentLog;
@property(readonly, copy, nonatomic) NSString *requestTracker;
@property(readonly, copy, nonatomic) NSString *clientResultsSessionID;
@property(readonly, copy, nonatomic) NSString *semantic;
@property(readonly, copy, nonatomic) NSArray *filtersChangeSet;
@property(readonly, nonatomic) unsigned long long resultType;
@property(readonly, nonatomic) _Bool downloaderUsesParallelQueries;
@property(readonly, nonatomic) _Bool isLoading;
- (void)downloader:(id)arg1 didFailWithError:(id)arg2;
- (void)downloader:(id)arg1 didLoadConnection:(id)arg2 requestStatus:(id)arg3 isCachedResponse:(_Bool)arg4 isHeadRequest:(_Bool)arg5;
- (void)cancelDownloadRequest;
- (id)edges;
@property(readonly, nonatomic) _Bool hasLoadedEnoughInitialPages;
- (_Bool)supportsFilters;
- (_Bool)hasMoreData;
- (void)loadTail;
- (void)loadHead;
- (void)retry;
- (id)initWithSession:(id)arg1 scenePath:(id)arg2 announcers:(id)arg3 logForTTI:(_Bool)arg4 downloaderConfig:(id)arg5 saveCapacityOnInitialLoad:(_Bool)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

