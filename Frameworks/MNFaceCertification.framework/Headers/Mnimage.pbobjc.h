// Generated by the protocol buffer compiler.  DO NOT EDIT!
// source: MNImage.proto

// This CPP symbol can be defined to use imports that match up to the framework
// imports needed when using CocoaPods.
#if !defined(GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS)
 #define GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS 0
#endif

#if GPB_USE_PROTOBUF_FRAMEWORK_IMPORTS
 #import <Protobuf/GPBProtocolBuffers.h>
#else
 #import "GPBProtocolBuffers.h"
#endif

#if GOOGLE_PROTOBUF_OBJC_VERSION < 30002
#error This file was generated by a newer version of protoc which is incompatible with your Protocol Buffer library sources.
#endif
#if 30002 < GOOGLE_PROTOBUF_OBJC_MIN_SUPPORTED_VERSION
#error This file was generated by an older version of protoc which is incompatible with your Protocol Buffer library sources.
#endif

// @@protoc_insertion_point(imports)

#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Wdeprecated-declarations"

CF_EXTERN_C_BEGIN

@class MMPB_MNFace;
@class MMPB_MNImage;

NS_ASSUME_NONNULL_BEGIN

#pragma mark - MMPB_MnimageRoot

/**
 * Exposes the extension registry for this file.
 *
 * The base class provides:
 * @code
 *   + (GPBExtensionRegistry *)extensionRegistry;
 * @endcode
 * which is a @c GPBExtensionRegistry that includes all the extensions defined by
 * this file and all files that it depends on.
 **/
@interface MMPB_MnimageRoot : GPBRootObject
@end

#pragma mark - MMPB_MNFace

typedef GPB_ENUM(MMPB_MNFace_FieldNumber) {
  MMPB_MNFace_FieldNumber_FeatureId = 1,
  MMPB_MNFace_FieldNumber_TrackId = 2,
  MMPB_MNFace_FieldNumber_UniqueTrackId = 3,
  MMPB_MNFace_FieldNumber_RectX = 4,
  MMPB_MNFace_FieldNumber_RectY = 5,
  MMPB_MNFace_FieldNumber_RectWidth = 6,
  MMPB_MNFace_FieldNumber_RectHeight = 7,
  MMPB_MNFace_FieldNumber_Pitch = 8,
  MMPB_MNFace_FieldNumber_Roll = 9,
  MMPB_MNFace_FieldNumber_Yaw = 10,
  MMPB_MNFace_FieldNumber_Feature = 11,
};

@interface MMPB_MNFace : GPBMessage

@property(nonatomic, readwrite) int32_t featureId;

@property(nonatomic, readwrite) int32_t trackId;

@property(nonatomic, readwrite, copy, null_resettable) NSString *uniqueTrackId;

@property(nonatomic, readwrite) float rectX;

@property(nonatomic, readwrite) float rectY;

@property(nonatomic, readwrite) float rectWidth;

@property(nonatomic, readwrite) float rectHeight;

@property(nonatomic, readwrite) float pitch;

@property(nonatomic, readwrite) float roll;

@property(nonatomic, readwrite) float yaw;

@property(nonatomic, readwrite, copy, null_resettable) NSData *feature;

@end

#pragma mark - MMPB_MNImage

typedef GPB_ENUM(MMPB_MNImage_FieldNumber) {
  MMPB_MNImage_FieldNumber_ImageWidth = 1,
  MMPB_MNImage_FieldNumber_ImageHeight = 2,
  MMPB_MNImage_FieldNumber_ImgId = 3,
  MMPB_MNImage_FieldNumber_FacesArray = 4,
};

@interface MMPB_MNImage : GPBMessage

@property(nonatomic, readwrite) float imageWidth;

@property(nonatomic, readwrite) float imageHeight;

@property(nonatomic, readwrite, copy, null_resettable) NSString *imgId;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<MMPB_MNFace*> *facesArray;
/** The number of items in @c facesArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger facesArray_Count;

@end

#pragma mark - MMPB_MNImagesMsg

typedef GPB_ENUM(MMPB_MNImagesMsg_FieldNumber) {
  MMPB_MNImagesMsg_FieldNumber_LocationLat = 1,
  MMPB_MNImagesMsg_FieldNumber_LocationLng = 2,
  MMPB_MNImagesMsg_FieldNumber_ImgsArray = 3,
  MMPB_MNImagesMsg_FieldNumber_DeviceId = 4,
  MMPB_MNImagesMsg_FieldNumber_Version = 5,
  MMPB_MNImagesMsg_FieldNumber_PhoneModel = 6,
};

@interface MMPB_MNImagesMsg : GPBMessage

@property(nonatomic, readwrite) float locationLat;

@property(nonatomic, readwrite) float locationLng;

@property(nonatomic, readwrite, strong, null_resettable) NSMutableArray<MMPB_MNImage*> *imgsArray;
/** The number of items in @c imgsArray without causing the array to be created. */
@property(nonatomic, readonly) NSUInteger imgsArray_Count;

@property(nonatomic, readwrite, copy, null_resettable) NSString *deviceId;

/** 18122601 年月日+序号 */
@property(nonatomic, readwrite) int32_t version;

@property(nonatomic, readwrite, copy, null_resettable) NSString *phoneModel;

@end

NS_ASSUME_NONNULL_END

CF_EXTERN_C_END

#pragma clang diagnostic pop

// @@protoc_insertion_point(global_scope)