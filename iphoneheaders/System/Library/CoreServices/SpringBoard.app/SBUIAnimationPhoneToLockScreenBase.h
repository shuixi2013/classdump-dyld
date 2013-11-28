/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:03:46 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SpringBoard/SBUIMainScreenAnimationController.h>

@protocol SBWindowContextAppearance;
@class SBWindow, SBLockScreenViewControllerBase, UIView;

@interface SBUIAnimationPhoneToLockScreenBase : SBUIMainScreenAnimationController {

	SBWindow* _transitionWindow;
	SBLockScreenViewControllerBase* _lockScreenViewController;
	UIView<SBWindowContextAppearance>* _contextHostView;
	BOOL _needsScreenDim;

}

@property (setter=_setContextHostView:,getter=_contextHostView,nonatomic,retain) UIView * contextHostView;              //@synthesize contextHostView=_contextHostView - In the implementation block
-(id)_lockScreenViewController;
-(void)_prepareAnimation;
-(id)_contextHostView;
-(void)_noteAnimationDidFinish;
-(id)_getTransitionWindow;
-(BOOL)_shouldHideContextHostViewStatusBar;
-(void)_cleanupAnimation;
-(id)initWithLockScreenController:(id)arg1 deactivatingApp:(id)arg2 ;
-(void)_setContextHostView:(id)arg1 ;
-(void)dealloc;
-(void)_setHidden:(BOOL)arg1 ;
@end
