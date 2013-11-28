/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <VectorKit/VectorKit-Structs.h>
#import <VectorKit/VKTile.h>

@class NSMutableData, VGLBytesTexture;

@interface VKRasterOverlayTile : VKTile {

	int _size;
	float _scale;
	NSMutableData* _imageData;
	CGContextRef _ctx;
	VGLBytesTexture* _texture;

}
-(void)dealloc;
-(BOOL)isEmpty;
-(id)texture;
-(id)initWithKey:(const VKTileKey*)arg1 size:(int)arg2 scale:(float)arg3 ;
-(CGContextRef)drawContext;
@end
