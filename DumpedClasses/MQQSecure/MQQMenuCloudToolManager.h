//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "MQQQTAdvertiseFetcherDelegate-Protocol.h"
#import "MQQSharkRequestDelegate-Protocol.h"

@class DBOMenuCloudToolOp, MQQHttpRequest, MQQMenuCloudToolRequest, MQQMenuReportCloudToolRequest, MQQQTAdvertiseFetcher, NSArray, NSDate, NSMutableArray, NSString, NSTimer;

@interface MQQMenuCloudToolManager : NSObject <MQQSharkRequestDelegate, MQQQTAdvertiseFetcherDelegate>
{
    _Bool _isReporting;
    long long _reportState;
    NSDate *_reportDate;
    DBOMenuCloudToolOp *_cloudToolOp;
    double _updateListTimeInterval;
    NSMutableArray *_displayCloudToolList;
    _Bool _isDownloadingIcon;
    long long _currentRetryTime;
    NSMutableArray *_noIconCloudToolList;
    NSArray *_allCloudToolList;
    _Bool _hasUpdateCloudToolList;
    NSTimer *_timer;
    MQQMenuReportCloudToolRequest *reportCloudToolRequest;
    MQQHttpRequest *iconRequest;
    MQQMenuCloudToolRequest *cloudToolRequest;
    NSMutableArray *_reportedToolList;
    MQQQTAdvertiseFetcher *_advertiseFetcher;
}

+ (id)shareManager;
@property(retain, nonatomic) MQQQTAdvertiseFetcher *advertiseFetcher; // @synthesize advertiseFetcher=_advertiseFetcher;
@property(retain, nonatomic) NSMutableArray *reportedToolList; // @synthesize reportedToolList=_reportedToolList;
@property(nonatomic) _Bool hasUpdateCloudToolList; // @synthesize hasUpdateCloudToolList=_hasUpdateCloudToolList;
@property(retain, nonatomic) MQQMenuCloudToolRequest *cloudToolRequest; // @synthesize cloudToolRequest;
@property(retain, nonatomic) MQQHttpRequest *iconRequest; // @synthesize iconRequest;
@property(retain, nonatomic) NSArray *allCloudToolList; // @synthesize allCloudToolList=_allCloudToolList;
@property(retain, nonatomic) MQQMenuReportCloudToolRequest *reportCloudToolRequest; // @synthesize reportCloudToolRequest;
@property(retain, nonatomic) NSDate *reportDate; // @synthesize reportDate=_reportDate;
- (void)advertiseFetcher:(id)arg1 didFinishWithResult:(id)arg2 willDownload:(_Bool)arg3;
- (void)sharkRequestDidFail:(id)arg1;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)iconRequestDidFail:(id)arg1;
- (void)iconRequestDidFinish:(id)arg1;
- (void)requestCloudToolIcon;
- (void)writeAllCloudToolListWithUpdateTime:(long long)arg1;
- (void)readAllCloudToolList;
- (void)updateDisplayCloudToolList;
- (void)cancelAllRequest;
- (void)updateAdvertiseList;
- (void)updateCloudToolList;
- (void)clearupCloudToolUpdateTime;
- (void)saveCloudToolListUpdateTime;
- (void)closeCloudToolDb;
- (void)loadCloudToolOp;
- (void)reportCloudToolRecords;
- (_Bool)insertCloudToolId:(long long)arg1 recordType:(long long)arg2;
- (void)insertClickRecordForTools:(id)arg1;
- (void)reportSoftActionsForTools:(id)arg1 stage:(long long)arg2;
- (void)clearDisplayRecords;
- (void)insertDisplayRecords;
@property(readonly, nonatomic) NSArray *totalCloudToolList;
- (id)toolMenuCloudToolList;
@property(readonly, nonatomic) NSArray *displayCloudToolList; // @synthesize displayCloudToolList=_displayCloudToolList;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

