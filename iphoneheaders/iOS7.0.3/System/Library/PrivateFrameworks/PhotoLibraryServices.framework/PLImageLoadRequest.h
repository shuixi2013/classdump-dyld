/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:58 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@class NSManagedObjectID, PLImageSource, NSMutableSet, NSMutableArray, PLLoadRequestKey, NSArray;

@interface PLImageLoadRequest : NSObject {

	NSManagedObjectID* _assetID;
	PLImageSource* _source;
	NSMutableSet* _queues;
	int _priority;
	NSMutableArray* _completionBlocks;
	PLLoadRequestKey* _key;

}

@property (assign,nonatomic) int priority;                              //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) NSArray * completionBlocks; 
@property (nonatomic,readonly) PLImageSource * source;                  //@synthesize source=_source - In the implementation block
@property (nonatomic,readonly) PLLoadRequestKey * key; 
+(id)requestWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 completion:(/*^block*/ id)arg4 loadingQueue:(id)arg5 ;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)debugDescription;
-(id)key;
-(id)source;
-(int)priority;
-(void)setPriority:(int)arg1 ;
-(BOOL)isImageLoadingQueueRegistered:(id)arg1 ;
-(void)deregisterImageLoadingQueue:(id)arg1 ;
-(BOOL)someImageLoadingQueuesRegistered;
-(void)addCompletionBlock:(/*^block*/ id)arg1 ;
-(void)registerImageLoadingQueue:(id)arg1 ;
-(void)notifyImageLoadingQueuesOfImageAvailability:(id)arg1 ;
-(id)assetInPhotoLibrary:(id)arg1 ;
-(id)initWithAsset:(id)arg1 source:(id)arg2 priority:(int)arg3 ;
-(id)completionBlocks;
@end
