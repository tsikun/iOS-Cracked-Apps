//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString;

@protocol VLViewLoadProtocol <NSObject>
@property(nonatomic) __weak id <VLViewDelegate> vlViewDelegate;
- (id)initWithFrame:(struct CGRect)arg1 VLViewDelegate:(id <VLViewDelegate>)arg2;

@optional
- (void)fireEvent:(NSString *)arg1 Params:(NSDictionary *)arg2;
@end
