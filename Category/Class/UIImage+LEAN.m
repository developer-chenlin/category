//
//  UIImage+LEAN.m
//  category
//
//  Created by 陈林 on 2017/6/7.
//  Copyright © 2017年 陈林. All rights reserved.
//

#import "UIImage+LEAN.h"

@implementation UIImage (LEAN)

+ (UIImage *)fetchImage:(NSString *)imageNameOrPath{
    UIImage *image = [UIImage imageNamed:imageNameOrPath];
    if (!image) {
        image = [UIImage imageWithContentsOfFile:imageNameOrPath];
    }
    return image;
}

@end
