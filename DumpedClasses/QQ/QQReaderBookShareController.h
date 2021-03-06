//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQActivityViewController.h"

#import "QQReaderBookLinkDelegate.h"
#import "RichMsgPreviewDialogDelegate.h"

@class NSArray, NSData, NSDictionary, NSString, QQHttpClientSession, QQRichMsgPreviewDialog;

@interface QQReaderBookShareController : QQActivityViewController <QQReaderBookLinkDelegate, RichMsgPreviewDialogDelegate>
{
    NSArray *_activities;
    int _shareType;
    NSString *_shareLink;
    NSString *_coverUrl;
    NSString *_introUrl;
    QQRichMsgPreviewDialog *_richMsgPreDlg;
    QQHttpClientSession *_session;
    NSData *_imageData;
    NSString *_bookIntro;
    NSDictionary *_bookDictionary;
}

@property(copy, nonatomic) NSString *coverUrl; // @synthesize coverUrl=_coverUrl;
@property(retain, nonatomic) NSDictionary *bookDictionary; // @synthesize bookDictionary=_bookDictionary;
- (void)dealloc;
- (void)bookLinkActivityDidAction:(id)arg1;
- (void)qqHttpSessionError:(id)arg1 error:(id)arg2;
- (void)qqHttpSessionDidLoad:(id)arg1 result:(id)arg2;
- (_Bool)requestIntro;
- (_Bool)requesCover;
- (void)cancelButtonClick;
- (void)sendButtonClick:(id)arg1 msg:(id)arg2;
- (void)showShareLinkDialog;
- (void)doShareToWeibo:(id)arg1;
- (void)doShareToQZone:(id)arg1;
- (void)doShareToQQ:(id)arg1;
- (void)doShareToWeiXin:(id)arg1;
- (id)compressGroupHeadImageLimitTo32K:(id)arg1;
- (void)doShareToFriends:(id)arg1;
- (void)weixinNotInstallTips;
- (void)shareGroupLink:(id)arg1;
- (void)showGroupLinkActionSheet:(int)arg1;
- (id)shareUrl;
- (id)loadIntro;
- (id)loadTitlePlusIntro;
- (id)loadTitle;
- (id)loadCover;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithFlag:(unsigned int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

