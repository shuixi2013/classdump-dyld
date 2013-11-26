/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameKit.framework/Frameworks/GameCenterUI.framework/GameCenterUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UINavigationController.h>

@protocol GKFriendRequestComposeViewControllerDelegate;
@class , GKComposeHostedViewController, NSString;

@interface GKFriendRequestComposeViewController : UINavigationController {

	<GKFriendRequestComposeViewControllerDelegate>* _composeViewDelegateWeak;
	GKComposeHostedViewController* _composeController;
	NSString* _message;
	unsigned _recipientCount;

}

@property (assign,nonatomic) <GKFriendRequestComposeViewControllerDelegate> * composeViewDelegate;              //@synthesize composeViewDelegateWeak=_composeViewDelegateWeak - In the implementation block
@property (nonatomic,retain) GKComposeHostedViewController * composeController;                                 //@synthesize composeController=_composeController - In the implementation block
@property (nonatomic,retain) NSString * message;                                                                //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) unsigned recipientCount;                                                           //@synthesize recipientCount=_recipientCount - In the implementation block
@property (assign,nonatomic) unsigned rid; 
+(unsigned)maxNumberOfRecipients;
+(BOOL)_preventsAppearanceProxyCustomization;
-(void)addRecipientsWithEmailAddresses:(id)arg1 ;
-(void)addRecipientsWithPlayerIDs:(id)arg1 ;
-(void)sendFinishedMessageToDelegateCancelled:(BOOL)arg1 ;
-(unsigned)rid;
-(void)setRid:(unsigned)arg1 ;
-(id)composeController;
-(void)prepareForNewRecipients:(id)arg1 ;
-(id)composeViewDelegate;
-(void)setComposeViewDelegate:(id)arg1 ;
-(void)setComposeController:(id)arg1 ;
-(unsigned)recipientCount;
-(void)setRecipientCount:(unsigned)arg1 ;
-(BOOL)navigationBarHidden;
-(void)dealloc;
-(id)init;
-(unsigned)supportedInterfaceOrientations;
-(id)message;
-(BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(BOOL)shouldAutomaticallyForwardRotationMethods;
-(BOOL)automaticallyForwardAppearanceAndRotationMethodsToChildViewControllers;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)__viewControllerWillBePresented:(BOOL)arg1 ;
-(void)setMessage:(id)arg1 ;
@end
