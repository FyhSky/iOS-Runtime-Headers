/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirPortAssistant.framework/AirPortAssistant
 */

@class <SetupUIConfigDelegate>, NSDate, NSDictionary, NSMutableSet, NSString;

@interface AUSetupController : AssistantCallbackController <AutoGuessSetup, BaseStationSetup, SetupUIConfigDelegateResult> {
    BOOL _activeTask;
    NSString *_autoGuessSetupRecommendation;
    BOOL _autoJoinState;
    BOOL _busy;
    struct BSConfigurationContext { } *_configContext;
    id _context;
    BOOL _initializedBasePasswordFlag;
    NSString *_keychainBasePassword;
    NSString *_keychainDiskPassword;
    NSString *_keychainWiFiPassword;
    NSString *_lastDNSName;
    NSDate *_lastHeardFromDevice;
    NSDictionary *_lastInstrumentation;
    NSString *_lastSystemName;
    BOOL _needToNilBonjour;
    BOOL _performingManualRead;
    BOOL _rememberDiskPassword;
    BOOL _scanningState;
    NSMutableSet *_setupDelegates;
    id _uiConfigDelegate;
}

@property BOOL activeTask;
@property(retain) NSString * autoGuessSetupRecommendation;
@property(retain) NSDictionary * bonjourRecord;
@property id context;
@property(retain) NSString * keychainBasePassword;
@property(retain) NSString * keychainDiskPassword;
@property(retain) NSString * keychainWiFiPassword;
@property(retain) NSString * lastDNSName;
@property(readonly) NSDate * lastHeardFromDevice;
@property(retain) NSDictionary * lastInstrumentation;
@property(retain) NSString * lastSystemName;
@property BOOL rememberBasePassword;
@property BOOL rememberDiskPassword;
@property BOOL rememberWiFiPassword;
@property(retain) NSDictionary * restoreRecommendation;
@property(readonly) NSMutableSet * setupDelegates;
@property <SetupUIConfigDelegate> * uiConfigDelegate;

+ (void)initialize;
+ (id)setupController;

- (BOOL)activeTask;
- (id)allKeychainMACAddresses;
- (void)applicationDidEnterBackgroundNotification:(id)arg1;
- (id)autoGuessSetupRecommendation;
- (id)bestKeychainMACAddress;
- (id)bonjourRecord;
- (struct _BaseStation { }*)bsRef;
- (int)busyState;
- (long)cancelSetup;
- (long)cancelTask;
- (long)closeAllConnections;
- (long)closeAllConnections:(BOOL)arg1;
- (id)context;
- (long)copyValue:(id*)arg1 forBSSetting:(int)arg2;
- (long)copyValue:(id*)arg1 forSettingPath:(id)arg2;
- (void)dealloc;
- (void)deleteKeychainBasePassword;
- (void)deleteKeychainWirelessPassword;
- (BOOL)dirty;
- (int)ethernetPortCount;
- (long)getValue:(id*)arg1 forBSSetting:(int)arg2;
- (long)getValue:(id*)arg1 forSettingPath:(id)arg2;
- (void)handleBusyComplete;
- (void)handleBusyStart;
- (void)handleSetupComplete:(long)arg1;
- (void)handleTaskComplete;
- (BOOL)hasACPFeature:(unsigned int)arg1;
- (long)ignoreProblemCode:(unsigned int)arg1;
- (id)init;
- (BOOL)isMonitoring;
- (long)joinAndBrowseAsync;
- (long)joinAsync;
- (id)keychainBasePassword;
- (id)keychainDiskPassword;
- (id)keychainWiFiPassword;
- (id)lastDNSName;
- (id)lastHeardFromDevice;
- (id)lastInstrumentation;
- (id)lastSystemName;
- (void)loadKeychainBasePassword;
- (void)loadKeychainWirelessPassword;
- (void)logChangesToCCL;
- (BOOL)performingManualRead;
- (long)readAllPropertiesFromBaseAsync;
- (long)readPropertyListFromBaseAsync:(id)arg1;
- (BOOL)rememberBasePassword;
- (BOOL)rememberDiskPassword;
- (BOOL)rememberWiFiPassword;
- (void)resetWiFiState;
- (long)rpcDisconnectAllDiskUsersWithMessageAsync:(id)arg1;
- (long)rpcRefreshBSSettingAsync:(int)arg1;
- (long)rpcRenewDHCPLeaseAsync;
- (long)rpcStartRemoteBrowse:(id)arg1 withService:(id)arg2;
- (long)rpcSystemInterfacesAsync;
- (long)rpcWPSAllowClientAsync:(id)arg1;
- (long)rpcWPSStartAsync:(BOOL)arg1 dayPass:(BOOL)arg2 timeout:(unsigned int)arg3;
- (long)rpcWPSStopAsync;
- (void)saveKeychainBasePassword;
- (void)saveKeychainWirelessPassword;
- (void)setActiveTask:(BOOL)arg1;
- (void)setAutoGuessSetupRecommendation:(id)arg1;
- (void)setBonjourRecord:(id)arg1;
- (void)setContext:(id)arg1;
- (void)setKeychainBasePassword:(id)arg1;
- (void)setKeychainDiskPassword:(id)arg1;
- (void)setKeychainWiFiPassword:(id)arg1;
- (void)setLastDNSName:(id)arg1;
- (void)setLastInstrumentation:(id)arg1;
- (void)setLastSystemName:(id)arg1;
- (long)setMonitorForChanges:(BOOL)arg1;
- (void)setRememberBasePassword:(BOOL)arg1;
- (void)setRememberDiskPassword:(BOOL)arg1;
- (void)setRememberWiFiPassword:(BOOL)arg1;
- (void)setUiConfigDelegate:(id)arg1;
- (long)setValue:(id)arg1 forBSSetting:(int)arg2;
- (long)setValue:(id)arg1 forSettingPath:(id)arg2;
- (id)setupDelegates;
- (long)setupFromAutoguessRecommendation:(id)arg1 withOptions:(id)arg2;
- (void)setupUIConfigResult:(long)arg1 withOptions:(id)arg2;
- (void)setupWiFiState;
- (long)setupWithTargetBaseStation:(id)arg1 andSettings:(id)arg2;
- (long)setupWithTargetNetwork:(id)arg1;
- (id)snapshotChangedKeys;
- (BOOL)snapshotDirty;
- (long)snapshotPop:(BOOL)arg1;
- (long)snapshotPush;
- (void)snapshotResetAll;
- (int)stateForProblem:(unsigned int)arg1;
- (long)subclassAssistantCallback:(struct AssistantCallbackContext { unsigned int x1; struct AssistantContext {} *x2; int x3; struct __CFDictionary {} *x4; int x5; id x6; id x7; struct _opaque_pthread_mutex_t { long x_8_1_1; BOOL x_8_1_2[40]; } x8; void *x9; int x10; }*)arg1;
- (id)targetBaseInfoDict;
- (long)taskArchiveDiskAsync:(id)arg1;
- (unsigned int)taskCode;
- (long)taskEraseDiskAsync:(id)arg1;
- (long)taskRestartAsync;
- (long)taskRestoreDefaultsAsync:(BOOL)arg1;
- (int)taskState;
- (long)taskUploadFirmwareAsync:(id)arg1;
- (id)uiConfigDelegate;
- (long)unIgnoreProblemCode:(unsigned int)arg1;
- (long)unignoredProblemCount;
- (long)updateKeychainWithPasswords;
- (long)updateKeychainWithPasswordsWithStatus:(long)arg1;
- (void)updateLastHeardFromDevice;
- (void)updateRememberKeychainFlagsButSkipBasePassword:(BOOL)arg1;
- (void)updateRememberKeychainFlagsIfInitializing;
- (long)updateSettingsAsync;
- (id)validateAllSettingsAndGetErrors;
- (id)validateSettingsAndGetErrors:(id)arg1;

@end
