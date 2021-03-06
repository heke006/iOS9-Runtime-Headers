/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UIQueueingProxy : _UITargetedProxy {
    int  _lock;
    NSMutableArray * _queuedInvocations;
    id /* block */  _shouldSuspendInvocationBlock;
    unsigned int  _suspensionCount;
}

+ (id)proxyWithTarget:(id)arg1;
+ (id)proxyWithTarget:(id)arg1 shouldSuspendInvocationBlock:(id /* block */)arg2;

- (void).cxx_destruct;
- (void)_dispatchSuspendedMessages;
- (id)description;
- (void)forwardInvocation:(id)arg1;
- (void)removeAllEnqueuedInvocations;
- (BOOL)respondsToSelector:(SEL)arg1;
- (void)resume;
- (void)suspend;

@end
