/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:11:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Watchdog/ThermalMonitor.bundle/ThermalMonitor
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface ContextAwareObject : NSObject {

	int ctxType;

}

@property (nonatomic,readonly) int ctxType; 
-(id)initCTXBase;
-(int)ctxType;
-(int)getContextState;
-(bool)synchContext;
-(void)updateSystemPowerState:(BOOL)arg1 ;
-(bool)isContextTriggered;
@end
