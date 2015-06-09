/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _EditScriptIndexedAtom : NSObject {
    int  _editOperation;
    unsigned int  _indexInArrayB;
    unsigned int  _indexToEdit;
    NSString * _replacementText;
}

@property (nonatomic) int editOperation;
@property (nonatomic) unsigned int indexInArrayB;
@property (nonatomic) unsigned int indexToEdit;
@property (nonatomic, retain) NSString *replacementText;

+ (id)atomWithEditOperation:(int)arg1 indexToEdit:(unsigned int)arg2 newText:(id)arg3 indexInArrayB:(unsigned int)arg4;

- (void).cxx_destruct;
- (id)description;
- (int)editOperation;
- (unsigned int)indexInArrayB;
- (unsigned int)indexToEdit;
- (id)initWithEditOperation:(int)arg1 indexToEdit:(unsigned int)arg2 newText:(id)arg3 indexInArrayB:(unsigned int)arg4;
- (id)replacementText;
- (void)setEditOperation:(int)arg1;
- (void)setIndexInArrayB:(unsigned int)arg1;
- (void)setIndexToEdit:(unsigned int)arg1;
- (void)setReplacementText:(id)arg1;

@end