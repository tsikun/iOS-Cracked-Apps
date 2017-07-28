//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SongInfo.h"

@class NSString;

@interface UgcBaseSonglistInfo : SongInfo
{
    NSString *_extname;
    NSString *_disc;
    NSString *_sort;
    unsigned long long _is_lib;
}

+ (unsigned long long)isLibWithInteger:(unsigned long long)arg1;
+ (id)songlistArrayWithJsonString:(id)arg1;
+ (id)jsonStringWithSonglistArray:(id)arg1;
+ (id)songlistArrayWithArrayDictionary:(id)arg1;
+ (id)dictionarySonglistWith:(id)arg1;
+ (id)ugcBaseSonglistInfoWithDic:(id)arg1;
+ (id)dicWithUgcBaseSonglistInfo:(id)arg1;
+ (id)ugcBaseSonglistInfoWithSongInfo:(id)arg1;
@property(nonatomic) unsigned long long is_lib; // @synthesize is_lib=_is_lib;
@property(copy, nonatomic) NSString *sort; // @synthesize sort=_sort;
@property(copy, nonatomic) NSString *disc; // @synthesize disc=_disc;
@property(copy, nonatomic) NSString *extname; // @synthesize extname=_extname;
- (void).cxx_destruct;
- (id)init;

@end
