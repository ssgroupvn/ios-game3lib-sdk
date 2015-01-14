//
//  G3LExampleViewController.h
//  Game3LibExample
//
//  Created by ssg on 9/4/14.
//  Copyright (c) 2014 SSGroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "include/Game5Connector/Game3Lib.h"

@interface G3LExampleViewController : UIViewController
{
    UIViewController *rootVC;
    Game5PaymentViewController *game5AppPaymentVC;
    Game3Lib *g3l;
}

-(IBAction)authen:(id)sender;
-(IBAction)exchange:(id)sender;
-(IBAction)Trade:(id)sender;
-(IBAction)logout:(id)sender;
-(IBAction)getBalance:(id)sender;
-(IBAction)showBanner:(id)sender;
-(IBAction)showLoginView:(id)sender;

@end
