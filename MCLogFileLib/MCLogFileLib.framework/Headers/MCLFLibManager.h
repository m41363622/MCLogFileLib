//
//  MCLFLibManager.h
//  MCLogFileLib
//
//  Created by 孟晨 on 2019/2/16.
//  Copyright © 2019 孟晨. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MCLFLibManager : NSObject
/**
 log文件本地存储
 
 @param localStorage 是否开启本地存储
 */
+ (void)mcLogLocalStorage:(BOOL)localStorage;
@end

NS_ASSUME_NONNULL_END
