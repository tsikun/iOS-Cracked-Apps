//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VUIVector3;

@interface VUIParticle : NSObject
{
    float _lifeSpanMS;
    float _currentLifeMS;
    float _alpha;
    float _scale;
    float _mass;
    VUIVector3 *_velocity;
    VUIVector3 *_position;
    VUIVector3 *_acceleration;
}

@property(retain, nonatomic) VUIVector3 *acceleration; // @synthesize acceleration=_acceleration;
@property(nonatomic) float mass; // @synthesize mass=_mass;
@property(nonatomic) float scale; // @synthesize scale=_scale;
@property(nonatomic) float alpha; // @synthesize alpha=_alpha;
@property(nonatomic) float currentLifeMS; // @synthesize currentLifeMS=_currentLifeMS;
@property(nonatomic) float lifeSpanMS; // @synthesize lifeSpanMS=_lifeSpanMS;
@property(retain, nonatomic) VUIVector3 *position; // @synthesize position=_position;
@property(retain, nonatomic) VUIVector3 *velocity; // @synthesize velocity=_velocity;
- (void).cxx_destruct;
- (void)dealloc;
- (void)reset;
- (id)init;

@end
