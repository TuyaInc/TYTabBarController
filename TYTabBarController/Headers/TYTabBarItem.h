//
//  TYTabBarItem.h
//  TYModuleTabbar
//
//  Created by TuyaInc on 2018/9/1.
//

#import <UIKit/UIKit.h>

#import "TYTabItemAttribute.h"
@class TYTabBarItem;

@protocol TYTabBarItemDelegate <NSObject>

- (BOOL)ty_tabBarItem:(TYTabBarItem *)item shouldSetBadge:(NSString *)value;

@end

@interface TYTabBarItem : UITabBarItem

@property (nonatomic) NSUInteger tabIndex;

@property (nonatomic, weak) TYTabItemAttribute *attribute;

@property (nonatomic, weak) id<TYTabBarItemDelegate> ty_delegate;

@end
