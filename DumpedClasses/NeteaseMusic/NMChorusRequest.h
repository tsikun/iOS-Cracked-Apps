//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NMHttpRequest.h"

@class NMSong;

@interface NMChorusRequest : NMHttpRequest
{
    NMSong *_song;
}

- (void).cxx_destruct;
- (id)initWithPlayList:(id)arg1;
- (id)initWithAlbum:(id)arg1;
- (id)initWithSong:(id)arg1;
- (id)initWithUrlString:(id)arg1;
@property(readonly, nonatomic) NMSong *song;

@end

