//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@interface DRCReturnServiceZoneWorktime : JSONModel
{
    long long _startHour;
    long long _startMinute;
    long long _endHour;
    long long _endMinute;
}

+ (_Bool)propertyIsOptional:(id)arg1;
@property(nonatomic) long long endMinute; // @synthesize endMinute=_endMinute;
@property(nonatomic) long long endHour; // @synthesize endHour=_endHour;
@property(nonatomic) long long startMinute; // @synthesize startMinute=_startMinute;
@property(nonatomic) long long startHour; // @synthesize startHour=_startHour;

@end

