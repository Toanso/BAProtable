//
//  NSArray+Json.h
//  test
//
//  Created by stone on 14-9-26.
//  Copyright (c) 2014年 stone. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSArray (Json)

+ (id)arrayWithJsonString:(NSString*)string;

+ (id)arrayWithJsonData:(NSData *)data;

- (NSString *)toJsonString;

- (NSData *)toJsonData;

@end
