/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@class HKUnit;

@interface HKQuantity : NSObject <NSCopying, NSSecureCoding> {
    HKUnit *_unit;
    double _value;
}

@property(getter=_unit,readonly) HKUnit * unit;

+ (id)quantityWithUnit:(id)arg1 doubleValue:(double)arg2;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_initWithUnit:(id)arg1 doubleValue:(double)arg2;
- (id)_quantityByAddingQuantity:(id)arg1;
- (id)_unit;
- (int)compare:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (double)doubleValueForUnit:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isCompatibleWithUnit:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
