/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:25 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <VectorKit/VectorKit-Structs.h>
@interface VKLabelMarkerFeatureHandle : NSObject {

	int _featureType;
	int _featureIndex;
	int _tileX;
	int _tileY;
	int _tileZ;

}
-(id)initWithFeature:(SCD_Struct_VK62*)arg1 ;
-(int)featureType;
-(int)featureIndex;
-(int)tileX;
-(int)tileY;
-(int)tileZ;
@end
