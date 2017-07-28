//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSNumber, NSString, TTImageInfosModel;

@interface ExploreCollectionBookCellModel : NSObject
{
    NSNumber *_bookID;
    TTImageInfosModel *_imageModel;
    NSString *_title;
    NSString *_desc;
    NSString *_schemaUrl;
    TTImageInfosModel *_nightImageModel;
}

@property(retain, nonatomic) TTImageInfosModel *nightImageModel; // @synthesize nightImageModel=_nightImageModel;
@property(retain, nonatomic) NSString *schemaUrl; // @synthesize schemaUrl=_schemaUrl;
@property(retain, nonatomic) NSString *desc; // @synthesize desc=_desc;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) TTImageInfosModel *imageModel; // @synthesize imageModel=_imageModel;
@property(retain, nonatomic) NSNumber *bookID; // @synthesize bookID=_bookID;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)arg1;

@end
