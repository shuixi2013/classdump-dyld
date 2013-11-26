/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:42 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <WebKit/WebKit-Structs.h>
@class WebResource, NSArray;

@interface WebArchivePrivate : NSObject {

	WebResource* cachedMainResource;
	NSArray* cachedSubresources;
	NSArray* cachedSubframeArchives;
	RefPtr<WebCore::LegacyWebArchive>* coreArchive;

}
+(void)initialize;
-(void)dealloc;
-(id)init;
-(id).cxx_construct;
-(void).cxx_destruct;
-(id)initWithCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
-(LegacyWebArchive*)coreArchive;
-(void)setCoreArchive:(PassRefPtr<WebCore::LegacyWebArchive>*)arg1 ;
@end
