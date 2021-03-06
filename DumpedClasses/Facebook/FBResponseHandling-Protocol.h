//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSData;
@protocol FBRequest, FBResponseHandlerDelegate;

@protocol FBResponseHandling <NSObject>
@property(nonatomic) __weak id <FBResponseHandlerDelegate> delegate;
@property(readonly, nonatomic) id <FBRequest> request;
- (void)abort;
- (void)close;
- (void)handleData:(NSData *)arg1;
- (void)open;
@end

