/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Sat Aug 17 23:26:03 2019. */

#ifndef PB_REGISTERFACEIDWITHPICPARAMS_PB_H_INCLUDED
#define PB_REGISTERFACEIDWITHPICPARAMS_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _FaceIdInfo {
    int32_t faceId;
    char faceName[32];
/* @@protoc_insertion_point(struct:FaceIdInfo) */
} FaceIdInfo;

typedef struct _ListFaceIdParams {
    int32_t start;
    int32_t length;
/* @@protoc_insertion_point(struct:ListFaceIdParams) */
} ListFaceIdParams;

typedef struct _RegisterFaceIdFromCameraParams {
    char faceName[32];
    int32_t timeoutMs;
/* @@protoc_insertion_point(struct:RegisterFaceIdFromCameraParams) */
} RegisterFaceIdFromCameraParams;

typedef struct _RegisterFaceIdWithPicParams {
    char faceName[32];
    char filePath[255];
/* @@protoc_insertion_point(struct:RegisterFaceIdWithPicParams) */
} RegisterFaceIdWithPicParams;

typedef struct _SetFaceIdParams {
    int32_t faceId;
    char faceName[32];
/* @@protoc_insertion_point(struct:SetFaceIdParams) */
} SetFaceIdParams;

typedef struct _FaceIdListData {
    int32_t start;
    pb_size_t faces_count;
    FaceIdInfo faces[100];
/* @@protoc_insertion_point(struct:FaceIdListData) */
} FaceIdListData;

/* Default values for struct fields */

/* Initializer values for message structs */
#define RegisterFaceIdWithPicParams_init_default {"", ""}
#define RegisterFaceIdFromCameraParams_init_default {"", 0}
#define SetFaceIdParams_init_default             {0, ""}
#define ListFaceIdParams_init_default            {0, 0}
#define FaceIdInfo_init_default                  {0, ""}
#define FaceIdListData_init_default              {0, 0, {FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default, FaceIdInfo_init_default}}
#define RegisterFaceIdWithPicParams_init_zero    {"", ""}
#define RegisterFaceIdFromCameraParams_init_zero {"", 0}
#define SetFaceIdParams_init_zero                {0, ""}
#define ListFaceIdParams_init_zero               {0, 0}
#define FaceIdInfo_init_zero                     {0, ""}
#define FaceIdListData_init_zero                 {0, 0, {FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero, FaceIdInfo_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define FaceIdInfo_faceId_tag                    1
#define FaceIdInfo_faceName_tag                  2
#define ListFaceIdParams_start_tag               1
#define ListFaceIdParams_length_tag              2
#define RegisterFaceIdFromCameraParams_faceName_tag 1
#define RegisterFaceIdFromCameraParams_timeoutMs_tag 2
#define RegisterFaceIdWithPicParams_faceName_tag 1
#define RegisterFaceIdWithPicParams_filePath_tag 2
#define SetFaceIdParams_faceId_tag               1
#define SetFaceIdParams_faceName_tag             2
#define FaceIdListData_start_tag                 1
#define FaceIdListData_faces_tag                 2

/* Struct field encoding specification for nanopb */
extern const pb_field_t RegisterFaceIdWithPicParams_fields[3];
extern const pb_field_t RegisterFaceIdFromCameraParams_fields[3];
extern const pb_field_t SetFaceIdParams_fields[3];
extern const pb_field_t ListFaceIdParams_fields[3];
extern const pb_field_t FaceIdInfo_fields[3];
extern const pb_field_t FaceIdListData_fields[3];

/* Maximum encoded size of messages (where known) */
#define RegisterFaceIdWithPicParams_size         292
#define RegisterFaceIdFromCameraParams_size      45
#define SetFaceIdParams_size                     45
#define ListFaceIdParams_size                    22
#define FaceIdInfo_size                          45
#define FaceIdListData_size                      4711

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define REGISTERFACEIDWITHPICPARAMS_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
