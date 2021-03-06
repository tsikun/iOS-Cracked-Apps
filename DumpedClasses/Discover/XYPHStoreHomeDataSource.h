//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, XYPHSearchPlaceholder;

@interface XYPHStoreHomeDataSource : NSObject
{
    _Bool _categoriesLoading;
    NSMutableArray *_categoriesArray;
    XYPHSearchPlaceholder *_storePlaceHolder;
}

@property(nonatomic) _Bool categoriesLoading; // @synthesize categoriesLoading=_categoriesLoading;
@property(retain, nonatomic) XYPHSearchPlaceholder *storePlaceHolder; // @synthesize storePlaceHolder=_storePlaceHolder;
@property(retain, nonatomic) NSMutableArray *categoriesArray; // @synthesize categoriesArray=_categoriesArray;
- (void).cxx_destruct;
- (_Bool)hasNewStore;
- (void)refreshPlaceHolder;
- (id)searchPlaceholderSearchWordString;
- (id)searchPlaceholderDisPlayString;
- (void)requestStoreCategories:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (id)init;

@end

