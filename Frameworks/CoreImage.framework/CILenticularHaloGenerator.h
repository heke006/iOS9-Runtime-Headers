/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CILenticularHaloGenerator : CIFilter {
    CIVector * inputCenter;
    CIColor * inputColor;
    NSNumber * inputHaloOverlap;
    NSNumber * inputHaloRadius;
    NSNumber * inputHaloWidth;
    NSNumber * inputStriationContrast;
    NSNumber * inputStriationStrength;
    NSNumber * inputTime;
}

+ (id)customAttributes;

- (id)_CILenticularHalo;
- (id)outputImage;

@end