//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableDictionary;

@interface PMUser : NSObject
{
    NSMutableDictionary *_blInfo;
}

+ (id)forbidKey:(id)arg1;
+ (void)cancelUserForbid:(id)arg1;
+ (void)userForbid:(id)arg1;
+ (id)parse:(id)arg1;
+ (_Bool)isUserForbid:(id)arg1;
+ (id)sharedInstance;
@property(retain, nonatomic) NSMutableDictionary *blInfo; // @synthesize blInfo=_blInfo;
- (void).cxx_destruct;

@end

