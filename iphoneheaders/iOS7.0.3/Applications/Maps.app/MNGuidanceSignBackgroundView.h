/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:58 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIView.h>

@class UIImageView, MNSignStyle;

@interface MNGuidanceSignBackgroundView : UIView {

	UIImageView* _outerBackdrop;
	UIImageView* _innerBackdrop;
	MNSignStyle* _style;

}

@property (nonatomic,retain) MNSignStyle * style;              //@synthesize style=_style - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setStyle:(id)arg1 ;
-(id)style;
@end
