//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "TBSDKServerDelegate.h"

@class NSArray, NSString, TBSDKMTOPServer;

@interface TBNewGouponModel : NSObject <TBSDKServerDelegate>
{
    NSArray *dataArray;
    NSString *squareUrl;
    NSString *squareName;
    NSString *name;
    NSArray *walletDOList;
    NSArray *walletRecommendResultList;
    TBSDKMTOPServer *request;
    NSString *_findUrl;
    long long _iconType;
    NSString *_iconName;
    NSArray *_walletGList;
    NSString *_cachedResponse;
}

+ (id)sharedInstance;
@property(retain, nonatomic) NSString *cachedResponse; // @synthesize cachedResponse=_cachedResponse;
@property(retain, nonatomic) NSArray *walletGList; // @synthesize walletGList=_walletGList;
@property(retain, nonatomic) NSString *iconName; // @synthesize iconName=_iconName;
@property(nonatomic) long long iconType; // @synthesize iconType=_iconType;
@property(copy, nonatomic) NSString *findUrl; // @synthesize findUrl=_findUrl;
@property(retain, nonatomic) TBSDKMTOPServer *request; // @synthesize request;
@property(retain, nonatomic) NSArray *walletRecommendResultList; // @synthesize walletRecommendResultList;
@property(retain, nonatomic) NSArray *walletDOList; // @synthesize walletDOList;
@property(copy, nonatomic) NSString *name; // @synthesize name;
@property(copy, nonatomic) NSString *squareName; // @synthesize squareName;
@property(copy, nonatomic) NSString *squareUrl; // @synthesize squareUrl;
@property(retain, nonatomic) NSArray *dataArray; // @synthesize dataArray;
- (void).cxx_destruct;
- (id)loadResponseData:(id)arg1;
- (void)concelGrouponInfoListRequest;
- (void)getGrouponInfoListRequest:(CDUnknownBlockType)arg1;
- (id)dictToObject:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

