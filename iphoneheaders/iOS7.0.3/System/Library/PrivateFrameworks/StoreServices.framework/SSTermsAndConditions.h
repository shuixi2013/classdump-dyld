/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:59 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreServices/StoreServices-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSString;

@interface SSTermsAndConditions : NSObject <NSCopying> {

	BOOL _requiresAuthentication;
	NSString* _text;
	BOOL _userAccepted;
	long long _versionID;

}

@property (assign,getter=isUserAccepted,nonatomic) BOOL userAccepted;              //@synthesize userAccepted=_userAccepted - In the implementation block
@property (assign,nonatomic) NSString * currentText;                               //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) long long currentVersionIdentifier;                   //@synthesize versionID=_versionID - In the implementation block
@property (nonatomic,readonly) BOOL requiresAuthentication;                        //@synthesize requiresAuthentication=_requiresAuthentication - In the implementation block
-(BOOL)requiresAuthentication;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(long long)currentVersionIdentifier;
-(id)initWithResponseData:(id)arg1 error:(id*)arg2 ;
-(BOOL)isUserAccepted;
-(id)currentText;
-(void)setCurrentText:(id)arg1 ;
-(void)setCurrentVersionIdentifier:(long long)arg1 ;
-(void)setUserAccepted:(BOOL)arg1 ;
@end
