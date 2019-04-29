//
//  CZConfig.h
//  CZConfig
//
//  Created by yunshan on 2019/4/12.
//  Copyright © 2019 ChenZhe. All rights reserved.
//

#ifndef CZConfig_h
#define CZConfig_h

#import <UIKit/UIKit.h>
#import "CZConfigTool.h"

#ifdef DEBUG
#define CZLog(format, ...) printf("[Time:%s]\n   Method:%s\n   Line:%d--> %s\n", __TIME__, __FUNCTION__, __LINE__, [[NSString stringWithFormat:format, ## __VA_ARGS__] UTF8String]);
#else
#define CZLog(format, ...)
#endif

/************************************* 实用小工具 ******************************************/
#define kUserDef [NSUserDefaults standardUserDefaults]
#define kNotification [NSNotificationCenter defaultCenter]
#define kColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:a]


/*************************************** 手机参数 *******************************************/
//屏幕宽高
#define SCREENW [UIScreen mainScreen].bounds.size.width
#define SCREENH [UIScreen mainScreen].bounds.size.height
#define kIS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)
//2G 3G 3GS 4 4S
#define kIS_iPhone_3_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)
//5 5S 5C SE
#define kIS_iPhone_4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)
//6 6S 7 8
#define kIS_iPhone_4_7 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size)) : NO)
//6Plus 6SPlus 7Plus 8Plus
#define kIS_iPhone_5_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)
//X XS
#define kIS_iPhone_5_8 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2436), [[UIScreen mainScreen] currentMode].size)) : NO)
//XR
#define kIS_iPhone_6_1 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(828, 1792), [[UIScreen mainScreen] currentMode].size)) : NO)
//XS Max
#define kIS_iPhone_6_5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1242, 2688), [[UIScreen mainScreen] currentMode].size)) : NO)

//版本判断
#define kiOS14_or_Later     [[[UIDevice currentDevice] systemVersion] floatValue] >= 14.0f
#define kiOS13_or_Later     [[[UIDevice currentDevice] systemVersion] floatValue] >= 13.0f
#define kiOS12_or_Later     [[[UIDevice currentDevice] systemVersion] floatValue] >= 12.0f
#define kiOS11_or_Later     [[[UIDevice currentDevice] systemVersion] floatValue] >= 11.0f
#define kiOS10_or_Later     [[[UIDevice currentDevice] systemVersion] floatValue] >= 10.0f
#define kiOS9_or_Later      [[[UIDevice currentDevice] systemVersion] floatValue] >= 9.0f
#define kiOS8_or_Later      [[[UIDevice currentDevice] systemVersion] floatValue] >= 8.0f
#define kiOS7_or_Later      [[[UIDevice currentDevice] systemVersion] floatValue] >= 7.0f
#define kiOS6_or_Later      [[[UIDevice currentDevice] systemVersion] floatValue] >= 6.0f
#define kiOSBetween(arg1,arg2) [[[UIDevice currentDevice] systemVersion] floatValue] >= (float)arg1 && [[[UIDevice currentDevice] systemVersion] floatValue] <= (float)arg2

//顶部导航栏总高度
#define kTopBarHeight [CZConfigTool getTopBarHeight]
//底部Tabbar总高度
#define kTabbarHeight [CZConfigTool getTabbarHeight]
//安全区域高度
#define kSafeAreaHeight [CZConfigTool getSafeAreaHeight]

/************************************* 代码块 ******************************************/
//弱引用代码块
#define CZWeak(obj) __weak typeof(obj) weak##obj = obj;

#endif /* CZConfig_h */
