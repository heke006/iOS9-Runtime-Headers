/* Generated by RuntimeBrowser
   Image: /Applications/Xcode-beta.app/Contents/Developer/Platforms/iPhoneSimulator.platform/Developer/SDKs/iPhoneSimulator.sdk/System/Library/PrivateFrameworks/WebKitLegacy.framework/WebKitLegacy
 */

@interface WebUserContentURLPatternPrivate : NSObject {
    struct UserContentURLPattern { 
        bool m_invalid; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_scheme; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_host; 
        struct String { 
            struct RefPtr<WTF::StringImpl> { 
                struct StringImpl {} *m_ptr; 
            } m_impl; 
        } m_path; 
        bool m_matchSubdomains; 
    }  pattern;
}

// WebUserContentURLPatternPrivate (null)

- (id).cxx_construct;
- (void).cxx_destruct;

@end
