//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FBCastingExperience-Protocol.h"
#import "FBCastingExperienceInternal-Protocol.h"
#import "GCKDeviceScannerListener-Protocol.h"

@class FBCastingExperienceExperimentContext, FBSimpleTVVideoExperienceCCImpl, FBUserSession, GCKDeviceManager, GCKDeviceScanner, NSHashTable, NSMutableSet, NSString;

@interface FBChromeCastImpl : NSObject <GCKDeviceScannerListener, FBCastingExperienceInternal, FBCastingExperience>
{
    GCKDeviceScanner *_deviceScanner;
    GCKDeviceManager *_deviceManager;
    int _scanCount;
    NSHashTable *_listeners;
    NSMutableSet *_onlineDeviceList;
    FBUserSession *_session;
    FBCastingExperienceExperimentContext *_experimentContext;
    FBSimpleTVVideoExperienceCCImpl *_currentExperience;
}

- (void).cxx_destruct;
- (void)deviceDidGoOffline:(id)arg1;
- (void)deviceDidComeOnline:(id)arg1;
- (void)isExperienceAvailableBestGuessForDevice:(id)arg1 successBlock:(CDUnknownBlockType)arg2 failureBlock:(CDUnknownBlockType)arg3;
- (void)startExperience:(id)arg1;
- (id)discoverDevicesForDelegate:(id)arg1;
- (void)experienceStopped:(id)arg1;
- (id)experimentContext;
- (void)castingExperienceNeedsFBUserSession:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
