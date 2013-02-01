ScrollViewMenuSlider
===================
created by Alexander Langstrand

ScrollViewMenuSlider is a similar control to the slide down menu control featured in Facebook iOS app created by Facebook.

What it does:
===================
It makes it easy for the user to access the top menu from anywhere in the list 
To show the slide in menu, the user simply has to scroll upwards fast enough for the list to scroll a little further by itself. 

How to use
===================

In the interface file(.h) of your controller(table/scroll/collection)

  Add the scrollViewDelegate:

    @interface YourViewController : UIYourViewController<UIScrollViewDelegate...>

And in the implementation(.m) file:

  Import ScrollViewMenuSlider:

    #import "ScrollViewMenuSliderController.h"

  Declare the ScrollViewMenuSlider:

    @implementation YourController {
      ScrollViewMenuSlider *scrollViewMenuSliderController;
    }

  And add the scrollViewDelegate methods:

    - (void)scrollViewDidScroll:(UIScrollView *)scrollView {
      [_scrollViewMenuSliderController scrollViewDidScroll:scrollView];
    }

    -(void)scrollViewWillBeginDecelerating:(UIScrollView *)scrollView {
      [_scrollViewMenuSliderController scrollViewWillBeginDecelerating:scrollView];
    }

    -(void)scrollViewWillBeginDragging:(UIScrollView *)scrollView {
      [_scrollViewMenuSliderController scrollViewWillBeginDragging:scrollView];
    }

    -(void)scrollViewDidEndDragging:(UIScrollView *)scrollView willDecelerate:(BOOL)decelerate {
      [_scrollViewMenuSliderController scrollViewDidEndDragging:scrollView willDecelerate:decelerate];
    }
