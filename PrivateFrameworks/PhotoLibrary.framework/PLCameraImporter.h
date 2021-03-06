/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

@class <PLCameraImporterDelegate>, ICCameraDevice, NSMutableArray, NSMutableDictionary, NSString, PLCameraImportQueue, PLImportFileManager, PLMutableCameraImportQueue;

@interface PLCameraImporter : NSObject <ICCameraDeviceDelegate, ICDeviceDelegate> {
    BOOL _autosplitEvents;
    ICCameraDevice *_camera;
    NSMutableArray *_coalescedDeletedItems;
    id _delegate;
    PLCameraImportQueue *_deleteQueue;
    PLCameraImportQueue *_downloadQueue;
    int _eventSplitGranularity;
    PLImportFileManager *_importFileManager;
    BOOL _importInProgress;
    BOOL _importItemInProgress;
    PLCameraImportQueue *_importQueue;
    BOOL _isAppleDevice;
    NSMutableArray *_items;
    NSMutableDictionary *_itemsMapping;
    NSMutableArray *_orphanItems;
    NSMutableDictionary *_parentFolderMapping;
    BOOL _stopAfterNextItemImport;
    PLMutableCameraImportQueue *_thumbnailQueue;
    NSString *importSessionIdentifier;
}

@property(retain) ICCameraDevice * camera;
@property(copy,readonly) NSString * debugDescription;
@property <PLCameraImporterDelegate> * delegate;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(copy) NSString * importSessionIdentifier;
@property BOOL isAppleDevice;
@property(retain) NSMutableArray * items;
@property(retain) NSMutableDictionary * itemsMapping;
@property(readonly) Class superclass;

- (void)_addImportItemFromCameraFile:(id)arg1;
- (void)_clearImportItemsForDownload:(id)arg1;
- (void)_coalescedRemoveImportItems;
- (void)_deleteImportItemFromDisk:(id)arg1;
- (void)_deleteImportItems:(id)arg1;
- (void)_deleteImportItemsFromDiskInBackground:(id)arg1;
- (void)_didFinishDeletingItems:(id)arg1;
- (void)_didFinishImportingItems:(id)arg1;
- (void)_downloadImportItems:(id)arg1;
- (void)_photoLibraryFinishedImportForPhoto:(id)arg1 atPath:(id)arg2 error:(id)arg3;
- (void)_removeImportItemsAtPathsInBackground:(id)arg1;
- (void)_separateItems:(id)arg1 intoEventsWithGranularity:(int)arg2;
- (void)_stopImport;
- (void)addImportItemsFromCameraFiles:(id)arg1;
- (id)allImportItems;
- (unsigned long long)approximateBytesRequiredToImportItem:(id)arg1;
- (void)camaraDidEnumerateContents;
- (id)camera;
- (void)cameraDevice:(id)arg1 didAddItems:(id)arg2;
- (void)cameraDevice:(id)arg1 didReceiveMetadata:(id)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didReceiveThumbnail:(struct CGImage { }*)arg2 forItem:(id)arg3 error:(id)arg4;
- (void)cameraDevice:(id)arg1 didRemoveItems:(id)arg2;
- (void)cameraDidError:(id)arg1;
- (id)cameraKind;
- (id)cameraName;
- (unsigned int)contentPercentCompleted;
- (void)dealloc;
- (id)delegate;
- (void)device:(id)arg1 didCloseSessionWithError:(id)arg2;
- (void)device:(id)arg1 didEncounterError:(id)arg2;
- (void)device:(id)arg1 didOpenSessionWithError:(id)arg2;
- (void)deviceDidBecomeReady:(id)arg1;
- (BOOL)deviceIsLocked;
- (void)didConnectToCamera:(id)arg1 error:(id)arg2;
- (void)didDisconnectFromCamera:(id)arg1 error:(id)arg2;
- (void)didDownloadFile:(id)arg1 error:(id)arg2 options:(id)arg3 contextInfo:(void*)arg4;
- (void)didImportImportItem:(id)arg1 error:(id)arg2;
- (void)didReceiveImportNotification:(id)arg1;
- (void)didReceiveMetadata:(id)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)didReceiveThumbnail:(struct CGImage { }*)arg1 forCameraFile:(id)arg2 error:(id)arg3;
- (void)didReceiveThumbnail:(struct CGImage { }*)arg1 forImportItem:(id)arg2 error:(id)arg3;
- (void)didRemoveDevice:(id)arg1;
- (void)ejectCamera;
- (unsigned int)estimatedNumberOfItems;
- (void)importImportItem:(id)arg1;
- (id)importItemForCameraFile:(id)arg1;
- (void)importItems:(id)arg1;
- (id)importSessionIdentifier;
- (id)initWithDevice:(id)arg1 delegate:(id)arg2;
- (BOOL)isAppleDevice;
- (BOOL)isImporting;
- (id)items;
- (id)itemsMapping;
- (void)readImportItems;
- (void)readMetadataForImportItems:(id)arg1;
- (void)readThumbnailsForImportItems:(id)arg1;
- (void)removeImportItemsForCameraFiles:(id)arg1;
- (void)removeItems:(id)arg1;
- (void)setCamera:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setImportSessionIdentifier:(id)arg1;
- (void)setIsAppleDevice:(BOOL)arg1;
- (void)setItems:(id)arg1;
- (void)setItemsMapping:(id)arg1;
- (void)stopImport;

@end
