//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface QXCommonService : NSObject
{
}

+ (id)sharedInstance;
- (void)registerDeviceIdToXiuServer;
- (void)moneyInsufficientWithFromVC:(id)arg1 didFinishBlock:(CDUnknownBlockType)arg2;
- (void)moneyInsufficientWithFromVC:(id)arg1;
- (void)overLpendinglimitWithFromVC:(id)arg1;
- (void)overLpendinglimit;
- (void)handleConfigsList:(id)arg1;
- (void)accessAudit:(id)arg1;
- (void)acessHttps_On:(long long)arg1;
- (void)getConfigsList;
- (void)handleLiveIpInfo:(id)arg1;
- (void)getLiveIp:(CDUnknownBlockType)arg1;
- (void)getLiveIp;
- (void)locationManager:(id)arg1 didUpdateLocations:(id)arg2;
- (void)locationManager:(id)arg1 didFailWithError:(id)arg2;
- (void)locate:(CDUnknownBlockType)arg1;

@end

