//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIImage.h>

@interface UIImage (Utils)
+ (id)shareQRImageWithString:(id)arg1 title:(id)arg2 viewSize:(double)arg3;
+ (id)cropShareImage:(id)arg1;
+ (id)blurryImage:(id)arg1 withBlurLevel:(double)arg2;
+ (id)fullScreenshots;
+ (id)cropImageWithView:(id)arg1;
+ (id)imageFromURL:(id)arg1;
- (id)rotateWithOrientation:(long long)arg1;
- (id)imageByScalingAndCroppingForSize:(struct CGSize)arg1;
- (id)cropImageWithRect:(struct CGRect)arg1;
- (id)withFixedOrientation;
- (id)rotateImage:(id)arg1 byOrientationFlag:(long long)arg2;
- (id)rotateToOrientation:(long long)arg1;
- (id)flipHorizontal;
- (id)cropToRect:(struct CGRect)arg1;
- (id)fitToSize:(struct CGSize)arg1;
- (id)scale:(double)arg1;
- (id)scaleToSize:(struct CGSize)arg1;
@end
