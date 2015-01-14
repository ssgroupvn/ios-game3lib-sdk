//
//  IAPHelper.h
//  test
//
//  Created by ssg on 4/11/14.
//  Copyright (c) 2014 SSGroup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <StoreKit/StoreKit.h>
#import "Game3Lib.h"
#import "Game5UserData.h"

typedef void (^RequestProductsCompletionHandler)(BOOL success, NSArray * products);

@interface IAPHelper : NSObject <SKPaymentTransactionObserver>

- (id)initWithProductIdentifiers:(NSSet *)productIdentifiers;
- (void)requestProductsWithCompletionHandler:(RequestProductsCompletionHandler)completionHandler;
- (void)purchaseItemWithProductID:(NSString *)productID;

@end
