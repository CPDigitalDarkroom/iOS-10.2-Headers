//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBStatusBarStyleOverridesSettings : SBUISettings
{
    _Bool _exclusive;
    _Bool _showsWhenForeground;
    int _styleOverride;
}

+ (id)settingsControllerModule;
@property(nonatomic) _Bool showsWhenForeground; // @synthesize showsWhenForeground=_showsWhenForeground;
@property(nonatomic) _Bool exclusive; // @synthesize exclusive=_exclusive;
@property(nonatomic) int styleOverride; // @synthesize styleOverride=_styleOverride;
- (void)setDefaultValues;

@end
