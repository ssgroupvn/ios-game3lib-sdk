//
//  Game5Connector.h
//  Game5Connector
//
//  Created by ssg on 12/12/13.
//  Copyright (c) 2013 SSGroup. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Game3AppViewController.h"
#import "Game3LoginViewController.h"
#import "Game3PaymentViewController.h"
#import "Game5UserData.h"
#import "LeveyPopListView.h"
#import "LeveyPopListViewCell.h"
#import "ApplePaymentView.h"
#import "ApplePaymentCell.h"

@interface Game3Lib : NSObject <NSURLConnectionDataDelegate>
{
    Game5PaymentViewController *game5AppPaymentVC;
    Game5LoginViewController *game5AppLoginVC;
    Game5AppViewController *game5AppVC;
    UIViewController *parentVC;
    id currentObserver;
    NSString *currentRequest;
    SEL *selSuccess;
    SEL *selFail;
    int mAmount;
    NSString *mUrl;
    NSString *mExt;
    G3AUtils *util;
}

@property (nonatomic, strong) Game5LoginViewController *game5AppLoginVC;
@property (nonatomic, strong) Game5AppViewController *game5AppVC;
@property (nonatomic, strong) Game5PaymentViewController *game5AppPaymentVC;

-(NSString *)clientID;
-(Game3Lib *)initWithAppId:(NSString *)appId AppKey:(NSString *)appKey GameId:(NSString *)gameId gClientId:(NSString *)googleClientId;

-(void)initAuthenticate:(id)parent withObserver:(id)observer onSuccess:(SEL)selector;
-(void)logout:(id)parent withObserver:(id)observer onSuccess:(SEL)onSuccess onFailed:(SEL)onFailed;
-(void)showPayment:(id)parent withObserver:(id)observer onSuccess:(SEL)onSuccess withURL:(NSString *)url Ext:(NSString *)ext Amount:(int)amount;
-(void)ssrollExchange:(int)amount url:(NSString *)url Ext:(NSString*)ext parent:(id)parent withObserver:(id)observer onSuccess:(SEL)onSuccess onFailed:(SEL)onFailed;
-(void)getBalance:(NSString *)userId Parent:(id)parent withObserver:(id)observer onSuccess:(SEL)onSuccess onFailed:(SEL)onFailed;
-(void)showBanner;
-(void)showLogin;
@end