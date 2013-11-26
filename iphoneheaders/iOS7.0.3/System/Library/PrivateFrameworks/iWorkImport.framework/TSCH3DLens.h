/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:38 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <CoreFoundation/NSCopying.h>

@interface TSCH3DLens : NSObject <NSCopying> {

	float mNear;
	float mFar;

}

@property (assign,nonatomic) float near; 
@property (assign,nonatomic) float far; 
+(id)lens;
-(void)setNear:(float)arg1 ;
-(void)setFar:(float)arg1 ;
-(float)near;
-(float)far;
-(void)calculateCullingPlanes:(vector<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> >, std::__1::allocator<TSCH3D::Math::ExtendedTypesDetails::plane<glm::detail::tvec3<float> > > >*)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
@end
