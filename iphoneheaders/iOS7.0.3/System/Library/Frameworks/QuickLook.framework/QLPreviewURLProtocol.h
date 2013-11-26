/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:40 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <Foundation/NSURLProtocol.h>

@interface QLPreviewURLProtocol : NSURLProtocol
+(BOOL)canInitWithRequest:(id)arg1 ;
+(id)canonicalRequestForRequest:(id)arg1 ;
+(void)registerPreview:(id)arg1 ;
+(id)_errorForAbort;
+(void)_unregisterURL:(id)arg1 ;
+(id)_errorForCancel;
+(void)startLoadingProtocol:(id)arg1 ;
+(void)stopLoadingProtocol:(id)arg1 ;
+(id)newUniqueURLWithName:(id)arg1 ;
+(id)newURLWithContentID:(id)arg1 baseURL:(id)arg2 ;
+(void)registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3 ;
+(id)_errorForNoPreview;
+(void)unregisterURLs:(id)arg1 andPreview:(id)arg2 ;
+(void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3 ;
+(void)setError:(id)arg1 forURL:(id)arg2 ;
+(id)errorForURL:(id)arg1 ;
+(id)mimeTypeForAttachmentURL:(id)arg1 ;
+(void)initialize;
-(void)startLoading;
-(void)stopLoading;
@end
