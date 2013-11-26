/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:06 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class UISelectionGrabber;

@interface UISelectionGrabberDot : UIView {

	UISelectionGrabber* m_grabber;

}

@property (assign,nonatomic) UISelectionGrabber * grabber; 
-(void)dealloc;
-(void)drawRect:(CGRect)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)setFrame:(CGRect)arg1 ;
-(int)textEffectsVisibilityLevel;
-(int)textEffectsVisibilityLevelInKeyboardWindow;
-(id)grabber;
-(id)initWithFrame:(CGRect)arg1 container:(id)arg2 ;
-(void)setGrabber:(id)arg1 ;
@end
