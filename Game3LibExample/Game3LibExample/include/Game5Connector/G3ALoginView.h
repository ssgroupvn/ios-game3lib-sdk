//
//  G3ALoginView.h
//  Game5Connector
//
//  Created by ssg on 8/8/14.
//  Copyright (c) 2014 SSGroup. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <FacebookSDK/FacebookSDK.h>
#import <GooglePlus/GooglePlus.h>
#import <GoogleOpenSource/GoogleOpenSource.h>
#import <GooglePlus/GooglePlus.h>
#import "LeveyPopListView.h"

@interface G3ALoginView : UIView <UITextFieldDelegate, FBLoginViewDelegate, GPPSignInDelegate>
{
    //[FBLoginView class];
    //[FBProfilePictureView class];
}

@property (nonatomic, weak) id<LeveyPopListViewDelegate> delegate;

@end

@class GPPSignInButton;

