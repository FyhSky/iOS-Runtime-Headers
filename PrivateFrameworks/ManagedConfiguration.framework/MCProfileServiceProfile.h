/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
 */

@class NSData, NSString, NSArray;



@interface MCProfileServiceProfile : MCProfile 
{
    NSString *_URLString;
    NSArray *_deviceAttributes;
    id _challenge;
    NSData *_enrollmentIdentityPersistentID;
    BOOL _confirmInstallation;
    NSArray *_bogusPayloads;
}

@property(readonly) BOOL confirmInstallation;
@property(retain) NSData *enrollmentIdentityPersistentID;
@property(readonly) id challenge;
@property(readonly) NSArray *deviceAttributes;
@property(retain) NSString *URLString;


- (id)URLString;
- (id)_badDataTypeErrorWithFieldName:(id)arg1;
- (id)_unsupportedValueErrorWithFieldName:(id)arg1 value:(id)arg2;
- (BOOL)confirmInstallation;
- (id)enrollmentIdentityPersistentID;
- (void)setEnrollmentIdentityPersistentID:(id)arg1;
- (id)challenge;
- (id)deviceAttributes;
- (void)setURLString:(id)arg1;
- (id)initWithDictionary:(id)arg1 originalData:(id)arg2 wasEncrypted:(BOOL)arg3 allowEmptyPayload:(BOOL)arg4 outError:(id*)arg5;
- (id)localizedPayloadSummaryByType;
- (id)payloads;
- (id)stubDictionary;
- (id)description;
- (void)dealloc;

@end