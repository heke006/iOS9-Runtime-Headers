/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureVideoDataOutputInternal : NSObject {
    BOOL  alwaysDiscardsLateVideoFrames;
    NSObject<OS_dispatch_queue> * bufferQueue;
    AVWeakReferencingDelegateStorage * delegateStorage;
    struct { 
        long long value; 
        int timescale; 
        unsigned int flags; 
        long long epoch; 
    }  deprecatedMinFrameDuration;
    struct OpaqueFigSimpleMutex { } * remoteQueueMutex;
    void * remoteReceiverQueue;
    NSDictionary * videoSettings;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
