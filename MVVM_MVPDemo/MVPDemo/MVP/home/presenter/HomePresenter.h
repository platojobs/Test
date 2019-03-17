//
//  HomePresenter.h
//  MVP
//
//  Created by PlatoJobs on 16/2/8.
//  Copyright © 2017年 PlatoJobs. All rights reserved.
//

#import "HttpPresenter.h"
#import "HomeViewProtocol.h"

@interface HomePresenter : HttpPresenter <id<HomeViewProtocol>>

- (void)getMovieListWithUrlString:(NSString *)urlString;
@end
