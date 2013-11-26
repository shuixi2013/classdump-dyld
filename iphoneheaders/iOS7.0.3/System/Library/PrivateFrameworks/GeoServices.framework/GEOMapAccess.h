/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:37 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <GeoServices/GEOMapRequestManager.h>

@protocol OS_dispatch_queue, GEOMapAccessRestrictions;
@class NSObject, ;

@interface GEOMapAccess : GEOMapRequestManager {

	unsigned _zoomLevel;
	int _tileSize;
	int _tileScale;
	int _tileStyle;
	NSObject<OS_dispatch_queue>* _callbackQueue;
	<GEOMapAccessRestrictions>* _restrictions;
	/*^block*/ id _tileErrorHandler;

}

@property (nonatomic,readonly) unsigned zoomLevel;                                   //@synthesize zoomLevel=_zoomLevel - In the implementation block
@property (nonatomic,readonly) int tileSize;                                         //@synthesize tileSize=_tileSize - In the implementation block
@property (nonatomic,readonly) int tileScale;                                        //@synthesize tileScale=_tileScale - In the implementation block
@property (nonatomic,readonly) int tileStyle;                                        //@synthesize tileStyle=_tileStyle - In the implementation block
@property (nonatomic,readonly) BOOL allowsNetworkTileLoad; 
@property (assign,nonatomic) <GEOMapAccessRestrictions> * restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,copy) id tileErrorHandler;                                      //@synthesize tileErrorHandler=_tileErrorHandler - In the implementation block
+(BOOL)supportsRealisticMap;
+(id)realisticMap;
-(id)restrictions;
-(id)callbackQueue;
-(void)dealloc;
-(int)tileSize;
-(void)setCallbackQueue:(id)arg1 ;
-(id)initWithZoomLevel:(unsigned)arg1 tileSize:(int)arg2 tileScale:(int)arg3 tileStyle:(int)arg4 ;
-(id)findClosestNamedFeaturesAtCoordinate:(SCD_Struct_GE12)arg1 roadHandler:(/*^block*/ id)arg2 pointHandler:(/*^block*/ id)arg3 polygonHandler:(/*^block*/ id)arg4 completionHandler:(/*^block*/ id)arg5 ;
-(id)findClosestRoadAtCoordinate:(SCD_Struct_GE12)arg1 roadHandler:(/*^block*/ id)arg2 completionHandler:(/*^block*/ id)arg3 ;
-(id)findEdgesWithin:(double)arg1 of:(SCD_Struct_GE12)arg2 edgeHandler:(/*^block*/ id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(id)buildMapEdgeFrom:(const SCD_Struct_GE121*)arg1 edgeHandler:(/*^block*/ id)arg2 ;
-(int)tileScale;
-(int)tileStyle;
-(/*^block*/ id)tileErrorHandler;
-(void)setTileErrorHandler:(/*^block*/ id)arg1 ;
-(unsigned)zoomLevel;
-(void)setRestrictions:(id)arg1 ;
-(id)findTilesWithin:(double)arg1 of:(SCD_Struct_GE12)arg2 tileHander:(/*^block*/ id)arg3 completionHandler:(/*^block*/ id)arg4 ;
-(BOOL)allowsNetworkTileLoad;
@end
