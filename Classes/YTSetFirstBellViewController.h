//
//  YTSetFirstBellViewController.h
//  YourTurn
//
//  Created by Masashi Ono on 09/07/18.
//  Copyright (c) 2009, Masashi Ono
//  All rights reserved.
//

#import <UIKit/UIKit.h>

@class YTSwitchCell;
@class YTTimePickerView;

@interface YTSetFirstBellViewController : UITableViewController {
    YTSwitchCell *enableCell;
    YTTimePickerView *timePicker;
}

@end
