/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DADaemonSupport.framework/DADaemonSupport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <DataAccessExpress/DADisableableObject.h>

@protocol OS_xpc_object;
@class NSObject;

@interface DADAccessManager : DADisableableObject {

	NSObject<OS_xpc_object>* _mainConnection;

}
+(id)sharedManager;
-(void)dealloc;
-(id)init;
-(id)_init;
-(void)_setupServerConnection;
@end
