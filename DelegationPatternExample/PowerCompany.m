//
//  PowerCompany.m
//  testStrong
//
//  Created by TianYan_AppTeam_TBL on 2018/9/29.
//  Copyright © 2018年 TianYan_AppTeam_TBL. All rights reserved.
//

#import "PowerCompany.h"
@implementation PowerCompany
//能源公司的实现，即委托委托人工作
-(void)work
{
    [self.delegate buildFactory:1000000 :@"build"];
}
@end
