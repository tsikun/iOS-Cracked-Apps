//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class CALayer, FBAuthenticationRoundedImageView, FBRichTextView;

@interface FBDBLSettingsSSOAccountView : UIView
{
    struct FBDBLSettingsSSOAccountMetrics _metrics;
    FBAuthenticationRoundedImageView *_roundedImage;
    UIView *_instructionContainerView;
    FBRichTextView *_instructionTextView;
    FBRichTextView *_instructionStepsTextView;
    CALayer *_topAndBottomBorderLayer;
    FBRichTextView *_userNameTextView;
}

@property(readonly, nonatomic) FBRichTextView *userNameTextView; // @synthesize userNameTextView=_userNameTextView;
- (id).cxx_construct;
- (void).cxx_destruct;
- (struct CGSize)imageSize;
- (void)setImageURL:(id)arg1;
- (id)_ssoInstructions;
- (id)_instructionText;
- (double)_getInstructionHeightConstrainedToSize:(struct CGSize)arg1 textView:(id)arg2;
- (id)_makeUserNameTextView;
- (id)_makeInstructionsContainerView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1 imageDownloader:(id)arg2;

@end
