/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:54 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol OS_dispatch_queue, TRTCPConnectionStreamDelegate;
@class NSObject, NSInputStream, NSOutputStream;

@interface TRTCPConnectionStream : NSObject {

	NSObject<OS_dispatch_queue>* _connectionAccessQueue;
	NSInputStream* _readStream;
	NSObject<OS_dispatch_queue>* _readQueue;
	NSOutputStream* _writeStream;
	NSObject<OS_dispatch_queue>* _writeQueue;
	BOOL _closed;
	<TRTCPConnectionStreamDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <TRTCPConnectionStreamDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,getter=isClosed,nonatomic) BOOL closed;                                    //@synthesize closed=_closed - In the implementation block
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
-(void)close;
-(void)setClosed:(BOOL)arg1 ;
-(BOOL)isClosed;
-(id)_initWithReadStream:(id)arg1 writeStream:(id)arg2 peerPublicKey:(id)arg3 options:(int)arg4 ;
-(id)_initWithReadStream:(id)arg1 writeStream:(id)arg2 options:(int)arg3 ;
-(id)_initWithNetService:(id)arg1 ;
-(void)readDataOfLength:(unsigned long)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void)writeData:(id)arg1 completionHandler:(/*^block*/ id)arg2 ;
-(void).cxx_destruct;
@end
