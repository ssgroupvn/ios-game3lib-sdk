//
//  G3ABannerView.h
//  DEMO
//
//  Created by ssg on 6/26/14.
//  Copyright (c) 2014 hexc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface G3ABannerView : UIView <UIWebViewDelegate, UIGestureRecognizerDelegate>
{
    
}

- (id)initWithFrame:(CGRect)frame withBanner:(NSString *)banner willOpenURL:(NSString *)url;
@end