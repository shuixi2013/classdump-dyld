/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <OfficeImport/OfficeImport-Structs.h>
@interface PBSlideBase : NSObject
+(void)readDrawingGroup:(id)arg1 slide:(id)arg2 state:(id)arg3 ;
+(void)mapSlideNumberPlaceholder:(id)arg1 tgtSlideBase:(id)arg2 state:(id)arg3 ;
+(void)readColorScheme:(id)arg1 colorScheme:(id)arg2 colorMap:(id)arg3 state:(id)arg4 ;
+(void)writeSlideShowInfo:(id)arg1 slideBase:(id)arg2 state:(id)arg3 ;
+(BOOL)slideFollowsMasterBackground:(id)arg1 ;
+(void)parseSlideShowInfo:(PptSSSlideInfoAtom*)arg1 slideBase:(id)arg2 state:(id)arg3 ;
+(void)initTransitionMap:(id)arg1 ;
+(unsigned char)mapDirection:(id)arg1 ;
+(int)parseTransType:(int)arg1 direction:(long)arg2 ;
+(id)newOptions:(long)arg1 transType:(int)arg2 ;
@end
