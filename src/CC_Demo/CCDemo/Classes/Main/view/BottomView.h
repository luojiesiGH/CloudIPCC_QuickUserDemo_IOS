//
//  BottomView.h
//  CCDemo
//
//  Created by Tom on 2017/12/26.
//  Copyright © 2017年 mwx325691. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface BottomView : UIView

@property (nonatomic,copy)void (^indexBlock)(int i);

@end
