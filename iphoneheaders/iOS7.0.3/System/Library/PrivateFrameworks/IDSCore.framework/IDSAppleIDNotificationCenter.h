/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:41 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSMutableArray;

@interface IDSAppleIDNotificationCenter : NSObject {

	NSMutableArray* _availableNotifications;
	NSMutableArray* _usageNotifications;

}
+(id)sharedInstance;
-(void)dealloc;
-(id)init;
-(void)_postAvailableNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5 blockMap:(id)arg6 ;
-(void)_postUsageNotificationForSessions:(id)arg1 appleID:(id)arg2 aliases:(id)arg3 deviceName:(id)arg4 serviceTypes:(id)arg5 ;
-(void)_processAvailableNotifications;
-(void)_processUsageNotifications;
-(void)_noteNewAvailableNotification:(id)arg1 ;
-(void)_noteNewUsageNotification:(id)arg1 ;
-(void)addAvailableNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(id)arg5 completionBlock:(/*^block*/ id)arg6 ;
-(void)addUsageNotificationForSession:(id)arg1 appleID:(id)arg2 alias:(id)arg3 deviceName:(id)arg4 serviceType:(id)arg5 ;
@end
