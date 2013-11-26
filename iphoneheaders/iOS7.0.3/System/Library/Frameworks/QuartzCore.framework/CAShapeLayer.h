/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:39 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <QuartzCore/QuartzCore-Structs.h>
#import <QuartzCore/CALayer.h>

@class NSString, NSArray;

@interface CAShapeLayer : CALayer

@property (assign) CGPathRef path; 
@property (assign) CGColorRef fillColor; 
@property (copy) NSString * fillRule; 
@property (assign) CGColorRef strokeColor; 
@property (assign) float strokeStart; 
@property (assign) float strokeEnd; 
@property (assign) float lineWidth; 
@property (assign) float miterLimit; 
@property (copy) NSString * lineCap; 
@property (copy) NSString * lineJoin; 
@property (assign) float lineDashPhase; 
@property (copy) NSArray * lineDashPattern; 
+(id)defaultValueForKey:(id)arg1 ;
+(BOOL)CA_automaticallyNotifiesObservers:(Class)arg1 ;
+(BOOL)_hasRenderLayerSubclass;
-(bool)_renderLayerDefinesProperty:(unsigned)arg1 ;
-(unsigned)_renderLayerPropertyAnimationFlags:(unsigned)arg1 ;
-(Layer*)_copyRenderLayer:(Transaction*)arg1 layerFlags:(unsigned)arg2 commitFlags:(unsigned*)arg3 ;
-(void)_renderForegroundInContext:(CGContextRef)arg1 ;
-(id)fillRule;
-(id)lineDashPattern;
-(float)lineDashPhase;
-(float)strokeStart;
-(float)strokeEnd;
-(void)setStrokeStart:(float)arg1 ;
-(void)setStrokeEnd:(float)arg1 ;
-(void)setLineDashPhase:(float)arg1 ;
-(void)didChangeValueForKey:(id)arg1 ;
-(CGPathRef)path;
-(float)lineWidth;
-(void)setLineWidth:(float)arg1 ;
-(float)miterLimit;
-(void)setMiterLimit:(float)arg1 ;
-(id)implicitAnimationForKeyPath:(id)arg1 ;
-(void)setPath:(CGPathRef)arg1 ;
-(void)setFillColor:(CGColorRef)arg1 ;
-(void)setStrokeColor:(CGColorRef)arg1 ;
-(CGColorRef)fillColor;
-(void)setFillRule:(id)arg1 ;
-(CGColorRef)strokeColor;
-(void)setLineCap:(id)arg1 ;
-(void)setLineDashPattern:(id)arg1 ;
-(void)setLineJoin:(id)arg1 ;
-(id)lineJoin;
-(id)lineCap;
@end
