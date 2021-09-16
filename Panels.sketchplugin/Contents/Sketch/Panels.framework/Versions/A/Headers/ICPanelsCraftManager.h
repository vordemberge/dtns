//
//  ICCraftManager.h
//  Sync
//
//  Created by Peter Gulyas on 2017-10-16.
//  Copyright © 2017 InVision. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@interface ICPanelsCraftManager : NSObject

@property (nonatomic, readonly) BOOL isInstalled;
@property (nonatomic, readonly) BOOL isRunning;
@property (nonatomic, readonly) NSURL* url;
@property (nonatomic, readonly) NSString* version;
@property (nonatomic, readonly) NSNumber* buildNumber;
@property (nonatomic, readonly) NSDictionary* serverJSON;
@property (nonatomic, strong) NSURL* featureFlagURL;

+ (instancetype)sharedInstance;

- (void) openHomePage;
- (void) downloadZip;
- (void) checkForUpdates;

- (BOOL) ensureAppIsRunning;

- (BOOL) requireFeatureFlag:(NSString *)featureFlag;
- (BOOL) boolVariation:(NSString*)featureFlag fallback:(BOOL)fallback;

@end
