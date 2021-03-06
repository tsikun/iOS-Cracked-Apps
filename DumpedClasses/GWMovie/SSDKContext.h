//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import "ISSDKHandleOpenURLFilter-Protocol.h"
#import "UIWebViewDelegate-Protocol.h"

@class MOBFErrorReport, MOBFJSContext, NSBundle, NSMutableArray, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue, OS_dispatch_semaphore, UIApplicationDelegate;

@interface SSDKContext : NSObject <ISSDKHandleOpenURLFilter, UIWebViewDelegate>
{
    CDUnknownBlockType _importHandler;
    _Bool _on;
    _Bool _statDeviceOn;
    _Bool _statShareOn;
    _Bool _statAuthOn;
    _Bool _isLoadedScript;
    _Bool _backflowOn;
    NSString *_deviceKey;
    NSString *_appKey;
    double _timestamp;
    id <UIApplicationDelegate> _applicationDelegate;
    NSMutableSet *_activePlatformTypes;
    NSMutableArray *_applicationDelegateClasses;
    NSString *_xmlShareContent;
    NSMutableDictionary *_platformLocalConfig;
    NSMutableDictionary *_platformServerConfig;
    NSMutableDictionary *_platformXMLConfig;
    NSMutableDictionary *_authCallback;
    NSMutableDictionary *_shareCallback;
    NSObject<OS_dispatch_queue> *_commandQueue;
    NSObject<OS_dispatch_queue> *_checkConnectQueue;
    NSObject<OS_dispatch_semaphore> *_checkSemaphore;
    NSObject<OS_dispatch_queue> *_setScriptQueue;
    MOBFJSContext *_jsContext;
    double _startTime;
    NSBundle *_resourceBundle;
    NSMutableArray *_handleOpenURLFilters;
    CDUnknownFunctionPointerType _uncaughtExceptionHandler;
    NSMutableDictionary *_authSessions;
    NSMutableDictionary *_getUserInfoSessions;
    NSMutableDictionary *_addFriendSessions;
    NSMutableDictionary *_getFriendsSessions;
    NSMutableDictionary *_shareSessions;
    NSMutableDictionary *_callApiSessions;
    MOBFErrorReport *_errorReport;
}

+ (id)defaultContext;
+ (void)initialize;
@property(retain, nonatomic) MOBFErrorReport *errorReport; // @synthesize errorReport=_errorReport;
@property(retain, nonatomic) NSMutableDictionary *callApiSessions; // @synthesize callApiSessions=_callApiSessions;
@property(retain, nonatomic) NSMutableDictionary *shareSessions; // @synthesize shareSessions=_shareSessions;
@property(retain, nonatomic) NSMutableDictionary *getFriendsSessions; // @synthesize getFriendsSessions=_getFriendsSessions;
@property(retain, nonatomic) NSMutableDictionary *addFriendSessions; // @synthesize addFriendSessions=_addFriendSessions;
@property(retain, nonatomic) NSMutableDictionary *getUserInfoSessions; // @synthesize getUserInfoSessions=_getUserInfoSessions;
@property(retain, nonatomic) NSMutableDictionary *authSessions; // @synthesize authSessions=_authSessions;
@property(nonatomic) CDUnknownFunctionPointerType uncaughtExceptionHandler; // @synthesize uncaughtExceptionHandler=_uncaughtExceptionHandler;
@property(retain, nonatomic) NSMutableArray *handleOpenURLFilters; // @synthesize handleOpenURLFilters=_handleOpenURLFilters;
@property(retain, nonatomic) NSBundle *resourceBundle; // @synthesize resourceBundle=_resourceBundle;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(nonatomic) _Bool backflowOn; // @synthesize backflowOn=_backflowOn;
@property(nonatomic) __weak MOBFJSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *setScriptQueue; // @synthesize setScriptQueue=_setScriptQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_semaphore> *checkSemaphore; // @synthesize checkSemaphore=_checkSemaphore;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *checkConnectQueue; // @synthesize checkConnectQueue=_checkConnectQueue;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;
@property(retain, nonatomic) NSMutableDictionary *shareCallback; // @synthesize shareCallback=_shareCallback;
@property(retain, nonatomic) NSMutableDictionary *authCallback; // @synthesize authCallback=_authCallback;
@property(retain, nonatomic) NSMutableDictionary *platformXMLConfig; // @synthesize platformXMLConfig=_platformXMLConfig;
@property(retain, nonatomic) NSMutableDictionary *platformServerConfig; // @synthesize platformServerConfig=_platformServerConfig;
@property(retain, nonatomic) NSMutableDictionary *platformLocalConfig; // @synthesize platformLocalConfig=_platformLocalConfig;
@property(nonatomic) _Bool isLoadedScript; // @synthesize isLoadedScript=_isLoadedScript;
@property(retain, nonatomic) NSString *xmlShareContent; // @synthesize xmlShareContent=_xmlShareContent;
@property(retain, nonatomic) NSMutableArray *applicationDelegateClasses; // @synthesize applicationDelegateClasses=_applicationDelegateClasses;
@property(retain, nonatomic) NSMutableSet *activePlatformTypes; // @synthesize activePlatformTypes=_activePlatformTypes;
@property(nonatomic) __weak id <UIApplicationDelegate> applicationDelegate; // @synthesize applicationDelegate=_applicationDelegate;
@property(nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property(nonatomic) _Bool statAuthOn; // @synthesize statAuthOn=_statAuthOn;
@property(nonatomic) _Bool statShareOn; // @synthesize statShareOn=_statShareOn;
@property(nonatomic) _Bool statDeviceOn; // @synthesize statDeviceOn=_statDeviceOn;
@property(nonatomic) _Bool on; // @synthesize on=_on;
@property(retain, nonatomic) NSString *appKey; // @synthesize appKey=_appKey;
@property(retain, nonatomic) NSString *deviceKey; // @synthesize deviceKey=_deviceKey;
- (void).cxx_destruct;
- (void)enterBackgroundHandler:(id)arg1;
- (void)enterForegroundHandler:(id)arg1;
- (void)loadServerAppSettings:(CDUnknownBlockType)arg1;
- (void)loadServerConfig;
- (void)loadLocalConfig;
- (id)pluginIDByPath:(id)arg1;
- (void)setupScriptCore;
- (void)checkPlatformNeedImportByType:(unsigned long long)arg1 importHandler:(CDUnknownBlockType)arg2;
- (id)localizedString:(id)arg1 defaultValue:(id)arg2;
- (id)screenResolution;
- (id)currentNetworkType;
- (void)checkAllowConnectServer:(CDUnknownBlockType)arg1;
- (void)listenAppDidBecomeActiveNotif;
- (void)share:(id)arg1;
- (void)getUserInfo:(id)arg1;
- (void)cancelAuthorize:(unsigned long long)arg1;
- (_Bool)hasAuthorized:(unsigned long long)arg1;
- (void)authorize:(id)arg1;
- (void)setCurrentUser:(id)arg1 forPlatformType:(unsigned long long)arg2;
- (id)currentUser:(unsigned long long)arg1;
- (_Bool)isSupportAuth:(unsigned long long)arg1;
- (void)setPreferredLanguage;
- (void)setPlatformServerConfig:(id)arg1 forType:(unsigned long long)arg2;
- (void)setPlatformLocalConfig:(id)arg1 forType:(unsigned long long)arg2;
- (void)setPlatformXMLConfig:(id)arg1 forType:(unsigned long long)arg2;
- (unsigned long long)convertPlatformType:(unsigned long long)arg1;
@property(readonly, nonatomic) double runDuration;
- (void)registerActivePlatforms:(id)arg1 onImport:(CDUnknownBlockType)arg2 onConfiguration:(CDUnknownBlockType)arg3;
- (id)init;
- (void)dealloc;
- (void)registerGetShortUrlsMethod;
- (void)registerShareStateChangedMethod;
- (void)registerGetUserInfoStateChangedMethod;
- (void)registerCallApiMethod;
- (void)registerOpenAuthURLMethod;
- (void)registerAuthMethod;
- (void)registerAuthStateChangedMethod;
- (id)generalPasteboardData:(id)arg1 encoding:(long long)arg2;
- (void)registerGetDataFromPasteboardMethod;
- (void)setGeneralPasteboard:(id)arg1 Value:(id)arg2 encoding:(unsigned long long)arg3;
- (void)registerSetDataToPasteboardMethod;
- (void)registerCheckThumbImageSizeMethod;
- (void)registerGetImageDataMethod;
- (void)registerIsConnectedPlatformSDK;
- (void)setupNativeCommands;
- (_Bool)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4;
- (_Bool)application:(id)arg1 handleOpenURL:(id)arg2;
- (_Bool)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 annotation:(id)arg3;
- (void)removeHandleOpenURLFilter:(id)arg1;
- (void)addHandleOpenURLFilter:(id)arg1;
- (void)unhookApplicationDelegate;
- (void)hookApplicationDelegate;
- (void)callApi:(id)arg1;
- (void)getFriends:(id)arg1;
- (void)addFriend:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

