//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VSImageTwoInputFilter.h"

@interface VSImageChromaKeyBlendFilter : VSImageTwoInputFilter
{
    int colorToReplaceUniform;
    int thresholdSensitivityUniform;
    int smoothingUniform;
    double _thresholdSensitivity;
    double _smoothing;
}

@property(nonatomic) double smoothing; // @synthesize smoothing=_smoothing;
@property(nonatomic) double thresholdSensitivity; // @synthesize thresholdSensitivity=_thresholdSensitivity;
- (void)setColorToReplaceRed:(float)arg1 green:(float)arg2 blue:(float)arg3;
- (id)init;

@end

