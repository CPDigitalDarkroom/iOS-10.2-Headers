//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SBSOSTriggerObserverDelegate-Protocol.h"
#import "UIGestureRecognizerDelegate-Protocol.h"

@class NSSet, NSString, SBApplication, SBButtonDownGestureRecognizer, SBHomeHardwareButton, SBLockHardwareButtonActions, SBLongPressGestureRecognizer, SBPressSequenceAWDLogger, SBSOSTriggerObserver, SBTapGestureRecognizer, UIGestureRecognizer;

@interface SBLockHardwareButton : NSObject <UIGestureRecognizerDelegate, SBSOSTriggerObserverDelegate>
{
    SBApplication *_lastLockButtonEventRecipient;
    unsigned long long _aggdStartTime;
    SBLockHardwareButtonActions *_buttonActions;
    NSSet *_gestureRecognizers;
    SBButtonDownGestureRecognizer *_buttonDownGestureRecognizer;
    SBTapGestureRecognizer *_singlePressGestureRecognizer;
    SBLongPressGestureRecognizer *_longPressGestureRecognizer;
    SBPressSequenceAWDLogger *_lockPressSequenceLogger;
    SBSOSTriggerObserver *_sosTriggerObserver;
    SBLongPressGestureRecognizer *_sosGestureRecognizer;
    SBLongPressGestureRecognizer *_loggingGestureRecognizer;
    UIGestureRecognizer *_screenshotGestureRecognizer;
    SBHomeHardwareButton *_homeHardwareButton;
}

@property(nonatomic) __weak SBHomeHardwareButton *homeHardwareButton; // @synthesize homeHardwareButton=_homeHardwareButton;
@property(nonatomic) __weak UIGestureRecognizer *screenshotGestureRecognizer; // @synthesize screenshotGestureRecognizer=_screenshotGestureRecognizer;
@property(retain, nonatomic) SBLongPressGestureRecognizer *loggingGestureRecognizer; // @synthesize loggingGestureRecognizer=_loggingGestureRecognizer;
@property(retain, nonatomic) SBLongPressGestureRecognizer *sosGestureRecognizer; // @synthesize sosGestureRecognizer=_sosGestureRecognizer;
@property(retain, nonatomic) SBSOSTriggerObserver *sosTriggerObserver; // @synthesize sosTriggerObserver=_sosTriggerObserver;
@property(retain, nonatomic) SBPressSequenceAWDLogger *lockPressSequenceLogger; // @synthesize lockPressSequenceLogger=_lockPressSequenceLogger;
@property(retain, nonatomic) SBLongPressGestureRecognizer *longPressGestureRecognizer; // @synthesize longPressGestureRecognizer=_longPressGestureRecognizer;
@property(retain, nonatomic) SBTapGestureRecognizer *singlePressGestureRecognizer; // @synthesize singlePressGestureRecognizer=_singlePressGestureRecognizer;
@property(retain, nonatomic) SBButtonDownGestureRecognizer *buttonDownGestureRecognizer; // @synthesize buttonDownGestureRecognizer=_buttonDownGestureRecognizer;
@property(retain, nonatomic) NSSet *gestureRecognizers; // @synthesize gestureRecognizers=_gestureRecognizers;
@property(retain, nonatomic) SBLockHardwareButtonActions *buttonActions; // @synthesize buttonActions=_buttonActions;
- (void).cxx_destruct;
- (void)_noteAXHomeClickSpeedChanged;
- (void)_reportAggdLoggingForButtonEventIsDownEvent:(_Bool)arg1;
- (double)_timestampOnGestureRecognizer:(id)arg1;
- (void)sosTriggerDidBecomeInactive:(id)arg1;
- (void)sosTriggerDidBecomeActive:(id)arg1;
- (void)sosDidTrigger:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_shouldHandleVolumeAndPowerButtonPriorities;
- (void)_sendButtonUpEventToAppForRecognizer:(id)arg1;
- (_Bool)_tryToSendButtonDownEventsToAppForRecognizer:(id)arg1;
- (void)cancelLongPress;
- (void)sosGesture:(id)arg1;
- (void)loggingGesture:(id)arg1;
- (void)longPress:(id)arg1;
- (void)singlePress:(id)arg1;
- (void)buttonDown:(id)arg1;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)reverseFadeOutIfNeeded;
@property(readonly, nonatomic) _Bool isButtonDown;
- (void)screenshotRecognizerDidRecognize:(id)arg1;
- (void)_createGestureRecognizers;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2 buttonActions:(id)arg3 createGestures:(_Bool)arg4;
- (id)initWithScreenshotGestureRecognizer:(id)arg1 homeHardwareButton:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
