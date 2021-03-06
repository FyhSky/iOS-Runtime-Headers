/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSMachPort : NSPort {
    id _delegate;
    unsigned int _flags;
    unsigned int _machPort;
    unsigned int _reserved;
}

@property(readonly) unsigned int machPort;

+ (void)_fixNSMachPortLeak;
+ (id)port;
+ (id)portWithMachPort:(unsigned int)arg1;
+ (id)portWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
+ (void)resetAllPorts;
+ (BOOL)sendBeforeTime:(double)arg1 streamData:(id)arg2 components:(id)arg3 to:(id)arg4 from:(id)arg5 msgid:(unsigned int)arg6 reserved:(unsigned int)arg7;

- (unsigned long)_cfTypeID;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (void)dealloc;
- (id)delegate;
- (void)finalize;
- (unsigned int)hash;
- (id)init;
- (id)initWithMachPort:(unsigned int)arg1;
- (id)initWithMachPort:(unsigned int)arg1 options:(unsigned int)arg2;
- (void)invalidate;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isKindOfClass:(Class)arg1;
- (BOOL)isMemberOfClass:(Class)arg1;
- (BOOL)isValid;
- (unsigned int)machPort;
- (oneway void)release;
- (void)removeFromRunLoop:(id)arg1 forMode:(id)arg2;
- (id)retain;
- (unsigned int)retainCount;
- (void)scheduleInRunLoop:(id)arg1 forMode:(id)arg2;
- (BOOL)sendBeforeDate:(id)arg1 components:(id)arg2 from:(id)arg3 reserved:(unsigned int)arg4;
- (BOOL)sendBeforeDate:(id)arg1 msgid:(unsigned int)arg2 components:(id)arg3 from:(id)arg4 reserved:(unsigned int)arg5;
- (BOOL)sendBeforeTime:(double)arg1 streamData:(void*)arg2 components:(id)arg3 from:(id)arg4 msgid:(unsigned int)arg5;
- (void)setDelegate:(id)arg1;

@end
