//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "PTHTweetbotCursor.h"

@interface PTHTweetbotTrendsCursor : PTHTweetbotCursor
{
    unsigned long long _woeID;
}

+ (Class)itemClass;
@property(nonatomic) unsigned long long woeID; // @synthesize woeID=_woeID;
- (id)itemsArrayFromResponse:(id)arg1;
- (id)queryDictionary;
- (double)loadNewerInterval;
- (id)requestURLString;
- (_Bool)needsSort;
- (_Bool)shouldReload;

@end

