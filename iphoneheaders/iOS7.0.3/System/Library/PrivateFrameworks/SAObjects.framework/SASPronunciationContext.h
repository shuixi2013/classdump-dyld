/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:27 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class NSURL, NSString;

@interface SASPronunciationContext : AceObject <SAAceSerializable>

@property (nonatomic,copy) NSURL * domainObjectIdentifier; 
@property (nonatomic,copy) NSString * domainObjectPropertyIdentifier; 
@property (nonatomic,copy) NSString * orthography; 
+(id)pronunciationContext;
+(id)pronunciationContextWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(id)orthography;
-(id)encodedClassName;
-(void)setOrthography:(id)arg1 ;
-(id)domainObjectIdentifier;
-(void)setDomainObjectIdentifier:(id)arg1 ;
-(id)domainObjectPropertyIdentifier;
-(void)setDomainObjectPropertyIdentifier:(id)arg1 ;
@end
