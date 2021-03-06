/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioSessionChannelDescription : NSObject {
    void * _impl;
}

@property (readonly) unsigned long channelLabel;
@property (readonly) NSString *channelName;
@property (readonly) unsigned int channelNumber;
@property (readonly) NSString *owningPortUID;

// AVAudioSessionChannelDescription (null)

+ (id)privateCreate:(id)arg1 portUID:(id)arg2 channelNumber:(unsigned long)arg3;
+ (id)privateCreateArray:(id)arg1 portUID:(id)arg2;

- (unsigned long)channelLabel;
- (id)channelName;
- (unsigned int)channelNumber;
- (void)dealloc;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToChannel:(id)arg1;
- (id)owningPortUID;
- (struct ChannelDescriptionImpl { id x1; unsigned int x2; unsigned int x3; }*)privateGetImplementation;

@end
