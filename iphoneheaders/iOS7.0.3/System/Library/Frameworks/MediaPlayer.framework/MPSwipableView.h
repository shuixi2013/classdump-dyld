/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:52:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MediaPlayer/MediaPlayer-Structs.h>
#import <UIKit/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol MPSwipableViewDelegate;
@class MPTapGestureRecognizer, MPSwipeGestureRecognizer, MPActivityGestureRecognizer, UIPinchGestureRecognizer;

@interface MPSwipableView : UIView <UIGestureRecognizerDelegate> {

	int _enabledGestureTypes;
	int _simultaneousGestureTypes;
	<MPSwipableViewDelegate>* _swipeDelegate;
	MPTapGestureRecognizer* _tapGestureRecognizer;
	MPSwipeGestureRecognizer* _swipeGestureRecognizer;
	MPActivityGestureRecognizer* _activityGestureRecognizer;
	UIPinchGestureRecognizer* _pinchGestureRecognizer;

}

@property (assign,nonatomic) int enabledGestureTypes;                                      //@synthesize enabledGestureTypes=_enabledGestureTypes - In the implementation block
@property (assign,nonatomic) int simultaneousGestureTypes;                                 //@synthesize simultaneousGestureTypes=_simultaneousGestureTypes - In the implementation block
@property (assign,nonatomic,__weak) <MPSwipableViewDelegate> * swipeDelegate;              //@synthesize swipeDelegate=_swipeDelegate - In the implementation block
-(void)setEnabledGestureTypes:(int)arg1 ;
-(void)setSwipeDelegate:(id)arg1 ;
-(void)_updateGestureRecognizersForEnabledTypes;
-(int)simultaneousGestureTypes;
-(void)_swipeGestureRecognized:(id)arg1 ;
-(void)_pinchGestureRecognized:(id)arg1 ;
-(void)_activityGestureRecognized:(id)arg1 ;
-(id)swipeDelegate;
-(int)enabledGestureTypes;
-(void)setSimultaneousGestureTypes:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)addGestureRecognizer:(id)arg1 ;
-(void)removeGestureRecognizer:(id)arg1 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)didMoveToSuperview;
-(void)willMoveToSuperview:(id)arg1 ;
-(void)_tapGestureRecognized:(id)arg1 ;
-(void).cxx_destruct;
@end
