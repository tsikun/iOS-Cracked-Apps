//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "QYCommonViewController.h"

@class NSArray, NSDictionary;

@interface QYBuyVipController : QYCommonViewController
{
    _Bool _isAutoBuy;
    _Bool _tabViewIsHidden;
    NSArray *_productList;
    NSArray *_pictureList;
    long long _fromType;
    NSDictionary *_dataDictionary;
}

+ (void)setCurrentBuyVip:(id)arg1;
+ (id)getCurrentBuyVIPController;
@property(nonatomic) _Bool tabViewIsHidden; // @synthesize tabViewIsHidden=_tabViewIsHidden;
@property(retain, nonatomic) NSDictionary *dataDictionary; // @synthesize dataDictionary=_dataDictionary;
@property(nonatomic) long long fromType; // @synthesize fromType=_fromType;
@property(retain, nonatomic) NSArray *pictureList; // @synthesize pictureList=_pictureList;
@property(retain, nonatomic) NSArray *productList; // @synthesize productList=_productList;
- (void).cxx_destruct;
- (void)toVipFilm;
- (void)alertView:(id)arg1 clickedButtonAtIndex:(long long)arg2;
- (void)openPlayerToPlay;
- (void)opeVipUserLicense:(id)arg1;
- (void)openPlayerByVip;
- (void)buyProductButNoLogined;
- (void)ToExitAndReLogin;
- (void)ToRegisterView;
- (void)toLoginWithInfo:(long long)arg1;
- (void)logoutDone:(id)arg1;
- (void)moduleDone:(id)arg1;
- (void)toLoginWithMsg:(long long)arg1;
- (void)toLogin;
- (void)refreshWholeView;
- (void)setFromFcByPush:(id)arg1 andType:(long long)arg2;
- (void)setFromFcByPush:(id)arg1;
- (void)autoBuyProduct;
- (void)comeback;
- (void)clean;
- (void)setFromSourceAndLoadProductList:(long long)arg1;
- (void)loadProductFinish:(id)arg1 orgineData:(id)arg2;
- (void)didReceiveMemoryWarning;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)dealloc;

@end

