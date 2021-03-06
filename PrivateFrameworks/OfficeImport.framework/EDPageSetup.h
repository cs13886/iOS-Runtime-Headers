/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EDPageSetup : NSObject {
    boolmCustomFirstPageNumber;
    float mBottomMargin;
    unsigned int mCopies;
    unsigned int mFirstPageNumber;
    unsigned int mFitToHeight;
    unsigned int mFitToWidth;
    float mFooterMargin;
    float mHeaderMargin;
    float mLeftMargin;
    int mOrientation;
    int mPageOrder;
    float mRightMargin;
    unsigned int mScale;
    float mTopMargin;
}

+ (id)pageSetup;

- (float)bottomMargin;
- (bool)customFirstPageNumber;
- (unsigned int)firstPageNumber;
- (unsigned int)fitToHeight;
- (unsigned int)fitToWidth;
- (float)footerMargin;
- (float)headerMargin;
- (id)init;
- (float)leftMargin;
- (int)order;
- (int)orientation;
- (float)rightMargin;
- (unsigned int)scale;
- (void)setBottomMargin:(float)arg1;
- (void)setCustomFirstPageNumber:(bool)arg1;
- (void)setFirstPageNumber:(unsigned int)arg1;
- (void)setFitToHeight:(unsigned int)arg1;
- (void)setFitToWidth:(unsigned int)arg1;
- (void)setFooterMargin:(float)arg1;
- (void)setHeaderMargin:(float)arg1;
- (void)setLeftMargin:(float)arg1;
- (void)setOrder:(int)arg1;
- (void)setOrientation:(int)arg1;
- (void)setRightMargin:(float)arg1;
- (void)setScale:(unsigned int)arg1;
- (void)setTopMargin:(float)arg1;
- (float)topMargin;

@end
