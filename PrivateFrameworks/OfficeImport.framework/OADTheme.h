/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class OADBaseStyles, OADDefaultProperties;

@interface OADTheme : NSObject {
    OADBaseStyles *mBaseStyles;
    OADDefaultProperties *mLineDefaults;
    OADDefaultProperties *mShapeDefaults;
    OADDefaultProperties *mTextDefaults;
}

- (void)addDefaults;
- (id)addLineDefaults;
- (id)addShapeDefaults;
- (id)addTextDefaults;
- (id)baseStyles;
- (void)dealloc;
- (id)init;
- (id)lineDefaults;
- (id)shapeDefaults;
- (id)textDefaults;

@end
