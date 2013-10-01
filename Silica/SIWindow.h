//
//  MyWindow.h
//  Zephyros
//
//  Created by Steven Degutis on 2/28/13.
//  Copyright (c) 2013 Steven Degutis. All rights reserved.
//

#import "SIAccessibilityElement.h"

@class SIApplication;

@interface SIWindow : SIAccessibilityElement

// getting windows

+ (NSArray*) allWindows;
+ (NSArray*) visibleWindows;
+ (SIWindow*) focusedWindow;
- (NSArray*) otherWindowsOnSameScreen;
- (NSArray*) otherWindowsOnAllScreens;


// window position & size

- (CGRect) frame;
- (CGPoint) topLeft;
- (CGSize) size;

- (void) setFrame:(CGRect)frame;
- (void) setTopLeft:(CGPoint)thePoint;
- (void) setSize:(CGSize)theSize;


- (void) maximize;
- (void) minimize;
- (void) unMinimize;


// other

- (NSScreen*) screen;
- (SIApplication*) app;

- (BOOL) isNormalWindow;

// focus

- (BOOL) focusWindow;

- (void) focusWindowLeft;
- (void) focusWindowRight;
- (void) focusWindowUp;
- (void) focusWindowDown;

- (NSArray*) windowsToWest;
- (NSArray*) windowsToEast;
- (NSArray*) windowsToNorth;
- (NSArray*) windowsToSouth;


// other window properties

- (NSString*) title;
- (BOOL) isWindowMinimized;

@end
