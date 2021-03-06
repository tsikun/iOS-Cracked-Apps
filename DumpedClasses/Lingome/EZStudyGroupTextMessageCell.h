//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 21:40:27).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "EZStudyGroupMessageCell.h"

#import "TTTAttributedLabelDelegate-Protocol.h"

@class NSString, TTTAttributedLabel, UIView;

@interface EZStudyGroupTextMessageCell : EZStudyGroupMessageCell <TTTAttributedLabelDelegate>
{
    TTTAttributedLabel *_contentTextLabel;
    UIView *_layoutContainer;
}

@property(nonatomic) __weak UIView *layoutContainer; // @synthesize layoutContainer=_layoutContainer;
@property(nonatomic) __weak TTTAttributedLabel *contentTextLabel; // @synthesize contentTextLabel=_contentTextLabel;
- (void).cxx_destruct;
- (double)requiredHeightForCellLayout;
- (void)configForMessage:(id)arg1;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)longTapOnContent:(id)arg1;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

