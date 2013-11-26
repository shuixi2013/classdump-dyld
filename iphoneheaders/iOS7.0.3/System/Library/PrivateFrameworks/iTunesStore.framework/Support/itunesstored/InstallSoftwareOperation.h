/*
* This header is generated by strong_classdump 0.1
* on Wednesday, November 27, 2013 at 12:09:10 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iTunesStore.framework/Support/itunesstored
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <iTunesStore/ISOperation.h>

@class SoftwareProperties;

@interface InstallSoftwareOperation : ISOperation {

	SoftwareProperties* _softwareProperties;

}

@property (readonly) SoftwareProperties * softwareProperties; 
-(BOOL)_installPackage:(id*)arg1 ;
-(id)_newInstallationOptions;
-(id)initWithSoftwareProperties:(id)arg1 ;
-(id)softwareProperties;
-(void)dealloc;
-(void)run;
@end
