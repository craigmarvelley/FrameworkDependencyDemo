//
//  ViewController.h
//  FrameworkDependencyDemo
//
//  Created by Craig Marvelley on 07/12/2016.
//  Copyright © 2016 Bipsync Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <SharedFramework/SharedClass.h>

@interface ViewController : UIViewController

@property (strong, nonatomic) SharedClass *sharedClass;

@end

