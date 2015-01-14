//
//  G3AUtils.h
//  Game3App
//
//  Created by Tran Hue Khoi on 11/20/13.
//  Copyright (c) 2013 Tran Hue Khoi. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CommonCrypto/CommonDigest.h>
#import <UIKit/UIKit.h>

@interface G3AUtils : NSObject

extern NSString *domain;
extern NSString *domain_static;
extern NSString *agentID;
extern NSString *publickey;
extern NSString *secretkey;

+ (NSString *) md5:(NSString *) input;
+ (NSString *) encodebase64:(NSString *)inputStr;
-(void) showAlert:(NSString *)title withMessage:(NSString *)message withButton:(NSString *)btnText;
- (UIImage*)scaleImage:(UIImage*)image toSize:(CGSize)newSize;
@end
