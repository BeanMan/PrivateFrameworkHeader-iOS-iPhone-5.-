/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLPhotoLibrary, PLCurrentThumbnailsInformation, NSFileManager;

@interface PLModelMigrator : NSObject  {
    double startTime;
    NSFileManager *_fileManager;
    BOOL _didBeginTransaction;
    PLPhotoLibrary *_photoLibrary;
    long _photoLibraryOnce;
    PLCurrentThumbnailsInformation *_thumbnailsInformation;
}

@property(retain) NSFileManager * fileManager;
@property(readonly) PLPhotoLibrary * photoLibrary;
@property(retain) PLCurrentThumbnailsInformation * _thumbnailsInformation;

+ (void)recalculateCachedCounts;
+ (void)dontImportFileSystemDataIntoDatabase;
+ (long long)secondsNeededToCleanupModelAfteriTunesRestore;
+ (void)cleanupModelAfterRestoreFromiTunes;
+ (void)recreateThumbnailTablesIfNecessary;
+ (void)loadFileSystemDataIntoDatabase;
+ (id)modelMigrator;
+ (BOOL)restartingAfterOTAMigration;
+ (void)addSingletonObjectsToContext:(id)arg1;
+ (void)createDatabase;
+ (BOOL)didImportFileSystemAssets;

- (void)importFileSystemImportAssets:(id)arg1;
- (void)collectContentsOfDirectoryURL:(id)arg1 forAddingToAlbum:(id)arg2 intoAssetsArray:(id)arg3 isPhotoStream:(BOOL)arg4 isSavedPhotos:(BOOL)arg5 isCameraKit:(BOOL)arg6;
- (BOOL)shouldRebuildDCIMSubDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isCameraKit:(BOOL*)arg3;
- (BOOL)shouldRebuildDCIMDirectoryAtURL:(id)arg1 directoryEnumerator:(id)arg2 isPhotoStream:(BOOL*)arg3;
- (void)_importAllDCIMAssets;
- (void)set_thumbnailsInformation:(id)arg1;
- (id)_thumbnailsInformation;
- (id)fileManager;
- (void)setFileManager:(id)arg1;
- (void)dontImportFileSystemDataIntoDatabase;
- (BOOL)restartingAfterOTADataMigration;
- (long long)secondsNeededToCleanupModelAfteriTunesRestore;
- (void)recalculateCachedCountsWithSemaphore:(struct dispatch_semaphore_s { }*)arg1;
- (void)cleanupModelAfterRestoreFromiTunes;
- (void)recreateThumbnailTablesIfNecessary;
- (void)loadFileSystemDataIntoDatabase;
- (void)setDidImportFileSystemAssets:(BOOL)arg1;
- (void)pausePhotoStreams;
- (void)resumePhotoStreams;
- (id)photoLibrary;
- (id)init;
- (void)dealloc;

@end
