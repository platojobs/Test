//
//  HttpPresenter.h
//  MVP
//
//  Created by PlatoJobs on 16/2/8.
//  Copyright © 2017年 PlatoJobs. All rights reserved.
//

#import "Presenter.h"
#import "HttpResponseHandle.h"
#import "HttpClient.h"

@interface HttpPresenter<E> : Presenter<E> <HttpResponseHandle>

@property (nonatomic,strong)HttpClient *httpClient;

@end
