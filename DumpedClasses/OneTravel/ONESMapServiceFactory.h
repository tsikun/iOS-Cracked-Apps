//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSHashTable, ONESMapGlobalConfig;

@interface ONESMapServiceFactory : NSObject
{
    ONESMapGlobalConfig *_globalConfig;
    NSHashTable *_mapEntrances;
}

+ (id)createPointAnnotation:(id)arg1 withPointAnnotation:(id)arg2;
+ (id)createReverseGeocoder:(id)arg1 coordinate:(struct CLLocationCoordinate2D)arg2;
+ (id)createSearch:(id)arg1;
+ (id)mapEntranceFor:(id)arg1 config:(id)arg2;
+ (id)mapEntranceFor:(id)arg1;
+ (id)createMapEntrance:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSHashTable *mapEntrances; // @synthesize mapEntrances=_mapEntrances;
@property(retain, nonatomic) ONESMapGlobalConfig *globalConfig; // @synthesize globalConfig=_globalConfig;
- (void).cxx_destruct;
- (void)updateMapGlobalConfig:(CDUnknownBlockType)arg1;

@end

