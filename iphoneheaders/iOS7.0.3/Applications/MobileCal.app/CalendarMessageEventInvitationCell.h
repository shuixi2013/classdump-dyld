/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:01:11 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <MobileCal/CalendarMessageCell.h>

@class NSString;

@interface CalendarMessageEventInvitationCell : CalendarMessageCell {

	NSString* _subtitle;
	NSString* _thirdTitle;

}
+(id)titleForNotification:(id)arg1 ;
+(id)subtitleForNotification:(id)arg1 ;
+(id)thirdTitleForNotification:(id)arg1 ;
+(id)fourthTitleForNotification:(id)arg1 ;
+(int)messageCellTypeForNotification:(id)arg1 ;
+(BOOL)showAsCancelledOrDeclinedForNotification:(id)arg1 ;
+(BOOL)notificationIsCancelled:(id)arg1 ;
+(BOOL)notificationIsInvite:(id)arg1 ;
-(id)thirdTitle;
-(id)subtitle;
-(void)setNotification:(id)arg1 ;
-(void).cxx_destruct;
@end
