/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@class NSError, NSURL, RCCompositionComposedAssetWriter;

@interface RCTrimAudioFileOperation : RCTrimTimeRangeOperation {
    RCCompositionComposedAssetWriter *_assetWriter;
    BOOL _createWaveform;
    NSURL *_destinationURL;
    NSError *_error;
    double _exportedDuration;
    NSURL *_sourceURL;
    BOOL _success;
}

@property(readonly) BOOL createWaveform;
@property(copy,readonly) NSURL * destinationURL;
@property(copy,readonly) NSURL * sourceURL;

+ (id)exportableAudioFormatPathExtensionWithSourceURL:(id)arg1;

- (void).cxx_destruct;
- (void)cancel;
- (BOOL)createWaveform;
- (id)destinationURL;
- (id)error;
- (double)exportedDuration;
- (id)initWithSourceURL:(id)arg1 destinationURL:(id)arg2 createWaveform:(BOOL)arg3 timeRange:(struct { double x1; double x2; })arg4 trimMode:(int)arg5;
- (void)main;
- (double)progress;
- (id)sourceURL;
- (BOOL)success;

@end