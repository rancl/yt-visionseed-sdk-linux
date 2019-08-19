/* Automatically generated nanopb header */
/* Generated by nanopb-0.3.9.2 at Sat Aug 17 23:26:03 2019. */

#ifndef PB_FILELISTRESULT_PB_H_INCLUDED
#define PB_FILELISTRESULT_PB_H_INCLUDED
#include <pb.h>

/* @@protoc_insertion_point(includes) */
#if PB_PROTO_HEADER_VERSION != 30
#error Regenerate this file with the current version of nanopb generator.
#endif

#ifdef __cplusplus
extern "C" {
#endif

/* Struct definitions */
typedef struct _FileInfo {
    char name[255];
    bool isFolder;
    int32_t size;
/* @@protoc_insertion_point(struct:FileInfo) */
} FileInfo;

typedef struct _FileListResult {
    char folder[255];
    int32_t total;
    pb_size_t files_count;
    FileInfo files[100];
/* @@protoc_insertion_point(struct:FileListResult) */
} FileListResult;

/* Default values for struct fields */

/* Initializer values for message structs */
#define FileInfo_init_default                    {"", 0, 0}
#define FileListResult_init_default              {"", 0, 0, {FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default, FileInfo_init_default}}
#define FileInfo_init_zero                       {"", 0, 0}
#define FileListResult_init_zero                 {"", 0, 0, {FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero, FileInfo_init_zero}}

/* Field tags (for use in manual encoding/decoding) */
#define FileInfo_name_tag                        1
#define FileInfo_isFolder_tag                    2
#define FileInfo_size_tag                        3
#define FileListResult_folder_tag                1
#define FileListResult_total_tag                 2
#define FileListResult_files_tag                 3

/* Struct field encoding specification for nanopb */
extern const pb_field_t FileInfo_fields[4];
extern const pb_field_t FileListResult_fields[4];

/* Maximum encoded size of messages (where known) */
#define FileInfo_size                            271
#define FileListResult_size                      27669

/* Message IDs (where set with "msgid" option) */
#ifdef PB_MSGID

#define FILELISTRESULT_MESSAGES \


#endif

#ifdef __cplusplus
} /* extern "C" */
#endif
/* @@protoc_insertion_point(eof) */

#endif
