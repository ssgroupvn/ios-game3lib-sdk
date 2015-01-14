//
//  G3ARegisterView.h
//  Game5Connector
//
//  Created by ssg on 8/11/14.
//  Copyright (c) 2014 SSGroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "LeveyPopListView.h"

@interface G3ARegisterView : UIView <UITextFieldDelegate, UIAlertViewDelegate>
{
    
}

@property (nonatomic, weak) id<LeveyPopListViewDelegate> delegate;

@end
