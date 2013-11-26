/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:01 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface MCHacks : NSObject
+(id)sharedHacks;
-(BOOL)sanitizedProfileSignerCertificateChainIsAllowedToWriteDefaults:(id)arg1 ;
-(BOOL)_applyHeuristicsToRestrictions:(id)arg1 forProfile:(id)arg2 outError:(id*)arg3 ;
-(id)_permittedGracePeriodNumbers;
-(id)_selectLargestNumberFromSortedArray:(id)arg1 equalToOrLessThanNumber:(id)arg2 ;
-(id)_permittedAutoLockNumbers;
-(void)_applyServerSideChangesWithOldRestrictions:(id)arg1 newRestrictions:(id)arg2 oldEffectiveUserSettings:(id)arg3 newEffectiveUserSettings:(id)arg4 ;
-(void)_applyImpliedSettingsToSettingsDictionary:(id)arg1 currentSettings:(id)arg2 restrictions:(id)arg3 ;
-(void)_setRequriesEncryptedBackupInLockdownWithEffectiveUserSettings:(id)arg1 ;
-(id)_deviceSpecificDefaultSettings;
-(void)_sendChangeNotificationsBasedOnDefaultsAdditionByDomain:(id)arg1 ;
-(void)_sendChangeNotificationsBasedOnDefaultsRemovalByDomain:(id)arg1 ;
-(BOOL)isSetupBuddyDone;
@end
