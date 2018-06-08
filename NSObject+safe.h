//
//  NSObject+safe.h
//  CheLingWang
//
//  Created by mac on 2018/6/8.
//  Copyright © 2018年 meryin. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface NSObject (safe)
+ (void)swizzleSelector:(SEL)originalSelector withSwizzledSelector:(SEL)swizzledSelector;
@end
