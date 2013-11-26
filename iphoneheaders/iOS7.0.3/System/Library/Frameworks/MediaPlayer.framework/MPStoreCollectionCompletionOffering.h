/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:28 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class MPMediaQuery, MPStoreOfferMediaItemCollection, NSArray;

@interface MPStoreCollectionCompletionOffering : NSObject {

	MPMediaQuery* _localItemsQuery;
	int _preferredStoreOfferVariant;
	MPStoreOfferMediaItemCollection* _offeredCollection;
	MPStoreOfferMediaItemCollection* _mergedCollection;

}

@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * itemsWithCompletionsCollection; 
@property (nonatomic,readonly) NSArray * localItems; 
@property (nonatomic,readonly) int preferredStoreOfferVariant;                                                //@synthesize preferredStoreOfferVariant=_preferredStoreOfferVariant - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * offeredCollection;                           //@synthesize offeredCollection=_offeredCollection - In the implementation block
@property (nonatomic,readonly) MPStoreOfferMediaItemCollection * mergedCollection;                            //@synthesize mergedCollection=_mergedCollection - In the implementation block
-(id)initWithOfferedCollection:(id)arg1 localItemsQuery:(id)arg2 preferredStoreOfferVariant:(int)arg3 ;
-(id)mergedCollection;
-(id)itemsWithCompletionsCollection;
-(int)preferredStoreOfferVariant;
-(id)localItems;
-(id)offeredCollection;
-(void).cxx_destruct;
@end
