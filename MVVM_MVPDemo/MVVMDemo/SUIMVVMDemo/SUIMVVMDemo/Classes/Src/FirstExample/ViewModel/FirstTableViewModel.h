//
//  FirstTableViewModel.h
//  SUIMVVMDemo
//
//  Created by PlatoJobs on 16/4/8.
//  Copyright © 2016年 PlatoJobs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FirstTableViewModel : NSObject<UITableViewDelegate, UITableViewDataSource>

- (void)handleWithTable:(UITableView *)table;

- (void)getDataWithModelArray:(NSArray *(^)())modelArrayBlock completion:(void (^)())completion;

@end
