/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface NSDataAsset : NSObject <NSCopying> {
    CUINamedData * _namedData;
}

@property (nonatomic, readonly, copy) NSData *data;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *typeIdentifier;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (unsigned int)hash;
- (id)init;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 bundle:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)name;
- (id)typeIdentifier;

@end