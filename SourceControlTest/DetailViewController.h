//
//  DetailViewController.h
//  SourceControlTest
//
//  Created by zhangrongjian on 13-12-21.
//  Copyright (c) 2013年 zgy. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
