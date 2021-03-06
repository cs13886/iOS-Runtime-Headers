/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@interface GEOGeocodeProvider : NSObject {
    id _errorHandler;
    id _successHandler;
}

@property(copy) id errorHandler;
@property(copy) id successHandler;

+ (unsigned short)provider;
+ (id)providerName;

- (void)cancel;
- (void)dealloc;
- (id)errorHandler;
- (void)forwardGeocode:(id)arg1 success:(id)arg2 networkActivity:(id)arg3 error:(id)arg4;
- (void)reverseGeocode:(id)arg1 success:(id)arg2 error:(id)arg3;
- (void)setErrorHandler:(id)arg1;
- (void)setSuccessHandler:(id)arg1;
- (id)successHandler;

@end
