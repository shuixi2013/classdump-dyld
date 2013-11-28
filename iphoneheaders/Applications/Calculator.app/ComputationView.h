/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:59:24 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Calculator.app/Calculator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <Calculator/Calculator-Structs.h>
#import <UIKit/UIView.h>

@protocol ComputationViewDelegate;
@class UITextView;

@interface ComputationView : UIView {

	<ComputationViewDelegate>* _delegate;
	UITextView* _upperTextView;
	UITextView* _lowerTextView;

}

@property (assign,nonatomic) <ComputationViewDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) UITextView * upperTextView;                      //@synthesize upperTextView=_upperTextView - In the implementation block
@property (nonatomic,readonly) UITextView * lowerTextView;                      //@synthesize lowerTextView=_lowerTextView - In the implementation block
-(void)setUpperText:(id)arg1 lowerText:(id)arg2 ;
-(id)upperTextView;
-(id)lowerTextView;
-(void)handleTap:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end
