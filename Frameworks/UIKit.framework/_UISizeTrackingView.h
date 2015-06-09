/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UISizeTrackingView : UIView <_UIRemoteViewFocusProxy, _UIScrollToTopView> {
    BOOL  _hasIntrinsicContentSize;
    struct CGSize { 
        float width; 
        float height; 
    }  _intrinsicContentSize;
    _UIRemoteViewController * _remoteViewController;
    id  _textEffectsOperatorProxy;
    id  _viewControllerOperatorProxy;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (nonatomic, readonly) _UIRemoteViewController *remoteViewController;
@property (readonly) Class superclass;

+ (id)viewWithRemoteViewController:(id)arg1 viewControllerOperatorProxy:(id)arg2 textEffectsOperatorProxy:(id)arg3;

- (void).cxx_destruct;
- (void)_didMoveFromWindow:(id)arg1 toWindow:(id)arg2;
- (void)_geometryChanges:(id)arg1 forAncestor:(id)arg2;
- (struct CGSize { float x1; float x2; })_intrinsicSizeWithinSize:(struct CGSize { float x1; float x2; })arg1;
- (void)_scrollToTopFromTouchAtScreenLocation:(struct CGPoint { float x1; float x2; })arg1 resultHandler:(id /* block */)arg2;
- (void)_updateSceneGeometries:(id)arg1;
- (void)_updateTextEffectsGeometries:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)dealloc;
- (BOOL)isScrollEnabled;
- (id)remoteViewController;
- (void)updateIntrinsicContentSize:(struct CGSize { float x1; float x2; })arg1;

@end