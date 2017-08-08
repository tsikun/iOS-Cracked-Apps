//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MQQBaseViewController.h"

#import "MQQAlertViewDelegate-Protocol.h"
#import "MQQCallBlockerManagerDelegate-Protocol.h"
#import "MQQSharkRequestDelegate-Protocol.h"

@class MQQCBReportPhoneNumberRequest, MQQCheckBox, MQQInputListView, MQQNumRecognizerRequest, MQQSCBErrorTipsView, MQQSCBInputTextField, MQQSCBLoadingView, NSArray, NSString, UILabel, UIView;

@interface MQQSCBAddViewController : MQQBaseViewController <MQQSharkRequestDelegate, MQQAlertViewDelegate, MQQCallBlockerManagerDelegate>
{
    _Bool _isPaning;
    _Bool _isChinesePhoneNumber;
    MQQInputListView *_inputListView;
    MQQSCBInputTextField *_textField;
    NSArray *_tagViewArray;
    UIView *_contentView;
    MQQSCBErrorTipsView *_errorTipView;
    long long _selectedTag;
    MQQCheckBox *_checkBox;
    MQQSCBLoadingView *_loadingView;
    MQQCBReportPhoneNumberRequest *_reportRequest;
    MQQNumRecognizerRequest *_numRecognizerRequest;
    NSString *_inputPhoneNumber;
    UILabel *_contentLabel;
    NSArray *_framesOfViews;
    struct CGRect _frameOfHideViews;
}

@property(retain, nonatomic) NSArray *framesOfViews; // @synthesize framesOfViews=_framesOfViews;
@property(nonatomic) struct CGRect frameOfHideViews; // @synthesize frameOfHideViews=_frameOfHideViews;
@property(retain, nonatomic) UILabel *contentLabel; // @synthesize contentLabel=_contentLabel;
@property(retain, nonatomic) NSString *inputPhoneNumber; // @synthesize inputPhoneNumber=_inputPhoneNumber;
@property(retain, nonatomic) MQQNumRecognizerRequest *numRecognizerRequest; // @synthesize numRecognizerRequest=_numRecognizerRequest;
@property(retain, nonatomic) MQQCBReportPhoneNumberRequest *reportRequest; // @synthesize reportRequest=_reportRequest;
@property(retain, nonatomic) MQQSCBLoadingView *loadingView; // @synthesize loadingView=_loadingView;
@property(retain, nonatomic) MQQCheckBox *checkBox; // @synthesize checkBox=_checkBox;
@property(nonatomic) long long selectedTag; // @synthesize selectedTag=_selectedTag;
@property(retain, nonatomic) MQQSCBErrorTipsView *errorTipView; // @synthesize errorTipView=_errorTipView;
@property(nonatomic) _Bool isChinesePhoneNumber; // @synthesize isChinesePhoneNumber=_isChinesePhoneNumber;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) NSArray *tagViewArray; // @synthesize tagViewArray=_tagViewArray;
@property(retain, nonatomic) MQQSCBInputTextField *textField; // @synthesize textField=_textField;
@property(retain, nonatomic) MQQInputListView *inputListView; // @synthesize inputListView=_inputListView;
- (void)blockFail;
- (void)blockSuccess;
- (void)markFail;
- (void)markSuccess;
- (void)didClickButtonIndex:(long long)arg1 alertViewTag:(long long)arg2;
- (id)cancleTitleForAuthorization;
- (void)didClickSubmitButton;
- (id)textFieldPlaceHolder;
- (_Bool)shouldShowCheckBox;
- (id)textForCheckBox;
- (id)tagTypeArray;
@property(nonatomic) _Bool isChecked;
@property(readonly, nonatomic) NSString *numString;
- (id)normalImageNameArray;
- (id)tagNameArray;
- (id)tagArray;
- (void)mqqAlertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)sharkRequestDidFinish:(id)arg1 withInfo:(id)arg2;
- (void)sharkRequestDidFail:(id)arg1;
- (void)checkBoxClicked:(id)arg1;
- (void)tagViewClicked:(id)arg1;
- (void)checkIsValidNumber;
- (void)willEnterForeground:(id)arg1;
- (void)monitorNumberIsValid;
- (void)textFieldTextDidChanged:(id)arg1;
- (void)textFieldTextDidEndEditing:(id)arg1;
- (void)textFieldTextDidBeginEditing:(id)arg1;
- (void)callBlockerManager:(id)arg1 didReloadDataWithError:(id)arg2;
- (void)blockNumberInfo:(id)arg1;
- (void)blockCallNumber:(id)arg1 tag:(long long)arg2;
- (void)markCallNumber:(id)arg1 tag:(long long)arg2;
- (id)callBlockerManager;
- (void)refreshTagViewsWithSelectedTagView:(id)arg1;
- (void)showAuthorizationAlert;
- (void)clearSelection;
- (void)dismissLoadingView;
- (void)showLoadingView;
- (void)fillTextFieldWithPasteboard;
- (void)addTagViewsToContentView:(id)arg1;
- (void)loadContentView;
- (void)loadInputView;
- (double)topSpace;
- (void)loadTitleView;
- (void)loadBackgroundImage;
- (void)updateChinesePrefix;
- (void)viewDidLoad;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (id)initWithPhoneNumber:(id)arg1;
- (id)init;
- (void)dealloc;
- (void)hideTagViews:(_Bool)arg1;
- (void)showTagViews:(_Bool)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
