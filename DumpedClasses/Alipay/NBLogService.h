//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NBLogService : NSObject
{
    _Bool _shouldFilterPVWhenSubView;
    unsigned long long _serviceOption;
    id <NBLogTrackAgentProtocol> _trackAgent;
    id <NBLogClickAgentProtocol> _clickAgent;
    id <NBLogExtraParamProtocol> _paramAgent;
}

+ (id)allocInPrivate;
+ (id)sharedInstance;
@property(retain, nonatomic) id <NBLogExtraParamProtocol> paramAgent; // @synthesize paramAgent=_paramAgent;
@property(retain, nonatomic) id <NBLogClickAgentProtocol> clickAgent; // @synthesize clickAgent=_clickAgent;
@property(retain, nonatomic) id <NBLogTrackAgentProtocol> trackAgent; // @synthesize trackAgent=_trackAgent;
@property(nonatomic) unsigned long long serviceOption; // @synthesize serviceOption=_serviceOption;
@property(nonatomic) _Bool shouldFilterPVWhenSubView; // @synthesize shouldFilterPVWhenSubView=_shouldFilterPVWhenSubView;
- (void).cxx_destruct;
- (void)start;
- (id)initInPrivate;
- (id)init;

@end

