//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CTCustomeGroupTableViewCell.h"

@class CTWebImageView, UILabel, UIView;

@interface CTHotelLogoBookingCell : CTCustomeGroupTableViewCell
{
    UIView *_backView;
    UILabel *_contentLabel;
    CTWebImageView *_imgView;
}

@property(retain, nonatomic) CTWebImageView *imgView; // @synthesize imgView=_imgView;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) UIView *backView; // @synthesize backView=_backView;
- (void).cxx_destruct;
- (void)awakeFromNib;
- (void)fillCellWithMarkType:(id)arg1;

@end

