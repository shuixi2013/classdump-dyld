/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:08:15 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/searchd
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <searchd/searchd-Structs.h>
@class NSMutableDictionary, NSString, SDUpdatesFile, NSDate;

@interface SDClient : NSObject {

	NSMutableDictionary* _queriesByExternId;
	BOOL _updating;
	NSString* _applicationDisplayID;
	NSString* _category;
	SDUpdatesFile* _updatesFile;
	NSMutableDictionary* _contentIndices;
	NSDate* _timer;

}
+(void)registerMessageHandlersWithServer:(id)arg1 ;
+(id)clientForConnection:(id)arg1 ;
-(void)_beginCrashHandlingForStore:(id)arg1 andQuery:(id)arg2 ;
-(void)_endCrashHandling;
-(void)removeActiveQuery:(id)arg1 ;
-(BOOL)_validateApplicationID:(id)arg1 andCategory:(id)arg2 ;
-(id)_recordForID:(id)arg1 fromRecords:(id)arg2 ;
-(void)addAndStartQuery:(id)arg1 ;
-(void)cancelQueryWithExternalID:(unsigned)arg1 ;
-(void)openRecordUpdateTransactionForApplication:(id)arg1 category:(id)arg2 ;
-(void)saveUpdateForApplication:(id)arg1 category:(id)arg2 recordIDs:(id)arg3 ;
-(void)closeRecordUpdateTransactionForApplication:(id)arg1 category:(id)arg2 ;
-(id)updateListForDisplayIdentifier:(id)arg1 category:(id)arg2 ;
-(id)getImageDataForResultIdentifier:(unsigned long long)arg1 domain:(unsigned)arg2 size:(CGSize)arg3 ;
-(void)updateContentIndexWithDictionary:(id)arg1 moreComing:(BOOL)arg2 onConnection:(id)arg3 ;
-(void)dealloc;
@end
