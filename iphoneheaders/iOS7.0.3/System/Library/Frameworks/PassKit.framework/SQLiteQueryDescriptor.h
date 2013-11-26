/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:05:40 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/passd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <passd/passd-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class NSArray, SQLitePredicate;

@interface SQLiteQueryDescriptor : NSObject <NSCopying> {

	Class _entityClass;
	int _limitCount;
	NSArray* _orderingDirections;
	NSArray* _orderingProperties;
	SQLitePredicate* _predicate;
	BOOL _returnsDistinctEntities;

}

@property (assign,nonatomic) Class entityClass;                         //@synthesize entityClass=_entityClass - In the implementation block
@property (assign,nonatomic) int limitCount;                            //@synthesize limitCount=_limitCount - In the implementation block
@property (nonatomic,copy) NSArray * orderingDirections;                //@synthesize orderingDirections=_orderingDirections - In the implementation block
@property (nonatomic,copy) NSArray * orderingProperties;                //@synthesize orderingProperties=_orderingProperties - In the implementation block
@property (assign,nonatomic) BOOL returnsDistinctEntities;              //@synthesize returnsDistinctEntities=_returnsDistinctEntities - In the implementation block
@property (nonatomic,copy) SQLitePredicate * predicate;                 //@synthesize predicate=_predicate - In the implementation block
-(id)_newSelectSQLWithProperties:(id)arg1 columns:(id)arg2 ;
-(id)orderingProperties;
-(void)setOrderingProperties:(id)arg1 ;
-(void)dealloc;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(Class)entityClass;
-(int)limitCount;
-(void)setOrderingDirections:(id)arg1 ;
-(void)setEntityClass:(Class)arg1 ;
-(void)setLimitCount:(int)arg1 ;
-(id)orderingDirections;
-(BOOL)returnsDistinctEntities;
-(void)setReturnsDistinctEntities:(BOOL)arg1 ;
@end
