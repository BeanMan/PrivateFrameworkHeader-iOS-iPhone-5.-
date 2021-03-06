/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/ImageCapture.framework/ImageCapture
 */

@class NSMutableArray, NSMutableData, NSString;

@interface PTPDeviceInfoDataset : NSObject  {
    NSMutableData *_content;
    BOOL _dirty;
    unsigned short _standardVersion;
    unsigned int _vendorExtensionID;
    unsigned short _vendorExtensionVersion;
    NSString *_vendorExtensionDescription;
    unsigned short _functionalMode;
    NSMutableArray *_operationsSupported;
    NSMutableArray *_eventsSupported;
    NSMutableArray *_devicePropertiesSupported;
    NSMutableArray *_captureFormats;
    NSMutableArray *_imageFormats;
    NSString *_manufacturer;
    NSString *_model;
    NSString *_deviceVersion;
    NSString *_serialNumber;
    BOOL _readOnlyObject;
}


- (void)setStandardVersion:(unsigned short)arg1;
- (unsigned long)vendorExtensionID;
- (void)setVendorExtensionID:(unsigned long)arg1;
- (unsigned short)vendorExtensionVersion;
- (void)setVendorExtensionVersion:(unsigned short)arg1;
- (id)vendorExtensionDescription;
- (void)setVendorExtensionDescription:(id)arg1;
- (unsigned short)functionalMode;
- (void)setFunctionalMode:(unsigned short)arg1;
- (void)setOperationsSupported:(id)arg1;
- (id)eventsSupported;
- (void)setEventsSupported:(id)arg1;
- (void)setDevicePropertiesSupported:(id)arg1;
- (id)captureFormats;
- (void)setCaptureFormats:(id)arg1;
- (id)imageFormats;
- (void)setImageFormats:(id)arg1;
- (id)manufacturer;
- (void)setManufacturer:(id)arg1;
- (id)deviceVersion;
- (void)setDeviceVersion:(id)arg1;
- (void)setSerialNumber:(id)arg1;
- (id)canonicalManufacturer;
- (void)updateContent;
- (unsigned short)standardVersion;
- (id)initWithMutableData:(id)arg1;
- (id)devicePropertiesSupported;
- (id)operationsSupported;
- (void)setContent:(id)arg1;
- (id)serialNumber;
- (id)model;
- (id)content;
- (id)initWithData:(id)arg1;
- (id)description;
- (id)init;
- (void)dealloc;
- (void)setModel:(id)arg1;

@end
