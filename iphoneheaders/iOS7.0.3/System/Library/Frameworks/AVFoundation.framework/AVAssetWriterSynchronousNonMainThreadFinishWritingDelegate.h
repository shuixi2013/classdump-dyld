/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:53:11 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterFigAssetWriterNotificationHandlerDelegate.h>
#import <AVFoundation/AVAssetWriterFinishWritingHelperDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSObject, AVWeakReference;

@interface AVAssetWriterSynchronousNonMainThreadFinishWritingDelegate : NSObject <AVAssetWriterFigAssetWriterNotificationHandlerDelegate, AVAssetWriterFinishWritingHelperDelegate> {

	NSObject<OS_dispatch_semaphore>* _finishedWritingNotificationSemaphore;
	AVWeakReference* _weakReferenceToHelper;
	AVWeakReference* _weakReferenceToSelf;

}
-(void)didReceiveFigAssetWriterNotificationWithSuccess:(BOOL)arg1 error:(id)arg2 ;
-(BOOL)shouldHelperPrepareInputs;
-(void)finishWritingHelper:(id)arg1 didInitiateFinishWritingForFigAssetWriter:(OpaqueFigAssetWriterRef)arg2 ;
-(void)finishWritingHelperDidFail:(id)arg1 ;
-(void)finishWritingHelperDidCancelFinishWriting:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)finalize;
@end
