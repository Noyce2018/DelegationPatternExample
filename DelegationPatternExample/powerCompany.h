//
//  PowerCompany.h
//  testStrong
//
//  Created by TianYan_AppTeam_TBL on 2018/9/29.
//  Copyright © 2018年 TianYan_AppTeam_TBL. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "BuildFactory.h"
//能源公司
@interface PowerCompany :NSObject
@property id <BuildFactory> delegate;//委托人
-(void)work;//工作
@end
