/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:59:50 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iCalendar.framework/iCalendar
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iCalendar/ICSComponent.h>

@class NSArray, ICSDate, ICSDuration, NSString;

@interface ICSAvailable : ICSComponent

@property (@dynamic,retain) NSArray * attach; 
@property (@dynamic,retain) NSArray * attendee; 
@property (@dynamic,retain) ICSDate * created; 
@property (@dynamic,retain) ICSDate * dtend; 
@property (@dynamic,retain) ICSDate * dtstart; 
@property (@dynamic,retain) ICSDate * dtstamp; 
@property (@dynamic,retain) ICSDuration * duration; 
@property (@dynamic,retain) NSArray * rrule; 
@property (@dynamic,retain) NSString * uid; 
+(id)name;
@end
