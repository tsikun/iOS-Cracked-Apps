//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSDictionary, QYRCTSettingViewController;

@interface QYRCTSettingWifiDL : NSObject
{
    QYRCTSettingViewController *_parent;
    NSDictionary *_jsEvent;
}

@property(retain, nonatomic) NSDictionary *jsEvent; // @synthesize jsEvent=_jsEvent;
@property(nonatomic) __weak QYRCTSettingViewController *parent; // @synthesize parent=_parent;
- (void).cxx_destruct;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)storeNonWifiDL:(id)arg1;
- (void)popUpCellNetOpenedAlert;

@end

