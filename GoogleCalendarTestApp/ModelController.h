//
//  ModelController.h
//  GoogleCalendarTestApp
//
//  Created by Brien Smith Martínez on 25/11/15.
//  Copyright © 2015 Brien Smith Martínez. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

