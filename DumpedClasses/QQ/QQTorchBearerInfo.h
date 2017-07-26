//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQModel.h"

#import "NSCopying.h"

@interface QQTorchBearerInfo : QQModel <NSCopying>
{
    unsigned int _transferNum;
    unsigned int _currentCityId;
    unsigned int _nextCityProgressNum;
    unsigned long long _uin;
    unsigned long long _bearerId;
}

@property(nonatomic) unsigned int nextCityProgressNum; // @synthesize nextCityProgressNum=_nextCityProgressNum;
@property(nonatomic) unsigned int currentCityId; // @synthesize currentCityId=_currentCityId;
@property(nonatomic) unsigned int transferNum; // @synthesize transferNum=_transferNum;
@property(nonatomic) unsigned long long bearerId; // @synthesize bearerId=_bearerId;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (id)description;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
