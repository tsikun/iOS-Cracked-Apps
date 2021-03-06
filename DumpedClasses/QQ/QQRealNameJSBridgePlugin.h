//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQWebViewPluginQQBizBase.h"

#import "CountryCodeViewControllerDelegate.h"

@class NSString;

@interface QQRealNameJSBridgePlugin : QQWebViewPluginQQBizBase <CountryCodeViewControllerDelegate>
{
    NSString *_callback;
}

@property(retain, nonatomic) NSString *callback; // @synthesize callback=_callback;
- (void).cxx_destruct;
- (void)cancelSelectCountry;
- (void)selectedWithCountryName:(id)arg1 countryCode:(id)arg2;
- (void)handleJsBridgeRequest_RealName_getDeviceInfo:(id)arg1;
- (void)handleJsBridgeRequest_RealName_onAuthResult:(id)arg1;
- (void)handleJsBridgeRequest_RealName_getCountryCode:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

