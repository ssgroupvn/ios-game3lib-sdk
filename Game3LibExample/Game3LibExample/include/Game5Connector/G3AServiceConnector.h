//
//  G3AServiceConnector.h
//  Game3App
//
//  Created by ssg on 11/28/13.
//  Copyright (c) 2013 Tran Hue Khoi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface G3AServiceConnector : NSObject <NSURLConnectionDelegate,NSURLConnectionDataDelegate>

-(void)callService:(NSString *)serviceURL withParams:(NSDictionary *)params getDatacallback:(void(^)(NSDictionary *))callback;
@end
