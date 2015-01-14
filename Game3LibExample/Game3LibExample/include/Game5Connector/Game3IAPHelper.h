//
//  RageIAPHelper.h
//  test
//
//  Created by ssg on 4/11/14.
//  Copyright (c) 2014 SSGroup. All rights reserved.
//

#import "IAPHelper.h"

@interface Game3IAPHelper : IAPHelper


+ (Game3IAPHelper *)sharedInstance:(NSSet *)productIdentifiers;

@end
