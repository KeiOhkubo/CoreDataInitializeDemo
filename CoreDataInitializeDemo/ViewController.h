//
//  ViewController.h
//  CoreDataInitializeDemo
//
//  Created by onoT on 2012/10/17.
//  Copyright (c) 2012年 onoT. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    IBOutlet UITableView*   _tableView;
    NSArray*                _masters;
}
@property(nonatomic, retain) NSArray* masters;

@end
