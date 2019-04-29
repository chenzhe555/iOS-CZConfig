//
//  CZConfigTool.h
//  CZConfig
//
//  Created by yunshan on 2019/4/12.
//  Copyright © 2019 ChenZhe. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <UIKit/UIApplication.h>
#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

/**
 @brief CZConfig工具类
 */
@interface CZConfigTool : NSObject

/**
 @brief 获取顶部Bar高度
 */
+(CGFloat)getTopBarHeight;

/**
 @brief 获取Tabbar高度
 */
+(CGFloat)getTabbarHeight;

/**
 @brief 获取安全区域高度
 */
+(CGFloat)getSafeAreaHeight;

+(void)test;
@end

NS_ASSUME_NONNULL_END
