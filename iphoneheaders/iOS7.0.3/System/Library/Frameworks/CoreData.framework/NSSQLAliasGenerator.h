/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:31 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSString;

@interface NSSQLAliasGenerator : NSObject {

	unsigned _nextTableAlias;
	unsigned _nextVariableAlias;
	unsigned _nextTempTableAlias;
	NSString* _tableBase;
	NSString* _variableBase;

}
-(id)initWithNestingLevel:(unsigned)arg1 ;
-(id)generateTableAlias;
-(id)generateSubqueryVariableAlias;
-(id)generateTempTableName;
-(void)dealloc;
-(id)init;
@end
