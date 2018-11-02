//
//  HoFather.h
//  testStrong
//
//  Created by TianYan_AppTeam_TBL on 2018/9/29.
//  Copyright © 2018年 TianYan_AppTeam_TBL. All rights reserved.
//
#import <Foundation/Foundation.h>
#import "BuildFactory.h"
#import "PowerCompany.h"
//福爹，实现造发电厂
@interface HoFather :NSObject <BuildFactory>
-(void)buildFactory:(float)money:(NSString*)info;
-(void)work;
@end

