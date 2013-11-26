/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <UIKit/UITextField.h>

@interface MFComposeTextField : UITextField {

	BOOL _isShowingDictationPlaceholder;

}

@property (nonatomic,readonly) BOOL isShowingDictationPlaceholder;              //@synthesize isShowingDictationPlaceholder=_isShowingDictationPlaceholder - In the implementation block
-(id)insertDictationResultPlaceholder;
-(void)removeDictationResultPlaceholder:(id)arg1 willInsertResult:(BOOL)arg2 ;
-(BOOL)isShowingDictationPlaceholder;
@end
