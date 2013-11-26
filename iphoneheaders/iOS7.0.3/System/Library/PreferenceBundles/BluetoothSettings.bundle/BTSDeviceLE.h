/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:55:30 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PreferenceBundles/BluetoothSettings.bundle/BluetoothSettings
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/

#import <BluetoothSettings/BTSDevice.h>

@class CBPeripheral, CBCentralManager;

@interface BTSDeviceLE : BTSDevice {

	CBPeripheral* _peripheral;
	CBCentralManager* _centralManager;

}
+(id)deviceWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(void)dealloc;
-(id)name;
-(id)identifier;
-(BOOL)connect;
-(void)disconnect;
-(id)classicDevice;
-(id)initWithPeripheral:(id)arg1 manager:(id)arg2 ;
-(void)unpair;
-(BOOL)paired;
-(BOOL)connected;
@end
