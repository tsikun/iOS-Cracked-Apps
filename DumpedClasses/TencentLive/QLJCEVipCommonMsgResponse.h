//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JceObjectV2.h"

@class NSArray, NSDictionary;

@interface QLJCEVipCommonMsgResponse : JceObjectV2
{
    int jcev2_p_0_r_errCode;
    NSDictionary *jcev2_p_1_o_numberMap__b0x9i_M09ONSStringONSNumber;
    NSDictionary *jcev2_p_2_o_stringMap__b0x9i_M09ONSStringONSString;
    NSArray *jcev2_p_3_o_extraReportKVs__b0x9i_VOQLJCEExtraReportKV;
}

+ (id)jceType;
+ (void)initialize;
@property(retain, nonatomic, getter=jce_extraReportKVs, setter=setJce_extraReportKVs:) NSArray *jcev2_p_3_o_extraReportKVs__b0x9i_VOQLJCEExtraReportKV; // @synthesize jcev2_p_3_o_extraReportKVs__b0x9i_VOQLJCEExtraReportKV;
@property(retain, nonatomic, getter=jce_stringMap, setter=setJce_stringMap:) NSDictionary *jcev2_p_2_o_stringMap__b0x9i_M09ONSStringONSString; // @synthesize jcev2_p_2_o_stringMap__b0x9i_M09ONSStringONSString;
@property(retain, nonatomic, getter=jce_numberMap, setter=setJce_numberMap:) NSDictionary *jcev2_p_1_o_numberMap__b0x9i_M09ONSStringONSNumber; // @synthesize jcev2_p_1_o_numberMap__b0x9i_M09ONSStringONSNumber;
@property(nonatomic, getter=jce_errCode, setter=setJce_errCode:) int jcev2_p_0_r_errCode; // @synthesize jcev2_p_0_r_errCode;
- (void).cxx_destruct;
- (id)init;

@end
