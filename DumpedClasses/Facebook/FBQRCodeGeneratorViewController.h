//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBComposerFlowDelegate-Protocol.h"
#import "FBPublishingCompletionEventListener-Protocol.h"
#import "MFMailComposeViewControllerDelegate-Protocol.h"

@class FBPublishingCompletionEventForwarder, FBQRCodeGeneratorView, FBUserSession, NSString, UIImage;

@interface FBQRCodeGeneratorViewController : UIViewController <FBComposerFlowDelegate, FBPublishingCompletionEventListener, MFMailComposeViewControllerDelegate>
{
    FBUserSession *_session;
    FBQRCodeGeneratorView *_qrCodeGeneratorView;
    UIImage *_vanityQRCodeImage;
    id _downloadHandle;
    FBPublishingCompletionEventForwarder *_publishingEventForwarder;
    double _topLayoutGuideLength;
}

@property(nonatomic) double topLayoutGuideLength; // @synthesize topLayoutGuideLength=_topLayoutGuideLength;
- (void).cxx_destruct;
- (void)cleanUpPublicationHandling;
- (void)publicationCompletedThroughTerminalFailureOfPublication:(id)arg1 withError:(id)arg2;
- (void)publicationCompletedThroughSuccessOfPublication:(id)arg1 withResponse:(id)arg2;
- (void)publicationCompletedThroughCancellationOfPublication:(id)arg1;
- (void)composerCompletedWithResult:(id)arg1;
- (void)mailComposeController:(id)arg1 didFinishWithResult:(long long)arg2 error:(id)arg3;
- (void)_logQRCodeForEmailAttribute:(id)arg1;
- (id)_createQRImageForString:(id)arg1 size:(struct CGSize)arg2;
- (void)_setVanityQRCodeInView;
- (void)_createServerQRCode;
- (void)_getServerQRCodeImage:(id)arg1;
- (void)_postToTimeline;
- (void)_saveToAlbum;
- (id)_generateStandardQRCodeImage;
- (id)_getCurrentQRCodeImageOrGenerate;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (void)loadView;
- (id)analyticsModule;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (void)dealloc;
- (id)initWithSession:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

