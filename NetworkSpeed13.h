@interface SBCoverSheetPresentationManager: NSObject
+ (id)sharedInstance;
- (BOOL)_isEffectivelyLocked;
@end

@interface UILabelWithInsets : UILabel
@end

@interface NetworkSpeed: NSObject
{
    UIWindow *networkSpeedWindow;
    UILabelWithInsets *networkSpeedLabel;
}
- (id)init;
- (void)updateOrientation;
- (void)updateFrame;
- (void)updateNetworkSpeedSize;
- (void)updateTextColor:(UIColor *)color;
- (void)openDoubleTapApp;
- (void)openHoldApp;
@end

@interface UIWindow ()
- (void)_setSecure:(BOOL)arg1;
@end

@interface UIApplication ()
- (UIDeviceOrientation)_frontMostAppOrientation;
@end

@interface _UIStatusBarStyleAttributes : NSObject
@property(nonatomic, copy) UIColor *imageTintColor;
@end

@interface _UIStatusBar : UIView
@property(nonatomic, retain) _UIStatusBarStyleAttributes *styleAttributes;
@end

@interface CALayer ()
- (void)setContinuousCorners:(BOOL)arg1;
@end

@interface UIApplication ()
- (BOOL)launchApplicationWithIdentifier:(id)arg1 suspended:(BOOL)arg2;
@end