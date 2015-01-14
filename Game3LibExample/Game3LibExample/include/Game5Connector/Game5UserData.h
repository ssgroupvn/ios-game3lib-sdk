//
//  GameUserData.h
//  Game5Connector
//
//  Created by ssg on 12/13/13.
//  Copyright (c) 2013 SSGroup. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Game5UserData : NSObject

@property (nonatomic, strong) NSString *id;
@property (nonatomic, strong) NSString *token;
@property (nonatomic, strong) NSString *username;
@property (nonatomic, strong) NSString *productCode;
@property (nonatomic, strong) NSString *productKey;
@property (nonatomic, strong) NSString *clientID;
@property (nonatomic, strong) NSString *refID;
@property (nonatomic) bool hasChannelId;
@property (nonatomic, strong) NSMutableArray *params;
@property (nonatomic, strong) NSString *currentUrl;
@property (nonatomic, strong) NSString *currentExt;
@property (nonatomic) int currentAmount;
@property (nonatomic, strong) NSString *googleClientId;
@property (nonatomic, strong) NSString *gameId;
@property (nonatomic, strong) NSArray *linkArray;

+(Game5UserData *)getInstance;
@end

