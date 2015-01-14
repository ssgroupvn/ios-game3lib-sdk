//
//  ApplePaymentView.h
//  Game5Connector
//
//  Created by ssg on 4/19/14.
//  Copyright (c) 2014 SSGroup. All rights reserved.
//

#import <UIKit/UIKit.h>
@protocol ApplePaymentViewDelegate;
@interface ApplePaymentView : UIView <UITableViewDataSource, UITableViewDelegate>

@property(nonatomic, weak) id<ApplePaymentViewDelegate> delegate;
@property (copy, nonatomic) void(^handlerBlock)(NSInteger anIndex);

-(id)initWithTiTle:(NSString *)aTitle options:(NSArray *)aOptions;
-(id)initWithTitle:(NSString *)aTitle
             options:(NSArray *)aOptions
             handler:(void (^)(NSInteger))aHandlerBlock;

- (void)showInView:(UIView *)aView animated:(BOOL)animated;
@end

@protocol ApplePaymentViewDelegate <NSObject>
- (void)applePaymentView:(ApplePaymentView *)applePaymentView didSelectedIndex:(NSInteger)anIndex;
@optional
- (void)applePaymentViewDidCancel;
@end