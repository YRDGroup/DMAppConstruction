//
//  ViewController.m
//  DMMacroDefinitionDemo
//
//  Created by 李二狗 on 2017/7/5.
//  Copyright © 2017年 YRHY Science and Technology (Beijing) Co., Ltd. All rights reserved.
//

#import "ViewController.h"
#import "DMMacroDefinition.h"

@interface ViewController ()
@property (weak, nonatomic) IBOutlet UITextView *textView;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    
    self.textView.text = [NSString stringWithFormat:@"    kScreenWidth:%f "
                          "\n   kScreenHeight:%f "
                          "\n   kFloatSortaPixel:%f "
                          "\n   IS_IPHONE:%d "
                          "\n   IOS_SYSTEM_VERSION:%f"
                          "\n   IOS_SYSTEM_STRING:%@ "
                          "",kScreenWidth,kScreenHeight,kFloatSortaPixel,IS_IPHONE,IOS_SYSTEM_VERSION,IOS_SYSTEM_STRING];
    
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


@end
