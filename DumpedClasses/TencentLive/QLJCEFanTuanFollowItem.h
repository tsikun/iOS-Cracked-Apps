//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSString;

@interface QLJCEFanTuanFollowItem : JceObjectV2
{
    int jcev2_p_1_r_status;
    int jcev2_p_2_o_signCount;
    NSString *jcev2_p_0_r_fanTuanId;
}

+ (id)jceType;
+ (void)initialize;
@property(nonatomic, getter=jce_signCount, setter=setJce_signCount:) int jcev2_p_2_o_signCount; // @synthesize jcev2_p_2_o_signCount;
@property(nonatomic, getter=jce_status, setter=setJce_status:) int jcev2_p_1_r_status; // @synthesize jcev2_p_1_r_status;
@property(retain, nonatomic, getter=jce_fanTuanId, setter=setJce_fanTuanId:) NSString *jcev2_p_0_r_fanTuanId; // @synthesize jcev2_p_0_r_fanTuanId;
- (void).cxx_destruct;
- (id)init;

@end
