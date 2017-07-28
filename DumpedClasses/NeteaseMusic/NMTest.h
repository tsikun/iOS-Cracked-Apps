//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface NMTest : NSObject
{
    _Bool _isOn;
    NSString *_name;
    NSString *_groupName;
    unsigned long long _testGroup;
}

+ (id)descriptionForTest:(id)arg1 testGroup:(unsigned long long)arg2;
+ (unsigned long long)testGroupForGroupName:(id)arg1;
+ (id)groupNameForTestGroup:(unsigned long long)arg1;
@property(nonatomic) _Bool isOn; // @synthesize isOn=_isOn;
@property(nonatomic) unsigned long long testGroup; // @synthesize testGroup=_testGroup;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(retain, nonatomic) NSString *name; // @synthesize name=_name;
- (void).cxx_destruct;
- (void)fillWithDictionary:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
