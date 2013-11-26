/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:35 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VSRecognitionResultHandler;
@class , NSArray, VSRecognitionAction;

@interface VSRecognitionResultHandlingRequest : NSObject {

	<VSRecognitionResultHandler>* _handler;
	NSArray* _results;
	VSRecognitionAction* _action;

}
-(void)dealloc;
-(id)handler;
-(id)results;
-(id)initWithHandler:(id)arg1 results:(id)arg2 ;
-(id)nextAction;
-(void)setNextAction:(id)arg1 ;
@end
