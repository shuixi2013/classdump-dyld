/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@interface MFFetchLimits : NSObject {

	unsigned _fetchMinBytes;
	unsigned _fetchMaxBytes;
	unsigned _minBytesLeft;

}

@property (assign,nonatomic) unsigned fetchMinBytes;              //@synthesize fetchMinBytes=_fetchMinBytes - In the implementation block
@property (assign,nonatomic) unsigned fetchMaxBytes;              //@synthesize fetchMaxBytes=_fetchMaxBytes - In the implementation block
@property (assign,nonatomic) unsigned minBytesLeft;               //@synthesize minBytesLeft=_minBytesLeft - In the implementation block
-(id)init;
-(void)setFetchMaxBytes:(unsigned)arg1 ;
-(unsigned)fetchMaxBytes;
-(unsigned)fetchMinBytes;
-(void)setFetchMinBytes:(unsigned)arg1 ;
-(unsigned)minBytesLeft;
-(void)setMinBytesLeft:(unsigned)arg1 ;
@end
