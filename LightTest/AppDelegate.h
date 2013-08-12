// -------------------------------------------------------------------------------------------------
//  AppDelegate.h
//  LightTest
//
//  Created by Capsaic (SmashRiot.com | @SmashRiot) on 2013/08/12.
// -------------------------------------------------------------------------------------------------

#import <UIKit/UIKit.h>
#import "cocos2d.h"

@interface AppController : NSObject <UIApplicationDelegate, CCDirectorDelegate>
{
	UIWindow *window_;
	UINavigationController *navController_;

	CCDirectorIOS	*director_;							// weak ref
}

@property (nonatomic, retain) UIWindow *window;
@property (readonly) UINavigationController *navController;
@property (readonly) CCDirectorIOS *director;

@end
