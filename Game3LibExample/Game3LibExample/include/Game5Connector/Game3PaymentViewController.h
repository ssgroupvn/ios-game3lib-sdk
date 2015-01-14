//
//  Game5PaymentViewController.h
//  Game5Connector
//
//  Created by ssg on 12/13/13.
//  Copyright (c) 2013 SSGroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "G3AUtils.h"
#import "Game5UserData.h"

@interface Game5PaymentViewController : UIViewController<UIWebViewDelegate>
{
    UIWebView *webview;
    UIViewController *parentVC;
}

@property (nonatomic, strong) UIViewController *parentVC;

- (void)setAmount:(int)amount withURL:(NSString *)url withExt:(NSString *)ext;
@end
