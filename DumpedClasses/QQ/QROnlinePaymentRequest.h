//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

@interface QROnlinePaymentRequest : NSObject
{
    NSArray *_payingChapters;
    NSString *_bookId;
    long long _totalPrice;
    id <QROnlinePaymentDelegate> _delegate;
    _Bool _isPreLoading;
    NSString *_origin;
    int _xo;
}

- (void).cxx_destruct;

// Remaining properties
@property(retain, nonatomic) NSString *bookId; // @dynamic bookId;
@property(nonatomic) __weak id <QROnlinePaymentDelegate> delegate; // @dynamic delegate;
@property(nonatomic) _Bool isPreLoading; // @dynamic isPreLoading;
@property(retain, nonatomic) NSString *origin; // @dynamic origin;
@property(retain, nonatomic) NSArray *payingChapters; // @dynamic payingChapters;
@property(nonatomic) long long totalPrice; // @dynamic totalPrice;

@end

