ScrollViewMenuSlider
===================
created by Alexander Langstrand

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
