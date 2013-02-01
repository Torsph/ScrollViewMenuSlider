//
//  SlideInMenuViewController.h
//  FINN
//
//  Created by Langstrand, Alexander on 29.01.13.
//  Copyright (c) 2013 FINN.no. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <QuartzCore/QuartzCore.h>

typedef enum {
    Upwards = -1,
    None = 0,
    Downwards = 1
} ScrollDirection;

@interface SlideInMenuViewController : UIViewController<UIScrollViewDelegate>

@property(assign, nonatomic) CGFloat lastContentOffset;

-(id)initWithMenuView:(UIView *)menu;
-(void)menuPushed:(id)sender;

// Menu methods
-(int)getDirection:(UIScrollView *)scrollView;
-(BOOL)menuViewIsWithinBounds:(CGRect)cgRect withPoint:(CGPoint)cgPoint;
-(void)lockMenuViewInPlace:(UIScrollView *)scrollView;
-(void)slideMenuView:(UIView *)menuView toYPos:(CGFloat)cgFloat;

// ScrollViewDelegateMethods
-(void)scrollViewWillBeginDecelerating:(UIScrollView *)scrollView;
-(void)scrollViewWillBeginDragging:(UIScrollView *)scrollView;
-(void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate;

@end


