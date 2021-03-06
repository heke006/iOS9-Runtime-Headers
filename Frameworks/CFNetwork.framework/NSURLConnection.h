/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSURLConnection : NSObject <NSURLAuthenticationChallengeSender> {
    NSURLConnectionInternal * _internal;
}

@property (readonly, copy) NSURLRequest *currentRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly, copy) NSURLRequest *originalRequest;
@property (readonly) Class superclass;

+ (void)_setSweeperInterval:(unsigned int)arg1;
+ (unsigned int)_sweeperInterval;
+ (BOOL)canHandleRequest:(id)arg1;
+ (id)connectionWithRequest:(id)arg1 delegate:(id)arg2;
+ (void)sendAsynchronousRequest:(id)arg1 queue:(id)arg2 completionHandler:(id /* block */)arg3;
+ (id)sendSynchronousRequest:(id)arg1 returningResponse:(id*)arg2 error:(id*)arg3;

- (id)_cfInternal;
- (id)_dlInternal;
- (void)_resumeLoading;
- (void)_suspendLoading;
- (void)cancel;
- (id)connectionProperties;
- (id)currentRequest;
- (void)dealloc;
- (BOOL)defersCallbacks;
- (id)description;
- (void)download;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2;
- (id)initWithRequest:(id)arg1 delegate:(id)arg2 startImmediately:(BOOL)arg3;
- (id)originalRequest;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (void)setDefersCallbacks:(BOOL)arg1;
- (void)setDelegateQueue:(id)arg1;
- (void)start;
- (void)unscheduleFromRunLoop:(id)arg1 forMode:(id)arg2;

// NSURLConnection (Deprecated)

+ (void)_setMIMETypesWithNoSizeLimit:(id)arg1;

// NSURLConnection (Loader)

+ (void)_resourceLoadLoop:(id)arg1;
+ (void)_setLoaderThreadPriority:(int)arg1;
+ (struct __CFRunLoop { }*)resourceLoaderRunLoop;

// NSURLConnection (NSURLAuthenticationChallengeSender)

- (void)cancelAuthenticationChallenge:(id)arg1;
- (void)continueWithoutCredentialForAuthenticationChallenge:(id)arg1;
- (void)performDefaultHandlingForAuthenticationChallenge:(id)arg1;
- (void)rejectProtectionSpaceAndContinueWithChallenge:(id)arg1;
- (void)useCredential:(id)arg1 forAuthenticationChallenge:(id)arg2;

// NSURLConnection (Private)

- (id)_initWithRequest:(id)arg1 delegate:(id)arg2 usesCache:(BOOL)arg3 maxContentLength:(long long)arg4 startImmediately:(BOOL)arg5 connectionProperties:(id)arg6;

// NSURLConnection (TimingData)

+ (void)_collectTimingDataWithOptions:(unsigned int)arg1;
+ (BOOL)_collectsTimingData;
+ (void)_setCollectsTimingData:(BOOL)arg1;
+ (unsigned int)_timingDataOptions;

- (void)_reportTimingDataToAWD;
- (id)_timingData;

@end
