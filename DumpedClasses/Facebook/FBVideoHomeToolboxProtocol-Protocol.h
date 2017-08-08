//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBVideoHomeAutoplayController, FBVideoHomeSessionController, FBVideoHomeVPVTracker;
@protocol FBVideoHomeNotificationsSeenStateModifierProtocol;

@protocol FBVideoHomeToolboxProtocol <NSObject>
@property(readonly, nonatomic) id <FBVideoHomeNotificationsSeenStateModifierProtocol> seenStateModifier;
@property(readonly, nonatomic) FBVideoHomeVPVTracker *vpvTracker;
@property(readonly, nonatomic) FBVideoHomeSessionController *videoHomeSessionController;
@property(readonly, nonatomic) FBVideoHomeAutoplayController *autoplayController;
@end
