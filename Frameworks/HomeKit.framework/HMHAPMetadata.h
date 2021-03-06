/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HomeKit.framework/HomeKit
 */

@class NSArray, NSDictionary, NSNumber;

@interface HMHAPMetadata : NSObject <NSSecureCoding> {
    NSArray *_assistantCharacteristics;
    NSDictionary *_assistantServices;
    NSDictionary *_assistantUnits;
    NSArray *_hapCharacteristics;
    NSArray *_hapServices;
    NSArray *_hapValueUnits;
    NSNumber *_version;
}

@property(retain) NSArray * assistantCharacteristics;
@property(retain) NSDictionary * assistantServices;
@property(retain) NSDictionary * assistantUnits;
@property(retain) NSArray * hapCharacteristics;
@property(retain) NSArray * hapServices;
@property(retain) NSArray * hapValueUnits;
@property(retain) NSNumber * version;

+ (id)getSharedInstance;
+ (void)setSharedInstance:(id)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)assistantCharacteristicFormatType:(id)arg1;
- (id)assistantCharacteristics;
- (id)assistantServices;
- (id)assistantUnits;
- (id)characteristicTypeDescription:(id)arg1;
- (id)characteristicTypeLocalizedDescription:(id)arg1;
- (id)characteristicValueUnit:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)getAssistantCharacteristic:(id)arg1;
- (id)hapCharacteristics;
- (id)hapServices;
- (id)hapValueUnits;
- (id)initWithCoder:(id)arg1;
- (BOOL)isStandardCharacteristicName:(id)arg1;
- (BOOL)isStandardCharacteristicType:(id)arg1;
- (BOOL)isStandardServiceName:(id)arg1;
- (BOOL)isStandardServiceType:(id)arg1;
- (id)mapCharacteristicValueType:(id)arg1;
- (id)mapFromAssistantCharacteristicValue:(id)arg1 name:(id)arg2;
- (id)mapFromAssistantServiceName:(id)arg1;
- (id)mapFromAssistantUnitName:(id)arg1;
- (id)mapReadCharcteristicFromAssistantName:(id)arg1;
- (id)mapToAssistantCharacteristicName:(id)arg1;
- (id)mapToAssistantCharacteristicValue:(id)arg1 name:(id)arg2;
- (id)mapToAssistantServiceName:(id)arg1;
- (id)mapToAssistantUnitName:(id)arg1;
- (id)mapWriteCharcteristicFromAssistantName:(id)arg1;
- (id)serviceTypeDescription:(id)arg1;
- (id)serviceTypeLocalizedDescription:(id)arg1;
- (void)setAssistantCharacteristics:(id)arg1;
- (void)setAssistantServices:(id)arg1;
- (void)setAssistantUnits:(id)arg1;
- (void)setHapCharacteristics:(id)arg1;
- (void)setHapServices:(id)arg1;
- (void)setHapValueUnits:(id)arg1;
- (void)setVersion:(id)arg1;
- (BOOL)supportsLocalization:(id)arg1;
- (id)version;

@end
