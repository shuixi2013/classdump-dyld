/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:07:59 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SportsTrainer.framework/SportsTrainer
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SportsTrainer/SportsTrainer-Structs.h>
#import <UIKit/UIView.h>

@protocol STAnimatableButtonSliceDelegate;
@interface STAnimatableButtonSlice : UIView {

	<STAnimatableButtonSliceDelegate>* _delegate;

}

@property (assign,nonatomic) <STAnimatableButtonSliceDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(id)delegate;
@end
