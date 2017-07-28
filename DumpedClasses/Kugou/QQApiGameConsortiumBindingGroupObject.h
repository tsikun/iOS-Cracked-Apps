//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQApiObject.h"

@class NSString;

@interface QQApiGameConsortiumBindingGroupObject : QQApiObject
{
    NSString *_signature;
    NSString *_unionid;
    NSString *_zoneID;
    NSString *_appDisplayName;
}

+ (id)objectWithGameConsortium:(id)arg1 unionid:(id)arg2 zoneID:(id)arg3 appDisplayName:(id)arg4;
@property(retain, nonatomic) NSString *appDisplayName; // @synthesize appDisplayName=_appDisplayName;
@property(retain, nonatomic) NSString *zoneID; // @synthesize zoneID=_zoneID;
@property(retain, nonatomic) NSString *unionid; // @synthesize unionid=_unionid;
@property(retain, nonatomic) NSString *signature; // @synthesize signature=_signature;
- (void)dealloc;
- (id)initWithGameConsortium:(id)arg1 unionid:(id)arg2 zoneID:(id)arg3 appDisplayName:(id)arg4;

@end
