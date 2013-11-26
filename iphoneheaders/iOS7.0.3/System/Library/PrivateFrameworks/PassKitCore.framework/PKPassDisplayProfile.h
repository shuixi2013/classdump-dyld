/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:57:48 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <CoreFoundation/NSSecureCoding.h>
#import <CoreFoundation/NSCopying.h>

@class PKColor, NSData;

@interface PKPassDisplayProfile : NSObject <NSSecureCoding, NSCopying> {

	BOOL _tallCode;
	int _passStyle;
	PKColor* _backgroundColor;
	PKColor* _foregroundColor;
	PKColor* _labelColor;
	PKColor* _stripColor;
	NSData* _iconHash;
	NSData* _logoHash;
	NSData* _thumbnailHash;
	NSData* _backgroundHash;
	NSData* _stripHash;
	int _layoutMode;

}

@property (assign,nonatomic) int passStyle;                          //@synthesize passStyle=_passStyle - In the implementation block
@property (nonatomic,retain) PKColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) PKColor * foregroundColor;              //@synthesize foregroundColor=_foregroundColor - In the implementation block
@property (nonatomic,retain) PKColor * labelColor;                   //@synthesize labelColor=_labelColor - In the implementation block
@property (nonatomic,retain) PKColor * stripColor;                   //@synthesize stripColor=_stripColor - In the implementation block
@property (nonatomic,retain) NSData * iconHash;                      //@synthesize iconHash=_iconHash - In the implementation block
@property (nonatomic,retain) NSData * logoHash;                      //@synthesize logoHash=_logoHash - In the implementation block
@property (nonatomic,retain) NSData * thumbnailHash;                 //@synthesize thumbnailHash=_thumbnailHash - In the implementation block
@property (nonatomic,retain) NSData * backgroundHash;                //@synthesize backgroundHash=_backgroundHash - In the implementation block
@property (nonatomic,retain) NSData * stripHash;                     //@synthesize stripHash=_stripHash - In the implementation block
@property (assign,nonatomic) BOOL tallCode;                          //@synthesize tallCode=_tallCode - In the implementation block
@property (nonatomic,readonly) int layoutMode;                       //@synthesize layoutMode=_layoutMode - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)setBackgroundColor:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)backgroundColor;
-(void)encodeWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZoneRef)arg1 ;
-(id)foregroundColor;
-(void)setForegroundColor:(id)arg1 ;
-(int)passStyle;
-(BOOL)tallCode;
-(id)backgroundHash;
-(id)stripHash;
-(id)logoHash;
-(id)thumbnailHash;
-(id)iconHash;
-(void)setPassStyle:(int)arg1 ;
-(void)setStripColor:(id)arg1 ;
-(void)setTallCode:(BOOL)arg1 ;
-(void)setIconHash:(id)arg1 ;
-(void)setLogoHash:(id)arg1 ;
-(void)setThumbnailHash:(id)arg1 ;
-(void)setBackgroundHash:(id)arg1 ;
-(void)setStripHash:(id)arg1 ;
-(id)stripColor;
-(id)initWithPassDictionary:(id)arg1 passURL:(id)arg2 ;
-(BOOL)showsBackgroundImage;
-(BOOL)showsStripImage;
-(int)layoutMode;
-(id)labelColor;
-(void)setLabelColor:(id)arg1 ;
@end
