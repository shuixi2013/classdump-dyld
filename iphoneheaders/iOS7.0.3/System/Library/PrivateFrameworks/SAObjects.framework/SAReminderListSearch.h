/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:29 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/SADomainCommand.h>

@class NSString;

@interface SAReminderListSearch : SADomainCommand

@property (nonatomic,copy) NSString * name; 
+(id)listSearch;
+(id)listSearchWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(void)setName:(id)arg1 ;
-(id)name;
-(id)encodedClassName;
-(BOOL)requiresResponse;
@end
