//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class UIImageView, UILabel, UIView;

@interface O2OShopTrackDateCell : UITableViewCell
{
    UIView *_centralView;
    UIImageView *_dateIconView;
    UIImageView *_todayIconView;
    UILabel *_todayLabel;
    UILabel *_dayLabel;
    UILabel *_monthLabel;
}

@property(retain, nonatomic) UILabel *monthLabel; // @synthesize monthLabel=_monthLabel;
@property(retain, nonatomic) UILabel *dayLabel; // @synthesize dayLabel=_dayLabel;
@property(retain, nonatomic) UILabel *todayLabel; // @synthesize todayLabel=_todayLabel;
@property(retain, nonatomic) UIImageView *todayIconView; // @synthesize todayIconView=_todayIconView;
@property(retain, nonatomic) UIImageView *dateIconView; // @synthesize dateIconView=_dateIconView;
@property(retain, nonatomic) UIView *centralView; // @synthesize centralView=_centralView;
- (void).cxx_destruct;
- (void)updateLayout;
- (void)showDate:(id)arg1;
- (void)makeLayout;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

