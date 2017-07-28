//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class NSArray<Optional><TextHintItem>, NSNumber<Optional>, NSString<Optional>, ScarTimePicker<Optional>;

@interface Widgets : JSONModel
{
    NSString<Optional> *_menuId;
    ScarTimePicker<Optional> *_timePicker;
    NSNumber<Optional> *_startTime;
    NSNumber<Optional> *_tableStyle;
    NSNumber<Optional> *_timeParticle;
    NSNumber<Optional> *_startLine;
    NSNumber<Optional> *_orderMode;
    NSArray<Optional><TextHintItem> *_textHint;
}

@property(retain, nonatomic) NSArray<Optional><TextHintItem> *textHint; // @synthesize textHint=_textHint;
@property(retain, nonatomic) NSNumber<Optional> *orderMode; // @synthesize orderMode=_orderMode;
@property(retain, nonatomic) NSNumber<Optional> *startLine; // @synthesize startLine=_startLine;
@property(retain, nonatomic) NSNumber<Optional> *timeParticle; // @synthesize timeParticle=_timeParticle;
@property(retain, nonatomic) NSNumber<Optional> *tableStyle; // @synthesize tableStyle=_tableStyle;
@property(retain, nonatomic) NSNumber<Optional> *startTime; // @synthesize startTime=_startTime;
@property(retain, nonatomic) ScarTimePicker<Optional> *timePicker; // @synthesize timePicker=_timePicker;
@property(retain, nonatomic) NSString<Optional> *menuId; // @synthesize menuId=_menuId;
- (void).cxx_destruct;

@end
