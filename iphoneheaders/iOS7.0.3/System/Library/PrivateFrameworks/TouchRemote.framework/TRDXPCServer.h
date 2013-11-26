/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:10 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/TouchRemote.framework/TouchRemote
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/NSXPCConnectionDelegate.h>
#import <MobileCoreServices/NSXPCListenerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSXPCListener, NSArray;

@interface TRDXPCServer : NSObject <NSXPCConnectionDelegate, NSXPCListenerDelegate> {

	NSObject<OS_dispatch_queue>* _accessQueue;
	NSMutableArray* _connections;
	NSXPCListener* _listener;
	unsigned _serverStartCount;

}

@property (nonatomic,readonly) NSArray * connections; 
@property (nonatomic,readonly) NSArray * remoteClientProxies; 
+(id)sharedServer;
-(id)connections;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)start;
-(void)stop;
-(void)connection:(id)arg1 handleInvocation:(id)arg2 isReply:(BOOL)arg3 ;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)remoteClientProxies;
-(void).cxx_destruct;
@end
