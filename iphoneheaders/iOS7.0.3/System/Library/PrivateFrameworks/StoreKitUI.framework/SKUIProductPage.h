/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:55 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <CoreFoundation/NSCopying.h>

@class SKUIProductPageItem, SSMetricsConfiguration, NSString, NSURL, NSArray, SKUIReviewConfiguration, SKUIUber;

@interface SKUIProductPage : NSObject <NSCopying> {

	SKUIProductPageItem* _item;
	SSMetricsConfiguration* _metricsConfiguration;
	NSString* _metricsPageDescription;
	NSURL* _pageURL;
	NSArray* _relatedContentSwooshes;
	SKUIReviewConfiguration* _reviewConfiguration;
	SKUIUber* _uber;

}

@property (nonatomic,retain) SKUIProductPageItem * item;                                 //@synthesize item=_item - In the implementation block
@property (nonatomic,retain) SSMetricsConfiguration * metricsConfiguration;              //@synthesize metricsConfiguration=_metricsConfiguration - In the implementation block
@property (nonatomic,copy) NSString * metricsPageDescription;                            //@synthesize metricsPageDescription=_metricsPageDescription - In the implementation block
@property (nonatomic,copy) NSURL * pageURL;                                              //@synthesize pageURL=_pageURL - In the implementation block
@property (nonatomic,copy) NSArray * relatedContentSwooshes;                             //@synthesize relatedContentSwooshes=_relatedContentSwooshes - In the implementation block
@property (nonatomic,retain) SKUIReviewConfiguration * reviewConfiguration;              //@synthesize reviewConfiguration=_reviewConfiguration - In the implementation block
@property (nonatomic,retain) SKUIUber * uber;                                            //@synthesize uber=_uber - In the implementation block
-(void)setItem:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)item;
-(void)setPageURL:(id)arg1 ;
-(id)pageURL;
-(void)setMetricsConfiguration:(id)arg1 ;
-(void)setMetricsPageDescription:(id)arg1 ;
-(void)setUber:(id)arg1 ;
-(id)metricsConfiguration;
-(id)metricsPageDescription;
-(id)uber;
-(id)reviewConfiguration;
-(id)relatedContentSwooshes;
-(void)setRelatedContentSwooshes:(id)arg1 ;
-(void)setReviewConfiguration:(id)arg1 ;
-(void).cxx_destruct;
@end
