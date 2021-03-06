//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ONEOperationCell.h"

@class NSMutableArray, SHDEstiCellModel, UIImageView, UILabel;

@interface SHDEstiOperationCell : ONEOperationCell
{
    SHDEstiCellModel *_cellModel;
    UIImageView *_loadingImageView;
    UILabel *_failDescLabel;
    NSMutableArray *_priceViews;
    NSMutableArray *_separatorLineViews;
}

@property(retain, nonatomic) NSMutableArray *separatorLineViews; // @synthesize separatorLineViews=_separatorLineViews;
@property(retain, nonatomic) NSMutableArray *priceViews; // @synthesize priceViews=_priceViews;
@property(retain, nonatomic) UILabel *failDescLabel; // @synthesize failDescLabel=_failDescLabel;
@property(retain, nonatomic) UIImageView *loadingImageView; // @synthesize loadingImageView=_loadingImageView;
@property(retain, nonatomic) SHDEstiCellModel *cellModel; // @synthesize cellModel=_cellModel;
- (void).cxx_destruct;
- (void)changePriceView2UnselectStateExcept:(id)arg1;
- (void)priceViewClick:(id)arg1;
- (void)layoutSubviews;
- (void)setDataModel:(id)arg1;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

