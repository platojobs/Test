//
//  HomeViewProtocol.h
//  MVP
//
//  Created by PlatoJobs on 16/2/8.
//  Copyright © 2017年 PlatoJobs. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "HomeModel.h"

@protocol HomeViewProtocol <NSObject>
- (void)onGetMovieListSuccess:(HomeModel *)homeModel;

- (void)onGetMovieListFail:(NSInteger) errorCode des:(NSString *)des;

@end
