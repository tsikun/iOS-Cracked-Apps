//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQTableViewCell.h"

@class UILabel;

@interface MQQGameCenterDNDTableCell : MQQTableViewCell
{
    UILabel *_markNewLabel;
}

+ (double)defaultCellHeight;
@property(retain, nonatomic) UILabel *markNewLabel; // @synthesize markNewLabel=_markNewLabel;
- (void)_showNewMarkIfNeedWithTitleLabel:(id)arg1;
- (void)hideNewMark;
- (void)doInitSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)dealloc;

@end
