/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
 */

@interface _BKSCancelTouchesTouchDeliveryPolicy : BKSTouchDeliveryPolicy {
    NSObject<OS_xpc_object> * _assertionEndpoint;
    unsigned int  _contextId;
    double  _initialTouchTimestamp;
}

@property (nonatomic, readonly) unsigned int contextId;
@property (nonatomic, readonly) double initialTouchTimestamp;

+ (BOOL)supportsSecureCoding;

- (id)assertionEndpoint;
- (unsigned int)contextId;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithContextId:(unsigned int)arg1 initialTouchTimestamp:(double)arg2;
- (double)initialTouchTimestamp;
- (BOOL)isEqual:(id)arg1;
- (id)matchSharingTouchesPolicy:(id /* block */)arg1 orCancelTouchesPolicy:(id /* block */)arg2 orCombinedPolicy:(id /* block */)arg3;
- (void)setAssertionEndpoint:(id)arg1;

@end