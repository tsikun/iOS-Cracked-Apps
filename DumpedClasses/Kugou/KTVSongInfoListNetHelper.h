//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KFResourceObject.h"

@interface KTVSongInfoListNetHelper : KFResourceObject
{
}

- (void)getSongInfoListFromNetWorkWithTagId:(long long)arg1 pageSize:(long long)arg2 Commplete:(CDUnknownBlockType)arg3;
- (void)updateSongInfoListFromNetWorkWithTagId:(long long)arg1 pageSize:(long long)arg2 Commplete:(CDUnknownBlockType)arg3;
- (void)getSongInfoFromNetwork:(long long)arg1 Commplete:(CDUnknownBlockType)arg2;
- (void)getTagBannerInfo:(long long)arg1 Commplete:(CDUnknownBlockType)arg2;
- (void)getThemeInfo:(long long)arg1 Commplete:(CDUnknownBlockType)arg2;
- (void)getSongInfoListFromNetWorkWith:(long long)arg1 pageSize:(long long)arg2 Commplete:(CDUnknownBlockType)arg3;
- (void)updateSongInfoListFromNetWorkWith:(long long)arg1 pageSize:(long long)arg2 Commplete:(CDUnknownBlockType)arg3;

@end
