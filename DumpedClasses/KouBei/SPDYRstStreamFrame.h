//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul  5 2017 23:13:50).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SPDYFrame.h"

@interface SPDYRstStreamFrame : SPDYFrame
{
    unsigned int _streamId;
    unsigned int _statusCode;
}

@property(nonatomic) unsigned int statusCode; // @synthesize statusCode=_statusCode;
@property(nonatomic) unsigned int streamId; // @synthesize streamId=_streamId;

@end

