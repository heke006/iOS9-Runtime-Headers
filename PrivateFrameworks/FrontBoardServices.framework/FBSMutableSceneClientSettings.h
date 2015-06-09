/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/FrontBoardServices.framework/FrontBoardServices
 */

@interface FBSMutableSceneClientSettings : FBSSceneClientSettings

@property (nonatomic, copy) NSSet *occlusions;
@property (nonatomic) int preferredInterfaceOrientation;
@property (nonatomic) float preferredLevel;
@property (nonatomic, copy) NSString *preferredSceneHostIdentifier;

// FBSMutableSceneClientSettings (null)

+ (BOOL)_isMutable;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)otherSettings;
- (void)setOcclusions:(id)arg1;
- (void)setPreferredInterfaceOrientation:(int)arg1;
- (void)setPreferredLevel:(float)arg1;
- (void)setPreferredSceneHostIdentifier:(id)arg1;

@end