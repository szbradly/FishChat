//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

@class NSString;

@interface WCCardAcceptCardSeed : MMObject
{
    unsigned int _cardType;
    NSString *_cardTpID;
    NSString *_cardExt;
}

@property(retain, nonatomic) NSString *cardExt; // @synthesize cardExt=_cardExt;
@property(retain, nonatomic) NSString *cardTpID; // @synthesize cardTpID=_cardTpID;
@property(nonatomic) unsigned int cardType; // @synthesize cardType=_cardType;
- (void).cxx_destruct;
- (void)dealloc;

@end

