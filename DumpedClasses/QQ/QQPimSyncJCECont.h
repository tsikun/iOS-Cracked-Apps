//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSData, NSString;

@interface QQPimSyncJCECont : JceObjectV2
{
    NSString *jcev2_p_0_r_luid;
    NSData *jcev2_p_1_r_data;
    NSData *jcev2_p_2_r_uniVcard;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_uniVcard, setter=setJce_uniVcard:) NSData *jcev2_p_2_r_uniVcard; // @synthesize jcev2_p_2_r_uniVcard;
@property(retain, nonatomic, getter=jce_data, setter=setJce_data:) NSData *jcev2_p_1_r_data; // @synthesize jcev2_p_1_r_data;
@property(retain, nonatomic, getter=jce_luid, setter=setJce_luid:) NSString *jcev2_p_0_r_luid; // @synthesize jcev2_p_0_r_luid;
- (void)dealloc;
- (id)init;

@end

