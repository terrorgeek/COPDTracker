//
//  AdverseEventTableViewController.h
//  COPDTracker
//
//  Created by Yu Song on 10/23/15.
//  Copyright © 2015 EFA. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "NewAdverseEventTableViewController.h"

@interface AdverseEventTableViewController : UITableViewController

@property (strong, nonatomic) IBOutlet UIBarButtonItem *addAdverseEventButton;

- (IBAction)addAdverseEventButtonAction:(id)sender;
@end
