/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface __NSHostExtraIvars : NSObject {
    NSObject<OS_dispatch_queue> * cacheAccessQueue;
    NSObject<OS_dispatch_queue> * callbackQueue;
    NSObject<OS_dispatch_queue> * resolveQueue;
    int  resolveType;
    BOOL  startedResolving;
    NSString * thingToResolve;
}

@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *cacheAccessQueue;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *callbackQueue;
@property (nonatomic, readonly, retain) NSObject<OS_dispatch_queue> *resolveQueue;
@property (nonatomic) int resolveType;
@property BOOL startedResolving;
@property (nonatomic, retain) NSString *thingToResolve;

- (id)cacheAccessQueue;
- (id)callbackQueue;
- (void)cleanup;
- (void)dealloc;
- (void)finalize;
- (id)init;
- (id)resolveQueue;
- (int)resolveType;
- (void)setResolveType:(int)arg1;
- (void)setStartedResolving:(BOOL)arg1;
- (void)setThingToResolve:(id)arg1;
- (BOOL)startedResolving;
- (id)thingToResolve;

@end