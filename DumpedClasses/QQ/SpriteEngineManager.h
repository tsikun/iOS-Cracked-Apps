//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SpriteEngineManager : NSObject
{
}

+ (id)spriteDir:(id)arg1;
+ (id)getInstance;
- (void)openWebview:(id)arg1;
- (void)log:(int)arg1 code:(int)arg2 info1:(id)arg3 info2:(id)arg4 info3:(id)arg5;
- (void)reportDataBySSOWithDataStr:(id)arg1;
- (void)reportEventWithDataStr:(id)arg1;
- (void)reportFlowWithDataStr:(id)arg1;
- (void)sendHttpRequest:(id)arg1 methodStr:(id)arg2 postStr:(id)arg3 cookieStr:(id)arg4 refererStr:(id)arg5 callback:(CDUnknownBlockType)arg6;
- (void)sendLocalSSOWithCmd:(id)arg1 dataStr:(id)arg2;
- (void)sendSSOWithCmd:(id)arg1 dataChar:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)gameST;
- (id)gameSTKey;
- (id)actionBasePath;
- (id)gameSandBoxPath;
- (id)gameBasePath;
- (id)basePath;
- (void)asyncGetAvatarByOpenID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)asyncGetNickNameByOpenID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)nicknameWithUin:(id)arg1 aioType:(int)arg2 sessionID:(id)arg3;
- (id)hexStringToBytes:(id)arg1;
- (id)decryptData:(id)arg1 key:(id)arg2;
- (id)encryptData:(id)arg1 key:(id)arg2;
- (id)musicSwitch;

@end
