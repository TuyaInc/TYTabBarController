//
//  TYTabBarCustomBadgeProtocol.h
//  TYModuleManager
//
//  Created by TuyaInc on 2018/12/7.
//

#import <Foundation/Foundation.h>

@class TYTabBarItem;

@protocol TYTabBarCustomBadgeProtocol <NSObject>

@property (nonatomic) CGPoint originLocation;   /**< badge左上在barButton上的 比例位置 */
@property (nonatomic) CGSize offset;    /**< 在originLocation基础上偏移 */

@required
- (void)ty_tabBarItem:(TYTabBarItem *)item setBadgeValue:(NSString *)value;

@end

