//
//  HttpPresenter.m
//  MVP
//
//  Created by PlatoJobs on 16/2/8.
//  Copyright © 2017年 PlatoJobs. All rights reserved.
//

#import "HttpPresenter.h"

@implementation HttpPresenter
- (instancetype) initWithView:(id)view{
    if (self = [super initWithView:view]) {
        _httpClient = [[HttpClient alloc] initWithHandle:self];
    }
    return self;
}
#pragma mark - HttpResponseHandle
- (void)onSuccess:(id)responseObject{
    
}

- (void)onFail:(id)clientInfo errCode:(NSInteger)errCode errInfo:(NSString *)errInfo{

}
@end
