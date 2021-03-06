//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XChatMessageBaseCell.h"

@class FMImageView, MASConstraint, UILabel, UIView;

@interface XChatMessageCardActionCell : XChatMessageBaseCell
{
    FMImageView *infoImage;
    UILabel *headLabel;
    UILabel *contentLabel;
    UIView *actionView;
    UILabel *actionTitle;
    FMImageView *actionImage;
    MASConstraint *headLeftWithInfoImage;
    MASConstraint *headLeftWithoutInfoImage;
    MASConstraint *headRightWithAction;
    MASConstraint *headRightWithoutAction;
    MASConstraint *contentTopWithHead;
    MASConstraint *contentTopWithoutHead;
    MASConstraint *topWithTime;
    MASConstraint *topWithoutTime;
}

+ (double)rowHeightForComponent:(id)arg1;
+ (id)IdentifierForComponent:(id)arg1;
- (void).cxx_destruct;
- (void)didSelectCell;
- (void)bindComponent:(id)arg1;
- (void)setActionViewWithAction:(id)arg1;
- (void)setInfoImageWithUrl:(id)arg1;
- (void)setContentLabelWithText:(id)arg1;
- (void)setHeadLabelWithText:(id)arg1;
- (void)cardActionCellLayout;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

