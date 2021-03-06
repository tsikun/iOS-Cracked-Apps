//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class UIButton, UIImage, UIImageView, UILabel;

@interface ONEQuickFeedbackToolView : UIView
{
    UIImage *_screenShotImage;
    UIImageView *_screenshotView;
    UILabel *_titleLabel;
    UILabel *_descLabel;
    UIView *_divideLine;
    UIButton *_feedbackButton;
    UIButton *_complainButton;
    UIButton *_shareButton;
    id <ONEQuickFeedbackToolViewDelegate> _delegate;
}

@property(nonatomic) __weak id <ONEQuickFeedbackToolViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)didClickShareButton:(id)arg1;
- (void)didClickComplainButton:(id)arg1;
- (void)didClickFeedbackButton:(id)arg1;
- (id)initWithScreenShotImage:(id)arg1 delegate:(id)arg2;

@end

