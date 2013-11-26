/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/iWorkImport-Structs.h>
#import <iWorkImport/TSCHStyleOwning.h>
#import <iWorkImport/TSCHUnretainedParent.h>
#import <CoreFoundation/NSCopying.h>

@protocol TSCHStyleActAlike;
@class TSCHChartModel, , TSCHChartType, TSCHLegendModel, TSCHChartMediator, TSPLazyReference, NSMutableArray, NSString, TSDInfoGeometry, TSCHChartDrawableInfo, NSMutableDictionary, NSArray, TSCHChartLayoutCache, TSSStylesheet, TSCHChartStylePreset;

@interface TSCHChartInfo : NSObject <TSCHStyleOwning, TSCHUnretainedParent, NSCopying> {

	TSCHChartModel* mModel;
	<TSCHStyleActAlike>* mStyle;
	<TSCHStyleActAlike>* mNonStyle;
	TSCHChartType* mChartType;
	TSCHLegendModel* mLegendModel;
	TSCHChartMediator* mChartMediator;
	TSPLazyReference* mLazyPreset;
	CGRect mInnerChartFrame;
	<TSCHStyleActAlike>* mLegendStyle;
	<TSCHStyleActAlike>* mLegendNonStyle;
	NSMutableArray* mValueAxisStyles;
	NSMutableArray* mCategoryAxisStyles;
	NSMutableArray* mValueAxisNonStyles;
	NSMutableArray* mCategoryAxisNonStyles;
	NSMutableArray* mThemeSeriesStyles;
	NSMutableArray* mPrivateSeriesStyles;
	NSMutableArray* mSeriesNonStyles;
	NSMutableArray* mParagraphStyles;
	CGPoint mPreviewOrigin;
	BOOL mDisplayMessageOnRepCreation;
	NSString* mMessageString;
	double mMessageDuration;
	TSDInfoGeometry* mNonInfoGeometry;
	TSCHChartDrawableInfo* mDrawableInfo;
	BOOL mNeedsCalcEngineDependentUpgrade;
	BOOL mNeedsCalcEngineDependentImport;
	NSMutableDictionary* mStyleViewProxyMap;
	NSArray* mStyleViewProxyParagraphStyleArray;
	unsigned mLastSeriesIndex;

}

@property (nonatomic,readonly) BOOL hasSetDefaultLayoutSettings; 
@property (assign,nonatomic) SCD_Struct_TS407 defaultLayoutSettings; 
@property (nonatomic,readonly) TSCHChartLayoutCache * sceneAreaLayoutItemCache; 
@property (nonatomic,readonly) TSCHChartDrawableInfo * drawableInfo; 
@property (nonatomic,retain) TSCHChartType * chartType; 
@property (nonatomic,retain) TSCHChartModel * model; 
@property (nonatomic,retain) TSCHLegendModel * legend; 
@property (nonatomic,retain) TSCHChartMediator * mediator; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) CGPoint previewOrigin; 
@property (nonatomic,readonly) TSSStylesheet * documentStylesheet; 
@property (nonatomic,readonly) TSCHChartStylePreset * preset; 
@property (nonatomic,readonly) BOOL isPhantom; 
@property (nonatomic,readonly) CGSize minimumChartBodySize; 
@property (nonatomic,readonly) int gridDirection; 
@property (assign,nonatomic) BOOL displayMessageOnRepCreation; 
@property (nonatomic,retain) NSString * informationalMessageString; 
@property (assign,nonatomic) double informationalMessageDuration; 
@property (nonatomic,readonly) BOOL wantsDeferredUpgradeOrImport; 
+(double)beginValueForStackedBarSeries:(id)arg1 index:(unsigned)arg2 unitSpaceIntercept:(double)arg3 relativelyPositive:(BOOL)arg4 valueAxis:(id)arg5 ;
+(id)p_currentThreadSceneAreaLayoutCache;
+(void)setCurrentThreadSceneAreaLayoutCache:(id)arg1 ;
+(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 forStyleOwner:(id)arg3 ;
+(BOOL)groupedShadowsForChartModel:(id)arg1 ;
+(id)paragraphStyleIndexProperties;
+(id)paragraphStylePropertiesChartsUse;
+(id)chartStyleIdentifierForRoleIndex:(unsigned)arg1 ;
+(id)legendStyleIdentifierForRoleIndex:(unsigned)arg1 ;
+(id)seriesStyleIdentifierForRoleIndex:(unsigned)arg1 ordinal:(unsigned)arg2 ;
+(id)paragraphStyleIdentifierForRoleIndex:(unsigned)arg1 ordinal:(unsigned)arg2 ;
+(id)propertiesThatInvalidateModel;
+(Class)classForChartStyle;
+(Class)classForChartNonstyle;
+(Class)classForSeriesStyle;
+(Class)classForSeriesNonstyle;
+(Class)classForAxisStyle;
+(Class)classForAxisNonstyle;
+(Class)classForLegendStyle;
+(Class)classForLegendNonstyle;
+(id)valueAxisStyleIdentifierForRoleIndex:(unsigned)arg1 ordinal:(unsigned)arg2 ;
+(id)categoryAxisStyleIdentifierForRoleIndex:(unsigned)arg1 ordinal:(unsigned)arg2 ;
+(id)p_stylesheetFromOrderedArrayOfSources:(id)arg1 ;
-(void)setPreset:(id)arg1 ;
-(id)preset;
-(id)paragraphStyle;
-(void)willModify;
-(id)copyWithContext:(id)arg1 ;
-(id)objectValueForProperty:(int)arg1 ;
-(id)create3DSceneWithLayoutSettings:(const SCD_Struct_TS407*)arg1 ;
-(void)clearParent;
-(id)chartInfo;
-(float)floatValueForProperty:(int)arg1 defaultValue:(float)arg2 ;
-(int)intValueForProperty:(int)arg1 defaultValue:(int)arg2 ;
-(BOOL)isSingleCircleSpecialCaseOutSeries:(id*)arg1 ;
-(id)paragraphStyleAtIndex:(unsigned)arg1 ;
-(id)clamped3DRotationPropertyObject;
-(BOOL)hasSetDefaultLayoutSettings;
-(void)setDefaultLayoutSettings:(SCD_Struct_TS407)arg1 ;
-(SCD_Struct_TS407)defaultLayoutSettings;
-(id)sceneAreaLayoutItemCache;
-(void)debugLayoutCache;
-(void)setGeometry:(id)arg1 clearObjectPlaceholderFlag:(BOOL)arg2 ;
-(void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 ;
-(Class)repClass;
-(int)specificPropertyForGeneric:(int)arg1 ;
-(id)nonstyle;
-(BOOL)isSingleCircleSpecialCase;
-(id)mediator;
-(id)categoryAxisStyleAtIndex:(unsigned)arg1 ;
-(id)valueAxisStyleAtIndex:(unsigned)arg1 ;
-(id)categoryAxisNonstyleAtIndex:(unsigned)arg1 ;
-(id)valueAxisNonstyleAtIndex:(unsigned)arg1 ;
-(id)g_genericToDefaultPropertyMap;
-(int)defaultPropertyForGeneric:(int)arg1 ;
-(id)p_genericToDefaultPropertyMap;
-(id)drawableInfo;
-(id)documentStylesheet;
-(BOOL)hasIntValueForProperty:(int)arg1 value:(int*)arg2 ;
-(BOOL)hasFloatValueForProperty:(int)arg1 value:(float*)arg2 ;
-(BOOL)hasObjectValueForProperty:(int)arg1 value:(id*)arg2 ;
-(id)swapTuplesForMutations:(id)arg1 ;
-(id)swapTuplesForMutationsForImport:(id)arg1 ;
-(id)swapTuplesForParagraphStyleMutations:(id)arg1 forReferencingProperty:(int)arg2 ;
-(id)seriesStyleForSeriesIndex:(unsigned)arg1 ;
-(id)seriesNonstyleForSeriesIndex:(unsigned)arg1 ;
-(void)modelDidInvalidateWithDetails:(id)arg1 ;
-(BOOL)seriesStyleIsPrivate:(id)arg1 ;
-(unsigned)numberOfThemeSeriesStyles;
-(id)p_swapTuplesForMutations:(id)arg1 isForImport:(BOOL)arg2 ;
-(void)setSeriesNonstyle:(id)arg1 atIndex:(unsigned)arg2 ;
-(CGSize)minimumChartBodySize;
-(id)legendStyle;
-(id)paragraphStyles;
-(void)p_setChartType:(id)arg1 andSetLegendDefaults:(BOOL)arg2 ;
-(id)applyStyleSwapTuples:(id)arg1 ;
-(void)setDefaultLegendPositionIfNeededWithOptionalLayout:(id)arg1 ;
-(float)p_titleAccommodationWithLegendSize:(CGSize)arg1 optionalLayout:(id)arg2 ;
-(float)p_dataSetNameAccomodationWithOptionalLayout:(id)arg1 ;
-(id)p_init;
-(id)p_copyStyleAndNonStyleArray:(id)arg1 withZone:(NSZoneRef)arg2 context:(id)arg3 ;
-(id)copyWithZone:(NSZoneRef)arg1 context:(id)arg2 ;
-(void)setGeometry:(id)arg1 omitLegendResize:(BOOL)arg2 clearObjectPlaceholderFlag:(BOOL)arg3 ;
-(CGRect)resizedLegendFrame:(CGRect)arg1 oldChartSize:(CGSize)arg2 newChartSize:(CGSize)arg3 ;
-(void)chartTypeDidChangeWithDetails:(id)arg1 ;
-(BOOL)isPhantom;
-(id)chartStyleState;
-(id)newChartStylePresetByExampleWithPresetIndex:(unsigned)arg1 withSeriesCount:(unsigned)arg2 forTheme:(id)arg3 ;
-(void)chartDidInvalidateWithProperties:(id)arg1 ;
-(id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned)arg2 ;
-(id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned)arg2 ;
-(id)applyStyleSwapTuple:(id)arg1 ;
-(id)styleForAxis:(id)arg1 ;
-(id)nonStyleForAxis:(id)arg1 ;
-(id)styleOwnerForSelectionPath:(id)arg1 ;
-(int)paragraphStylePropertyForSelectionPath:(id)arg1 ;
-(id)scaleAllStrokesInStyle:(id)arg1 byRatio:(float)arg2 ;
-(void)p_breakUpFontName:(id)arg1 isBold:(BOOL*)arg2 isItalic:(BOOL*)arg3 ;
-(CGRect)chartBodyBoundsForSageImportWithSageChartType:(BOOL)arg1 ;
-(id)initWithChartType:(id)arg1 legendShowing:(id)arg2 chartBodyFrame:(id)arg3 chartAreaFrame:(id)arg4 circumscribingFrame:(id)arg5 legendFrame:(id)arg6 stylePreset:(id)arg7 privateSeriesStyles:(id)arg8 chartNonStyle:(id)arg9 legendNonStyle:(id)arg10 valueAxisNonStyles:(id)arg11 categoryAxisNonStyles:(id)arg12 seriesNonStyles:(id)arg13 ;
-(id)modelForDataSetIndex:(unsigned)arg1 ;
-(void)setMediator:(id)arg1 ;
-(void)setPreviewOrigin:(CGPoint)arg1 ;
-(int)gridDirection;
-(void)chartMoveToPosition:(CGPoint)arg1 size:(CGSize)arg2 ;
-(id)infoGeometryForVisuallyCenteringOnUnscaledCanvasPoint:(CGPoint)arg1 ;
-(id)infoGeometryForDesiredLayoutGeometry:(id)arg1 ;
-(void)setInfoGeometryByUpdatingLegendGeometryAccommodatedForInitialLayoutGeometry:(id)arg1 ;
-(Class)editorClass;
-(unsigned)addParagraphStyle:(id)arg1 ;
-(id)themeStylesheet;
-(id)newChartStylePresetByExampleWithPresetIndex:(unsigned)arg1 forTheme:(id)arg2 ;
-(id)legendNonStyle;
-(id)seriesStyleForSeries:(id)arg1 ;
-(id)nonStyleForSeries:(id)arg1 ;
-(unsigned)valueAxisStyleCount;
-(unsigned)categoryAxisStyleCount;
-(void)setValueAxisNonstyle:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setCategoryAxisNonstyle:(id)arg1 atIndex:(unsigned)arg2 ;
-(void)setChartNonstyle:(id)arg1 ;
-(void)updateTitlesForExportingModel:(id)arg1 ;
-(float)sageDepthFactorForExport;
-(id)childInfos;
-(id)styleOwnerFromSwapType:(int)arg1 andIndex:(unsigned)arg2 ;
-(id)childCommandForApplyThemeCommand:(id)arg1 ;
-(id)stringForSelectionPath:(id)arg1 ;
-(int)stringPropertyForSelectionPath:(id)arg1 ;
-(id)paragraphStyleForSelectionPath:(id)arg1 ;
-(id)commandForTransformingByTransform:(CGAffineTransform)arg1 context:(id)arg2 transformedObjects:(id)arg3 inBounds:(CGRect)arg4 ;
-(id)commandToScaleAllChartFontsBy:(float)arg1 ;
-(id)commandToChangeAllChartFontsToFamilyName:(id)arg1 ;
-(id)fillsForSeriesAndTheme;
-(BOOL)wantsDeferredUpgradeOrImport;
-(void)performDeferredUpgradeAndImportOperations;
-(CGPoint)previewOrigin;
-(BOOL)displayMessageOnRepCreation;
-(void)setDisplayMessageOnRepCreation:(BOOL)arg1 ;
-(id)informationalMessageString;
-(void)setInformationalMessageString:(id)arg1 ;
-(double)informationalMessageDuration;
-(void)setInformationalMessageDuration:(double)arg1 ;
-(float)maximumExplosionOfAllSeriesExcept:(id)arg1 ;
-(float)minFrameDimensionForRadius:(float)arg1 withMaxExplosion:(float)arg2 ;
-(float)radiusForFrame:(CGRect)arg1 withMaxExplosion:(float)arg2 ;
-(float)maximumExplosion;
-(unsigned)p_paragraphStyleIndexOfFirstCategoryAxisParagraphStyle;
-(void)loadFromPreUFFArchive:(const ChartInfoArchive*)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3 ;
-(void)performUpgradeForPersistentChartInfo:(id)arg1 archiveVersion:(unsigned long long)arg2 innerChartFrame:(CGRect)arg3 isFromPasteboard:(BOOL)arg4 ;
-(id)viewOverrideMapForStyleOwner:(id)arg1 ;
-(void)addViewStyleProxyForMutationTuples:(id)arg1 layouts:(id)arg2 ;
-(void)clearViewStyleProxyForLayouts:(id)arg1 ;
-(id)swapTuplesForApplyingPreset:(id)arg1 withBehavior:(unsigned)arg2 ;
-(id)tuplesToApplyState:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(void)applyChartStyleState:(id)arg1 ;
-(void)p_setDrawableInfo:(id)arg1 ;
-(void)p_duplicatePersistableMembersOfCopiedChartUsingContext:(id)arg1 ;
-(id)p_copyStyleArray:(id)arg1 inContext:(id)arg2 ;
-(id)p_copyNonStyleArray:(id)arg1 inContext:(id)arg2 ;
-(id)styleOwnerForRef:(SCD_Struct_TS452)arg1 ;
-(void)p_invalidateCachesInLayouts:(id)arg1 ;
-(SCD_Struct_TS452)styleOwnerRefForStyleOwner:(id)arg1 ;
-(void)setViewStyleProxyParagraphStyleArray:(id)arg1 layouts:(id)arg2 ;
-(id)commandToApplyViewProxiesToModel;
-(void)loadFromUnityArchive:(const ChartArchive*)arg1 unarchiver:(id)arg2 persistentChartInfo:(id)arg3 ;
-(void)saveToUnityArchive:(ChartArchive*)arg1 persistentChartInfo:(id)arg2 archiver:(id)arg3 ;
-(id)p_swapTuplesForApplyingPresetRemovingOverrides:(id)arg1 ;
-(id)p_swapTuplesForApplyingPreset:(id)arg1 preservingAppearance:(BOOL)arg2 ;
-(void)dealloc;
-(id)init;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)style;
-(id)context;
-(id)model;
-(id)geometry;
-(void)setGeometry:(id)arg1 ;
-(id)valueForProperty:(int)arg1 ;
-(void)setModel:(id)arg1 ;
-(id)legend;
-(id)chartType;
-(void)setChartType:(id)arg1 ;
-(void)setLegend:(id)arg1 ;
-(id)defaultProperties;
-(int)elementKind;
-(Class)layoutClass;
@end
