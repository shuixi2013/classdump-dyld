/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:02 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol PLBBPendingBulletinsBatchDelegate <NSObject>
@required
-(void)bulletinsBatch:(id)arg1 didProcessReadyBulletins:(id)arg2 stillPending:(BOOL)arg3;
-(BOOL)bulletinsBatch:(id)arg1 shouldAllowAlertsFromContactWithEmail:(id)arg2;
-(id)bulletinsBatch:(id)arg1 bulletinByMergingPersistedListWithBulletin:(id)arg2;
@end
