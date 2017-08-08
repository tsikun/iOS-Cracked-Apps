//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBSimpleSearchDataSource.h>

@class FBUserSession, NSString;

@interface FBSimpleSearchDataSourceHeadPublisherCompatible : FBSimpleSearchDataSource
{
    FBUserSession *_session;
    unsigned long long _filterType;
    unsigned long long _additionalResultCount;
    _Bool _loadingAdditionalResults;
    NSString *_queryString;
    NSString *_searchContext;
}

@property(copy, nonatomic) NSString *searchContext; // @synthesize searchContext=_searchContext;
- (void).cxx_destruct;
- (id)parseServerResponse:(id)arg1 request:(id)arg2 error:(id *)arg3;
- (id)typeaheadRequestForQueryString:(id)arg1 callbackPerformer:(id)arg2 typeaheadSessionID:(id)arg3;
- (void)loadAdditionalSearchResults:(unsigned long long)arg1;
- (void)setQueryString:(id)arg1;
@property(readonly, nonatomic) _Bool hasMoreData;
- (id)initWithSession:(id)arg1 analyticsModule:(id)arg2 scenePath:(id)arg3 filterType:(unsigned long long)arg4;
- (id)initWithSession:(id)arg1 analyticsModule:(id)arg2 scenePath:(id)arg3;

@end
