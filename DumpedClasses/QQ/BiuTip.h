//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface BiuTip : NSObject <NSCoding>
{
    _Bool _hasShownForRedPoint;
    unsigned long long _uin;
}

@property(nonatomic) _Bool hasShownForRedPoint; // @synthesize hasShownForRedPoint=_hasShownForRedPoint;
@property(nonatomic) unsigned long long uin; // @synthesize uin=_uin;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
