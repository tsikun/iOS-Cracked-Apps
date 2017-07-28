//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIView.h"

@class NSString, QMAnnotationView, UIImage;

@interface QAnnotationView : UIView
{
    QMAnnotationView *_annotationViewInternal;
    _Bool _calloutViewIsUnder;
    _Bool _highlighted;
    _Bool _canCalloutScrollToVisible;
    NSString *_reuseIdentifier;
    NSString *_selectedImageName;
    long long _dispLevel;
    SEL _selShowCalloutView;
    struct CGPoint _calloutOffset;
}

@property(nonatomic) SEL selShowCalloutView; // @synthesize selShowCalloutView=_selShowCalloutView;
@property(nonatomic) _Bool canCalloutScrollToVisible; // @synthesize canCalloutScrollToVisible=_canCalloutScrollToVisible;
@property(nonatomic, getter=isHighlighted) _Bool highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic) struct CGPoint calloutOffset; // @synthesize calloutOffset=_calloutOffset;
@property(readonly, nonatomic) _Bool calloutViewIsUnder; // @synthesize calloutViewIsUnder=_calloutViewIsUnder;
@property(nonatomic) long long dispLevel; // @synthesize dispLevel=_dispLevel;
@property(retain, nonatomic) NSString *selectedImageName; // @synthesize selectedImageName=_selectedImageName;
@property(readonly, nonatomic) NSString *reuseIdentifier; // @synthesize reuseIdentifier=_reuseIdentifier;
- (void).cxx_destruct;
- (void)setAnnotationViewInternal:(id)arg1;
- (id)annotationViewInternal;
@property(nonatomic) _Bool calloutViewCanUnder;
- (void)setCalloutViewIsUnder:(_Bool)arg1;
- (_Bool)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)onTap:(id)arg1;
- (void)positionChanged:(id)arg1;
@property(nonatomic) _Bool avoidAnnotation; // @dynamic avoidAnnotation;
@property(nonatomic) _Bool canShowCallout;
@property(nonatomic) _Bool showCalloutAnimatedWhenTapped;
- (void)setSelected:(_Bool)arg1 animated:(_Bool)arg2;
@property(nonatomic, getter=isSelected) _Bool selected;
@property(nonatomic, getter=isEnabled) _Bool enabled;
@property(retain, nonatomic) UIView *leftCalloutAccessoryView;
@property(retain, nonatomic) UIView *rightCalloutAccessoryView;
@property(retain, nonatomic) UIImage *imageIcon;
@property(retain, nonatomic) NSString *imageName;
@property(nonatomic) double alpha;
@property(nonatomic) double angle;
@property(nonatomic) struct CGPoint centerOffset;
@property(nonatomic) struct CGPoint anchorPoint;
@property(nonatomic) unsigned long long mDrawMode;
- (void)prepareForReuse;
@property(retain, nonatomic) id <QAnnotation> annotation;
@property(nonatomic) _Bool animatesDrop;
- (void)dealloc;
- (id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
