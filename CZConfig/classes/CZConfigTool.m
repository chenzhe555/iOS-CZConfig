//
//  CZConfigTool.m
//  CZConfig
//
//  Created by yunshan on 2019/4/12.
//  Copyright © 2019 ChenZhe. All rights reserved.
//

#import "CZConfigTool.h"

@implementation CZConfigTool

/**
 @brief 获取顶部Bar高度
 */
+(CGFloat)getTopBarHeight
{
    // 带有刘海的iPhone顶部高度为44
    return [UIApplication sharedApplication].statusBarFrame.size.height > 20 ? (44 + 44) : (20 + 44);
}

/**
 @brief 获取Tabbar高度
 */
+(CGFloat)getTabbarHeight
{
    return [self getSafeAreaHeight] + 49;
}

/**
 @brief 获取安全区域高度
 */
+(CGFloat)getSafeAreaHeight
{
    if (@available(iOS 11.0, *)) {
        return [UIApplication sharedApplication].delegate.window.safeAreaInsets.bottom;
    }
    return 0;
}

@end
