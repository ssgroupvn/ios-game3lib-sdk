//
//  G3AFloatingMenuButtonData.h
//  DEMO
//
//  Created by ssg on 6/16/14.
//  Copyright (c) 2014 hexc. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface G3AFloatingMenuButtonData : NSObject
{
    UIImage *imgButtonBackground;
    NSString *strButtonName;
    CGFloat imageWidth;
    CGFloat imageHeight;
}

@property (strong, nonatomic) UIImage *imgButtonBackground;
@property (strong, nonatomic) NSString *strButtonName;
@property (nonatomic) CGFloat imageWidth;
@property (nonatomic) CGFloat imageHeight;
@end
