//
//  ShareViewController.h
//  ShareExtension
//
//  Created by Craig Marvelley on 07/12/2016.
//  Copyright © 2016 Bipsync Ltd. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Social/Social.h>
#import <SharedFramework/SharedFramework.h>

@interface ShareViewController : SLComposeServiceViewController

@property (strong, nonatomic) SharedClass *sharedClass;

@end
