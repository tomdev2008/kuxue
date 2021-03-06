//
//  KXContactsViewController.h
//  KuXue
//
//  Created by Yang Yi Feng on 11/12/13.
//  Copyright (c) 2013 kuxue.me. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <MBProgressHUD/MBProgressHUD.h>
#import "KXContactsDelegate.h"
#import "KXContactsTableViewCell.h"
#import "KXContactTableViewController.h"
#import "KXContact.h"
#import "KXTableViewController.h"

@interface KXContactsTableViewController : KXTableViewController <KXContactsDelegate>

@property (weak, nonatomic) MBProgressHUD *progressHud;

@property (strong, nonatomic) NSMutableArray *contacts;

@end
