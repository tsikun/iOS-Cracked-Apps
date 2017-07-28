//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGMusicModel, UIButton, UIImageView, UILabel;

@interface KGPTLocalMusicCell : UITableViewCell
{
    id <KGPTLocalMusicCellDelegate> _delegate;
    KGMusicModel *_music;
    UIButton *_selectingButton;
    UILabel *_nameLabel;
    UILabel *_sizeLabel;
    UIImageView *_separator;
}

@property(nonatomic) UIImageView *separator; // @synthesize separator=_separator;
@property(nonatomic) UILabel *sizeLabel; // @synthesize sizeLabel=_sizeLabel;
@property(nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) UIButton *selectingButton; // @synthesize selectingButton=_selectingButton;
@property(retain, nonatomic) KGMusicModel *music; // @synthesize music=_music;
@property(nonatomic) id <KGPTLocalMusicCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
- (void)awakeFromNib;
- (void)layoutSubviews;
- (void)refreshSelectingButton;
- (void)refreshSubviews;
- (void)selectingButtonTapped:(id)arg1;
- (void)initSubviews;
- (id)initWithMusic:(id)arg1 style:(long long)arg2 reuseIdentifier:(id)arg3;
- (void)dealloc;

@end
