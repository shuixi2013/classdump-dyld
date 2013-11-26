/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/YouTube.framework/YouTube
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <YouTube/YTXMLHTTPRequest.h>

@class NSMutableArray, NSURL;

@interface YTFeedRequest : YTXMLHTTPRequest {

	id _delegate;
	NSMutableArray* _videos;
	NSURL* _batchURL;
	unsigned _startIndex;
	unsigned _videosPerPage;
	unsigned _totalResults;
	BOOL _invalidatedToken;

}
+(int)partialFeedType;
-(int)parseData:(id)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(id)init;
-(void)failWithError:(id)arg1 ;
-(void)didParseData;
-(void)loadRequest:(id)arg1 withDelegate:(id)arg2 accountAuthRequired:(BOOL)arg3 ;
@end
