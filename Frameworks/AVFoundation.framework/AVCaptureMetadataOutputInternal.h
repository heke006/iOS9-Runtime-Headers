/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVCaptureMetadataOutputInternal : NSObject {
    AVWeakReferencingDelegateStorage * delegateStorage;
    NSArray * metadataObjectTypes;
    NSObject<OS_dispatch_queue> * objectQueue;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  rectOfInterest;
    struct OpaqueFigSimpleMutex { } * remoteQueueMutex;
    void * remoteReceiverQueue;
    AVWeakReference * weakReference;
}

- (void)dealloc;
- (id)init;

@end
