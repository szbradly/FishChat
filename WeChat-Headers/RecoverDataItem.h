//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RecoverDataItem : NSObject
{
    unsigned int m_dataType;
    unsigned int m_operationType;
    NSString *m_nsDescription;
    NSString *m_nsPath;
}

@property(retain, nonatomic) NSString *m_nsPath; // @synthesize m_nsPath;
@property(nonatomic) unsigned int m_operationType; // @synthesize m_operationType;
@property(nonatomic) unsigned int m_dataType; // @synthesize m_dataType;
@property(retain, nonatomic) NSString *m_nsDescription; // @synthesize m_nsDescription;
- (void).cxx_destruct;
- (id)description;
- (id)init;

@end
