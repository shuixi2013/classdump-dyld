/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:00:03 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /Applications/MobileCal.app/MobileCal
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <MobileCal/MobileCal-Structs.h>
#import <UIKit/UITableViewController.h>
#import <MobileCal/CalendarMessageCellDelegate.h>

@protocol CalendarMessagesTableViewControllerDelegate;
@class CalendarModel, NSMutableArray, EKEvent, NSMutableDictionary, NSArray, NSString;

@interface CalendarMessagesTableViewController : UITableViewController <CalendarMessageCellDelegate> {

	CalendarModel* _model;
	NSMutableArray* _messages;
	NSMutableArray* _sharedCalendarInvitationsReplyPending;
	EKEvent* _eventToSelect;
	int _indexToSelect;
	BOOL _performedInitialRefresh;
	BOOL _needsRefreshOnShow;
	NSMutableDictionary* _cellFrameDictionary;
	float _minimumContentHeight;
	BOOL _hideView;
	<CalendarMessagesTableViewControllerDelegate>* _delegate;

}

@property (assign,nonatomic,__weak) <CalendarMessagesTableViewControllerDelegate> * delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) CalendarModel * model; 
@property (assign,nonatomic) BOOL hideView;                                                                //@synthesize hideView=_hideView - In the implementation block
@property (nonatomic,readonly) NSArray * messagesFromModel; 
@property (nonatomic,readonly) NSString * noContentViewString; 
-(id)initWithModel:(id)arg1 eventToSelect:(id)arg2 delegate:(id)arg3 ;
-(void)performAction:(int)arg1 forNotification:(id)arg2 ;
-(float)cachedStatusButtonFontSizeForMessageCellType:(int)arg1 ;
-(id)reuseIdentifierForNotification:(id)arg1 ;
-(void)_invitationsChanged;
-(BOOL)_performInitialRefreshIfNeeded;
-(void)refreshFromModel;
-(void)_delegateShouldCloseNotifications;
-(id)messagesFromModel;
-(id)noContentViewString;
-(void)registerClassReuseIdentifiers;
-(id)eventForIndexPath:(id)arg1 ;
-(void)_removeNotification:(id)arg1 ;
-(void)setHideView:(BOOL)arg1 ;
-(BOOL)hideView;
-(id)_cellForIndexPath:(id)arg1 ;
-(void)_localeChanged;
-(void)dealloc;
-(void)setDelegate:(id)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(float)tableView:(id)arg1 heightForRowAtIndexPath:(id)arg2 ;
-(float)tableView:(id)arg1 estimatedHeightForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 willSelectRowAtIndexPath:(id)arg2 ;
-(void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2 ;
-(int)tableView:(id)arg1 numberOfRowsInSection:(int)arg2 ;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(int)numberOfSectionsInTableView:(id)arg1 ;
-(id)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(CGSize)preferredContentSize;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)model;
-(void).cxx_destruct;
@end
