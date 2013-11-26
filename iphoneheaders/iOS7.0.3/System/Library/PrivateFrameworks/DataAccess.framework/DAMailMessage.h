/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:56:14 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/DataAccess.framework/DataAccess
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <CoreFoundation/NSCoding.h>

@interface DAMailMessage : NSObject <NSCoding>
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)date;
-(id)body;
-(id)subject;
-(int)importance;
-(int)bodyTruncated;
-(id)replyTo;
-(id)displayTo;
-(id)messageClass;
-(id)threadTopic;
-(id)conversationIndex;
-(id)attachments;
-(id)remoteID;
-(id)cc;
-(id)folderID;
-(int)bodySize;
-(id)meetingRequestUUID;
-(id)longID;
-(BOOL)readIsSet;
-(BOOL)flaggedIsSet;
-(BOOL)flagged;
-(BOOL)verbIsSet;
-(int)lastVerb;
-(int)smimeType;
-(id)meetingRequestMetaData;
-(BOOL)meetingRequestIsActionable;
-(id)rfc822Data;
-(id)conversationId;
-(id)from;
-(id)to;
-(BOOL)read;
@end
