//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import "CKComponentHostingViewDelegate-Protocol.h"
#import "CKComponentProvider-Protocol.h"

@class CKComponentHostingView, NSString;

@interface FIGFriendsNearbySectionHeaderView : UIView <CKComponentHostingViewDelegate, CKComponentProvider>
{
    CKComponentHostingView *_componentHostingView;
}

+ (id)componentForModel:(id)arg1 context:(id)arg2;
- (void).cxx_destruct;
- (void)componentHostingViewDidInvalidateSize:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithSectionTitle:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
