//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WVBridgeContext.h"

@class NSMutableArray, NSMutableDictionary, NSString, NSURL, UIView, UIView<WVWebViewBasicProtocol>, UIViewController, WVBridgeStorage, WXSDKInstance;

@interface WVBridge : NSObject <WVBridgeContext>
{
    _Bool _open;
    _Bool _openPermissionCheck;
    _Bool _supportsTailInvocation;
    id _env;
    UIView *_view;
    UIViewController *_viewController;
    NSString *_pageId;
    id <WVBridgeDelegate> _delegate;
    NSMutableDictionary *_handlers;
    WVBridgeStorage *_storage;
    NSMutableDictionary *_callHistory;
    NSMutableArray *_tailInvocations;
}

+ (void)callHandler:(id)arg1 withParams:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
+ (void)registerHandler:(id)arg1 withInfo:(id)arg2;
+ (void)registerAlias:(id)arg1;
+ (void)registerClassName:(id)arg1 withClass:(Class)arg2;
+ (void)registerHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2 withResetBlock:(CDUnknownBlockType)arg3;
+ (void)registerHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
+ (_Bool)isBridgeProtocol:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableArray *tailInvocations; // @synthesize tailInvocations=_tailInvocations;
@property(retain, nonatomic) NSMutableDictionary *callHistory; // @synthesize callHistory=_callHistory;
@property(retain, nonatomic) WVBridgeStorage *storage; // @synthesize storage=_storage;
@property(retain, nonatomic) NSMutableDictionary *handlers; // @synthesize handlers=_handlers;
@property(retain, nonatomic) id <WVBridgeDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool supportsTailInvocation; // @synthesize supportsTailInvocation=_supportsTailInvocation;
@property(nonatomic, getter=isOpenPermissionCheck) _Bool openPermissionCheck; // @synthesize openPermissionCheck=_openPermissionCheck;
@property(nonatomic, getter=isOpen) _Bool open; // @synthesize open=_open;
@property(retain, nonatomic) NSString *pageId; // @synthesize pageId=_pageId;
@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(nonatomic) __weak UIView *view; // @synthesize view=_view;
@property(readonly, nonatomic) __weak id env; // @synthesize env=_env;
- (void).cxx_destruct;
- (void)tailInvokeUnsafe;
- (void)resetWhenDealloc;
- (void)resetWithRequest:(id)arg1;
- (void)invokeHandlerMethod:(SEL)arg1 withOldMethod:(SEL)arg2;
- (void)resume;
- (void)pause;
- (id)addTailInvocation:(id)arg1 withParams:(id)arg2;
- (_Bool)dispatchEvent:(id)arg1 withParam:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (_Bool)dispatchEvent:(id)arg1 withParam:(id)arg2;
- (void)releaseHandler:(id)arg1 withInfo:(id)arg2;
- (void)releaseHandler:(id)arg1;
- (id)findHandlerInfoUnsafe:(id *)arg1;
- (void)recordContext:(id)arg1 withName:(id)arg2;
- (void)invokeUnsafe:(id)arg1;
- (void)callHandler:(id)arg1 withParams:(id)arg2 withCallback:(CDUnknownBlockType)arg3;
- (void)callHandler:(id)arg1 withStringParams:(id)arg2 withReqId:(id)arg3;
- (void)callHandler:(id)arg1 withParams:(id)arg2 withReqId:(id)arg3;
- (_Bool)callHandlerWithURL:(id)arg1 withReferrer:(id)arg2;
- (_Bool)callHandlerWithURL:(id)arg1;
- (_Bool)callHandlerWithRequest:(id)arg1;
- (_Bool)isHandlerRegistered:(id)arg1;
- (void)registerAlias:(id)arg1;
- (void)registerHandler:(id)arg1 withInfo:(id)arg2;
- (void)registerHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2 withResetBlock:(CDUnknownBlockType)arg3;
- (void)registerHandler:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
@property(readonly, nonatomic) __weak WXSDKInstance *weexEnv;
@property(readonly, nonatomic) __weak UIView<WVWebViewBasicProtocol> *webViewEnv;
@property(readonly, nonatomic) NSURL *referrer;
- (void)willResignActive:(id)arg1;
- (id)init;
- (id)initWithEnv:(id)arg1 withDelegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

