//
//  CTMediator+TestB.h
//  TestBasis
//
//  Created by Suzhibin on 2019/7/17.
//  Copyright © 2019 Suzhibin. All rights reserved.
//

#import "CTMediator.h"

NS_ASSUME_NONNULL_BEGIN

@interface CTMediator (TestB)
- (UIViewController *)ModuleB_viewControllerWithStr:(NSString*)str;

- (UIViewController *)ModuleBDetails_viewControllerWithStr:(NSString*)str;

@end

NS_ASSUME_NONNULL_END
