/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface UIModalView : UIView <UITextFieldDelegate> {
    float  _bodyTextHeight;
    UILabel * _bodyTextLabel;
    NSMutableArray * _buttons;
    int  _cancelButton;
    id  _context;
    int  _defaultButton;
    <UIModalViewDelegate> * _delegate;
    UIView * _dimView;
    UIWindow * _dimWindow;
    int  _dismissButtonIndex;
    int  _firstOtherButton;
    UIView * _keyboard;
    struct { 
        unsigned int numberOfRows : 7; 
        unsigned int delegateAlertSheetButtonClicked : 1; 
        unsigned int delegateDidPresentAlertSheet : 1; 
        unsigned int delegateDidDismissAlertSheet : 1; 
        unsigned int hideButtonBar : 1; 
        unsigned int alertStyle : 3; 
        unsigned int dontDimBackground : 1; 
        unsigned int dismissSuspended : 1; 
        unsigned int dontBlockInteraction : 1; 
        unsigned int sheetWasPoppedUp : 1; 
        unsigned int animating : 1; 
        unsigned int hideWhenDoneAnimating : 1; 
        unsigned int layoutWhenDoneAnimating : 1; 
        unsigned int titleMaxLineCount : 2; 
        unsigned int bodyTextMaxLineCount : 3; 
        unsigned int runsModal : 1; 
        unsigned int runningModal : 1; 
        unsigned int addedTextView : 1; 
        unsigned int addedTableShadows : 1; 
        unsigned int showOverSBAlerts : 1; 
        unsigned int showMinTableContent : 1; 
        unsigned int bodyTextTruncated : 1; 
        unsigned int orientation : 3; 
        unsigned int groupsTextFields : 1; 
        unsigned int delegateBodyTextAlignment : 1; 
        unsigned int delegateClickedButtonAtIndex : 1; 
        unsigned int delegateCancel : 1; 
        unsigned int delegateWillPresent : 1; 
        unsigned int delegateDidPresent : 1; 
        unsigned int delegateWillDismiss : 1; 
        unsigned int delegateDidDismiss : 1; 
        unsigned int popupFromPoint : 1; 
        unsigned int extra : 20; 
        unsigned int dontCallDismissDelegate : 1; 
        unsigned int useAutomaticKB : 1; 
        unsigned int shouldHandleFirstKeyUpEvent : 1; 
        unsigned int cancelWhenDoneAnimating : 1; 
    }  _modalViewFlags;
    UIWindow * _originalWindow;
    UIView * _sheetView;
    float  _startX;
    float  _startY;
    UILabel * _subtitleLabel;
    int  _suspendTag;
    UIView * _table;
    UILabel * _taglineTextLabel;
    NSMutableArray * _textFields;
    UILabel * _titleLabel;
    UIToolbar * _toolbar;
}

@property (nonatomic) int cancelButtonIndex;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <UIModalViewDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL groupsTextFields;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSString *message;
@property (nonatomic, readonly) int numberOfButtons;
@property (readonly) Class superclass;
@property (nonatomic, copy) NSString *title;
@property (getter=isVisible, nonatomic, readonly) BOOL visible;

- (void).cxx_destruct;
- (id)_initWithTelephoneNumber:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (void)_setFirstOtherButtonIndex:(int)arg1;
- (int)addButtonWithTitle:(id)arg1;
- (id)buttonTitleAtIndex:(int)arg1;
- (int)cancelButtonIndex;
- (void)dealloc;
- (int)defaultButtonIndex;
- (id)delegate;
- (void)dismissWithClickedButtonIndex:(int)arg1 animated:(BOOL)arg2;
- (int)firstOtherButtonIndex;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithTitle:(id)arg1 message:(id)arg2 delegate:(id)arg3 defaultButton:(id)arg4 cancelButton:(id)arg5 otherButtons:(id)arg6;
- (BOOL)isVisible;
- (id)message;
- (int)numberOfButtons;
- (void)setCancelButtonIndex:(int)arg1;
- (void)setDefaultButtonIndex:(int)arg1;
- (void)setDelegate:(id)arg1;
- (void)setMessage:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

// UIModalView (Private)

+ (id)_popupAlertBackground;
+ (BOOL)atLeastOneAlertVisible;
+ (struct CGSize { float x1; float x2; })minimumSize;
+ (void)noteOrientationChangingTo:(int)arg1;
+ (id)topMostAlert;
+ (id)visibleAlert;

- (id)_addButtonWithTitle:(id)arg1;
- (id)_addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)_addButtonWithTitleText:(id)arg1;
- (void)_alertSheetAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_alertSheetTextFieldReturn:(id)arg1;
- (void)_appSuspended:(id)arg1;
- (float)_bottomVerticalInset;
- (void)_bubbleAnimationNormalDidStop:(id)arg1 finished:(id)arg2;
- (void)_bubbleAnimationShrinkDidStop:(id)arg1 finished:(id)arg2;
- (void)_buttonClicked:(id)arg1;
- (float)_buttonHeight;
- (BOOL)_canShowAlerts;
- (void)_cancelAnimated:(BOOL)arg1;
- (void)_cleanupAfterPopupAnimation;
- (void)_createBodyTextLabelIfNeeded;
- (void)_createSubtitleLabelIfNeeded;
- (void)_createTaglineTextLabelIfNeeded;
- (void)_createTitleLabelIfNeeded;
- (int)_currentOrientation;
- (id)_defaultButton;
- (id)_dimView;
- (BOOL)_dimsBackground;
- (void)_growAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_handleKeyUIEvent:(id)arg1;
- (void)_hideAnimated:(BOOL)arg1;
- (BOOL)_isAnimating;
- (BOOL)_isSBAlert;
- (void)_keyboardWillHide:(id)arg1;
- (void)_keyboardWillShow:(id)arg1;
- (void)_layoutIfNeeded;
- (void)_layoutPopupAlertWithOrientation:(int)arg1 animated:(BOOL)arg2;
- (BOOL)_manualKeyboardIsVisible;
- (float)_maxHeight;
- (BOOL)_needsKeyboard;
- (void)_performPopoutAnimationAnimated:(BOOL)arg1;
- (void)_performPopup:(BOOL)arg1;
- (void)_popoutAnimationDidStop:(id)arg1 finished:(id)arg2;
- (void)_prepareForDisplay;
- (void)_prepareToBeReplaced;
- (void)_presentSheetFromView:(id)arg1 above:(BOOL)arg2;
- (void)_presentSheetStartingFromYCoordinate:(double)arg1;
- (void)_removeAlertWindowOrShowAnOldAlert;
- (void)_repopup;
- (void)_repopupNoAnimation;
- (void)_rotatingAnimationDidStop:(id)arg1;
- (void)_setAlertSheetStyleFromButtonBar:(id)arg1;
- (void)_setDefaultButton:(id)arg1;
- (void)_setTextFieldsHidden:(BOOL)arg1;
- (void)_setupInitialFrame;
- (void)_setupTitleStyle;
- (void)_slideSheetOut:(BOOL)arg1;
- (void)_temporarilyHideAnimated:(BOOL)arg1;
- (float)_titleHorizontalInset;
- (float)_titleVerticalBottomInset;
- (float)_titleVerticalTopInset;
- (void)_truncateViewHeight:(id)arg1 toFitInFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2 withMinimumHeight:(float)arg3;
- (id)addButtonWithTitle:(id)arg1 label:(id)arg2;
- (id)addTextFieldWithValue:(id)arg1 label:(id)arg2;
- (int)alertSheetStyle;
- (struct CGSize { float x1; float x2; })backgroundSize;
- (BOOL)blocksInteraction;
- (int)bodyMaxLineCount;
- (id)bodyText;
- (id)bodyTextView;
- (int)buttonCount;
- (id)buttons;
- (BOOL)canBecomeFirstResponder;
- (id)context;
- (id)defaultButton;
- (id)destructiveButton;
- (BOOL)dimsBackground;
- (void)dismiss;
- (void)dismissAnimated:(BOOL)arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (BOOL)groupsTextFields;
- (id)initWithTitle:(id)arg1 buttons:(id)arg2 defaultButtonIndex:(int)arg3 delegate:(id)arg4 context:(id)arg5;
- (BOOL)isBodyTextTruncated;
- (id)keyboard;
- (void)layout;
- (void)layoutAnimated:(BOOL)arg1;
- (void)layoutAnimated:(BOOL)arg1 withDuration:(double)arg2;
- (int)numberOfLinesInTitle;
- (int)numberOfRows;
- (void)popupAlertAnimated:(BOOL)arg1;
- (void)popupAlertAnimated:(BOOL)arg1 atOffset:(float)arg2;
- (void)popupAlertAnimated:(BOOL)arg1 fromBarButtonItem:(id)arg2;
- (void)presentSheetFromAboveView:(id)arg1;
- (void)presentSheetFromBehindView:(id)arg1;
- (void)presentSheetFromButtonBar:(id)arg1;
- (void)presentSheetInView:(id)arg1;
- (void)presentSheetToAboveView:(id)arg1;
- (void)replaceAlert:(id)arg1;
- (BOOL)requiresPortraitOrientation;
- (BOOL)runsModal;
- (void)setAlertSheetStyle:(int)arg1;
- (void)setBlocksInteraction:(BOOL)arg1;
- (void)setBodyText:(id)arg1;
- (void)setBodyTextMaxLineCount:(int)arg1;
- (void)setContext:(id)arg1;
- (void)setDefaultButton:(id)arg1;
- (void)setDestructiveButton:(id)arg1;
- (void)setDimView:(id)arg1;
- (void)setDimsBackground:(BOOL)arg1;
- (void)setGroupsTextFields:(BOOL)arg1;
- (void)setNumberOfRows:(int)arg1;
- (void)setRunsModal:(BOOL)arg1;
- (void)setShowsOverSpringBoardAlerts:(BOOL)arg1;
- (void)setSubtitle:(id)arg1;
- (void)setSuspendTag:(int)arg1;
- (void)setTableShouldShowMinimumContent:(BOOL)arg1;
- (void)setTaglineText:(id)arg1;
- (void)setTitleMaxLineCount:(int)arg1;
- (BOOL)showsOverSpringBoardAlerts;
- (id)subtitle;
- (int)suspendTag;
- (BOOL)tableShouldShowMinimumContent;
- (id)tableView;
- (id)taglineTextView;
- (id)textField;
- (id)textFieldAtIndex:(int)arg1;
- (int)textFieldCount;
- (int)titleMaxLineCount;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRect;
- (void)userDidCancelPopoverView:(id)arg1;

@end