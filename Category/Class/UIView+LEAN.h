//
//  UIView+LEAN.h
//  category
//
//  Created by 陈林 on 2017/6/7.
//  Copyright © 2017年 陈林. All rights reserved.
//

// 用户简化坐标写法



#import <UIKit/UIKit.h>

@interface UIView (LEAN)

// 控件左侧距
@property (nonatomic,assign) CGFloat left;

// 控件顶部距
@property (nonatomic,assign) CGFloat top;

// 控件右侧距
@property (nonatomic,assign) CGFloat right;

// 底侧距
@property (nonatomic, assign) CGFloat bottom;



//宽度
@property (nonatomic,assign) CGFloat width;

//高度
@property (nonatomic,assign) CGFloat height;


//中心横
@property (nonatomic,assign) CGFloat centerX;

//中心纵
@property (nonatomic,assign) CGFloat centerY;

//起始点
@property (nonatomic) CGPoint origin;

//尺寸
@property (nonatomic) CGSize size;

- (UIViewController *)viewController;

@end


@interface UIView (NTESPresent)

//弹出一个类似present效果的窗口
- (void)presentView:(UIView*)view animated:(BOOL)animated complete:(void(^)()) complete;

//获取一个view上正在被present的view
- (UIView *)presentedView;

- (void)dismissPresentedView:(BOOL)animated complete:(void(^)()) complete;

//这个是被present的窗口本身的方法
//如果自己是被present出来的，消失掉
- (void)hideSelf:(BOOL)animated complete:(void(^)()) complete;

@end
