//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "KGBasicSheet.h"

@class NSArray, NSString, UIView;

@interface KGLocalFileSheet : KGBasicSheet
{
    NSString *_title;
    NSString *_message;
    NSString *_cancleTitle;
    NSString *_selectTitle;
    _Bool _isSeleced;
    double _contentheight;
    CDUnknownBlockType _buttonClickedBlock;
    NSArray *_buttonTitles;
    UIView *_tipsView;
    UIView *_buttonView;
    UIView *_seperateLineView;
}

+ (id)actionSheetWithTitle:(id)arg1 message:(id)arg2 buttonTitles:(id)arg3 selectTitle:(id)arg4 cancelTitle:(id)arg5 withBlock:(CDUnknownBlockType)arg6;
@property(retain, nonatomic) UIView *seperateLineView; // @synthesize seperateLineView=_seperateLineView;
@property(retain, nonatomic) UIView *buttonView; // @synthesize buttonView=_buttonView;
@property(retain, nonatomic) UIView *tipsView; // @synthesize tipsView=_tipsView;
@property(retain, nonatomic) NSArray *buttonTitles; // @synthesize buttonTitles=_buttonTitles;
@property(copy, nonatomic) CDUnknownBlockType buttonClickedBlock; // @synthesize buttonClickedBlock=_buttonClickedBlock;
- (void).cxx_destruct;
- (void)show;
- (void)cancelButtonClicked:(id)arg1;
- (void)operationButtonClicked:(id)arg1;
- (void)selecButtonClicked:(id)arg1;
- (void)addButtons;
- (void)addHeaderTitleView;
- (void)commitUI;
- (id)initWithTitle:(id)arg1 message:(id)arg2 buttonTitles:(id)arg3 selectTitle:(id)arg4 cancelTitle:(id)arg5;
- (void)dealloc;

@end
