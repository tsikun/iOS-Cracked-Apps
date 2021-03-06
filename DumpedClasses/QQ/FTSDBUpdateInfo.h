//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSLock, NSMutableDictionary;

@interface FTSDBUpdateInfo : NSObject
{
    NSMutableDictionary *_dbUpdateInfo;
    unsigned long long _dbSize;
    NSLock *_dbUpdateInfoLock;
}

+ (id)GetInstance;
@property(retain, nonatomic) NSLock *dbUpdateInfoLock; // @synthesize dbUpdateInfoLock=_dbUpdateInfoLock;
@property(nonatomic) unsigned long long dbSize; // @synthesize dbSize=_dbSize;
@property(retain) NSMutableDictionary *dbUpdateInfo; // @synthesize dbUpdateInfo=_dbUpdateInfo;
- (void).cxx_destruct;
- (void)WriteDBUpdateInfo;
- (_Bool)LoadDBUpdateInfo;
- (long long)getCurrentMsgIDWithUin:(id)arg1;
- (id)getCurrentTableWithUin:(id)arg1;
- (void)setCurrentTable:(id)arg1 tableType:(long long)arg2 uin:(id)arg3 maxMsgID:(long long)arg4 currentMsgID:(long long)arg5 ConversationUin:(id)arg6;
- (void)setTableUnFinished:(id)arg1 tableType:(long long)arg2 uin:(id)arg3 maxMsgID:(long long)arg4;
- (id)getUnFinishedTableListWithUin:(id)arg1 tableType:(long long)arg2;
- (_Bool)isAllTableFinished:(id)arg1;
- (_Bool)insertNewUser:(id)arg1;
- (id)init;

@end

