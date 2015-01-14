//
//  G3AFloatingMenuView.h
//  DEMO
//
//  Created by ssg on 6/16/14.
//  Copyright (c) 2014 hexc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface G3AFloatingMenuView : UIView
{
    
}

- (id)initWithFrame:(CGRect)frame withButtons:(NSMutableArray *)buttonArray floatingButtonWidth:(CGFloat)buttonWidth;
- (CGRect)showMenuAtX:(float)p_X andY:(float)p_Y direction:(int)dir mask:(CAShapeLayer *)maskLayer;
- (void)hideMenuAtX:(float) p_X andY:(float) p_Y direction:(int)dir afterCompleteAnimFrame:(CGRect)frame maskLayer:(CAShapeLayer *)maskLayer;
- (void)hideThenRemoveMenuAtX:(float) p_X andY:(float) p_Y direction:(int)dir afterCompleteAnimFrame:(CGRect)frame maskLayer:(CAShapeLayer *)maskLayer;
@end
