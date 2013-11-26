/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:00:52 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Maps.app/Maps
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UIAlertView.h>
#import <UIKit/UIAlertViewDelegate.h>

@interface EasyCallbackAlertView : UIAlertView <UIAlertViewDelegate> {

	/*^block*/ id _tappedButtonCallback;
	/*^block*/ id _dismissedCallback;
	/*^block*/ id _shouldEnableFirstOtherButtonCallback;

}

@property (nonatomic,copy) id tappedButtonCallback;                              //@synthesize tappedButtonCallback=_tappedButtonCallback - In the implementation block
@property (nonatomic,copy) id dismissedCallback;                                 //@synthesize dismissedCallback=_dismissedCallback - In the implementation block
@property (nonatomic,copy) id shouldEnableFirstOtherButtonCallback;              //@synthesize shouldEnableFirstOtherButtonCallback=_shouldEnableFirstOtherButtonCallback - In the implementation block
-(void)setTappedButtonCallback:(/*^block*/ id)arg1 ;
-(void)setDismissedCallback:(/*^block*/ id)arg1 ;
-(void)setShouldEnableFirstOtherButtonCallback:(/*^block*/ id)arg1 ;
-(/*^block*/ id)tappedButtonCallback;
-(/*^block*/ id)dismissedCallback;
-(/*^block*/ id)shouldEnableFirstOtherButtonCallback;
-(void)dealloc;
-(void)alertView:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2 ;
-(BOOL)alertViewShouldEnableFirstOtherButton:(id)arg1 ;
@end
