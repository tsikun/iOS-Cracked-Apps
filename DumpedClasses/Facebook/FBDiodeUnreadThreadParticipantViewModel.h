//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBValueObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface FBDiodeUnreadThreadParticipantViewModel : FBValueObject <NSCopying>
{
    NSString *_name;
    NSString *_profileUri;
}

@property(readonly, copy, nonatomic) NSString *profileUri; // @synthesize profileUri=_profileUri;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (id)initWithName:(id)arg1 profileUri:(id)arg2;

@end

