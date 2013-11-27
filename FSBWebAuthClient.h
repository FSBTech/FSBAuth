//
//  FSBEmbeddedAuthClient.h
//  FSBAuth
//
//  Created by emile on 22/11/2013.
//  Copyright (c) 2013 FSB Technology. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "FSBWebAuthDelegate.h"

@interface FSBWebAuthClient : NSObject<FSBWebAuthDelegate>

+(FSBWebAuthClient *) shared;

-(void)login:(void (^)())completion;
-(void)logout:(void (^)())completion;
-(NSString *)token;

@end
