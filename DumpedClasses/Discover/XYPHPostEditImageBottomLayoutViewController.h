//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "XYPHBaseViewController.h"

@class NSMutableArray, UICollectionView, UIView;

@interface XYPHPostEditImageBottomLayoutViewController : XYPHBaseViewController
{
    UIView *_topContainer;
    UIView *_bottomContainer;
    UICollectionView *_collectionView;
    NSMutableArray *_titleButtons;
}

@property(retain, nonatomic) NSMutableArray *titleButtons; // @synthesize titleButtons=_titleButtons;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(retain, nonatomic) UIView *bottomContainer; // @synthesize bottomContainer=_bottomContainer;
@property(retain, nonatomic) UIView *topContainer; // @synthesize topContainer=_topContainer;
- (void).cxx_destruct;
- (void)setupTopContainerWithTitles:(id)arg1;
- (void)setupCollectionView;
- (void)setupContainer;
- (void)dealloc;
- (void)viewDidLoad;

@end

