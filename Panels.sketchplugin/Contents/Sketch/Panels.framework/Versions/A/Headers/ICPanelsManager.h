//
//  PanelsManager.h
//  Panels
//
//  Created by Tomas Hanacek on 05/12/15.
//  Copyright © 2015 Tomas Hanacek. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Cocoa/Cocoa.h>

@class ICWebViewController;
@class ICPanel;
@class ICPanelsDocumentManager;
@class ICPanelsBarView;

@interface ICPanelsManager : NSObject

@property (nonatomic, retain) NSDictionary *commandArguments;
@property (nonatomic, retain) NSDictionary *metadata;
@property (nonatomic, readonly) NSDocument *currentDocument;

+ (ICPanelsManager *)sharedManager;

- (void)callback:(id)obj forIdentifier:(NSString *)identifier;
- (void)callback:(id)obj forIdentifier:(NSString *)identifier commandIdentifier:(NSString *)commandIdentifier;
- (void)broadcast:(NSDictionary *)arguments forIdentifier:(NSString *)identifier commandIdentifier:(NSString *)commandIdentifier;
- (void)registerCallbackID:(NSString *)callbackID webViewController:(ICWebViewController *)webViewController;
- (void)callWithCallbackID:(NSString *)callbackID arguments:(NSDictionary *)arguments;
- (void)runCommandWithIdentifier:(NSString *)commandIdentifier forPanelIdentifier:(NSString *)panelIdentifier withArguments:(NSDictionary *)arguments;
- (ICPanel *)panelForIdentifier:(NSString *)identifier;
- (NSString *)settingsPath;
- (ICPanelsDocumentManager *)getManagerFromDocument:(NSDocument *)document;
- (ICPanelsDocumentManager *)getCurrentManager;

@end
