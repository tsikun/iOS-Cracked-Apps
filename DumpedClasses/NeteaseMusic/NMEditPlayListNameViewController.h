//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "UITextFieldDelegate.h"

@class NMSettingHeaderFooterView, NSString, UITextField, UIView;

@interface NMEditPlayListNameViewController : UIViewController <UITextFieldDelegate>
{
    NMSettingHeaderFooterView *_bgView;
    UIView *_textbgView;
    NSString *_playListName;
    UITextField *_textField;
    id <NMEditPlayListNameViewControllerDelegate> _delegate;
}

@property(nonatomic) id <NMEditPlayListNameViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)didReceiveMemoryWarning;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (id)getSubstring:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (void)saveItemTouched;
- (void)backAction:(id)arg1;
- (void)dismissSelf;
- (_Bool)saveName;
- (id)processStr:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)handleChangeSkin:(id)arg1;
- (id)initWithPlayListName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
