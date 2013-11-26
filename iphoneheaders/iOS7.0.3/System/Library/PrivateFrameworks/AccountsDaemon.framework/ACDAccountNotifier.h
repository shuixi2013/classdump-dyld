/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AccountsDaemon.framework/AccountsDaemon
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSSet;

@interface ACDAccountNotifier : NSObject {

	NSSet* _notificationPlugins;

}

@property (readonly) NSSet * notificationPlugins; 
+(id)sharedAccountNotifier;
-(BOOL)postWillChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4 ;
-(void)postDidChangeNotificationForType:(int)arg1 inStore:(id)arg2 newAccount:(id)arg3 oldAccount:(id)arg4 ;
-(BOOL)canSaveAccount:(id)arg1 inStore:(id)arg2 ;
-(id)notificationPlugins;
-(void)_faultInNotificationPlugins;
-(void)postWillPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2 ;
-(void)postDidPerformDataclassActionsOnAccount:(id)arg1 forDataclasses:(id)arg2 ;
-(void).cxx_destruct;
@end
