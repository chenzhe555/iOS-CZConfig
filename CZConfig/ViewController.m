//
//  ViewController.m
//  CZConfig
//
//  Created by yunshan on 2019/4/12.
//  Copyright © 2019 ChenZhe. All rights reserved.
//

#import "ViewController.h"
#import "CZConfigTool.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    [CZConfigTool getTopBarHeight];
}


@end
