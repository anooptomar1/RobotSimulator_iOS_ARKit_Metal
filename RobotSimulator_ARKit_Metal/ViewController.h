//
//  ViewController.h
//  RobotSimulator_ARKit_Metal
//
//  Created by Andrew Holbrook on 12/9/17.
//  Copyright © 2017 Andrew Holbrook. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <ARKit/ARKit.h>
#import "SceneRenderer.h"

@interface ViewController : UIViewController <ARSessionDelegate, UIGestureRecognizerDelegate>

- (void)update;

@end

