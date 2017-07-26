//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QZPhotoThumbViewDelegate.h"

@class NSError, NSString, QzoneFeedModel, QzoneFeedVideo;

@protocol QZFeedVideoViewDelegate <QZPhotoThumbViewDelegate>

@optional
- (void)startButtonBreathAnimation;
- (void)jumpToURL:(NSString *)arg1;
- (void)setLiveInfoViewsHidden:(_Bool)arg1;
- (void)changeRoomStatus:(long long)arg1;
- (void)endRecommendVideoAction:(long long)arg1 withFeedModel:(QzoneFeedModel *)arg2 withFeedVideo:(QzoneFeedVideo *)arg3 withUrl:(NSString *)arg4;
- (void)playerViewFailed:(NSError *)arg1;
- (void)playerViewEnd;
- (void)playerViewStarted;
@end
