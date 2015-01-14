//
//  testViewController.h
//  testLib
//
//  Created by ssg on 12/5/13.
//  Copyright (c) 2013 xXx. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "G3AUtils.h"
#import "G3AServiceConnector.h"

@interface Game5AppViewController : UIViewController <UITextFieldDelegate>
{
    CGFloat scaleFactor;
    UILabel *loginLbl;
    UILabel *mesgLbl;
    UITextField *textField;
    UITextField *textField2;
    UIButton *button;
    UIButton *buttonReg;
}

@end
