/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:56:16 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <OfficeImport/OADProperties.h>

@class PDTransitionOptions;

@interface PDTransition : OADProperties {

	BOOL mHasType;
	int mType;
	BOOL mHasSpeed;
	int mSpeed;
	BOOL mHasAdvanceOnClick;
	BOOL mIsAdvanceOnClick;
	BOOL mHasAdvanceAfterTime;
	int mAdvanceAfterTime;
	PDTransitionOptions* mOptions;

}
-(void)dealloc;
-(id)init;
-(void)setSpeed:(int)arg1 ;
-(void)setType:(int)arg1 ;
-(int)type;
-(int)speed;
-(void)setOptions:(id)arg1 ;
-(id)options;
-(BOOL)hasType;
-(BOOL)hasSpeed;
-(BOOL)hasIsAdvanceOnClick;
-(BOOL)isAdvanceOnClick;
-(BOOL)hasAdvanceAfterTime;
-(int)advanceAfterTime;
-(void)setIsAdvanceOnClick:(BOOL)arg1 ;
-(void)setAdvanceAfterTime:(int)arg1 ;
-(BOOL)hasTransitionOptions;
@end
