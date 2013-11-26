/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:07:31 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IAP.framework/Support/iap2d
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iap2d/iap2d-Structs.h>
#import <iap2d/iAP2EASession.h>

@class NSMutableArray, NSString, NSThread, NSRunLoop;

@interface iAP2SessionHighSpeed : iAP2EASession {

	NSMutableArray* _writeBufferArray;
	NSMutableArray* _readBufferArray;
	NSMutableArray* _dataForAppArray;
	NSMutableArray* _allReadBuffers;
	NSMutableArray* _allWriteBuffers;
	CFSocketRef _listenSockRef;
	CFRunLoopSourceRef _listenSockRls;
	CFSocketRef _sockRef;
	CFRunLoopSourceRef _sockRls;
	BOOL _sockReadDisabled;
	unsigned long long _deviceID;
	NSString* _protocolName;
	IOUSBInterfaceStruct300* _usbInterface;
	CFRunLoopSourceRef _usbRls;
	unsigned char _inPipe;
	unsigned char _outPipe;
	unsigned short _maxInSize;
	unsigned short _maxOutSize;
	unsigned long _interfaceSpeed;
	NSThread* _runLoopThread;
	NSRunLoop* _runLoop;

}
-(void)_openPipeToApp;
-(void)_openPipeFromApp;
-(void)shuttingDownSession;
-(BOOL)closeDataPipes;
-(id)initWithClient:(id)arg1 connection:(id)arg2 protocolID:(unsigned char)arg3 sessionID:(unsigned short*)arg4 deviceID:(unsigned long long)arg5 protocolName:(id)arg6 ;
-(void)_enqueueReadBuffer:(id)arg1 ;
-(void)_enqueueWriteBuffer:(id)arg1 ;
-(void)_registerListenSocket;
-(IOUSBInterfaceStruct300*)_createInterfaceFromUSBID:(unsigned long long)arg1 ;
-(void)_readSessionDataFromApp;
-(void)_writeSessionDataToApp;
-(void)_openPipeToAppOnThread;
-(void)_readSessionDataFromUSB;
-(void)_openPipeFromAppOnThread;
-(void)_cancelThread;
-(id)_dequeueWriteBuffer;
-(void)_writeUSBData:(id)arg1 ;
-(int)_clearPipeStall:(unsigned char)arg1 ;
-(void)_writeComplete:(id)arg1 writeLength:(unsigned)arg2 ;
-(id)_dequeueReadBuffer;
-(void)_acceptSocketCB:(CFSocketRef)arg1 acceptedSock:(int)arg2 ;
-(void)_readSocketCB:(CFSocketRef)arg1 ;
-(void)_writeSocketCB:(CFSocketRef)arg1 ;
-(void)_readComplete:(id)arg1 readLength:(unsigned)arg2 ;
-(void)dealloc;
-(void)_run;
@end
