/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:51:35 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AddressBookUI.framework/AddressBookUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <AddressBookUI/ABContactAction.h>
#import <UIKit/UIActionSheetDelegate.h>

@interface ABContactToggleBlockCallerAction : ABContactAction <UIActionSheetDelegate>

@property (nonatomic,readonly) BOOL isBlocked; 
-(void)performActionWithSender:(id)arg1 ;
-(id)allNumbersAndEmails;
-(BOOL)isBlocked;
-(void)unblock;
-(void)actionSheet:(id)arg1 clickedButtonAtIndex:(int)arg2 ;
-(void)block;
@end
