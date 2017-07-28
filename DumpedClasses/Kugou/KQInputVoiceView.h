//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class KQRecordBLL, NSString, UIImageView, UILabel;

@interface KQInputVoiceView : UIView
{
    unsigned long long _inputVoiceViewStatus;
    id <KQInputVoiceViewDelegate> _delegate;
    UIView *_recordView;
    UIImageView *_recordImageView;
    UILabel *_tipLabel;
    UIImageView *_animationImageView;
    UILabel *_countDownLabel;
    UILabel *_countDownSecondLabel;
    KQRecordBLL *_recordBll;
    long long _recordSeconds;
    NSString *_filePath;
    NSString *_groupIdOrChatId;
    unsigned long long _inputVoiceViewType;
}

@property(nonatomic) unsigned long long inputVoiceViewType; // @synthesize inputVoiceViewType=_inputVoiceViewType;
@property(retain, nonatomic) NSString *groupIdOrChatId; // @synthesize groupIdOrChatId=_groupIdOrChatId;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(nonatomic) long long recordSeconds; // @synthesize recordSeconds=_recordSeconds;
@property(retain, nonatomic) KQRecordBLL *recordBll; // @synthesize recordBll=_recordBll;
@property(retain, nonatomic) UILabel *countDownSecondLabel; // @synthesize countDownSecondLabel=_countDownSecondLabel;
@property(retain, nonatomic) UILabel *countDownLabel; // @synthesize countDownLabel=_countDownLabel;
@property(retain, nonatomic) UIImageView *animationImageView; // @synthesize animationImageView=_animationImageView;
@property(retain, nonatomic) UILabel *tipLabel; // @synthesize tipLabel=_tipLabel;
@property(retain, nonatomic) UIImageView *recordImageView; // @synthesize recordImageView=_recordImageView;
@property(retain, nonatomic) UIView *recordView; // @synthesize recordView=_recordView;
@property(nonatomic) __weak id <KQInputVoiceViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) unsigned long long inputVoiceViewStatus; // @synthesize inputVoiceViewStatus=_inputVoiceViewStatus;
- (void).cxx_destruct;
- (void)succesStopRecord;
- (void)cancelStopRecord;
- (void)setViewType:(unsigned long long)arg1 andGroupIdOrChatId:(id)arg2;
- (void)initView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
