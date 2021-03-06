//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

#import "AVAudioPlayerDelegate.h"
#import "QQAudioSessionManagerDelegate.h"
#import "SpriteInstanceDelegate.h"

@class AVAudioPlayer, NSString, QQAmrPlayer, SpriteAIMsgModel, SpriteBox, SpriteInstance, sa_gl_view;

@interface SpriteView : UIView <SpriteInstanceDelegate, QQAudioSessionManagerDelegate, AVAudioPlayerDelegate>
{
    QQAmrPlayer *_amrPlayer;
    AVAudioPlayer *_audioPlayer;
    _Bool _ispreviewOnFrame;
    _Bool _needIgnoreMute;
    int _diySoundId;
    sa_gl_view *_glview;
    id <SpriteViewDelegate> _delegate;
    SpriteAIMsgModel *_currentPlayingAIModel;
    SpriteInstance *_meInstance;
    SpriteInstance *_friendInstance;
    double _diySoundBeginTs;
    SpriteBox *_box;
}

@property(retain, nonatomic) SpriteBox *box; // @synthesize box=_box;
@property(nonatomic) _Bool needIgnoreMute; // @synthesize needIgnoreMute=_needIgnoreMute;
@property(nonatomic) double diySoundBeginTs; // @synthesize diySoundBeginTs=_diySoundBeginTs;
@property(nonatomic) int diySoundId; // @synthesize diySoundId=_diySoundId;
@property(nonatomic) _Bool ispreviewOnFrame; // @synthesize ispreviewOnFrame=_ispreviewOnFrame;
@property(retain, nonatomic) SpriteInstance *friendInstance; // @synthesize friendInstance=_friendInstance;
@property(retain, nonatomic) SpriteInstance *meInstance; // @synthesize meInstance=_meInstance;
@property(retain, nonatomic) SpriteAIMsgModel *currentPlayingAIModel; // @synthesize currentPlayingAIModel=_currentPlayingAIModel;
@property(nonatomic) id <SpriteViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) sa_gl_view *glview; // @synthesize glview=_glview;
- (void)audioPlayerDidFinishPlaying:(id)arg1 successfully:(_Bool)arg2;
- (void)stopPlaySound;
- (_Bool)isPlayingSound;
- (void)playSound:(id)arg1;
- (void)speakIsRepeat:(_Bool)arg1;
- (void)playAiModel:(id)arg1;
- (void)onIntterruptBegin;
- (void)onAudioSessionActive;
- (id)amrPlayer;
- (void)stopPlayMusicVibrate;
- (void)playMusicVibrate:(id)arg1;
- (void)showBoxWithUin:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)spriteInstance:(id)arg1 bubbleDidFinishDownload:(long long)arg2 isSucc:(_Bool)arg3;
- (void)spriteInstance:(id)arg1 actionDidDownload:(id)arg2 isSucc:(_Bool)arg3;
- (void)spriteInstance:(id)arg1 actionDidFinish:(CDStruct_6778d593)arg2 isSucc:(_Bool)arg3;
- (void)spriteInstance:(id)arg1 actionDidStart:(CDStruct_6778d593)arg2 isSucc:(_Bool)arg3;
- (void)spriteInstance:(id)arg1 dresssDidFinish:(id)arg2 isRoleSucc:(_Bool)arg3 isDressSucc:(_Bool)arg4;
- (void)spriteInstance:(id)arg1 roleDidFinish:(long long)arg2 isSucc:(_Bool)arg3;
- (void)onAvatarBubbleClicked:(id)arg1;
- (void)onAvatarClickedNode:(id)arg1;
- (void)playDoubleActionWithId:(long long)arg1;
- (int)bubbleIdWithContent:(id)arg1;
- (id)hitTest:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)dealloc;
- (void)setGlviewFrame:(struct CGRect)arg1;
- (void)resetFrame:(struct CGRect)arg1;
- (void)commonInit;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

