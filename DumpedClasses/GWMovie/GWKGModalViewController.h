//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class GWKGModalGradientView;

@interface GWKGModalViewController : UIViewController
{
    GWKGModalGradientView *_styleView;
}

@property(nonatomic) __weak GWKGModalGradientView *styleView; // @synthesize styleView=_styleView;
- (void).cxx_destruct;
- (long long)preferredInterfaceOrientationForPresentation;
- (unsigned long long)supportedInterfaceOrientations;
- (_Bool)shouldAutorotate;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidLoad;
- (void)loadView;

@end

