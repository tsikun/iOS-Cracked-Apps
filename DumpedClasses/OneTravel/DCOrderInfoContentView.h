//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class DCDestinationLabel, DCOrderInfoPriceView, DCOrderInfoTimeLabel, DCOriginLabel, NSArray, NSString;

@interface DCOrderInfoContentView : UIView
{
    _Bool _isShowLine;
    NSString *_time;
    NSString *_timeExtend;
    NSString *_startingAddress;
    NSString *_distance;
    NSString *_endingAddress;
    NSString *_region;
    NSString *_price;
    NSArray *_priceTags;
    long long _priceState;
    NSArray *_orderTags;
    CDUnknownBlockType _tappedPrice;
    CDUnknownBlockType _tapped;
    DCOrderInfoTimeLabel *_timeLabel;
    DCDestinationLabel *_destinationLabel;
    DCOriginLabel *_originLabel;
    DCOrderInfoPriceView *_priceView;
    UIView *_bottomLine;
}

+ (double)viewHeightForDetail;
+ (double)viewHeight;
@property(retain, nonatomic) UIView *bottomLine; // @synthesize bottomLine=_bottomLine;
@property(retain, nonatomic) DCOrderInfoPriceView *priceView; // @synthesize priceView=_priceView;
@property(retain, nonatomic) DCOriginLabel *originLabel; // @synthesize originLabel=_originLabel;
@property(retain, nonatomic) DCDestinationLabel *destinationLabel; // @synthesize destinationLabel=_destinationLabel;
@property(retain, nonatomic) DCOrderInfoTimeLabel *timeLabel; // @synthesize timeLabel=_timeLabel;
@property(copy, nonatomic) CDUnknownBlockType tapped; // @synthesize tapped=_tapped;
@property(copy, nonatomic) CDUnknownBlockType tappedPrice; // @synthesize tappedPrice=_tappedPrice;
@property(nonatomic) _Bool isShowLine; // @synthesize isShowLine=_isShowLine;
@property(retain, nonatomic) NSArray *orderTags; // @synthesize orderTags=_orderTags;
@property(nonatomic) long long priceState; // @synthesize priceState=_priceState;
@property(retain, nonatomic) NSArray *priceTags; // @synthesize priceTags=_priceTags;
@property(copy, nonatomic) NSString *price; // @synthesize price=_price;
@property(copy, nonatomic) NSString *region; // @synthesize region=_region;
@property(copy, nonatomic) NSString *endingAddress; // @synthesize endingAddress=_endingAddress;
@property(copy, nonatomic) NSString *distance; // @synthesize distance=_distance;
@property(copy, nonatomic) NSString *startingAddress; // @synthesize startingAddress=_startingAddress;
@property(copy, nonatomic) NSString *timeExtend; // @synthesize timeExtend=_timeExtend;
@property(copy, nonatomic) NSString *time; // @synthesize time=_time;
- (void).cxx_destruct;
- (void)setup;
- (void)layoutSubviews;
- (void)addTappedRecognizer;
- (void)tapAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end
