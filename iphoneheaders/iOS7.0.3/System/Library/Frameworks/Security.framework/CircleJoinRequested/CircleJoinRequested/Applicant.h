/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:43 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/Security.framework/CircleJoinRequested/CircleJoinRequested
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <CircleJoinRequested/CircleJoinRequested-Structs.h>
@class NSString;

@interface Applicant : NSObject {

	int _applicantUIState;
	OpaqueSOSPeerInfoRef _rawPeerInfo;

}

@property (assign) int applicantUIState;                           //@synthesize applicantUIState=_applicantUIState - In the implementation block
@property (readonly) NSString * applicantUIStateName; 
@property (assign) OpaqueSOSPeerInfoRef rawPeerInfo;               //@synthesize rawPeerInfo=_rawPeerInfo - In the implementation block
@property (readonly) NSString * name; 
@property (readonly) NSString * idString; 
-(void)setRawPeerInfo:(OpaqueSOSPeerInfoRef)arg1 ;
-(void)setApplicantUIState:(int)arg1 ;
-(OpaqueSOSPeerInfoRef)rawPeerInfo;
-(id)applicantUIStateName;
-(int)applicantUIState;
-(id)initWithPeerInfo:(OpaqueSOSPeerInfoRef)arg1 ;
-(id)idString;
-(void)dealloc;
-(id)description;
-(id)name;
@end
