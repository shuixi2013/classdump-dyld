/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:41 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/SyncedDefaults.framework/Support/syncdefaultsd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class AAAccountManager, AAAccount, NSDictionary, NSURL;

@interface SYDAccount : NSObject {

	AAAccountManager* _accountManager;
	AAAccount* _account;
	BOOL _allowsCellular;
	NSDictionary* _accountProperties;
	BOOL _needsToReloadAccount;

}

@property (getter=isValid,nonatomic,readonly) BOOL valid; 
@property (nonatomic,readonly) NSURL * serverURL; 
@property (nonatomic,readonly) BOOL allowsCellular;                    //@synthesize allowsCellular=_allowsCellular - In the implementation block
+(id)enabledAccountForManager:(id)arg1 ;
-(BOOL)allowsCellular;
-(void)_loadAccountIfNecessary;
-(void)_accountsChangedNotification;
-(id)credentials;
-(void)dealloc;
-(id)init;
-(id)description;
-(BOOL)isValid;
-(id)serverURL;
-(void)shutdown;
@end
