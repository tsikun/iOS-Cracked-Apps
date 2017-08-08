//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "FBNewAccountRegistrationStepView.h"

@class FBPhoneInputView, FBRichTextView, UIButton, UITextField;

@interface FBNewAccountRegistrationContactPointView : FBNewAccountRegistrationStepView
{
    UIButton *_changeContactPointTypeButton;
    int _contactPointType;
    UITextField *_emailTextField;
    FBPhoneInputView *_phoneInputView;
    FBRichTextView *_legalTextView;
}

@property(readonly, nonatomic) FBRichTextView *legalTextView; // @synthesize legalTextView=_legalTextView;
@property(readonly, nonatomic) FBPhoneInputView *phoneInputView; // @synthesize phoneInputView=_phoneInputView;
@property(readonly, nonatomic) UITextField *emailTextField; // @synthesize emailTextField=_emailTextField;
@property(nonatomic) int contactPointType; // @synthesize contactPointType=_contactPointType;
- (void).cxx_destruct;
- (id)secondaryButton;
@property(readonly, nonatomic) UIButton *changeContactPointTypeButton;
- (_Bool)shouldDisplayInputAccessoryView;
- (struct CGSize)layoutBodyContentConstrainedToSize:(struct CGSize)arg1;
- (id)textFieldForActivityIndicator;
- (void)setContactPointType:(int)arg1 animated:(_Bool)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
