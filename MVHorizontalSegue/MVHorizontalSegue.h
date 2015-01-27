//
//  MVHorizontalSegue.h
//  ScrollHorizontal-Segue
//
//  Created by Ezequiel Santos on 1/22/15.
//  Copyright (c) 2015 Minha Vida. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>

@interface MVHorizontalSegue : UIStoryboardSegue

@property (assign, nonatomic) BOOL isDismiss;
@property (assign, nonatomic) BOOL isLandscapeOrientation;

@end