/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:51 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PhotoLibrary/PhotoLibrary-Structs.h>
#import <UIKit/UIImageView.h>

@class UILabel, NSTimer, NSDate;

@interface PLCameraElapsedTimeView : UIImageView {

	UILabel* _minutes;
	UILabel* _seconds;
	NSTimer* _timer;
	NSDate* _startTime;
	BOOL _autorotationEnabled;
	BOOL _watchingOrientationChanges;
	int _orientation;

}

@property (assign,nonatomic) BOOL autorotationEnabled; 
-(void)_deviceOrientationChanged:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(int)arg1 ;
-(void)startTimer;
-(void)_update:(id)arg1 ;
-(void)_stopWatchingDeviceOrientationChanges;
-(void)_startWatchingDeviceOrientationChanges;
-(id)_createTimeLabelWithFont:(id)arg1 ;
-(void)_setDeviceOrientation:(int)arg1 animated:(BOOL)arg2 ;
-(void)stopTimer;
-(BOOL)autorotationEnabled;
-(void)setAutorotationEnabled:(BOOL)arg1 ;
@end
