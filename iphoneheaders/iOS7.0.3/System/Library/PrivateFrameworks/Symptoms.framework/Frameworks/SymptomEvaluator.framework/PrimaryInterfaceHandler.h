/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:57:48 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Symptoms.framework/Frameworks/SymptomEvaluator.framework/SymptomEvaluator
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <SymptomEvaluator/SymptomAdditionalProtocol.h>

@class NSDate, NSMutableArray, NSNumber;

@interface PrimaryInterfaceHandler : NSObject <SymptomAdditionalProtocol> {

	NSDate* _establishedTime;
	const char* _interfaceName;
	NSMutableArray* _additionalProtocolHandlers;
	NSNumber* _isWiFi;
	NSNumber* _isCellular;

}

@property (nonatomic,readonly) NSNumber * isWiFi;                  //@synthesize isWiFi=_isWiFi - In the implementation block
@property (nonatomic,readonly) NSNumber * isCellular;              //@synthesize isCellular=_isCellular - In the implementation block
+(id)sharedInstance;
+(void)refresh;
+(int)configure:(id)arg1 ;
+(bool)noteSymptom:(id)arg1 ;
+(id)cachedIsCellular;
+(id)isCellular;
+(id)isWiFi;
+(id)interfacePresenceTime;
+(void)addHandlerForReset:(id)arg1 ;
+(id)cachedIsWifi;
-(id)init;
-(void)refresh;
-(id)isCellular;
-(id)isWiFi;
-(id)interfacePresenceTime;
-(void)addHandlerForReset:(id)arg1 ;
-(void).cxx_destruct;
@end
