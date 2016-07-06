//
//  AppDelegate.h
//  AudioRecorder
//
//  Created by Julius Nedzinskas on 7/6/16.
//  Copyright © 2016 Julius Nedzinskas. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;
@property (strong, nonatomic) NSDate* date;
// always save in ~/Documents/yyyymmddhhmmss
@property (readonly, nonatomic) NSString* path;

@end

