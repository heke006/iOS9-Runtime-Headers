/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface BKSHIDEventRouterManager : BKSHIDEventRouterManagerBase {
    BOOL  _needsFlush;
}

@property (nonatomic) BOOL needsFlush;

+ (id)sharedInstance;

- (void)_flush;
- (void)_flushTrigger;
- (void)_routerUpdated:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)needsFlush;
- (void)setEventRouters:(id)arg1;
- (void)setNeedsFlush:(BOOL)arg1;

@end
