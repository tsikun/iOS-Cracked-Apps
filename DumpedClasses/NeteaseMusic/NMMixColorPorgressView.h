//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIImageView.h"

@class NSString, UILabel, UIView;

@interface NMMixColorPorgressView : UIImageView
{
    UIView *_progressView;
    UILabel *_progressViewLabel;
    UILabel *_bgViewLabel;
    NSString *_identifier;
}

@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
- (void).cxx_destruct;
- (void)setBgViewTextColorKey:(id)arg1;
- (void)setBgViewTextColor:(id)arg1;
- (void)setBgViewColorKey:(id)arg1;
- (void)setBgViewColor:(id)arg1;
- (void)setProgressViewTextColorKey:(id)arg1;
- (void)setProgressViewTextColor:(id)arg1;
- (void)setProgressViewColorKey:(id)arg1;
- (void)setProgressViewColor:(id)arg1;
- (void)setBgImage:(id)arg1 enableChangeColor:(_Bool)arg2;
- (void)setHidden:(_Bool)arg1;
- (void)_doRefreshProgress:(double)arg1 animated:(_Bool)arg2 callBack:(CDUnknownBlockType)arg3;
- (void)resetProgress;
- (void)refreshProgress:(double)arg1 animated:(_Bool)arg2;
- (void)setProgressTo100:(CDUnknownBlockType)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (id)initWithLabelText:(id)arg1 fontSize:(double)arg2;

@end

