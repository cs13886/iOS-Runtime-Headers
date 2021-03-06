/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SoftwareUpdateServices.framework/SoftwareUpdateServices
 */

@interface SUDownloadMetadata : NSObject <NSCoding, NSCopying> {
    int _activeDownloadPolicyType;
    BOOL _autoDownload;
    int _downloadFeeAgreementStatus;
    BOOL _enabledFor2G;
    BOOL _enabledFor3G;
    BOOL _enabledFor4G;
    BOOL _enabledForCellularRoaming;
    BOOL _enabledForWifi;
    BOOL _enabledOnBatteryPower;
    BOOL _enforceWifiOnlyOverride;
}

@property int activeDownloadPolicyType;
@property(getter=isAutoDownload) BOOL autoDownload;
@property int downloadFeeAgreementStatus;
@property(getter=isEnabledFor2G) BOOL enabledFor2G;
@property(getter=isEnabledFor3G) BOOL enabledFor3G;
@property(getter=isEnabledFor4G) BOOL enabledFor4G;
@property(getter=isEnabledForCellularRoaming) BOOL enabledForCellularRoaming;
@property(getter=isEnabledForWifi) BOOL enabledForWifi;
@property(getter=isEnabledOnBatteryPower) BOOL enabledOnBatteryPower;
@property BOOL enforceWifiOnlyOverride;

- (id)_stringForBool:(BOOL)arg1;
- (id)activeDownloadPolicy:(id)arg1;
- (int)activeDownloadPolicyType;
- (void)applyDownloadPolicy:(id)arg1;
- (id)availableDownloadPolicyIfDifferentFromActive:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (int)downloadFeeAgreementStatus;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)enforceWifiOnlyOverride;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isAutoDownload;
- (BOOL)isEnabledFor2G;
- (BOOL)isEnabledFor3G;
- (BOOL)isEnabledFor4G;
- (BOOL)isEnabledForCellularRoaming;
- (BOOL)isEnabledForNetworkType:(int)arg1;
- (BOOL)isEnabledForWifi;
- (BOOL)isEnabledOnBatteryPower;
- (BOOL)isEqual:(id)arg1;
- (BOOL)matchesDownloadPolicy:(id)arg1;
- (void)setActiveDownloadPolicyType:(int)arg1;
- (void)setAutoDownload:(BOOL)arg1;
- (void)setDownloadFeeAgreementStatus:(int)arg1;
- (void)setEnabledFor2G:(BOOL)arg1;
- (void)setEnabledFor3G:(BOOL)arg1;
- (void)setEnabledFor4G:(BOOL)arg1;
- (void)setEnabledForCellularRoaming:(BOOL)arg1;
- (void)setEnabledForWifi:(BOOL)arg1;
- (void)setEnabledOnBatteryPower:(BOOL)arg1;
- (void)setEnforceWifiOnlyOverride:(BOOL)arg1;

@end
