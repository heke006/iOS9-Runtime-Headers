/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface __NSATSStringSegment : NSString {
    unsigned short  _buffer;
    const unsigned short * _characters;
    struct __CFString { } * _originalString;
    long  _originalStringLength;
    struct { 
        int location; 
        int length; 
    }  _range;
}

// __NSATSStringSegment (null)

+ (id)allocWithZone:(struct _NSZone { }*)arg1;

- (const unsigned short*)_fastCharacterContents;
- (BOOL)_isDeallocating;
- (void)_setOriginalString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (BOOL)_tryRetain;
- (unsigned short)characterAtIndex:(unsigned int)arg1;
- (void)dealloc;
- (void)getCharacters:(unsigned short*)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (id)initWithOriginalString:(id)arg1 range:(struct _NSRange { unsigned int x1; unsigned int x2; })arg2;
- (unsigned int)length;
- (oneway void)release;

@end