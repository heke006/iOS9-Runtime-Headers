/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIPanOrFlickGestureRecognizer : UIPanGestureRecognizer {
    float  _allowableMovement;
    unsigned int  _allowedFlickDirections;
    BOOL  _didLongPress;
    UIDelayedAction * _elapsedAction;
    struct CGPoint { 
        float x; 
        float y; 
    }  _initialCentroidLocation;
    double  _maximumFlickDuration;
    float  _minimumFlickDistance;
    double  _minimumPressDuration;
    double  _timestampBeforeGestureBegan;
    double  _timestampOfLastEvent;
    unsigned int  _touchCount;
}

@property (nonatomic) float allowableMovement;
@property (nonatomic) unsigned int allowedFlickDirections;
@property (nonatomic, readonly) BOOL didLongPress;
@property (nonatomic, retain) UIDelayedAction *elapsedAction;
@property (nonatomic) struct CGPoint { float x1; float x2; } initialCentroidLocation;
@property (nonatomic) double maximumFlickDuration;
@property (nonatomic) float minimumFlickDistance;
@property (nonatomic) double minimumPressDuration;
@property (nonatomic, readonly) unsigned int recognizedFlickDirection;
@property (nonatomic) double timestampBeforeGestureBegan;
@property (nonatomic) double timestampOfLastEvent;

- (void).cxx_destruct;
- (float)allowableMovement;
- (unsigned int)allowedFlickDirections;
- (void)clearTimer;
- (void)dealloc;
- (BOOL)didLongPress;
- (id)elapsedAction;
- (void)enoughTimeElapsed:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2;
- (struct CGPoint { float x1; float x2; })initialCentroidLocation;
- (double)maximumFlickDuration;
- (float)minimumFlickDistance;
- (double)minimumPressDuration;
- (unsigned int)recognizedFlickDirection;
- (void)reset;
- (void)setAllowableMovement:(float)arg1;
- (void)setAllowedFlickDirections:(unsigned int)arg1;
- (void)setElapsedAction:(id)arg1;
- (void)setInitialCentroidLocation:(struct CGPoint { float x1; float x2; })arg1;
- (void)setMaximumFlickDuration:(double)arg1;
- (void)setMinimumFlickDistance:(float)arg1;
- (void)setMinimumPressDuration:(double)arg1;
- (void)setTimestampBeforeGestureBegan:(double)arg1;
- (void)setTimestampOfLastEvent:(double)arg1;
- (void)startTimer;
- (double)timestampBeforeGestureBegan;
- (double)timestampOfLastEvent;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;

@end
