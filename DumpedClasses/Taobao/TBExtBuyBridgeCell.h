//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBExtBuyBaseCell.h"

@class TBTradeBridgeModel, UIImageView, UILabel;

@interface TBExtBuyBridgeCell : TBExtBuyBaseCell
{
    TBTradeBridgeModel *_model;
    UIImageView *_icon;
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UILabel *_descLabel;
}

+ (double)cellHeight:(id)arg1 withCellWidth:(double)arg2;
@property(retain, nonatomic) UILabel *descLabel; // @synthesize descLabel=_descLabel;
@property(retain, nonatomic) UILabel *subtitleLabel; // @synthesize subtitleLabel=_subtitleLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(nonatomic) __weak TBTradeBridgeModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)cellDidSelected;
- (void)bindData:(id)arg1;
- (void)layoutSubviews;
- (void)initCell;

@end

