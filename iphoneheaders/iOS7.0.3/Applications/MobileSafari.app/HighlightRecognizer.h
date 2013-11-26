/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:33 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileSafari.app/MobileSafari
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIGestureRecognizer.h>

@interface HighlightRecognizer : UIGestureRecognizer {

	unsigned _numberOfTouches;
	id _highlightTarget;
	SEL _highlightAction;

}

@property (assign,nonatomic) id highlightTarget;               //@synthesize highlightTarget=_highlightTarget - In the implementation block
@property (assign,nonatomic) SEL highlightAction;              //@synthesize highlightAction=_highlightAction - In the implementation block
-(id)highlightTarget;
-(void)setHighlightTarget:(id)arg1 ;
-(SEL)highlightAction;
-(void)setHighlightAction:(SEL)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(unsigned)numberOfTouches;
-(void)reset;
@end
