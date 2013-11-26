/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:32 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <CoreFoundation/NSCopying.h>

@class NSString, NSMutableArray;

@interface GEOResources : PBCodable <NSCopying> {

	NSString* _addressCorrectionInitURL;
	NSString* _addressCorrectionUpdateURL;
	NSMutableArray* _attributionBadges;
	NSMutableArray* _attributions;
	NSString* _authToken;
	NSString* _autocompleteURL;
	NSString* _batchReverseGeocoderURL;
	NSString* _directionsURL;
	NSString* _etaURL;
	NSMutableArray* _fontChecksums;
	NSMutableArray* _fonts;
	NSString* _forwardGeocoderURL;
	NSMutableArray* _iconChecksums;
	NSMutableArray* _icons;
	NSString* _locationShiftURL;
	NSString* _mapMatchURL;
	NSString* _polyLocationShiftURL;
	NSString* _problemStatusURL;
	NSString* _problemSubmissionURL;
	NSMutableArray* _regionalResources;
	NSString* _releaseInfo;
	NSString* _resourcesURL;
	NSString* _reverseGeocoderURL;
	NSString* _searchAttributionManifestURL;
	NSString* _searchURL;
	NSString* _simpleETAURL;
	NSMutableArray* _styleSheetChecksums;
	NSMutableArray* _styleSheets;
	NSMutableArray* _textureChecksums;
	NSMutableArray* _textures;
	NSMutableArray* _tileGroups;
	NSMutableArray* _tileSets;
	NSMutableArray* _xmlChecksums;
	NSMutableArray* _xmls;

}

@property (nonatomic,retain) NSMutableArray * tileGroups;                          //@synthesize tileGroups=_tileGroups - In the implementation block
@property (nonatomic,retain) NSMutableArray * tileSets;                            //@synthesize tileSets=_tileSets - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheets;                         //@synthesize styleSheets=_styleSheets - In the implementation block
@property (nonatomic,retain) NSMutableArray * textures;                            //@synthesize textures=_textures - In the implementation block
@property (nonatomic,retain) NSMutableArray * fonts;                               //@synthesize fonts=_fonts - In the implementation block
@property (nonatomic,retain) NSMutableArray * icons;                               //@synthesize icons=_icons - In the implementation block
@property (nonatomic,retain) NSMutableArray * regionalResources;                   //@synthesize regionalResources=_regionalResources - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmls;                                //@synthesize xmls=_xmls - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributionBadges;                   //@synthesize attributionBadges=_attributionBadges - In the implementation block
@property (nonatomic,retain) NSMutableArray * attributions;                        //@synthesize attributions=_attributions - In the implementation block
@property (nonatomic,readonly) BOOL hasAuthToken; 
@property (nonatomic,retain) NSString * authToken;                                 //@synthesize authToken=_authToken - In the implementation block
@property (nonatomic,readonly) BOOL hasResourcesURL; 
@property (nonatomic,retain) NSString * resourcesURL;                              //@synthesize resourcesURL=_resourcesURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchURL; 
@property (nonatomic,retain) NSString * searchURL;                                 //@synthesize searchURL=_searchURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSearchAttributionManifestURL; 
@property (nonatomic,retain) NSString * searchAttributionManifestURL;              //@synthesize searchAttributionManifestURL=_searchAttributionManifestURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAutocompleteURL; 
@property (nonatomic,retain) NSString * autocompleteURL;                           //@synthesize autocompleteURL=_autocompleteURL - In the implementation block
@property (nonatomic,readonly) BOOL hasReverseGeocoderURL; 
@property (nonatomic,retain) NSString * reverseGeocoderURL;                        //@synthesize reverseGeocoderURL=_reverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) BOOL hasForwardGeocoderURL; 
@property (nonatomic,retain) NSString * forwardGeocoderURL;                        //@synthesize forwardGeocoderURL=_forwardGeocoderURL - In the implementation block
@property (nonatomic,readonly) BOOL hasDirectionsURL; 
@property (nonatomic,retain) NSString * directionsURL;                             //@synthesize directionsURL=_directionsURL - In the implementation block
@property (nonatomic,readonly) BOOL hasEtaURL; 
@property (nonatomic,retain) NSString * etaURL;                                    //@synthesize etaURL=_etaURL - In the implementation block
@property (nonatomic,readonly) BOOL hasLocationShiftURL; 
@property (nonatomic,retain) NSString * locationShiftURL;                          //@synthesize locationShiftURL=_locationShiftURL - In the implementation block
@property (nonatomic,readonly) BOOL hasReleaseInfo; 
@property (nonatomic,retain) NSString * releaseInfo;                               //@synthesize releaseInfo=_releaseInfo - In the implementation block
@property (nonatomic,readonly) BOOL hasBatchReverseGeocoderURL; 
@property (nonatomic,retain) NSString * batchReverseGeocoderURL;                   //@synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL - In the implementation block
@property (nonatomic,readonly) BOOL hasMapMatchURL; 
@property (nonatomic,retain) NSString * mapMatchURL;                               //@synthesize mapMatchURL=_mapMatchURL - In the implementation block
@property (nonatomic,readonly) BOOL hasSimpleETAURL; 
@property (nonatomic,retain) NSString * simpleETAURL;                              //@synthesize simpleETAURL=_simpleETAURL - In the implementation block
@property (nonatomic,retain) NSMutableArray * styleSheetChecksums;                 //@synthesize styleSheetChecksums=_styleSheetChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * textureChecksums;                    //@synthesize textureChecksums=_textureChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * fontChecksums;                       //@synthesize fontChecksums=_fontChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * iconChecksums;                       //@synthesize iconChecksums=_iconChecksums - In the implementation block
@property (nonatomic,retain) NSMutableArray * xmlChecksums;                        //@synthesize xmlChecksums=_xmlChecksums - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionInitURL; 
@property (nonatomic,retain) NSString * addressCorrectionInitURL;                  //@synthesize addressCorrectionInitURL=_addressCorrectionInitURL - In the implementation block
@property (nonatomic,readonly) BOOL hasAddressCorrectionUpdateURL; 
@property (nonatomic,retain) NSString * addressCorrectionUpdateURL;                //@synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL - In the implementation block
@property (nonatomic,readonly) BOOL hasPolyLocationShiftURL; 
@property (nonatomic,retain) NSString * polyLocationShiftURL;                      //@synthesize polyLocationShiftURL=_polyLocationShiftURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemSubmissionURL; 
@property (nonatomic,retain) NSString * problemSubmissionURL;                      //@synthesize problemSubmissionURL=_problemSubmissionURL - In the implementation block
@property (nonatomic,readonly) BOOL hasProblemStatusURL; 
@property (nonatomic,retain) NSString * problemStatusURL;                          //@synthesize problemStatusURL=_problemStatusURL - In the implementation block
-(id)authToken;
-(void)setAuthToken:(id)arg1 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)dictionaryRepresentation;
-(void)setIcons:(id)arg1 ;
-(id)icons;
-(void)addAttribution:(id)arg1 ;
-(void)clearAttributions;
-(id)attributionAtIndex:(unsigned)arg1 ;
-(void)setTileSets:(id)arg1 ;
-(void)addTileSet:(id)arg1 ;
-(unsigned)tileSetsCount;
-(void)clearTileSets;
-(id)tileSetAtIndex:(unsigned)arg1 ;
-(id)tileSets;
-(id)forwardGeocoderURL;
-(id)reverseGeocoderURL;
-(id)batchReverseGeocoderURL;
-(void)setTileGroups:(id)arg1 ;
-(void)setStyleSheets:(id)arg1 ;
-(void)setTextures:(id)arg1 ;
-(void)setFonts:(id)arg1 ;
-(void)setRegionalResources:(id)arg1 ;
-(void)setXmls:(id)arg1 ;
-(void)setAttributionBadges:(id)arg1 ;
-(void)setResourcesURL:(id)arg1 ;
-(void)setSearchURL:(id)arg1 ;
-(void)setSearchAttributionManifestURL:(id)arg1 ;
-(void)setAutocompleteURL:(id)arg1 ;
-(void)setReverseGeocoderURL:(id)arg1 ;
-(void)setForwardGeocoderURL:(id)arg1 ;
-(void)setDirectionsURL:(id)arg1 ;
-(void)setEtaURL:(id)arg1 ;
-(void)setLocationShiftURL:(id)arg1 ;
-(void)setReleaseInfo:(id)arg1 ;
-(void)setBatchReverseGeocoderURL:(id)arg1 ;
-(void)setMapMatchURL:(id)arg1 ;
-(void)setSimpleETAURL:(id)arg1 ;
-(void)setStyleSheetChecksums:(id)arg1 ;
-(void)setTextureChecksums:(id)arg1 ;
-(void)setFontChecksums:(id)arg1 ;
-(void)setIconChecksums:(id)arg1 ;
-(void)setXmlChecksums:(id)arg1 ;
-(void)setAddressCorrectionInitURL:(id)arg1 ;
-(void)setAddressCorrectionUpdateURL:(id)arg1 ;
-(void)setPolyLocationShiftURL:(id)arg1 ;
-(void)setProblemSubmissionURL:(id)arg1 ;
-(void)setProblemStatusURL:(id)arg1 ;
-(void)addTileGroup:(id)arg1 ;
-(void)addStyleSheet:(id)arg1 ;
-(void)addTexture:(id)arg1 ;
-(void)addFont:(id)arg1 ;
-(void)addIcon:(id)arg1 ;
-(void)addRegionalResource:(id)arg1 ;
-(void)addXml:(id)arg1 ;
-(void)addAttributionBadge:(id)arg1 ;
-(void)addStyleSheetChecksum:(id)arg1 ;
-(void)addTextureChecksum:(id)arg1 ;
-(void)addFontChecksum:(id)arg1 ;
-(void)addIconChecksum:(id)arg1 ;
-(void)addXmlChecksum:(id)arg1 ;
-(unsigned)tileGroupsCount;
-(void)clearTileGroups;
-(id)tileGroupAtIndex:(unsigned)arg1 ;
-(unsigned)styleSheetsCount;
-(void)clearStyleSheets;
-(id)styleSheetAtIndex:(unsigned)arg1 ;
-(unsigned)texturesCount;
-(void)clearTextures;
-(id)textureAtIndex:(unsigned)arg1 ;
-(unsigned)fontsCount;
-(void)clearFonts;
-(id)iconAtIndex:(unsigned)arg1 ;
-(unsigned)regionalResourcesCount;
-(void)clearRegionalResources;
-(id)regionalResourceAtIndex:(unsigned)arg1 ;
-(unsigned)xmlsCount;
-(void)clearXmls;
-(id)xmlAtIndex:(unsigned)arg1 ;
-(unsigned)attributionBadgesCount;
-(void)clearAttributionBadges;
-(id)attributionBadgeAtIndex:(unsigned)arg1 ;
-(BOOL)hasAuthToken;
-(BOOL)hasResourcesURL;
-(id)resourcesURL;
-(BOOL)hasSearchURL;
-(id)searchURL;
-(BOOL)hasSearchAttributionManifestURL;
-(id)searchAttributionManifestURL;
-(BOOL)hasAutocompleteURL;
-(id)autocompleteURL;
-(BOOL)hasReverseGeocoderURL;
-(BOOL)hasForwardGeocoderURL;
-(BOOL)hasDirectionsURL;
-(id)directionsURL;
-(BOOL)hasEtaURL;
-(id)etaURL;
-(BOOL)hasLocationShiftURL;
-(id)locationShiftURL;
-(BOOL)hasReleaseInfo;
-(id)releaseInfo;
-(BOOL)hasBatchReverseGeocoderURL;
-(BOOL)hasMapMatchURL;
-(id)mapMatchURL;
-(BOOL)hasSimpleETAURL;
-(id)simpleETAURL;
-(unsigned)styleSheetChecksumsCount;
-(void)clearStyleSheetChecksums;
-(id)styleSheetChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)textureChecksumsCount;
-(void)clearTextureChecksums;
-(id)textureChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)fontChecksumsCount;
-(void)clearFontChecksums;
-(id)fontChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)iconChecksumsCount;
-(void)clearIconChecksums;
-(id)iconChecksumAtIndex:(unsigned)arg1 ;
-(unsigned)xmlChecksumsCount;
-(void)clearXmlChecksums;
-(id)xmlChecksumAtIndex:(unsigned)arg1 ;
-(BOOL)hasAddressCorrectionInitURL;
-(id)addressCorrectionInitURL;
-(BOOL)hasAddressCorrectionUpdateURL;
-(id)addressCorrectionUpdateURL;
-(BOOL)hasPolyLocationShiftURL;
-(id)polyLocationShiftURL;
-(BOOL)hasProblemSubmissionURL;
-(id)problemSubmissionURL;
-(BOOL)hasProblemStatusURL;
-(id)problemStatusURL;
-(id)tileGroups;
-(id)textures;
-(id)regionalResources;
-(id)xmls;
-(id)attributionBadges;
-(id)styleSheetChecksums;
-(id)textureChecksums;
-(id)fontChecksums;
-(id)iconChecksums;
-(id)xmlChecksums;
-(BOOL)readFrom:(id)arg1 ;
-(id)fonts;
-(id)fontAtIndex:(unsigned)arg1 ;
-(id)attributions;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(unsigned)iconsCount;
-(void)clearIcons;
-(unsigned)attributionsCount;
-(void)setAttributions:(id)arg1 ;
-(id)styleSheets;
@end
