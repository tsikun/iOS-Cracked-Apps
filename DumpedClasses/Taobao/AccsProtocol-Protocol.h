//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSError, NSString;

@protocol AccsProtocol <NSObject>
+ (NSError *)responseDataabnormal:(NSString *)arg1 serviceID:(NSString *)arg2 parameters:(NSDictionary *)arg3;
+ (_Bool)isChannelError:(int)arg1 extP:(NSDictionary *)arg2;
- (void)unbindUserWithUserId:(NSString *)arg1 callBack:(void (^)(NSError *, NSDictionary *))arg2;
- (void)bindUserWithUserId:(NSString *)arg1 callBack:(void (^)(NSError *, NSDictionary *))arg2;
- (void)unbindAppWithResultsBlock:(void (^)(NSError *, NSDictionary *))arg1;
- (void)bindAppWithAppleToken:(NSData *)arg1 callBack:(void (^)(NSError *, NSDictionary *))arg2;
@end

