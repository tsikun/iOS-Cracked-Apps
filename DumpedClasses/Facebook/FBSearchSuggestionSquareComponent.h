//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FBSharedFramework/CKCompositeComponent.h>

#import "FBHScrollImpressionLogging-Protocol.h"

@class FBSearchComponentModel;
@protocol FBSearchInputContextProtocol;

@interface FBSearchSuggestionSquareComponent : CKCompositeComponent <FBHScrollImpressionLogging>
{
    id <FBSearchInputContextProtocol> _context;
    FBSearchComponentModel *_model;
}

+ (id)newWithComponentModel:(id)arg1 context:(id)arg2 horizontalPadding:(double)arg3 style:(const struct FBSearchSuggestionSquareComponentStyle *)arg4;
- (void).cxx_destruct;
- (void)suggestionTapped:(id)arg1;

@end
