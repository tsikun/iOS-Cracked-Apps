//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIAlertViewDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class ALPOperationMessage, APToastView, NSString, UIButton, UIImageView, UILabel;
@protocol APBarcodeViewDelegate;

@interface APBarcodeView : UIView <UIGestureRecognizerDelegate, UIAlertViewDelegate>
{
    id <APBarcodeViewDelegate> _glossaryDelegate;
    ALPOperationMessage *_opMessage;
    UIView *_contentView;
    UIImageView *_imageView;
    UIButton *_verifyButton;
    UILabel *_bottomLabel;
    APToastView *_toastView;
    UIView *_maskView;
}

@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
@property(retain, nonatomic) APToastView *toastView; // @synthesize toastView=_toastView;
@property(retain, nonatomic) UILabel *bottomLabel; // @synthesize bottomLabel=_bottomLabel;
@property(retain, nonatomic) UIButton *verifyButton; // @synthesize verifyButton=_verifyButton;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) ALPOperationMessage *opMessage; // @synthesize opMessage=_opMessage;
@property(nonatomic) __weak id <APBarcodeViewDelegate> glossaryDelegate; // @synthesize glossaryDelegate=_glossaryDelegate;
- (void).cxx_destruct;
- (id)snapShotWithSize:(struct CGSize)arg1 withView:(id)arg2;
- (id)thumbnailImage:(id)arg1;
- (void)updateDynamicCode:(id)arg1;
- (void)glossaryBtnPressed:(id)arg1;
- (id)loadingImage;
- (id)toString:(id)arg1;
- (id)createImage;
- (id)constructStringFromString:(id)arg1;
- (id)stringViewWithTitle:(id)arg1 content:(id)arg2;
- (void)addText;
- (void)addActionLabel;
- (void)addBarImage;
- (void)addQRImageUrl;
- (void)addQRImage;
- (void)createbottomLabel;
- (void)createSubView;
- (void)layoutSubviews;
- (_Bool)isDynamic;
- (id)initWithFrame:(struct CGRect)arg1 operationMessage:(id)arg2 BarcodeDelegate:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

