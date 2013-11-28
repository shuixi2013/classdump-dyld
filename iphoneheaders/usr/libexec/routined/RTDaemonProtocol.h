/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:19:07 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /usr/libexec/routined
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@protocol RTDaemonProtocol <NSObject>
@required
-(void)fetchLocationsOfInterestWithinDistance:(double)arg1 ofLocation:(id)arg2 withReply:(/*^block*/ id)arg3;
-(void)fetchLocationsOfInterestOfType:(int)arg1 withReply:(/*^block*/ id)arg2;
-(void)fetchAllLocationsOfInterestWithReply:(/*^block*/ id)arg1;
-(void)fetchNextLocationsOfInterestFromLocation:(id)arg1 startDate:(id)arg2 timeInterval:(double)arg3 withReply:(/*^block*/ id)arg4;
-(void)fetchRoutineEnabledWithReply:(/*^block*/ id)arg1;
-(void)fetchBBPluginSupportedWithReply:(/*^block*/ id)arg1;
-(void)setRoutineEnabled:(BOOL)arg1;
-(void)clearRoutine;
-(void)synchronizeDefaults;
@end
