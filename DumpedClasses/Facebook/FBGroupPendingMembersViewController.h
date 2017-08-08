//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import "FBEmbeddedTabBarListControllerListener-Protocol.h"

@class FBEmbeddedTabBarListControllerListenerAnnouncer, FBUserSession, NSString, UIBarButtonItem;
@protocol FBEmbeddedTabBarListController;

@interface FBGroupPendingMembersViewController : UIViewController <FBEmbeddedTabBarListControllerListener>
{
    NSString *_groupID;
    NSString *_source;
    FBUserSession *_session;
    id <FBEmbeddedTabBarListController> _tabBarController;
    unsigned long long _currentTabIndex;
    UIBarButtonItem *_actionsButton;
    UIViewController *_actionSheetController;
    _Bool _isFlaggedTabEnabled;
    FBEmbeddedTabBarListControllerListenerAnnouncer *_tabBarAnnouncer;
}

- (void).cxx_destruct;
- (void)didUpdateHeaderViewSize:(struct CGSize)arg1;
- (void)didLoadContentView:(id)arg1 forTabAtIndex:(unsigned long long)arg2;
- (void)didSelectTabAtIndex:(unsigned long long)arg1 fromIndex:(unsigned long long)arg2;
- (_Bool)fb_showNavBarSearchField;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (id)_getPendingMemberTypeFromTab;
- (void)didCompleteBulkAction;
- (void)didDismissActionSheet;
- (void)didPressActionsButton:(id)arg1;
- (void)_updateActionsButtonForTab:(unsigned long long)arg1;
- (void)viewDidLoad;
- (id)initWithGroupID:(id)arg1 source:(id)arg2 session:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
