//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "ARTVCSignalingMessage.h"

@class RTCIceCandidate;

@interface ARTVCICECandidateMessage : ARTVCSignalingMessage
{
    RTCIceCandidate *_candidate;
}

@property(readonly, nonatomic) RTCIceCandidate *candidate; // @synthesize candidate=_candidate;
- (void).cxx_destruct;
- (id)JSONData;
- (id)initWithCandidate:(id)arg1;

@end
