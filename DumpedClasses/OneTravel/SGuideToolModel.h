//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface SGuideToolModel : NSObject
{
    NSString *_guideText;
    CDUnknownBlockType _guideHelpAction;
    CDUnknownBlockType _guideOnOrOffpAction;
}

@property(copy, nonatomic) CDUnknownBlockType guideOnOrOffpAction; // @synthesize guideOnOrOffpAction=_guideOnOrOffpAction;
@property(copy, nonatomic) CDUnknownBlockType guideHelpAction; // @synthesize guideHelpAction=_guideHelpAction;
@property(retain, nonatomic) NSString *guideText; // @synthesize guideText=_guideText;
- (void).cxx_destruct;

@end

