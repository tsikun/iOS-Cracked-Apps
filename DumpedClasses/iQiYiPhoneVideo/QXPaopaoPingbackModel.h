//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QXPaopaoPingbackModel : NSObject
{
}

+ (void)qosPingBack:(id)arg1;
+ (void)statPingBack:(id)arg1;
+ (void)pingCostTooMuch:(double)arg1 roomID:(id)arg2;
+ (void)reconnectByUserWithRoomID:(id)arg1;
+ (void)socketAbnomarl:(long long)arg1 roomID:(id)arg2;
+ (void)socketFailed:(long long)arg1 retryCount:(long long)arg2 isFirstTime:(_Bool)arg3 serverMsg:(id)arg4 roomID:(id)arg5;
+ (void)socketSuccess:(double)arg1 isFirstTime:(_Bool)arg2 roomID:(id)arg3;
+ (void)ipBrokerStartByUserWithRoomID:(id)arg1;
+ (void)ipBrokerFailed:(long long)arg1 retryCount:(long long)arg2 isFirstTime:(_Bool)arg3 serverMsg:(id)arg4 roomID:(id)arg5;
+ (void)ipBrokerSuccess:(double)arg1 isFirstTime:(_Bool)arg2 roomID:(id)arg3;

@end

