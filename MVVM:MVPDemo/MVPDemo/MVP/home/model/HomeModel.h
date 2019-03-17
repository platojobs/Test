//
//  HomeModel.h
//  MVP
//
//  Created by PlatoJobs on 16/2/8.
//  Copyright © 2017年 PlatoJobs. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface HomeModel : NSObject

@property (nonatomic,assign)NSInteger count;
@property (nonatomic,assign)NSInteger start;
@property (nonatomic,assign)NSInteger total;
@property (nonatomic,assign)NSArray *books;
@end
