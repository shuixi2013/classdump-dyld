/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:26 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>

@class NSURL, NSString;

@interface SAClockAddCompleted : SABaseCommand <SAServerBoundCommand>

@property (assign,nonatomic) BOOL alreadyExists; 
@property (nonatomic,copy) NSURL * worldClockId; 
@property (nonatomic,@dynamic,copy) NSString * aceId; 
@property (nonatomic,@dynamic,copy) NSString * refId; 
+(id)addCompleted;
+(id)addCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)encodedClassName;
-(BOOL)alreadyExists;
-(void)setAlreadyExists:(BOOL)arg1 ;
-(id)worldClockId;
-(void)setWorldClockId:(id)arg1 ;
@end
