//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "PRoomLeaveReq.h"

@class NSString;

@interface PRoomLeaveReq : NSObject <PRoomLeaveReq>
{
    int _roomLeaveType;
    int _rtcType;
    NSString *_sessionId;
    NSString *_roomId;
    unsigned long long _callTime;
    NSString *_deviceId;
}

@property(retain, nonatomic) NSString *deviceId; // @synthesize deviceId=_deviceId;
@property(nonatomic) int rtcType; // @synthesize rtcType=_rtcType;
@property(nonatomic) unsigned long long callTime; // @synthesize callTime=_callTime;
@property(nonatomic) int roomLeaveType; // @synthesize roomLeaveType=_roomLeaveType;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
@property(retain, nonatomic) NSString *sessionId; // @synthesize sessionId=_sessionId;
- (void).cxx_destruct;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

