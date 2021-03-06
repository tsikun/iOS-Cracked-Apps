//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "AbsProjectionMode.h"

#import "MD360DirectorFactory.h"

@class MDStereoSphere3D, NSString;

@interface StereoSphereProjection : AbsProjectionMode <MD360DirectorFactory>
{
    MDStereoSphere3D *_object3D;
}

@property(retain, nonatomic) MDStereoSphere3D *object3D; // @synthesize object3D=_object3D;
- (void).cxx_destruct;
- (id)createDirector:(int)arg1;
- (id)hijackDirectorFactory;
- (id)getObject3D;
- (void)on;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

