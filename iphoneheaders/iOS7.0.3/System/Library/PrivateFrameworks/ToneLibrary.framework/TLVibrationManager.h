/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:09 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <ToneLibrary/ToneLibrary-Structs.h>
@class NSDictionary, TLAccessQueue;

@interface TLVibrationManager : NSObject {

	BOOL _needsRefresh;
	BOOL _allowsAutoRefresh;
	unsigned _specialBehaviors;
	NSDictionary* _cachedSystemVibrationPatterns;
	NSDictionary* _cachedUserGeneratedVibrationPatterns;
	TLAccessQueue* _accessQueue;

}

@property (assign,nonatomic) BOOL needsRefresh;                                                                                                  //@synthesize needsRefresh=_needsRefresh - In the implementation block
@property (assign,nonatomic) BOOL allowsAutoRefresh; 
@property (nonatomic,readonly) BOOL shouldVibrateForCurrentRingerSwitchState; 
@property (nonatomic,readonly) BOOL shouldVibrateOnRing; 
@property (nonatomic,readonly) BOOL shouldVibrateOnSilent; 
@property (assign,setter=_setAllowsAutoRefresh:,nonatomic) BOOL _allowsAutoRefresh;                                                              //@synthesize allowsAutoRefresh=_allowsAutoRefresh - In the implementation block
@property (assign,setter=_setSpecialBehaviors:,nonatomic) unsigned _specialBehaviors;                                                            //@synthesize specialBehaviors=_specialBehaviors - In the implementation block
@property (getter=_isUnitTestingModeEnabled,nonatomic,readonly) BOOL _unitTestingModeEnabled; 
@property (nonatomic,readonly) NSDictionary * _systemVibrationPatterns; 
@property (setter=_setCachedSystemVibrationPatterns:,nonatomic,retain) NSDictionary * _cachedSystemVibrationPatterns;                            //@synthesize cachedSystemVibrationPatterns=_cachedSystemVibrationPatterns - In the implementation block
@property (nonatomic,readonly) NSDictionary * _userGeneratedVibrationPatterns; 
@property (setter=_setCachedUserGeneratedVibrationPatterns:,nonatomic,retain) NSDictionary * _cachedUserGeneratedVibrationPatterns;              //@synthesize cachedUserGeneratedVibrationPatterns=_cachedUserGeneratedVibrationPatterns - In the implementation block
@property (setter=_setAccessQueue:,retain) TLAccessQueue * _accessQueue;                                                                         //@synthesize accessQueue=_accessQueue - In the implementation block
+(id)sharedVibrationManager;
+(void)_handleSystemVibrationDidChangeNotification;
+(void)_handleVibrateOnRingOrSilentDidChangeNotification;
-(void)_handleUserGeneratedVibrationsDidChangeNotification;
-(BOOL)vibrationWithIdentifierIsValid:(id)arg1 ;
-(void)setAllowsAutoRefresh:(BOOL)arg1 ;
-(id)nameOfVibrationWithIdentifier:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)refresh;
-(id)_accessQueue;
-(id)currentVibrationIdentifierForAlertType:(int)arg1 ;
-(id)currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)patternForVibrationWithIdentifier:(id)arg1 ;
-(id)noneVibrationPattern;
-(id)noneVibrationIdentifier;
-(BOOL)shouldVibrateForCurrentRingerSwitchState;
-(id)patternForVibrationWithIdentifier:(id)arg1 repeating:(BOOL)arg2 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 accountIdentifier:(id)arg3 ;
-(id)noneVibrationName;
-(id)allSystemVibrationIdentifiers;
-(id)allUserGeneratedVibrationIdentifiers;
-(id)currentVibrationNameForAlertType:(int)arg1 ;
-(id)defaultVibrationIdentifierForAlertType:(int)arg1 ;
-(BOOL)deleteUserGeneratedVibrationPatternWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)addUserGeneratedVibrationPattern:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(BOOL)setName:(id)arg1 forUserGeneratedVibrationWithIdentifier:(id)arg2 error:(id*)arg3 ;
-(void)_setAccessQueue:(id)arg1 ;
-(void)_performBlockInAccessQueue:(/*^block*/ id)arg1 ;
-(id)_initWithSpecialBehaviors:(unsigned)arg1 ;
-(void)_setSpecialBehaviors:(unsigned)arg1 ;
-(void)_setAllowsAutoRefresh:(BOOL)arg1 ;
-(BOOL)_isUnitTestingModeEnabled;
-(void)_setCachedSystemVibrationPatterns:(id)arg1 ;
-(void)_setCachedUserGeneratedVibrationPatterns:(id)arg1 ;
-(BOOL)_allowsAutoRefresh;
-(unsigned)_specialBehaviors;
-(BOOL)needsRefresh;
-(id)_cachedUserGeneratedVibrationPatterns;
-(void)_setNeedsRefresh:(BOOL)arg1 ;
-(id)_userGeneratedVibrationPatterns;
-(id)_copySystemWideVibrationPatternPreferenceKeyForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)_currentVibrationIdentifierForAlertType:(int)arg1 accountIdentifier:(id)arg2 ;
-(id)_patternForSystemVibrationWithIdentifier:(id)arg1 ;
-(id)_cachedSystemVibrationPatterns;
-(id)_systemVibrationPatterns;
-(id)_localizedNameForVibrationWithIdentifier:(id)arg1 ;
-(id)_nameOfVibrationWithIdentifier:(id)arg1 ;
-(BOOL)_sendUserGeneratedVibrationPatternsAffectingMessage:(id)arg1 error:(id*)arg2 ;
-(BOOL)_saveUserGeneratedVibrationPatterns:(id)arg1 error:(id*)arg2 ;
-(BOOL)_booleanPreferenceForKey:(CFStringRef)arg1 ;
-(BOOL)shouldVibrateOnSilent;
-(BOOL)shouldVibrateOnRing;
-(unsigned)_storedSystemVibrationDataMigrationVersion;
-(void)setCurrentVibrationIdentifier:(id)arg1 forAlertType:(int)arg2 ;
-(void)_makeSystemVibrationDataMigrationVersionCurrentIfNecessary;
-(BOOL)allowsAutoRefresh;
-(id)currentVibrationPatternForAlertType:(int)arg1 ;
-(id)defaultVibrationNameForAlertType:(int)arg1 ;
-(id)defaultVibrationPatternForAlertType:(int)arg1 ;
-(unsigned)_numberOfUserGeneratedVibrations;
-(BOOL)_removeAllUserGeneratedVibrationsWithError:(id*)arg1 ;
-(BOOL)_migrateLegacySettings;
-(id)currentVibrationIdentifierForType:(int)arg1 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forType:(int)arg2 ;
-(id)currentVibrationIdentifierForType:(int)arg1 accountIdentifier:(id)arg2 ;
-(void)setCurrentVibrationIdentifier:(id)arg1 forType:(int)arg2 accountIdentifier:(id)arg3 ;
-(id)currentVibrationNameForType:(int)arg1 ;
-(id)currentVibrationPatternForType:(int)arg1 ;
@end
