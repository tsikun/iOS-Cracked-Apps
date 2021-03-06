//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NMCommentListBase, NSString;

@protocol NMCommentListBaseProtocol <NSObject>

@optional
- (void)commentListBaseDidEndDragging:(NMCommentListBase *)arg1 willDecelerate:(_Bool)arg2;
- (void)commentListBaseDidEndDecelerating:(NMCommentListBase *)arg1;
- (void)commentListBaseWillBeginDragging:(NMCommentListBase *)arg1;
- (void)commentListBaseDidScroll:(NMCommentListBase *)arg1;
- (void)commentListBaseHotCommentTouched:(NMCommentListBase *)arg1;
- (id)commentListBaseCommentingResource:(NMCommentListBase *)arg1;
- (void)commentListBase:(NMCommentListBase *)arg1 topicNameTouched:(NSString *)arg2;
- (void)commentListBase:(NMCommentListBase *)arg1 avatarTouched:(NSString *)arg2;
- (void)commentListBase:(NMCommentListBase *)arg1 userNickNameTouched:(NSString *)arg2;
- (void)commentListBaseResignFirstResponder;
- (void)commentListBaseBecomeFirstResponder;
- (void)topicListTriggeredByInput:(NMCommentListBase *)arg1;
- (void)atUserTriggered:(_Bool)arg1;
- (void)onCommentCountChanged:(long long)arg1;
- (void)praiseTouched;
- (void)shareTouched;
@end

