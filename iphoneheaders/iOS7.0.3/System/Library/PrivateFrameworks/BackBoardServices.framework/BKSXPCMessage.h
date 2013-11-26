/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol OS_xpc_object, OS_dispatch_queue;
@class NSObject;

@interface BKSXPCMessage : NSObject {

	NSObject<OS_xpc_object>* _message;
	/*^block*/ id _replyHandler;
	NSObject<OS_dispatch_queue>* _replyQueue;

}
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/ id)arg3 ;
+(void)sendMessage:(long long)arg1 toConnection:(id)arg2 withMessagePacker:(/*^block*/ id)arg3 replyHandler:(/*^block*/ id)arg4 replyQueue:(id)arg5 ;
+(void)sendMessageWithPacker:(/*^block*/ id)arg1 toConnection:(id)arg2 replyHandler:(/*^block*/ id)arg3 replyQueue:(id)arg4 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/ id)arg2 replyHandler:(/*^block*/ id)arg3 replyQueue:(id)arg4 ;
+(void)sendMessageWithPacker:(/*^block*/ id)arg1 toConnection:(id)arg2 ;
+(id)message:(long long)arg1 withPacker:(/*^block*/ id)arg2 ;
-(void)dealloc;
-(id)initWithMessagePacker:(/*^block*/ id)arg1 replyHandler:(/*^block*/ id)arg2 replyQueue:(id)arg3 ;
-(void)sendToConnection:(id)arg1 ;
-(id)initWithMessage:(long long)arg1 packer:(/*^block*/ id)arg2 replyHandler:(/*^block*/ id)arg3 replyQueue:(id)arg4 ;
-(id)initWithMessage:(id)arg1 replyHandler:(/*^block*/ id)arg2 replyQueue:(id)arg3 ;
@end
