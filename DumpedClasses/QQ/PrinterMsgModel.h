//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "QQAIOMsgModel.h"

@class NSString;

@interface PrinterMsgModel : QQAIOMsgModel
{
    float _progress;
    int _status;
    NSString *_strMsg;
    NSString *_msgContent;
    NSString *_filePath;
    double _cellHeight;
    int _fileType;
    NSString *_uuid;
    NSString *_fileName;
}

+ (id)modelWithMessageModel:(id)arg1;
@property(copy, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
- (id)statusToMsg:(int)arg1;
- (float)heightForString:(id)arg1 fontSize:(float)arg2 andWidth:(float)arg3;
@property(nonatomic) double cellHeight; // @dynamic cellHeight;
- (id)cellIdentifier;
- (id)cellClassName;
- (void)reloadPrintModel:(id)arg1;
- (id)initWithMessageModel:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(copy, nonatomic) NSString *filePath; // @dynamic filePath;
@property(nonatomic) int fileType; // @dynamic fileType;
@property(copy, nonatomic) NSString *msgContent; // @dynamic msgContent;
@property(nonatomic) float progress; // @dynamic progress;
@property(nonatomic) int status; // @dynamic status;
@property(copy, nonatomic) NSString *strMsg; // @dynamic strMsg;
@property(copy, nonatomic) NSString *uuid; // @dynamic uuid;

@end

