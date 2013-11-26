/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:36 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/PassKit.framework/PassKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITableViewCell.h>

@protocol PKInstalledAppTableViewCellDelegate;
@class LSApplicationProxy, ;

@interface PKInstalledAppTableViewCell : UITableViewCell {

	LSApplicationProxy* _app;
	<PKInstalledAppTableViewCellDelegate>* _delegate;

}

@property (nonatomic,retain) LSApplicationProxy * app;                                      //@synthesize app=_app - In the implementation block
@property (assign,nonatomic) <PKInstalledAppTableViewCellDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)openTapped;
-(void)setApp:(id)arg1 ;
-(id)app;
-(void)setDelegate:(id)arg1 ;
-(void)layoutSubviews;
-(id)delegate;
-(id)initWithReuseIdentifier:(id)arg1 ;
@end
