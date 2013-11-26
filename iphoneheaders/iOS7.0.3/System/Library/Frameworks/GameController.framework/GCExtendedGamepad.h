/*
* This header is generated by strong_classdump 0.1
* on Tuesday, November 26, 2013 at 11:54:05 PM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
* strong_classdump is Copyright © 2013 by Elias Limneos, licensed under GPLv3.
*/


#import <GameController/GameController-Structs.h>
@class GCController, GCControllerDirectionPad, GCControllerButtonInput;

@interface GCExtendedGamepad : NSObject

@property (readonly) GCController * controller; 
@property (copy) id valueChangedHandler; 
@property (readonly) GCControllerDirectionPad * dpad; 
@property (readonly) GCControllerButtonInput * buttonA; 
@property (readonly) GCControllerButtonInput * buttonB; 
@property (readonly) GCControllerButtonInput * buttonX; 
@property (readonly) GCControllerButtonInput * buttonY; 
@property (readonly) GCControllerDirectionPad * leftThumbstick; 
@property (readonly) GCControllerDirectionPad * rightThumbstick; 
@property (readonly) GCControllerButtonInput * leftShoulder; 
@property (readonly) GCControllerButtonInput * rightShoulder; 
@property (readonly) GCControllerButtonInput * leftTrigger; 
@property (readonly) GCControllerButtonInput * rightTrigger; 
+(BOOL)supportsUSBInterfaceProtocol:(unsigned char)arg1 ;
-(id)saveSnapshot;
-(/*^block*/ id)valueChangedHandler;
-(void)setValueChangedHandler:(/*^block*/ id)arg1 ;
-(id)buttonA;
-(id)buttonB;
-(id)buttonX;
-(id)buttonY;
-(id)dpad;
-(id)leftShoulder;
-(id)rightShoulder;
-(void)didChangeValueForElement:(id)arg1 ;
-(void)setButton:(id)arg1 value:(double)arg2 ;
-(id)initWithController:(id)arg1 ;
-(id)button0;
-(id)button1;
-(id)button3;
-(id)inputForElement:(IOHIDElementRef)arg1 ;
-(void)setDpad:(id)arg1 x:(double)arg2 y:(double)arg3 ;
-(void)setButton:(id)arg1 pressed:(BOOL)arg2 ;
-(id)leftThumbstick;
-(id)rightThumbstick;
-(id)leftTrigger;
-(id)rightTrigger;
-(id)controller;
-(id)button2;
@end
