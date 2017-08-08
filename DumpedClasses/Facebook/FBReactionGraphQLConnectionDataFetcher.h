//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBGraphQLConnectionControllerListener-Protocol.h"
#import "FBGraphQLConnectionControllerLoadListener-Protocol.h"

@class FBGraphQLConnectionController, NSArray, NSString;
@protocol FBReactionGraphQLConnectionDataFetcherDelegate;

@interface FBReactionGraphQLConnectionDataFetcher : NSObject <FBGraphQLConnectionControllerListener, FBGraphQLConnectionControllerLoadListener>
{
    NSArray *_clientCapabilities;
    _Bool _finishedInitialLoad;
    FBGraphQLConnectionController *_connectionController;
    NSString *_reactionSessionID;
    id <FBReactionGraphQLConnectionDataFetcherDelegate> _delegate;
}

@property(nonatomic) __weak id <FBReactionGraphQLConnectionDataFetcherDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)_userInfoForStoreLocation:(unsigned long long)arg1;
- (void)_loadEdges:(id)arg1 forLoadType:(unsigned long long)arg2;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingLocations:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byUpdatingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingEdgesAtIndexPaths:(id)arg3 deletionReason:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byMergingChunkAtIndexWithPrecedingChunk:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byRemovingChunksAtIndexes:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionControllerDidFinishAttemptingToRestoreFirstPersistedPage:(id)arg1;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingChunkAtIndex:(unsigned long long)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didModifyPreviousState:(id)arg2 byInsertingEdgesAtIndexPaths:(id)arg3 userInfo:(id)arg4;
- (void)graphQLConnectionController:(id)arg1 didCompleteLoad:(id)arg2;
- (void)graphQLConnectionController:(id)arg1 didBeginLoad:(id)arg2;
- (void)dealloc;
@property(readonly, nonatomic) _Bool canLoadHead;
@property(readonly, nonatomic) _Bool canLoadTail;
- (_Bool)isLoadingTail;
- (_Bool)hasAnotherPage;
- (void)loadHead;
- (void)loadTailWithLimit:(unsigned long long)arg1;
- (void)loadTail;
- (id)initWithGraphQLConnectionController:(id)arg1 clientCapabilities:(id)arg2 reactionSessionID:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
