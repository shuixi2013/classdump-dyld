/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:50 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSValidationErrorLocalizationPolicy.h>

@class NSSet;

@interface NSMergedPolicyLocalizationPolicy : NSValidationErrorLocalizationPolicy {

	NSSet* _mergedPolicies;

}
-(void)addPolicy:(id)arg1 ;
-(void)_ensureFullLocalizationDictionaryIsLoaded;
-(id)_localizedStringForKey:(id)arg1 value:(void*)arg2 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end
