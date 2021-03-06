//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "VZListViewController.h"

#import "KBCSchemeProtocol-Protocol.h"

@class APExceptionView, KBCLiveCastModel, KBCLiveCastViewDataSource, KBCLiveCastViewDelegate, NSString, UITableView;

@interface KBCLiveCastViewController : VZListViewController <KBCSchemeProtocol>
{
    UITableView *_tableView;
    KBCLiveCastViewDataSource *_ds;
    KBCLiveCastViewDelegate *_dl;
    KBCLiveCastModel *_model;
    APExceptionView *_netErrorView;
    APExceptionView *_emptyErrorView;
}

+ (unsigned long long)canInitWithScheme:(id)arg1;
@property(retain, nonatomic) APExceptionView *emptyErrorView; // @synthesize emptyErrorView=_emptyErrorView;
@property(retain, nonatomic) APExceptionView *netErrorView; // @synthesize netErrorView=_netErrorView;
@property(retain, nonatomic) KBCLiveCastModel *model; // @synthesize model=_model;
@property(retain, nonatomic) KBCLiveCastViewDelegate *dl; // @synthesize dl=_dl;
@property(retain, nonatomic) KBCLiveCastViewDataSource *ds; // @synthesize ds=_ds;
- (void)setTableView:(id)arg1;
- (void).cxx_destruct;
- (void)showError:(id)arg1 withModel:(id)arg2;
- (void)showEmpty:(id)arg1;
- (void)showModel:(id)arg1;
- (void)removeAllErrorView;
- (void)viewDidLoad;
- (void)reloadLiveCastData;
- (id)tableView;
- (id)initWithScheme:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

