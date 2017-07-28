//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "Mobike_Model.h"

@class NSString;

@interface BMKMapTip : Mobike_Model
{
    int _epoityp;
    NSString *_poiId;
    NSString *_name;
    NSString *_city;
    NSString *_district;
    NSString *_address;
    NSString *_primaryText;
    NSString *_secondaryText;
    NSString *_phone;
    NSString *_postcode;
    struct CLLocationCoordinate2D _loc;
}

+ (id)transformMBKTipsWithBaiduInfo:(id)arg1;
+ (id)transformMBKPOIWithBaiduInfo:(id)arg1;
+ (id)getMapTip:(id)arg1 WithIndex:(long long)arg2;
@property(nonatomic) int epoityp; // @synthesize epoityp=_epoityp;
@property(retain, nonatomic) NSString *postcode; // @synthesize postcode=_postcode;
@property(retain, nonatomic) NSString *phone; // @synthesize phone=_phone;
@property(copy, nonatomic) NSString *secondaryText; // @synthesize secondaryText=_secondaryText;
@property(copy, nonatomic) NSString *primaryText; // @synthesize primaryText=_primaryText;
@property(nonatomic) struct CLLocationCoordinate2D loc; // @synthesize loc=_loc;
@property(copy, nonatomic) NSString *address; // @synthesize address=_address;
@property(copy, nonatomic) NSString *district; // @synthesize district=_district;
@property(copy, nonatomic) NSString *city; // @synthesize city=_city;
@property(copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(copy, nonatomic) NSString *poiId; // @synthesize poiId=_poiId;
- (void).cxx_destruct;

@end
