//
//  Target_A.m
//  A
//
//  Created by 汪启航 on 2019/10/16.
//  Copyright © 2019年 q.h. All rights reserved.
//

#import "Target_A.h"
#import "AViewController.h"

@implementation Target_A

- (UIViewController *)Action_viewController:(NSDictionary *)params
{
    AViewController *viewController = [[AViewController alloc] init];
    return viewController;
}

@end
