//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "APPBGeneratedMessage.h"

#import "GeneratedMessageProtocol-Protocol.h"

@class NSString, O2OShopRecommend;

@interface O2OShopRecommendResponse : APPBGeneratedMessage <GeneratedMessageProtocol>
{
    _Bool _hasResultCode;
    _Bool _hasSuccess;
    _Bool _hasResultDesc;
    _Bool _hasShopRecomend;
    _Bool _success;
    NSString *_resultCode;
    NSString *_resultDesc;
    O2OShopRecommend *_shopRecomend;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) O2OShopRecommend *shopRecomend; // @synthesize shopRecomend=_shopRecomend;
@property(retain, nonatomic) NSString *resultDesc; // @synthesize resultDesc=_resultDesc;
@property(nonatomic) _Bool success; // @synthesize success=_success;
@property(retain, nonatomic) NSString *resultCode; // @synthesize resultCode=_resultCode;
@property(readonly) _Bool hasShopRecomend; // @synthesize hasShopRecomend=_hasShopRecomend;
@property(readonly) _Bool hasResultDesc; // @synthesize hasResultDesc=_hasResultDesc;
@property(readonly) _Bool hasSuccess; // @synthesize hasSuccess=_hasSuccess;
@property(readonly) _Bool hasResultCode; // @synthesize hasResultCode=_hasResultCode;
- (void).cxx_destruct;
- (void)mergeFromCodedInputStream:(id)arg1 extensionRegistry:(id)arg2;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

