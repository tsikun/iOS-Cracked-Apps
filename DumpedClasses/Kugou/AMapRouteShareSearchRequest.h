//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AMapShareSearchBaseRequest.h"

@class AMapGeoPoint, NSString;

@interface AMapRouteShareSearchRequest : AMapShareSearchBaseRequest
{
    long long _strategy;
    long long _type;
    AMapGeoPoint *_startCoordinate;
    AMapGeoPoint *_destinationCoordinate;
    NSString *_startName;
    NSString *_destinationName;
}

@property(copy, nonatomic) NSString *destinationName; // @synthesize destinationName=_destinationName;
@property(copy, nonatomic) NSString *startName; // @synthesize startName=_startName;
@property(copy, nonatomic) AMapGeoPoint *destinationCoordinate; // @synthesize destinationCoordinate=_destinationCoordinate;
@property(copy, nonatomic) AMapGeoPoint *startCoordinate; // @synthesize startCoordinate=_startCoordinate;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(nonatomic) long long strategy; // @synthesize strategy=_strategy;
- (void).cxx_destruct;
- (id)transferAddress;
- (id)init;

@end
