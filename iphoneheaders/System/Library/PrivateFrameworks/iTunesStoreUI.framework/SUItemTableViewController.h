/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 3:58:45 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/

#import <iTunesStoreUI/SUTableViewController.h>

@class SUDocumentInteractionSession;

@interface SUItemTableViewController : SUTableViewController {

	SUDocumentInteractionSession* _documentInteractionSession;

}
-(id)itemAtIndexPath:(id)arg1 ;
-(void)dealloc;
-(void)reloadData;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_restrictionsChangedNotification:(id)arg1 ;
-(void)_touchCaptureAction:(id)arg1 ;
-(void)itemOfferButtonAction:(id)arg1 ;
-(void)_purchasedItemSetChangedNotification:(id)arg1 ;
-(void)_removeTouchCaptureView;
-(void)_showPurchaseConfirmationForButton:(id)arg1 ;
-(void)_hidePurchaseConfirmationForButton:(id)arg1 ;
-(BOOL)openDocumentForItemAtIndexPath:(id)arg1 withApplication:(id)arg2 ;
-(void)_chooseApplicationToOpenDocumentAtIndexPath:(id)arg1 withCompletionHandler:(/*^block*/ id)arg2 ;
-(BOOL)purchaseItemAtIndexPath:(id)arg1 ;
-(id)_preferredApplicationFromCandidates:(id)arg1 ;
-(void)_promptToOpenUTI:(id)arg1 fromIndexPath:(id)arg2 withCompletionHandler:(/*^block*/ id)arg3 ;
-(id)_tableCellForButton:(id)arg1 ;
@end
