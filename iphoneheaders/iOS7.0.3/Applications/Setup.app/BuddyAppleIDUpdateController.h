/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:02:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/Setup.app/Setup
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Setup/BuddyController.h>

@class BuddyAppleIDController;

@interface BuddyAppleIDUpdateController : NSObject <BuddyController> {

	id _delegate;
	BuddyAppleIDController* _appleIDController;

}
-(BOOL)shouldAllowStartOver;
-(BOOL)controllerAllowsNavigatingBack;
-(id)navControllerForCreateAppleIDPages:(id)arg1 ;
-(void)appleIDControllerFinished:(id)arg1 success:(BOOL)arg2 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)viewController;
-(id)initWithAccount:(id)arg1 ;
@end
