//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UITableViewCell.h"

@class KGThemeLabel, KGThemeLine, MemberOfSearch, UIImageView, UIView;

@interface PersonalInfoSearchTableViewCell : UITableViewCell
{
    double _nicknameLabelY;
    double _fxFirstLabelY;
    double _fxSecondLabelY;
    double _fxThirdLabelY;
    double _fxLabelBottomSapse;
    struct CGSize _userIDLabelDefaultSize;
    _Bool _isLastLine;
    MemberOfSearch *_data;
    UIImageView *_picImgView;
    KGThemeLabel *_nicknameLabel;
    KGThemeLine *_lineView;
    KGThemeLabel *_userIDLabel;
    KGThemeLabel *_fanxingNicknameLabel;
    KGThemeLabel *_fanxingIDLabel;
    KGThemeLabel *_singNicknameLabel;
    KGThemeLine *_bottomLineView;
    KGThemeLine *_separateLineView;
    UIView *_selectedBGView;
    UIImageView *_certificationPicView;
}

@property(retain, nonatomic) UIImageView *certificationPicView; // @synthesize certificationPicView=_certificationPicView;
@property(retain, nonatomic) UIView *selectedBGView; // @synthesize selectedBGView=_selectedBGView;
@property(retain, nonatomic) KGThemeLine *separateLineView; // @synthesize separateLineView=_separateLineView;
@property(retain, nonatomic) KGThemeLine *bottomLineView; // @synthesize bottomLineView=_bottomLineView;
@property(retain, nonatomic) KGThemeLabel *singNicknameLabel; // @synthesize singNicknameLabel=_singNicknameLabel;
@property(retain, nonatomic) KGThemeLabel *fanxingIDLabel; // @synthesize fanxingIDLabel=_fanxingIDLabel;
@property(retain, nonatomic) KGThemeLabel *fanxingNicknameLabel; // @synthesize fanxingNicknameLabel=_fanxingNicknameLabel;
@property(retain, nonatomic) KGThemeLabel *userIDLabel; // @synthesize userIDLabel=_userIDLabel;
@property(retain, nonatomic) KGThemeLine *lineView; // @synthesize lineView=_lineView;
@property(retain, nonatomic) KGThemeLabel *nicknameLabel; // @synthesize nicknameLabel=_nicknameLabel;
@property(retain, nonatomic) UIImageView *picImgView; // @synthesize picImgView=_picImgView;
@property(nonatomic) _Bool isLastLine; // @synthesize isLastLine=_isLastLine;
@property(retain, nonatomic) MemberOfSearch *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (void)setHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (void)layoutSubviews;
- (void)layoutCertificationPicViewWithViewSize:(struct CGSize)arg1;
- (void)refreshUIWithData:(id)arg1 viewSize:(struct CGSize)arg2;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 viewSize:(struct CGSize)arg3;
- (void)dealloc;

@end

