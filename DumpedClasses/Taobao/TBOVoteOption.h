//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBJSONModel.h"

@class NSString;

@interface TBOVoteOption : TBJSONModel
{
    _Bool _selected;
    NSString *_optionId;
    NSString *_title;
    NSString *_pic;
    long long _num;
    long long _percent;
}

@property(nonatomic) _Bool selected; // @synthesize selected=_selected;
@property(nonatomic) long long percent; // @synthesize percent=_percent;
@property(nonatomic) long long num; // @synthesize num=_num;
@property(retain, nonatomic) NSString *pic; // @synthesize pic=_pic;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSString *optionId; // @synthesize optionId=_optionId;
- (void).cxx_destruct;

@end

