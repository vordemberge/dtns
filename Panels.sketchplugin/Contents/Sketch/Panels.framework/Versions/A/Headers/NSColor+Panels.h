//
//  NSColor+Panels.h
//  Panels
//
//  Created by Joe Rhodes on 9/28/18.
//  Copyright © 2018 InVision. All rights reserved.
//

#import <Cocoa/Cocoa.h>

NS_ASSUME_NONNULL_BEGIN

@interface NSColor (Panels)

@property (class, nonatomic, readonly) NSColor *panelBackgroundColor;
@property (class, nonatomic, readonly) NSColor *panelSeparatorColor;
@property (class, nonatomic, readonly) NSColor *labsBackgroundColor;
@property (class, nonatomic, readonly) NSColor *tabSelectedBackgroundColor;

@property (class, nonatomic, readonly) NSColor *panelHeaderLabelColor;
@property (class, nonatomic, readonly) NSColor *panelHeaderBackgroundColor;
@property (class, nonatomic, readonly) NSColor *panelHeaderDisabledBackgroundColor;

@property (class, nonatomic, readonly) NSColor *panelTabBarButtonColor;
@property (class, nonatomic, readonly) NSColor *panelTabBarButtonSelectedColor;
@property (class, nonatomic, readonly) NSColor *panelTabBarButtonBorderColor;

@property (class, nonatomic, readonly) NSColor *panelButtonColor;
@property (class, nonatomic, readonly) NSColor *panelButtonLabelColor;
@property (class, nonatomic, readonly) NSColor *panelButtonSelectedLabelColor;

@property (class, nonatomic, readonly) NSColor *panelTextFieldBackgroundColor;
@property (class, nonatomic, readonly) NSColor *panelTextFieldBorderColor;

@property (class, nonatomic, readonly) NSColor *panelTabViewIconSelectedHighContrastColor;

@end


@interface NSApplication (Panels)

@property (strong, nonatomic, readonly) NSAppearance *panels_effectiveAppearance;

@end

NS_ASSUME_NONNULL_END
