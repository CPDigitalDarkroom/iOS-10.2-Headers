//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SpringBoardUI/SBAlertItem.h>

@protocol SBThermalWarningAlertItemDelegate;

@interface SBThermalWarningAlertItem : SBAlertItem
{
    id <SBThermalWarningAlertItemDelegate> _delegate;
    int _actionTaken;
}

- (void).cxx_destruct;
- (_Bool)unlocksScreen;
- (_Bool)undimsScreen;
- (void)_playPresentationSound;
- (void)didDeactivateForReason:(int)arg1;
- (void)willActivate;
- (void)configure:(_Bool)arg1 requirePasscodeForActions:(_Bool)arg2;
- (void)dismissAlertCooldown:(int)arg1;
- (void)_autoCoolDown;
- (void)_tryToSendAction:(int)arg1;
@property(readonly, nonatomic, getter=isWaitingForResponse) _Bool waitingForResponse;
- (id)initWithDelegate:(id)arg1;

@end
