/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:04:20 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/AssistiveTouch.app/assistivetouchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <assistivetouchd/SCATDriver.h>

@class AXTimer;

@interface SCATAutomaticDriver : SCATDriver {

	BOOL _isSpeakingFocusContext;
	AXTimer* _focusTimer;
	int _currentCycleCount;

}

@property (nonatomic,readonly) double focusInterval; 
@property (nonatomic,readonly) unsigned maxAutoscanCycles; 
@property (nonatomic,retain) AXTimer * focusTimer;                      //@synthesize focusTimer=_focusTimer - In the implementation block
@property (assign,nonatomic) int currentCycleCount;                     //@synthesize currentCycleCount=_currentCycleCount - In the implementation block
@property (assign,nonatomic) BOOL isSpeakingFocusContext;               //@synthesize isSpeakingFocusContext=_isSpeakingFocusContext - In the implementation block
-(void)_idleTimerDidFire;
-(int)driverType;
-(void)_didTransitionToPhase:(int)arg1 ;
-(void)_didWrapInDirection:(int)arg1 ;
-(void)_willStepToNextFocusContext:(id)arg1 inDirection:(int)arg2 ;
-(void)willDrillIntoGroup;
-(void)willDrillOutOfGroup;
-(BOOL)_handleRunAction;
-(BOOL)_handleSelectAction;
-(BOOL)_handleStopAction;
-(void)freezeScanning;
-(void)willFinishAsScannerDriver;
-(void)outputManager:(id)arg1 willSpeakFocusContext:(id)arg2 ;
-(void)outputManager:(id)arg1 didSpeakFocusContext:(id)arg2 ;
-(void)actionHandlerDidFireAction:(id)arg1 ;
-(void)actionHandlerDidCancelPendingAction:(id)arg1 ;
-(void)setFocusTimer:(id)arg1 ;
-(int)currentCycleCount;
-(id)focusTimer;
-(void)_endAutoscanning;
-(void)setCurrentCycleCount:(int)arg1 ;
-(void)_autoscanToNextFocusContext;
-(double)focusInterval;
-(BOOL)isSpeakingFocusContext;
-(void)setIsSpeakingFocusContext:(BOOL)arg1 ;
-(BOOL)_shouldPauseOnIdleTimer;
-(unsigned)maxAutoscanCycles;
-(void)dealloc;
-(id)description;
-(id)initWithDelegate:(id)arg1 ;
@end
