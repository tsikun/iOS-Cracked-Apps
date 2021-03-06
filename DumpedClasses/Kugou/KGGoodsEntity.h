//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KugouObject.h"

@class KGGoodsInfoEntity, NSArray, NSString;

@interface KGGoodsEntity : KugouObject
{
    unsigned long long _status;
    unsigned long long _fail_process;
    NSString *_type;
    long long _goodsId;
    NSString *_goodsHash;
    NSString *_name;
    NSString *_albumID;
    unsigned long long _level;
    long long _expire;
    long long _publish;
    unsigned long long _privilege;
    KGGoodsInfoEntity *_info;
    long long _price;
    unsigned long long _pay_type;
    long long _buy_count;
    long long _pkg_price;
    NSArray *_discount;
    NSArray *_relateGoods;
    NSString *_albumSingerName;
    NSArray *_albumSongs;
    NSString *_topic_url;
    NSString *_topic_remark;
    long long _moduleID;
    NSString *_cdUrl;
    long long _cid;
}

+ (id)dic2Obj:(id)arg1;
@property(nonatomic) long long cid; // @synthesize cid=_cid;
@property(copy, nonatomic) NSString *cdUrl; // @synthesize cdUrl=_cdUrl;
@property(nonatomic) long long moduleID; // @synthesize moduleID=_moduleID;
@property(retain, nonatomic) NSString *topic_remark; // @synthesize topic_remark=_topic_remark;
@property(retain, nonatomic) NSString *topic_url; // @synthesize topic_url=_topic_url;
@property(retain, nonatomic) NSArray *albumSongs; // @synthesize albumSongs=_albumSongs;
@property(copy, nonatomic) NSString *albumSingerName; // @synthesize albumSingerName=_albumSingerName;
@property(retain, nonatomic) NSArray *relateGoods; // @synthesize relateGoods=_relateGoods;
@property(retain, nonatomic) NSArray *discount; // @synthesize discount=_discount;
@property(nonatomic) long long pkg_price; // @synthesize pkg_price=_pkg_price;
@property(nonatomic) long long buy_count; // @synthesize buy_count=_buy_count;
@property(nonatomic) unsigned long long pay_type; // @synthesize pay_type=_pay_type;
@property(nonatomic) long long price; // @synthesize price=_price;
@property(retain, nonatomic) KGGoodsInfoEntity *info; // @synthesize info=_info;
@property(nonatomic) unsigned long long privilege; // @synthesize privilege=_privilege;
@property(nonatomic) long long publish; // @synthesize publish=_publish;
@property(nonatomic) long long expire; // @synthesize expire=_expire;
@property(nonatomic) unsigned long long level; // @synthesize level=_level;
@property(copy, nonatomic) NSString *albumID; // @synthesize albumID=_albumID;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *goodsHash; // @synthesize goodsHash=_goodsHash;
@property(nonatomic) long long goodsId; // @synthesize goodsId=_goodsId;
@property(copy, nonatomic) NSString *type; // @synthesize type=_type;
@property(nonatomic) unsigned long long fail_process; // @synthesize fail_process=_fail_process;
@property(nonatomic) unsigned long long status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

