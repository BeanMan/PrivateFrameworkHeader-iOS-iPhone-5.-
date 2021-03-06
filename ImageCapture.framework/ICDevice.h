/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class DeviceManager, <ICDeviceDelegate>, NSString;

@interface ICDevice : NSObject  {
    void *_deviceProperties;
}

@property <ICDeviceDelegate> * delegate;
@property(copy) NSString * name;
@property(copy) NSString * productKind;
@property(readonly) struct CGImage { }* icon;
@property(copy) NSString * transportType;
@property(copy) NSString * UUIDString;
@property BOOL hasOpenSession;
@property int usbLocationID;
@property int usbProductID;
@property int usbVendorID;
@property DeviceManager * deviceManager;
@property BOOL autoOpenSession;
@property BOOL openSessionPending;
@property BOOL closeSessionPending;


- (void)setDelegate:(id)arg1;
- (void)finalize;
- (void)requestCloseSession;
- (void)handleCommandCompletionNotification:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)setProductKind:(id)arg1;
- (void)setTransportType:(id)arg1;
- (void)setUUIDString:(id)arg1;
- (int)usbLocationID;
- (int)usbProductID;
- (int)usbVendorID;
- (id)deviceManager;
- (void)setDeviceManager:(id)arg1;
- (void)setUsbLocationID:(int)arg1;
- (void)setUsbProductID:(int)arg1;
- (void)setUsbVendorID:(int)arg1;
- (BOOL)hasOpenSession;
- (void)setHasOpenSession:(BOOL)arg1;
- (BOOL)autoOpenSession;
- (BOOL)openSessionPending;
- (BOOL)closeSessionPending;
- (void)setAutoOpenSession:(BOOL)arg1;
- (void)setOpenSessionPending:(BOOL)arg1;
- (void)setCloseSessionPending:(BOOL)arg1;
- (id)valueForUndefinedKey:(id)arg1;
- (id)transportType;
- (struct CGImage { }*)icon;
- (id)name;
- (id)delegate;
- (id)UUIDString;
- (void)requestOpenSession;
- (id)productKind;
- (void)setName:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (BOOL)isCameraDevice;

@end
