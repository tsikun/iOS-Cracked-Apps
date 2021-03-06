//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class CLLocation, CLLocationManager;

@protocol GMSLocationFixReporterBackend
@property(nonatomic) __weak id <GMSLocationFixReporterBackendDelegate> delegate;
@property(readonly, nonatomic) CLLocation *bestUpdateSoFar;
- (void)stopSearchingForLocationFix;
- (void)startSearchingForLocationFix;
- (id)initWithCLLocationManager:(CLLocationManager *)arg1;
@end

