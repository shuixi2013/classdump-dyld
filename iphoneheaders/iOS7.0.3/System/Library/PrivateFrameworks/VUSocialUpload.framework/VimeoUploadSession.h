/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:13 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/VUSocialUpload.framework/VUSocialUpload
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol VimeoRemoteSessionProtocol;
@class ;

@interface VimeoUploadSession : NSObject {

	<VimeoRemoteSessionProtocol>* _remoteSession;

}
+(id)sharedSession;
-(id)init;
-(BOOL)uploadPost:(id)arg1 error:(id*)arg2 ;
@end
