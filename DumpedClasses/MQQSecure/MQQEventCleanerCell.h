//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class MQQCheckBox, MQQLine, UILabel;

@interface MQQEventCleanerCell : UITableViewCell
{
    MQQCheckBox *_checkBox;
    UILabel *_titleLabel;
    UILabel *_dateLabel;
    MQQLine *_separatorLine;
}

+ (double)height;
+ (id)identifier;
@property(readonly, nonatomic) MQQLine *separatorLine; // @synthesize separatorLine=_separatorLine;
@property(readonly, nonatomic) UILabel *dateLabel; // @synthesize dateLabel=_dateLabel;
@property(readonly, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(readonly, nonatomic) MQQCheckBox *checkBox; // @synthesize checkBox=_checkBox;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
