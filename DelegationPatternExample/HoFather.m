//
//  HoFather.m
//  testStrong
//
//  Created by TianYan_AppTeam_TBL on 2018/9/29.
//  Copyright © 2018年 TianYan_AppTeam_TBL. All rights reserved.
//
#import "HoFather.h"
@implementation HoFather
-(void)buildFactory:(float)money:(NSString*)info
{
    NSLog(@"build success");
}
-(void)work
{
    PowerCompany *p=[[PowerCompany alloc]init];
    p.delegate=self;
    [p work];
}
@end
