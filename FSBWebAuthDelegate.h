//
//  FSBWebAuthDelegate.h
//  FSBAuth
//
//  Created by Emile on 25/11/2013.
//  Copyright (c) 2013 FSB Technology. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol FSBWebAuthDelegate <NSObject>

-(void)didRecieveTokenURL:(NSString *)url;

@end
