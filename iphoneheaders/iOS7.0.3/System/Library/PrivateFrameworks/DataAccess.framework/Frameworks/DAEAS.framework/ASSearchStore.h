/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:54:53 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/Frameworks/DAEAS.framework/DAEAS
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <DAEAS/ASItem.h>

@class NSMutableArray, NSNumber, NSString, NSArray;

@interface ASSearchStore : ASItem {

	NSMutableArray* _results;
	NSNumber* _status;
	NSNumber* _total;
	NSString* _range;

}

@property (retain) NSArray * results;              //@synthesize results=_results - In the implementation block
@property (copy) NSNumber * status;                //@synthesize status=_status - In the implementation block
@property (copy) NSNumber * total;                 //@synthesize total=_total - In the implementation block
@property (copy) NSString * range;                 //@synthesize range=_range - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
-(void)dealloc;
-(id)description;
-(id)range;
-(id)results;
-(void)setResults:(id)arg1 ;
-(id)status;
-(void)setStatus:(id)arg1 ;
-(void)setRange:(id)arg1 ;
-(id)asParseRules;
-(void)addResult:(id)arg1 ;
-(void)setTotal:(id)arg1 ;
-(id)total;
@end
