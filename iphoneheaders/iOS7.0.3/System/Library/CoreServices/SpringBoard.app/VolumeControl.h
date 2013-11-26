/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:29 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <SpringBoard/SpringBoard-Structs.h>
@class NSMutableSet, NSString;

@interface VolumeControl : NSObject {

	BOOL _debounce;
	int _numberOfVolumeDecreasesSinceDownButtonDown;
	int _mode;
	NSMutableSet* _alwaysHiddenCategories;
	NSString* _lastDisplayedCategory;
	NSString* _lastEventCategory;
	BOOL _hudHandledLastVolumeChange;
	BOOL _euDevice;
	float _euVolumeLimit;
	BOOL _euVolumeLimitEnforced;
	BOOL _lastVolumeChangedWasBlocked;
	BOOL _volumeDownButtonIsDown;
	BOOL _volumeUpButtonIsDown;

}
+(id)sharedVolumeControl;
-(void)decreaseVolume;
-(void)increaseVolume;
-(void)cancelVolumeEvent;
-(void)handleVolumeEvent:(IOHIDEventRef)arg1 ;
-(void)removeAlwaysHiddenCategory:(id)arg1 ;
-(void)addAlwaysHiddenCategory:(id)arg1 ;
-(void)hideVolumeHUDIfVisible;
-(float)volumeStepUp;
-(BOOL)headphonesPresent;
-(void)_registerForAVSystemControllerNotifications;
-(void)_initializeEUVolumeLimits;
-(void)_unregisterForAVSystemControllerNotifications;
-(BOOL)_isCategoryAlwaysHidden:(id)arg1 ;
-(BOOL)_isMusicPlayingSomewhere;
-(float)_calcButtonRepeatDelay;
-(void)_changeVolumeBy:(float)arg1 ;
-(float)volumeStepDown;
-(void)sendEUVolumeLimitAcknowledgementIfNecessary;
-(BOOL)_turnOnScreenIfNecessaryForEULimit:(BOOL)arg1 ;
-(void)_EUVolumeLimitChanged:(id)arg1 ;
-(void)_EUVolumeEnforcementChanged:(id)arg1 ;
-(void)_serverConnectionDied:(id)arg1 ;
-(int)_volumeModeForCategory:(id)arg1 ;
-(BOOL)_HUDIsDisplayableForCategory:(id)arg1 ;
-(id)_volumeHUDViewWithMode:(int)arg1 volume:(float)arg2 ;
-(BOOL)_isVolumeHUDVisible;
-(BOOL)_isVolumeHUDVisibleOrFading;
-(void)_userAcknowledgedEUEnforcement;
-(float)getMediaVolume;
-(void)clearAlwaysHiddenCategories;
-(id)lastDisplayedCategory;
-(id)volumeHUDForCurrentCategory;
-(void)_effectiveVolumeChanged:(id)arg1 ;
-(void)_presentVolumeHUDWithMode:(int)arg1 volume:(float)arg2 ;
-(void)dealloc;
-(id)init;
-(void)toggleMute;
-(float)volume;
-(void)setMediaVolume:(float)arg1 ;
@end
