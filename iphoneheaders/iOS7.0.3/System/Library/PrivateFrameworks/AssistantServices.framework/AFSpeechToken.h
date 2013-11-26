/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:45 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSSecureCoding.h>

@class NSString;

@interface AFSpeechToken : NSObject <NSSecureCoding> {

	BOOL _removeSpaceBefore;
	BOOL _removeSpaceAfter;
	NSString* _text;
	int _confidence;
	double _startTime;
	double _endTime;

}

@property (nonatomic,copy) NSString * text;                       //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int confidenceScore;                 //@synthesize confidence=_confidence - In the implementation block
@property (assign,nonatomic) double startTime;                    //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) double endTime;                      //@synthesize endTime=_endTime - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceBefore;              //@synthesize removeSpaceBefore=_removeSpaceBefore - In the implementation block
@property (assign,nonatomic) BOOL removeSpaceAfter;               //@synthesize removeSpaceAfter=_removeSpaceAfter - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(void)setStartTime:(double)arg1 ;
-(id)text;
-(void)setText:(id)arg1 ;
-(double)startTime;
-(BOOL)removeSpaceBefore;
-(BOOL)removeSpaceAfter;
-(void)setEndTime:(double)arg1 ;
-(int)confidenceScore;
-(void)setConfidenceScore:(int)arg1 ;
-(void)setRemoveSpaceAfter:(BOOL)arg1 ;
-(void)setRemoveSpaceBefore:(BOOL)arg1 ;
-(double)endTime;
-(void).cxx_destruct;
@end
