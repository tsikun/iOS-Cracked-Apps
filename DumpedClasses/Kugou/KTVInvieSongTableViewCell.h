//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFCommedTableViewCell.h"

@class KFUserAvatar, KGThemeImageView, KGThemeLabel, KGThemeLine, KTVLisZanComGiftNumView, OHAttributedLabel, UIImageView;

@interface KTVInvieSongTableViewCell : KFCommedTableViewCell
{
    KFUserAvatar *playerHeadImg;
    KFUserAvatar *inviterHeadImg;
    KGThemeLabel *playerName;
    KGThemeLabel *inviterName;
    KGThemeLabel *sendLab;
    UIImageView *playerSexImg;
    UIImageView *inviterSexImg;
    KGThemeImageView *musicIcon;
    KGThemeLabel *songName;
    KGThemeImageView *describeBg;
    OHAttributedLabel *inviteDescription;
    KTVLisZanComGiftNumView *lisZanComGiftNumView;
    KGThemeLabel *timeLab;
    KGThemeLine *bottomLine;
}

+ (double)getCellHeight:(id)arg1;
- (void).cxx_destruct;
- (void)updateCellWithData:(id)arg1;
- (void)dealloc;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
