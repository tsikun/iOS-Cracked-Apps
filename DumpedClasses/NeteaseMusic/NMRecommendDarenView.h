//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class MCLoadMoreTableView, UITableView;

@interface NMRecommendDarenView : UIView
{
    UIView *_infoFooterView;
    UIView *_seperatorView;
    double categoryWidth;
    id _delegate;
    MCLoadMoreTableView *_tableView;
    UITableView *_categoryTableView;
}

@property(readonly, nonatomic) UITableView *categoryTableView; // @synthesize categoryTableView=_categoryTableView;
@property(readonly, nonatomic) MCLoadMoreTableView *tableView; // @synthesize tableView=_tableView;
@property(nonatomic) id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

