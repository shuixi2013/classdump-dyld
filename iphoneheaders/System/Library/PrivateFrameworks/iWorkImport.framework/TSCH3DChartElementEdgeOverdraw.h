/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:25 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


#import <iWorkImport/iWorkImport-Structs.h>
@class TSCH3DPrefilteredLineRenderer, TSCH3DSceneRenderPipeline;

@interface TSCH3DChartElementEdgeOverdraw : NSObject {

	BOOL mPreprocessed;
	TSCH3DPrefilteredLineRenderer* mRenderer;
	TSCH3DSceneRenderPipeline* mRenderingPipeline;
	box<glm::detail::tvec2<float> > mTexturePortion;

}

@property (assign,nonatomic) box<glm::detail::tvec2<float> >* texturePortion; 
@property (nonatomic,readonly) TSCH3DPrefilteredLineRenderer * renderer; 
@property (nonatomic,readonly) TSCH3DSceneRenderPipeline * renderingPipeline; 
-(id)renderingPipeline;
-(box<glm::detail::tvec2<float> >*)texturePortion;
-(id)renderer;
-(void)preprocessPipeline:(id)arg1 ;
-(void)renderOverdrawEdges:(id)arg1 modelView:(tmat4x4<float>*)arg2 ;
-(void)setTexturePortion:(box<glm::detail::tvec2<float> >*)arg1 ;
-(void)processPipeline:(id)arg1 lineRenderer:(id)arg2 ;
-(void)dealloc;
-(id).cxx_construct;
@end
