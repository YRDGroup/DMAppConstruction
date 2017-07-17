//
//  DMMacroDefinition.h
//  DMMacroDefinitionDemo
//
//  Created by 李二狗 on 2017/7/5.
//  Copyright © 2017年 YRHY Science and Technology (Beijing) Co., Ltd. All rights reserved.
//

#ifndef DMMacroDefinition_h
#define DMMacroDefinition_h

//NSLog宏定义
#ifndef __OPTIMIZE__
#define NSLog(...) NSLog(__VA_ARGS__)
#else
#define NSLog(...) {}
#endif

//屏幕宽度
#define kScreenWidth  [[UIScreen mainScreen] bounds].size.width
//屏幕高度
#define kScreenHeight [[UIScreen mainScreen] bounds].size.height

//1像素的高度，多用于cell的底部分割线
#define kFloatSortaPixel   1.0/[UIScreen mainScreen].scale

//获取图片资源
#define kDMGetImage(imageName) [UIImage imageNamed:[NSString stringWithFormat:@"%@",imageName]]

//弱引用，使用weakSelf调用
#define __DMWeakSelf(type)  __weak typeof(type) weak##type = type;
#define __DMStrongSelf(type)  __strong typeof(type) type = weak##type;

//判断当前的iPhone设备/系统版本
//判断是否为iPhone
#define IS_IPHONE (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPhone)

//判断是否为iPad
#define IS_IPAD (UI_USER_INTERFACE_IDIOM() == UIUserInterfaceIdiomPad)

//判断是否为ipod
#define IS_IPOD ([[[UIDevice currentDevice] model] isEqualToString:@"iPod touch"])

//是否是 iPhone4 尺寸的手机
#define IS_IPHONE4 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 960), [[UIScreen mainScreen] currentMode].size) : NO)

//是否是 iPhone5 尺寸的手机
#define IS_IPHONE5 ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? CGSizeEqualToSize(CGSizeMake(640, 1136), [[UIScreen mainScreen] currentMode].size) : NO)

//是否是 iPhone6 尺寸的手机
#define IS_IPHONE6  ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(750, 1334), [[UIScreen mainScreen] currentMode].size)) : NO)

//是否是 iPhone6P 尺寸的手机
#define IS_IPHONE6P ([UIScreen instancesRespondToSelector:@selector(currentMode)] ? (CGSizeEqualToSize(CGSizeMake(1125, 2001), [[UIScreen mainScreen] currentMode].size) || CGSizeEqualToSize(CGSizeMake(1242, 2208), [[UIScreen mainScreen] currentMode].size)) : NO)

//获取系统版本
//获取当前系统版本
#define IOS_SYSTEM_VERSION [[[UIDevice currentDevice] systemVersion] floatValue]
#define IOS_SYSTEM_STRING [[UIDevice currentDevice] systemVersion]

//判断 iOS 8 或更高的系统版本
#define IS_iOS8_OR_LATER (([[[UIDevice currentDevice] systemVersion] floatValue] >=8.0)? (YES):(NO))
//判断 iOS 9 或更高的系统版本
#define IS_iOS9_OR_LATER (([[[UIDevice currentDevice] systemVersion] floatValue] >=9.0)? (YES):(NO))
//判断 iOS 10 或更高的系统版本
#define IS_iOS10_OR_LATER (([[[UIDevice currentDevice] systemVersion] floatValue] >=10.0)? (YES):(NO))


#endif /* DMMacroDefinition_h */
