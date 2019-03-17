//
//  HttpClient.h
//  MVP
//
//  Created by PlatoJobs on 16/2/8.
//  Copyright © 2017年 PlatoJobs. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol HttpResponseHandle;

@interface HttpClient : NSObject

//初始化方法
- (instancetype)initWithHandle:(id<HttpResponseHandle>) responseHandle;
- (void)post:(NSString *)URLString parameters:(id)parameters;
- (void)get:(NSString *)URLString parameters:(id)parameters;
@end
