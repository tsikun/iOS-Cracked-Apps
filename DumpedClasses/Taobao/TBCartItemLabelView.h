//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSMutableArray, TBCartItemInfoLabelComponent, UIImageView, UILabel;

@interface TBCartItemLabelView : UIView
{
    id <TBShopCartCellDelegate> _delegate;
    UILabel *_title;
    UILabel *_value;
    UIImageView *_icon;
    NSMutableArray *_tagsLabelArr;
    TBCartItemInfoLabelComponent *_infoComponent;
}

@property(retain, nonatomic) TBCartItemInfoLabelComponent *infoComponent; // @synthesize infoComponent=_infoComponent;
@property(retain, nonatomic) NSMutableArray *tagsLabelArr; // @synthesize tagsLabelArr=_tagsLabelArr;
@property(retain, nonatomic) UIImageView *icon; // @synthesize icon=_icon;
@property(retain, nonatomic) UILabel *value; // @synthesize value=_value;
@property(retain, nonatomic) UILabel *title; // @synthesize title=_title;
@property(nonatomic) __weak id <TBShopCartCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)configFrame;
- (void)configLabelWithWidth:(double)arg1;
- (void)tagViewIsHidden:(_Bool)arg1;
- (void)tagViewConfig:(id)arg1 info:(id)arg2;
- (void)bindData:(id)arg1;
- (void)initSubView;
- (id)initWithFrame:(struct CGRect)arg1;

@end

