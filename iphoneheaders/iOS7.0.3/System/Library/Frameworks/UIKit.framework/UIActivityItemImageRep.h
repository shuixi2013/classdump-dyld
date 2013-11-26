/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:20 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@interface UIActivityItemImageRep : NSObject {

	id _asset;
	/*^block*/ id _thumbnailProvider;
	/*^block*/ id _dataProvider;

}

@property (nonatomic,retain) id asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,copy) id thumbnailProvider;              //@synthesize thumbnailProvider=_thumbnailProvider - In the implementation block
@property (nonatomic,copy) id dataProvider;                   //@synthesize dataProvider=_dataProvider - In the implementation block
+(id)activityItemImageRepWithAsset:(id)arg1 thumbnailProvider:(/*^block*/ id)arg2 dataProvider:(/*^block*/ id)arg3 ;
-(void)dealloc;
-(id)data;
-(void)setAsset:(id)arg1 ;
-(id)asset;
-(id)thumbnail;
-(void)setThumbnailProvider:(/*^block*/ id)arg1 ;
-(void)setDataProvider:(/*^block*/ id)arg1 ;
-(/*^block*/ id)thumbnailProvider;
-(/*^block*/ id)dataProvider;
@end
