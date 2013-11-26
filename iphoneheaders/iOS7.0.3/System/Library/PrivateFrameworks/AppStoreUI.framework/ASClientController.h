/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:43 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStoreUI/SUClientController.h>

@interface ASClientController : SUClientController {

	BOOL _shouldExitAfterPurchases;

}

@property (assign,nonatomic) BOOL shouldExitAfterPurchases;              //@synthesize shouldExitAfterPurchases=_shouldExitAfterPurchases - In the implementation block
-(BOOL)shouldExitAfterPurchases;
-(void)setShouldExitAfterPurchases:(BOOL)arg1 ;
-(id)initWithClientInterface:(id)arg1 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForItems:(id)arg2 ;
-(id)purchaseManager:(id)arg1 purchaseBatchForPurchases:(id)arg2 ;
-(BOOL)libraryContainsItemIdentifier:(unsigned long long)arg1 ;
-(id)initWithClientIdentifier:(id)arg1 ;
@end
