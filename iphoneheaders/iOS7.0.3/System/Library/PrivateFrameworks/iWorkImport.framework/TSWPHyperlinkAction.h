/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:10:18 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iWorkImport/TSWPTwoPartAction.h>

@protocol TSWPHyperlinkHostRepProtocol;
@class TSWPHyperlinkField, TSDRep;

@interface TSWPHyperlinkAction : TSWPTwoPartAction {

	TSWPHyperlinkField* _hyperlinkField;
	TSDRep<TSWPHyperlinkHostRepProtocol>* _hyperlinkRep;

}
+(id)hyperlinkActionWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/ id)arg3 ;
-(id)initWithHyperlink:(id)arg1 inRep:(id)arg2 action:(/*^block*/ id)arg3 ;
-(void)dealloc;
@end
