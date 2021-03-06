//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIButton.h>

@class NSMutableDictionary, UIColor;

@interface MQQButton : UIButton
{
    NSMutableDictionary *_backgroundColorForStates;
    NSMutableDictionary *_borderColorForStates;
    NSMutableDictionary *_imageAlphaForStates;
    unsigned long long _buttonStyle;
    UIColor *_normalBackgroundColor;
    UIColor *_normalBorderColor;
    double _normalImageAlpha;
}

+ (id)buttonWithStyle:(unsigned long long)arg1;
@property(nonatomic) double normalImageAlpha; // @synthesize normalImageAlpha=_normalImageAlpha;
@property(retain, nonatomic) UIColor *normalBorderColor; // @synthesize normalBorderColor=_normalBorderColor;
@property(retain, nonatomic) UIColor *normalBackgroundColor; // @synthesize normalBackgroundColor=_normalBackgroundColor;
@property(nonatomic) unsigned long long buttonStyle; // @synthesize buttonStyle=_buttonStyle;
- (void)refreshImageAlphaForCurrentState;
- (void)refreshBorderColorForCurrentState;
- (void)refreshBackgroundColorForCurrentState;
- (void)setImageAlpha:(double)arg1 forState:(unsigned long long)arg2;
- (void)setBorderColor:(id)arg1 forState:(unsigned long long)arg2;
- (id)backgroundColorForState:(unsigned long long)arg1;
- (void)setBackgroundColor:(id)arg1 forState:(unsigned long long)arg2;
- (void)setBackgroundColor:(id)arg1;
- (void)setEnabled:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setSelected:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

