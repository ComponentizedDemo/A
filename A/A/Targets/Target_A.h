//
//  Target_A.h
//  A
//
//  Created by 汪启航 on 2019/10/16.
//  Copyright © 2019年 q.h. All rights reserved.
//

#import <UIKit/UIKit.h>

NS_ASSUME_NONNULL_BEGIN

//Target-Action 提供调用
@interface Target_A : NSObject

- (UIViewController *)Action_viewController:(NSDictionary *)params;
@end

NS_ASSUME_NONNULL_END
