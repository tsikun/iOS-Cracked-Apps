//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "JSONModel.h"

@class DCOrderLiftTime<Optional>;

@interface DCOrderLiftTimeConfig : JSONModel
{
    DCOrderLiftTime<Optional> *_same;
    DCOrderLiftTime<Optional> *_diff;
    DCOrderLiftTime<Optional> *_def;
}

+ (id)newDefaultModel;
+ (id)keyMapper;
@property(copy, nonatomic) DCOrderLiftTime<Optional> *def; // @synthesize def=_def;
@property(copy, nonatomic) DCOrderLiftTime<Optional> *diff; // @synthesize diff=_diff;
@property(copy, nonatomic) DCOrderLiftTime<Optional> *same; // @synthesize same=_same;
- (void).cxx_destruct;

@end

