//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GPBMessage.h"

@class NSString;

@interface NovaNotificationNoticeTipReq : GPBMessage
{
}

+ (id)descriptor;

// Remaining properties
@property(nonatomic) _Bool hasMsgJson; // @dynamic hasMsgJson;
@property(nonatomic) _Bool hasMsgRole; // @dynamic hasMsgRole;
@property(nonatomic) _Bool hasMsgText; // @dynamic hasMsgText;
@property(nonatomic) _Bool hasMsgType; // @dynamic hasMsgType;
@property(copy, nonatomic) NSString *msgJson; // @dynamic msgJson;
@property(nonatomic) int msgRole; // @dynamic msgRole;
@property(copy, nonatomic) NSString *msgText; // @dynamic msgText;
@property(nonatomic) int msgType; // @dynamic msgType;

@end
