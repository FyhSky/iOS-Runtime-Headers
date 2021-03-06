/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
 */

@class <SBUISizeObservingViewDelegate>;

@interface SBUISizeObservingView : UIView {
    <SBUISizeObservingViewDelegate> *_delegate;
    BOOL _delegateInterestedInSizeChanges;
}

@property <SBUISizeObservingViewDelegate> * delegate;

- (id)delegate;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setDelegate:(id)arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
