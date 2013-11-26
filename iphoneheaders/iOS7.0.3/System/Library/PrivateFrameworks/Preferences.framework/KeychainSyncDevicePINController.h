/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:58:17 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Preferences/KeychainSyncTextEntryController.h>

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController : KeychainSyncTextEntryController {

	DevicePINController* _devicePINController;
	BOOL _showingBlockedMessage;
	NSString* _enterPasscodeTitle;
	NSString* _enterPasscodeReason;
	UIKeyboard* _disabledKeyboard;

}

@property (nonatomic,retain) NSString * enterPasscodeTitle;               //@synthesize enterPasscodeTitle=_enterPasscodeTitle - In the implementation block
@property (nonatomic,retain) NSString * enterPasscodeReason;              //@synthesize enterPasscodeReason=_enterPasscodeReason - In the implementation block
@property (nonatomic,retain) UIKeyboard * disabledKeyboard;               //@synthesize disabledKeyboard=_disabledKeyboard - In the implementation block
-(void)dealloc;
-(id)init;
-(int)tableView:(id)arg1 titleAlignmentForFooterInSection:(int)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(id)specifiers;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)setEnterPasscodeTitle:(id)arg1 ;
-(void)setEnterPasscodeReason:(id)arg1 ;
-(void)updateBlockedState:(id)arg1 ;
-(void)setDisabledKeyboard:(id)arg1 ;
-(id)enterPasscodeTitle;
-(id)enterPasscodeReason;
-(id)disabledKeyboard;
@end
