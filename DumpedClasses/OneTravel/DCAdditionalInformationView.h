//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DCEmergeCustomBaseView.h"

@class DCPSlowSendWebViewController, NSString;

@interface DCAdditionalInformationView : DCEmergeCustomBaseView
{
    CDUnknownBlockType _cancelBlock;
    CDUnknownBlockType _getAdditioanalInfoBlock;
    DCPSlowSendWebViewController *_leaveMessageView;
}

@property(retain, nonatomic) DCPSlowSendWebViewController *leaveMessageView; // @synthesize leaveMessageView=_leaveMessageView;
@property(copy, nonatomic) CDUnknownBlockType getAdditioanalInfoBlock; // @synthesize getAdditioanalInfoBlock=_getAdditioanalInfoBlock;
@property(copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1 withUrl:(id)arg2 withParms:(id)arg3 isAutoSettingCard:(_Bool)arg4;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) NSString *title;

@end
