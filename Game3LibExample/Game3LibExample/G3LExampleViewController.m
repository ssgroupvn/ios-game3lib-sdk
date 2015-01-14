//
//  G3LExampleViewController.m
//  Game3LibExample
//
//  Created by ssg on 9/4/14.
//  Copyright (c) 2014 SSGroup. All rights reserved.
//

#import "G3LExampleViewController.h"

@interface G3LExampleViewController ()

@end

@implementation G3LExampleViewController

NSString *appID = @"appID provided by us"; //Pass AppID provided by us to this variable
NSString *appKey = @"appKey provided by us";//Pass AppKey provided by us to this
NSString *gCLientId = @"687920985343-hd51s75964sq4v6cddbu5269217f8m5p.apps.googleusercontent.com"; // Google ClientID provided by us
NSString *gameID = @"1";
- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(IBAction)showLoginView:(id)sender
{
    if(g3l == nil)
    {
        g3l = [[Game3Lib alloc] initWithAppId:appID AppKey:appKey GameId:gameID gClientId:gCLientId];
    }
    [g3l showLogin];
}

-(IBAction)authen:(id)sender
{
    if(g3l == nil)
    {
        g3l = [[Game3Lib alloc] initWithAppId:appID AppKey:appKey GameId:gameID gClientId:gCLientId];
    }
    [g3l initAuthenticate:self withObserver:self onSuccess:@selector(success:)];
    
}

-(IBAction)exchange:(id)sender
{
    if(g3l == nil)
    {
        g3l = [[Game3Lib alloc] initWithAppId:appID AppKey:appKey GameId:gameID gClientId:gCLientId];
    }
    
    [g3l ssrollExchange:100 url:@"http://www.google.com" Ext:@"" parent:self withObserver:self onSuccess:@selector(exchangeSuccess:) onFailed:@selector(exchangeFail:)];
}

-(IBAction)Trade:(id)sender
{
    if(g3l == nil)
    {
        g3l = [[Game3Lib alloc] initWithAppId:appID AppKey:appKey GameId:gameID gClientId:gCLientId];
        
    }
    
    [g3l showPayment:self withObserver:self onSuccess:@selector(successTrade:) withURL:@"xxx" Ext:@"xxx" Amount:1000];
}

-(IBAction)logout:(id)sender
{
    if(g3l == nil)
    {
        g3l = [[Game3Lib alloc] initWithAppId:appID AppKey:appKey GameId:gameID gClientId:gCLientId];
        
    }
    
    
    [g3l logout:self withObserver:self onSuccess:@selector(logoutSuccess:) onFailed:@selector(logoutFail:)];
}

-(IBAction)getBalance:(id)sender
{
    if(g3l == nil)
    {
        g3l = [[Game3Lib alloc] initWithAppId:appID AppKey:appKey GameId:gameID gClientId:gCLientId];
        
    }
    
    
    [g3l getBalance:@"3475480" Parent:self withObserver:self onSuccess:@selector(getBalanceSuccess:) onFailed:@selector(getBalanceFail:)];
}

-(IBAction)showBanner:(id)sender
{
    if(g3l == nil)
    {
        g3l = [[Game3Lib alloc] initWithAppId:appID AppKey:appKey GameId:gameID gClientId:gCLientId];
        
    }
    
    
    [g3l showBanner];
}

-(void)success:(NSNotification *)notification
{
    NSLog(@"Success");
    NSLog(@"%@", notification.userInfo);
}

-(void)logoutSuccess:(NSNotification *)notification
{
    NSLog(@"logoutSuccess");
    NSLog(@"%@", notification.userInfo);
}

-(void)logoutFail:(NSNotification *)notification
{
    NSLog(@"logoutFail");
    NSLog(@"%@", notification.userInfo);
}

-(void)successTrade:(NSNotification *)notification
{
    NSLog(@"Success Trade");
    NSLog(@"%@", notification.userInfo);
}

-(void)exchangeSuccess:(NSNotification *)notification
{
    NSLog(@"Exchange Success");
    NSLog(@"%@", notification.userInfo);
}

-(void)exchangeFail:(NSNotification *)notification
{
    NSLog(@"Exchange Failed");
    NSLog(@"%@", notification.userInfo);
}

-(void)getBalanceSuccess:(NSNotification *)notification
{
    NSLog(@"getBalance Success");
    NSLog(@"%@", notification.userInfo);
}

-(void)getBalanceFail:(NSNotification *)notification
{
    NSLog(@"getBalance Failed");
    NSLog(@"%@", notification.userInfo);
}
@end
