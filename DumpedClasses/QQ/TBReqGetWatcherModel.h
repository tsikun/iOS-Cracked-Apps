//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBReqGeneralListModel.h"

@class NSString;

@interface TBReqGetWatcherModel : TBReqGeneralListModel
{
    NSString *_vid;
}

@property(retain, nonatomic) NSString *vid; // @synthesize vid=_vid;
- (id)getRequestPBData;
- (void)dealloc;

@end
