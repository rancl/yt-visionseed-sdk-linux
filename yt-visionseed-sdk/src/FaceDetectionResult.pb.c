/* Automatically generated nanopb constant definitions */
/* Generated by nanopb-0.3.9.2 at Sat Aug 17 23:26:01 2019. */

#include "FaceDetectionResult.pb.h"

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif



const pb_field_t Rect_fields[5] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, Rect, x, x, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, Rect, y, x, 0),
    PB_FIELD(  3, INT32   , REQUIRED, STATIC  , OTHER, Rect, w, y, 0),
    PB_FIELD(  4, INT32   , REQUIRED, STATIC  , OTHER, Rect, h, w, 0),
    PB_LAST_FIELD
};

const pb_field_t Pose_fields[4] = {
    PB_FIELD(  1, FLOAT   , REQUIRED, STATIC  , FIRST, Pose, roll, roll, 0),
    PB_FIELD(  2, FLOAT   , REQUIRED, STATIC  , OTHER, Pose, yaw, roll, 0),
    PB_FIELD(  3, FLOAT   , REQUIRED, STATIC  , OTHER, Pose, pitch, yaw, 0),
    PB_LAST_FIELD
};

const pb_field_t FaceShape_fields[5] = {
    PB_FIELD(  1, FLOAT   , REPEATED, STATIC  , FIRST, FaceShape, x, x, 0),
    PB_FIELD(  2, FLOAT   , REPEATED, STATIC  , OTHER, FaceShape, y, x, 0),
    PB_FIELD(  3, FLOAT   , REPEATED, STATIC  , OTHER, FaceShape, visibility, y, 0),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, FaceShape, confidence, visibility, 0),
    PB_LAST_FIELD
};

const pb_field_t Face_fields[12] = {
    PB_FIELD(  1, MESSAGE , REQUIRED, STATIC  , FIRST, Face, rect, rect, &Rect_fields),
    PB_FIELD(  2, MESSAGE , OPTIONAL, STATIC  , OTHER, Face, shape, rect, &FaceShape_fields),
    PB_FIELD(  3, MESSAGE , OPTIONAL, STATIC  , OTHER, Face, pose, shape, &Pose_fields),
    PB_FIELD(  4, FLOAT   , REQUIRED, STATIC  , OTHER, Face, confidence, pose, 0),
    PB_FIELD(  5, UINT32  , OPTIONAL, STATIC  , OTHER, Face, traceId, confidence, 0),
    PB_FIELD(  9, FLOAT   , OPTIONAL, STATIC  , OTHER, Face, nameConfidence, traceId, 0),
    PB_FIELD( 10, STRING  , OPTIONAL, STATIC  , OTHER, Face, name, nameConfidence, 0),
    PB_FIELD( 11, INT32   , OPTIONAL, STATIC  , OTHER, Face, age, name, 0),
    PB_FIELD( 12, UENUM   , REPEATED, STATIC  , OTHER, Face, properties, age, 0),
    PB_FIELD( 13, UENUM   , OPTIONAL, STATIC  , OTHER, Face, gender, properties, 0),
    PB_FIELD( 14, BOOL    , OPTIONAL, STATIC  , OTHER, Face, alive, gender, 0),
    PB_LAST_FIELD
};

const pb_field_t FaceDetectionResult_fields[4] = {
    PB_FIELD(  1, INT32   , REQUIRED, STATIC  , FIRST, FaceDetectionResult, width, width, 0),
    PB_FIELD(  2, INT32   , REQUIRED, STATIC  , OTHER, FaceDetectionResult, height, width, 0),
    PB_FIELD(  3, MESSAGE , REPEATED, STATIC  , OTHER, FaceDetectionResult, face, height, &Face_fields),
    PB_LAST_FIELD
};




/* Check that field information fits in pb_field_t */
#if !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_32BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in 8 or 16 bit
 * field descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Face, rect) < 65536 && pb_membersize(Face, shape) < 65536 && pb_membersize(Face, pose) < 65536 && pb_membersize(FaceDetectionResult, face[0]) < 65536), YOU_MUST_DEFINE_PB_FIELD_32BIT_FOR_MESSAGES_Rect_Pose_FaceShape_Face_FaceDetectionResult)
#endif

#if !defined(PB_FIELD_16BIT) && !defined(PB_FIELD_32BIT)
/* If you get an error here, it means that you need to define PB_FIELD_16BIT
 * compile-time option. You can do that in pb.h or on compiler command line.
 * 
 * The reason you need to do this is that some of your messages contain tag
 * numbers or field sizes that are larger than what can fit in the default
 * 8 bit descriptors.
 */
PB_STATIC_ASSERT((pb_membersize(Face, rect) < 256 && pb_membersize(Face, shape) < 256 && pb_membersize(Face, pose) < 256 && pb_membersize(FaceDetectionResult, face[0]) < 256), YOU_MUST_DEFINE_PB_FIELD_16BIT_FOR_MESSAGES_Rect_Pose_FaceShape_Face_FaceDetectionResult)
#endif


/* @@protoc_insertion_point(eof) */
