/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:38 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <OfficeImport/PDSlideBase.h>

@class OADTheme, OADColorMap, OADTextListStyle;

@interface PDNotesMaster : PDSlideBase {

	OADTheme* mTheme;
	OADColorMap* mColorMap;
	OADTextListStyle* mNotesTextStyle;

}
-(void)dealloc;
-(id)init;
-(id)theme;
-(id)colorScheme;
-(id)styleMatrix;
-(id)colorMap;
-(id)fontScheme;
-(id)parentSlideBase;
-(void)doneWithContent;
-(id)drawingTheme;
-(id)notesTextStyle;
-(id)placeholderWithType:(int)arg1 placeholderTypeIndex:(int)arg2 ;
-(id)parentTextBodyPropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)parentTextStyleForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 defaultTextListStyle:(id)arg3 overrideIndex:(BOOL)arg4 ;
-(id)parentTextStyleForTables;
-(id)parentShapePropertiesForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
-(id)masterGraphicForPlaceholderType:(int)arg1 placeholderTypeIndex:(int)arg2 overrideIndex:(BOOL)arg3 ;
@end
