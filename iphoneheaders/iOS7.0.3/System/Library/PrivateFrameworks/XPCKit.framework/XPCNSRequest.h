/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:47 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/XPCKit.framework/XPCKit
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


@protocol NSCoding;
@class , NSData, XPCRequest;

@interface XPCNSRequest : NSObject {

	<NSCoding>* _message;
	NSData* _data;
	XPCRequest* _request;

}

@property (nonatomic,readonly) XPCRequest * request;              //@synthesize request=_request - In the implementation block
@property (nonatomic,readonly) <NSCoding> * message;              //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) NSData * data;                     //@synthesize data=_data - In the implementation block
-(id)data;
-(id)message;
-(id)request;
-(void)sendReply:(id)arg1 ;
-(void).cxx_destruct;
-(id)initWithXPCRequest:(id)arg1 ;
@end
