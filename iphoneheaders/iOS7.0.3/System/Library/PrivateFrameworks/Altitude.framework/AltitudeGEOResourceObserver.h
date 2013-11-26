/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Altitude.framework/Altitude
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Altitude/Altitude-Structs.h>
#import <GeoServices/GEOResourceManifestTileGroupObserver.h>

@interface AltitudeGEOResourceObserver : NSObject <GEOResourceManifestTileGroupObserver> {

	GeoResourceManager* _geoResourceManager;

}
-(void)dealloc;
-(id)initWithResourceManager:(GeoResourceManager*)arg1 ;
-(void)resourceManifestManagerWillChangeActiveTileGroup:(id)arg1 ;
-(void)resourceManifestManagerDidChangeActiveTileGroup:(id)arg1 ;
@end
