//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "UITableViewDataSource.h"
#import "UITableViewDelegate.h"

@class AliDetailMultimediaViewControl, NSArray<AliDetailComponentModel>, NSString;

@interface TBDetailInfoTableViewHandler : NSObject <UITableViewDelegate, UITableViewDataSource>
{
    _Bool _needReloadMultimedia;
    CDUnknownBlockType _scrollHandler;
    CDUnknownBlockType _heightForRowHandler;
    NSArray<AliDetailComponentModel> *_layoutDatas;
    AliDetailMultimediaViewControl *_multimediaControl;
}

@property(nonatomic) _Bool needReloadMultimedia; // @synthesize needReloadMultimedia=_needReloadMultimedia;
@property(retain, nonatomic) AliDetailMultimediaViewControl *multimediaControl; // @synthesize multimediaControl=_multimediaControl;
@property(retain, nonatomic) NSArray<AliDetailComponentModel> *layoutDatas; // @synthesize layoutDatas=_layoutDatas;
@property(copy, nonatomic) CDUnknownBlockType heightForRowHandler; // @synthesize heightForRowHandler=_heightForRowHandler;
@property(copy, nonatomic) CDUnknownBlockType scrollHandler; // @synthesize scrollHandler=_scrollHandler;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (double)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)multimediaComponent;
- (void)setupMultiMediaComponent:(id)arg1 componentModel:(id)arg2;
- (void)refreshCellContentSize:(id)arg1 forTableView:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

