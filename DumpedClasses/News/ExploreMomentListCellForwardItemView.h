//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ExploreMomentListCellItemBase.h"

#import "ExploreMomentImageAlbumDelegate.h"
#import "TTTAttributedLabelDelegate.h"

@class ExploreMomentImageAlbum, ExploreMomentListCellOriginArticleItemView, NSString, SSTTTAttributedLabel, SSThemedView, UIButton;

@interface ExploreMomentListCellForwardItemView : ExploreMomentListCellItemBase <ExploreMomentImageAlbumDelegate, TTTAttributedLabelDelegate>
{
    SSTTTAttributedLabel *_commentLabel;
    UIButton *_bgButton;
    SSThemedView *_contentView;
    ExploreMomentImageAlbum *_imageAlbum;
    ExploreMomentListCellOriginArticleItemView *_articleItemView;
}

+ (unsigned long long)maxLineOfTextForCommentForUserInfo:(id)arg1;
+ (double)lineHeight;
+ (double)preferredTitleSize;
+ (_Bool)needShowForModel:(id)arg1 userInfo:(id)arg2;
+ (double)heightForMomentModel:(id)arg1 cellWidth:(double)arg2 userInfo:(id)arg3;
+ (double)heightForTitleLabel:(id)arg1 cellWidth:(double)arg2 userInfo:(id)arg3;
+ (id)originalForumNameForMomentModel:(id)arg1;
+ (id)originalUserNameForMomentModel:(id)arg1;
+ (id)titleForMomentModel:(id)arg1;
+ (id)attributeStrForContent:(id)arg1 withOriginalUserName:(id)arg2 andOriginalForumName:(id)arg3;
@property(retain, nonatomic) ExploreMomentListCellOriginArticleItemView *articleItemView; // @synthesize articleItemView=_articleItemView;
@property(retain, nonatomic) ExploreMomentImageAlbum *imageAlbum; // @synthesize imageAlbum=_imageAlbum;
@property(retain, nonatomic) SSThemedView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *bgButton; // @synthesize bgButton=_bgButton;
@property(retain, nonatomic) SSTTTAttributedLabel *commentLabel; // @synthesize commentLabel=_commentLabel;
- (void).cxx_destruct;
- (void)attributedLabel:(id)arg1 didSelectLinkWithURL:(id)arg2;
- (void)openPhotoForIndex:(unsigned long long)arg1;
- (void)imageAlbum:(id)arg1 didClickImageAtIndex:(long long)arg2;
- (double)heightForMomentModel:(id)arg1 cellWidth:(double)arg2;
- (void)refreshForMomentModel:(id)arg1;
- (void)bgButtonClicked;
- (void)themeChanged:(id)arg1;
- (_Bool)isForumItemViewShown;
- (id)initWithWidth:(double)arg1 userInfo:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

