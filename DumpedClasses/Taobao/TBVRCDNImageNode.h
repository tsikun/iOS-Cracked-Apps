//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VUINode.h"

@class NSString, VUIDillyNode;

@interface TBVRCDNImageNode : VUINode
{
    NSString *_imageUrl;
    VUIDillyNode *_textureNode;
}

@property(retain, nonatomic) VUIDillyNode *textureNode; // @synthesize textureNode=_textureNode;
@property(copy, nonatomic) NSString *imageUrl; // @synthesize imageUrl=_imageUrl;
- (void).cxx_destruct;
- (void)dealloc;
- (void)loadBitMap;
- (void)initChild;
- (id)initWithGeometry:(id)arg1 placeHolder:(id)arg2;

@end

