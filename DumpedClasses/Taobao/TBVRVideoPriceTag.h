//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "TBVRVideoUIComponent.h"

@class NSString;

@interface TBVRVideoPriceTag : TBVRVideoUIComponent
{
    NSString *_itemTitle;
    NSString *_price;
    NSString *_shopTitle;
}

@property(copy, nonatomic) NSString *shopTitle; // @synthesize shopTitle=_shopTitle;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *itemTitle; // @synthesize itemTitle=_itemTitle;
- (void).cxx_destruct;
- (_Bool)canDisable;
- (_Bool)canFocuse;
- (void)setup;
- (id)initWithItemTitle:(id)arg1 price:(id)arg2 shopTitle:(id)arg3;

@end

