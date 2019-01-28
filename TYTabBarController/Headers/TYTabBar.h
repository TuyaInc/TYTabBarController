//
//  TYTabBar.h
//  TYModuleTabbar
//
//  Created by TuyaInc on 2018/8/23.
//

#import <UIKit/UIKit.h>

@interface TYTabBar : UITabBar

@property (nonatomic, strong) UIImage *tabSeparatorImage;

@property (nonatomic, strong) UIColor *tabBackgroundColor;
@property (nonatomic, strong) UIImage *tabBackgroundImage;

/**
 用来控制item的横向分布
 只有当count与item属相相同时才生效
 形如
 [0.25, 0.5, 0.75];
 */
@property (nonatomic, strong) NSArray<NSNumber *> *itemLayout;

- (void)removeAllCustomButton;
- (void)removeAllCustomBageView;

- (void)refreshCustomBtnState;

- (UIControl *)customTabButtonAtTabIndex:(NSUInteger)index;
- (UIControl *)systemTabButtonAtTabIndex:(NSUInteger)index;

@end
