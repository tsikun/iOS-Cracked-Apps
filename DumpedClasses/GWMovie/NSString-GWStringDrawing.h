//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Aug  6 2017 20:42:30).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSString.h>

@interface NSString (GWStringDrawing)
- (struct CGSize)sizeWithFont:(id)arg1 forWidth:(double)arg2 lineBreakMode:(long long)arg3;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2;
- (struct CGSize)sizeWithFont:(id)arg1 constrainedToSize:(struct CGSize)arg2 lineBreakMode:(long long)arg3;
- (void)drawAtPoint:(struct CGPoint)arg1 forWidth:(double)arg2 withAttributes:(id)arg3 lineBreakMode:(long long)arg4;
- (void)drawInRect:(struct CGRect)arg1 withAttributes:(id)arg2 lineBreakMode:(long long)arg3 alignment:(long long)arg4;
- (void)drawAtPoint:(struct CGPoint)arg1 withFont:(id)arg2 withColor:(id)arg3;
- (struct CGSize)sizeWithFont:(id)arg1;
@end
