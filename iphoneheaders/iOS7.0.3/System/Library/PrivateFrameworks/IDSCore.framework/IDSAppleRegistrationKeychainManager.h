/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:55:19 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/IDSCore.framework/IDSCore
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSMutableDictionary, NSMutableArray, IMTimer, NSRecursiveLock, NSArray;

@interface IDSAppleRegistrationKeychainManager : NSObject {

	NSMutableDictionary* _smsSignatures;
	NSMutableDictionary* _authenticationCerts;
	NSMutableArray* _registrationData;
	IMTimer* _purgeTimer;
	NSRecursiveLock* _lock;
	/*^block*/ id _purgeCancelBlock;
	/*^block*/ id _purgeEnqueueBlock;
	BOOL _loaded;

}

@property (nonatomic,@dynamic,readonly) NSArray * registrations; 
+(id)sharedInstance;
+(id)keychainServiceForVersion:(unsigned)arg1 ;
+(id)keychainAccountForVersion:(unsigned)arg1 ;
+(id)keychainAccessGroupForVersion:(unsigned)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)saveToKeychain;
-(void)systemDidFinishMigration;
-(id)smsSignatureAndMainID:(id*)arg1 ;
-(void)setSMSSignature:(id)arg1 mainID:(id)arg2 ;
-(id)authenticationCertForID:(id)arg1 ;
-(void)setAuthenticationCert:(id)arg1 forID:(id)arg2 ;
-(BOOL)removeRegistration:(id)arg1 ;
-(BOOL)addRegistration:(id)arg1 ;
-(void)reloadFromKeychain;
-(BOOL)__saveToKeychain;
-(BOOL)_saveToKeychain;
-(void)_setPurgeTimer;
-(void)_reloadFromDictionary:(id)arg1 ;
-(void)_loadIfNeeded;
-(id)registrationWithServiceType:(id)arg1 registrationType:(int)arg2 value:(id)arg3 ;
-(id)registrations;
-(BOOL)removeAllRegistrations;
-(void)_flush;
@end
