//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Mar 24 2016 13:14:34).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FBApplicationUpdateScenesTransaction, FBScene, NSArray;

@protocol SBMainScreenApplicationSceneTransactionObserver <NSObject>
- (void)mainScreenApplicationSceneDidCommit:(FBScene *)arg1;
- (void)mainScreenApplicationSceneWillCommit:(FBScene *)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(FBApplicationUpdateScenesTransaction *)arg1;
- (void)mainScreenApplicationsDidCommitSceneUpdates:(NSArray *)arg1;
@end

