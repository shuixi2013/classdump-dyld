/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:15 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/UIKit.framework/UIKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIKit-Structs.h>
#import <UIKit/UIView.h>

@class _UILegibilitySettings, UIImage, UIImageView, CAFilter;

@interface _UILegibilityView : UIView {

	BOOL _hidesImage;
	_UILegibilitySettings* _settings;
	UIImage* _image;
	UIImage* _shadowImage;
	float _strength;
	UIImageView* _imageView;
	UIImageView* _shadowImageView;
	CAFilter* _imageColorFilter;
	CAFilter* _shadowImageColorFilter;
	int _options;

}

@property (nonatomic,@dynamic,readonly) int style; 
@property (nonatomic,retain) _UILegibilitySettings * settings;               //@synthesize settings=_settings - In the implementation block
@property (nonatomic,retain) UIImage * image;                                //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * shadowImage;                          //@synthesize shadowImage=_shadowImage - In the implementation block
@property (assign,nonatomic) float strength;                                 //@synthesize strength=_strength - In the implementation block
@property (assign,nonatomic) BOOL hidesImage;                                //@synthesize hidesImage=_hidesImage - In the implementation block
@property (nonatomic,readonly) BOOL usesColorFilters; 
@property (nonatomic,retain) UIImageView * imageView;                        //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) UIImageView * shadowImageView;                  //@synthesize shadowImageView=_shadowImageView - In the implementation block
@property (nonatomic,retain) CAFilter * imageColorFilter;                    //@synthesize imageColorFilter=_imageColorFilter - In the implementation block
@property (nonatomic,retain) CAFilter * shadowImageColorFilter;              //@synthesize shadowImageColorFilter=_shadowImageColorFilter - In the implementation block
@property (assign,nonatomic) int options;                                    //@synthesize options=_options - In the implementation block
-(void)dealloc;
-(void)setImage:(id)arg1 ;
-(void)layoutSubviews;
-(id)image;
-(int)style;
-(id)shadowImage;
-(void)setShadowImage:(id)arg1 ;
-(id)imageView;
-(id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3 shadowImage:(id)arg4 ;
-(void)setImage:(id)arg1 shadowImage:(id)arg2 ;
-(void)setImageView:(id)arg1 ;
-(void)setSettings:(id)arg1 ;
-(id)settings;
-(void)setOptions:(int)arg1 ;
-(int)options;
-(id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3 ;
-(id)initWithStyle:(int)arg1 image:(id)arg2 ;
-(float)strength;
-(void)setStrength:(float)arg1 ;
-(id)initWithStyle:(int)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)initWithSettings:(id)arg1 strength:(float)arg2 image:(id)arg3 shadowImage:(id)arg4 options:(int)arg5 ;
-(void)setSettings:(id)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(id)shadowImageView;
-(void)setShadowImageView:(id)arg1 ;
-(BOOL)usesColorFilters;
-(id)imageColorFilter;
-(void)setImageColorFilter:(id)arg1 ;
-(id)drawingColor;
-(id)shadowImageColorFilter;
-(void)setShadowImageColorFilter:(id)arg1 ;
-(void)updateImage;
-(BOOL)usesSecondaryColor;
-(CGSize)sizeThatFits;
-(void)setHidesImage:(BOOL)arg1 ;
-(void)setStyle:(int)arg1 image:(id)arg2 shadowImage:(id)arg3 ;
-(void)updateForChangedSettings:(id)arg1 ;
-(BOOL)hidesImage;
@end
