/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/OISFUDataRepresentation.h>

@class NSData;

@interface SFUMemoryDataRepresentation : OISFUDataRepresentation {

	NSData* mData;

}
-(void)dealloc;
-(id)data;
-(id)initWithData:(id)arg1 ;
-(long long)dataLength;
-(id)inputStream;
-(id)bufferedInputStream;
-(BOOL)isReadable;
-(BOOL)hasSameLocationAs:(id)arg1 ;
-(id)bufferedInputStreamWithBufferSize:(unsigned long)arg1 ;
-(unsigned long)readIntoData:(id)arg1 ;
-(id)initWithDataNoCopy:(id)arg1 ;
-(id)initWithDataRepresentation:(id)arg1 ;
@end
