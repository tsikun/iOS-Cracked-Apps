//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ImageLibError, NSDate, NSMutableArray, NSMutableDictionary, NSString;

@interface TBImagePerformanceDate : NSObject
{
    NSMutableDictionary *_userInfo;
    NSDate *_beginDate;
    NSDate *_endDate;
    NSString *_url;
    NSString *_eventType;
    NSString *_bizName;
    NSString *_dataFrom;
    unsigned long long _eventId;
    NSString *_errorCode;
    NSDate *_prePhaseDate;
    NSString *_prePhaseName;
    NSMutableArray *_normalPhaseArray;
    ImageLibError *_imageLibError;
    NSMutableDictionary *_phaseArray;
}

@property(retain, nonatomic) NSMutableDictionary *phaseArray; // @synthesize phaseArray=_phaseArray;
@property(retain, nonatomic) ImageLibError *imageLibError; // @synthesize imageLibError=_imageLibError;
@property(retain, nonatomic) NSMutableArray *normalPhaseArray; // @synthesize normalPhaseArray=_normalPhaseArray;
@property(retain, nonatomic) NSString *prePhaseName; // @synthesize prePhaseName=_prePhaseName;
@property(retain, nonatomic) NSDate *prePhaseDate; // @synthesize prePhaseDate=_prePhaseDate;
@property(retain, nonatomic) NSString *errorCode; // @synthesize errorCode=_errorCode;
@property(nonatomic) unsigned long long eventId; // @synthesize eventId=_eventId;
@property(retain, nonatomic) NSString *dataFrom; // @synthesize dataFrom=_dataFrom;
@property(retain, nonatomic) NSString *bizName; // @synthesize bizName=_bizName;
@property(retain, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property(retain, nonatomic) NSString *url; // @synthesize url=_url;
@property(retain, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(retain, nonatomic) NSDate *beginDate; // @synthesize beginDate=_beginDate;
@property(retain, nonatomic) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
- (void).cxx_destruct;
- (id)getDataFromCode;
- (id)objectByKey:(id)arg1;
- (void)clearCurrentPerformanceUserTrack;
- (void)initWithParam:(id)arg1 module:(id)arg2;

@end

