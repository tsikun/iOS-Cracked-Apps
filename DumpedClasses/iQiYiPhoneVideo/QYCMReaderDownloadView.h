//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "UIGestureRecognizerDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class NSMutableArray, NSString, UITableView, UITapGestureRecognizer;

@interface QYCMReaderDownloadView : UIView <UITableViewDelegate, UITableViewDataSource, UIGestureRecognizerDelegate>
{
    NSMutableArray *_dataSource;
    UITapGestureRecognizer *_maskTap;
    UIView *_maskView;
    UITableView *_tableView;
    UIView *_parent;
    long long _leftCount;
    CDUnknownBlockType _handler;
}

+ (void)showInView:(id)arg1 leftEpisodeCount:(long long)arg2 selectBlock:(CDUnknownBlockType)arg3;
@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long leftCount; // @synthesize leftCount=_leftCount;
@property(retain, nonatomic) UIView *parent; // @synthesize parent=_parent;
@property(retain, nonatomic) UITableView *tableView; // @synthesize tableView=_tableView;
@property(retain, nonatomic) UIView *maskView; // @synthesize maskView=_maskView;
- (void).cxx_destruct;
- (_Bool)gestureRecognizer:(id)arg1 shouldBeRequiredToFailByGestureRecognizer:(id)arg2;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)slot_hide;
- (void)show;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

