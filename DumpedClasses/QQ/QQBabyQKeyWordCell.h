//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class QQBabyQKeyItem, UIImageView, UILabel, UIView;

@interface QQBabyQKeyWordCell : UICollectionViewCell
{
    QQBabyQKeyItem *keyItem;
    UIImageView *iconView;
    UILabel *textLabel;
    UIImageView *backgroundImageView;
    UIView *maskView;
    UIImageView *redPoint;
    UIView *bottomView;
}

@property(retain, nonatomic) UIView *bottomView; // @synthesize bottomView;
@property(retain, nonatomic) UIImageView *redPoint; // @synthesize redPoint;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView;
@property(retain, nonatomic) UIImageView *backgroundImageView; // @synthesize backgroundImageView;
@property(retain, nonatomic) UILabel *textLabel; // @synthesize textLabel;
@property(retain, nonatomic) UIImageView *iconView; // @synthesize iconView;
@property(retain, nonatomic) QQBabyQKeyItem *keyItem; // @synthesize keyItem;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (void)setRedPointShow:(_Bool)arg1;
- (void)setCellKeyItem:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

