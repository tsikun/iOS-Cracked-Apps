//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "KQGChatDjHeadViewDelegate.h"
#import "UICollectionViewDataSource.h"
#import "UICollectionViewDelegate.h"

@class GChatPageBean, KGThemeImageView, KGThemeLabel, KGThemeLine, KQGChatDjHeadView, NSMutableArray, NSString, UICollectionView, UILabel;

@interface GChatMemberBar : UIView <UICollectionViewDelegate, UICollectionViewDataSource, KQGChatDjHeadViewDelegate>
{
    KGThemeLine *_lLine;
    KGThemeLabel *_rblCount;
    KGThemeLabel *_rblCountDesc;
    KGThemeImageView *_btnArrow;
    UICollectionView *_centerView;
    KQGChatDjHeadView *_djHeadView;
    GChatPageBean *_gChatPageBean;
    NSString *_groupImage;
    NSMutableArray *_listMember;
    CDUnknownBlockType _clickItem;
    CDUnknownBlockType _clickArrow;
    CDUnknownBlockType _longPressedItem;
    id <GChatMemberBarDelegate> _delegate;
    UILabel *_singBeansLabel;
    NSMutableArray *_noContainMasterListMember;
}

@property(retain, nonatomic) NSMutableArray *noContainMasterListMember; // @synthesize noContainMasterListMember=_noContainMasterListMember;
@property(retain, nonatomic) UILabel *singBeansLabel; // @synthesize singBeansLabel=_singBeansLabel;
@property(nonatomic) __weak id <GChatMemberBarDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) CDUnknownBlockType longPressedItem; // @synthesize longPressedItem=_longPressedItem;
@property(copy, nonatomic) CDUnknownBlockType clickArrow; // @synthesize clickArrow=_clickArrow;
@property(copy, nonatomic) CDUnknownBlockType clickItem; // @synthesize clickItem=_clickItem;
@property(retain, nonatomic) NSMutableArray *listMember; // @synthesize listMember=_listMember;
@property(copy, nonatomic) NSString *groupImage; // @synthesize groupImage=_groupImage;
@property(retain, nonatomic) GChatPageBean *gChatPageBean; // @synthesize gChatPageBean=_gChatPageBean;
@property(retain, nonatomic) KQGChatDjHeadView *djHeadView; // @synthesize djHeadView=_djHeadView;
- (void).cxx_destruct;
- (void)singBeansButtonClicked:(id)arg1;
- (void)longPressDjHeadView;
- (void)tapDjHeadView;
- (void)configSingBeansWithCount:(unsigned long long)arg1;
- (void)rightViewTap:(id)arg1;
- (void)changeMemberState:(id)arg1;
- (void)configMasterImg:(id)arg1;
- (_Bool)isMasterOrManagerOnline;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)creatUI;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
