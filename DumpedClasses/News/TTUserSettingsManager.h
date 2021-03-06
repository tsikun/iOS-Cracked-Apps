//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface TTUserSettingsManager : NSObject
{
}

+ (long long)currentThemeMode;
+ (id)totalUserSettingsConfig;
+ (id)sharedInstance;
+ (void)setSettingFontSize:(unsigned long long)arg1;
+ (void)privateSetSettingFontSize:(unsigned long long)arg1;
+ (unsigned long long)settingFontSize;
+ (_Bool)imageDisplayModeFor3GIsSameAs2G;
+ (_Bool)isUpgradeUserAfterImageDisplayModelControlled;
+ (void)setIsUpgradeUserAfterImageDisplayModeControlled:(_Bool)arg1;
+ (_Bool)isUpgradeUser;
+ (_Bool)hasSetNetworkTrafficSetting;
+ (void)setHasSetNetworkTrafficSetting;
+ (void)setNetworkTrafficSetting:(unsigned long long)arg1;
+ (unsigned long long)networkTrafficSetting;
+ (_Bool)hasNetworkTrafficSetting;
+ (_Bool)apnsNewAlertClosed;
+ (void)closeAPNsNewAlert:(_Bool)arg1;
+ (void)setReadMode:(unsigned long long)arg1;
+ (unsigned long long)userSetReadMode;

@end

