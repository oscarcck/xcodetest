//
//  xcodetestAppDelegate.h
//  xcodetest
//
//  Created by Cheuk Kwan Chan on 25/7/11.
//  Copyright 2011 Liricco. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface xcodetestAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
