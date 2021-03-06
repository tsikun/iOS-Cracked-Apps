//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/FBQPCustomRenderActionHandler.h>

#import "FBPNAUnifiedCustomRenderMegaphoneViewDelegate-Protocol.h"
#import "FBPhoneInputHandlerDelegate-Protocol.h"
#import "FBPhoneNumberAcquisitionConfirmationViewControllerDelegate-Protocol.h"

@class FBPNAUnifiedCustomRenderMegaphoneView, FBPhoneInputHandler, FBPhoneNumberAcquisitionFunnelLogger, NSString;

@interface FBPNAUnifiedCustomRenderMegaphoneActionHandler : FBQPCustomRenderActionHandler <FBPNAUnifiedCustomRenderMegaphoneViewDelegate, FBPhoneNumberAcquisitionConfirmationViewControllerDelegate, FBPhoneInputHandlerDelegate>
{
    FBPNAUnifiedCustomRenderMegaphoneView *_view;
    FBPhoneInputHandler *_phoneInputHandler;
    FBPhoneNumberAcquisitionFunnelLogger *_funnelLogger;
    NSString *_initialCountryCode;
    NSString *_funnelPhoneNumber;
}

- (void).cxx_destruct;
- (void)_handleWebviewLinkTap:(id)arg1 withEvent:(id)arg2;
- (void)_tapSubtitleText:(id)arg1 withEvent:(id)arg2;
- (void)_handleError:(id)arg1;
- (void)_addFunnelAction:(id)arg1 errorCode:(id)arg2;
- (void)_addValidNumberEventToFunnel;
- (void)_addInvalidNumberEventToFunnelWithErrorCode:(id)arg1;
- (void)_handleAddContactpointSuccess;
- (void)_doAddContactpointCoreMutationWithContactpoint:(id)arg1 withCountry:(id)arg2;
- (void)_showErrorMessage:(id)arg1;
- (void)_addPhoneNumberAddAttemptEventToFunnelWithPhoneNumber:(id)arg1 countryCode:(id)arg2;
- (void)_handleSubmitNewContactPoint;
- (void)_addChangeCountryActionToFunnel;
- (id)_funnelLogger;
- (void)phoneInputHandlerDidReceiveReturnPress:(id)arg1;
- (void)phoneInputHandler:(id)arg1 didReceiveValidPhoneNumber:(id)arg2;
- (void)phoneInputHandler:(id)arg1 didReceiveInvalidInput:(id)arg2;
- (void)megaphoneViewDidTapNotNowButton;
- (void)megaphoneViewDidTapAddNumberButton;
- (void)phoneNumberAcquisitionConfirmationViewControllerDidCancel:(id)arg1;
- (void)phoneNumberAcquisitionConfirmationViewControllerDidComplete:(id)arg1;
- (void)dealloc;
- (void)setUp;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

