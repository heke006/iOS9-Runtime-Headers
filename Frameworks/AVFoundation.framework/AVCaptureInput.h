/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureInput : NSObject {
    AVCaptureInputInternal * _inputInternal;
}

@property (nonatomic, readonly) NSArray *ports;

+ (void)initialize;

- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (struct OpaqueCMClock { }*)clock;
- (void)dealloc;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession { }*)arg1;
- (id)init;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(id /* block */)arg1;
- (id)ports;
- (id)session;
- (void)setSession:(id)arg1;

@end
