//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSDictionary, NSString, VUIVector3;

@interface TBVRWorldItemNode : TBJSONModel
{
    int _currentTime;
    int _backToTime;
    NSString *_nodeId;
    NSString *_location;
    NSString *_type;
    NSDictionary *_locationDic;
    VUIVector3 *_currentLocation;
    NSDictionary *_itemDictionary;
    NSString *_targetUuid;
}

+ (id)jsonToModelKeyMapDictionary;
@property(copy, nonatomic) NSString *targetUuid; // @synthesize targetUuid=_targetUuid;
@property(retain, nonatomic) NSDictionary *itemDictionary; // @synthesize itemDictionary=_itemDictionary;
@property(nonatomic) int backToTime; // @synthesize backToTime=_backToTime;
@property(nonatomic) int currentTime; // @synthesize currentTime=_currentTime;
@property(retain, nonatomic) VUIVector3 *currentLocation; // @synthesize currentLocation=_currentLocation;
@property(retain, nonatomic) NSDictionary *locationDic; // @synthesize locationDic=_locationDic;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *nodeId; // @synthesize nodeId=_nodeId;
- (void).cxx_destruct;
- (void)parseLocation;
- (id)initWithJSONDictionary:(id)arg1 error:(id *)arg2;

@end
