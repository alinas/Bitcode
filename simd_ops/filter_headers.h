#ifndef HALIDE__test_op_addpd_190_h
#define HALIDE__test_op_addpd_190_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_addpd_190(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_addpd_190_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_addpd_190_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_addpd_190_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_addpd_205_h
#define HALIDE__test_op_addpd_205_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_addpd_205(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_addpd_205_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_addpd_205_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_addpd_205_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_addpd_220_h
#define HALIDE__test_op_addpd_220_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_addpd_220(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_addpd_220_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_addpd_220_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_addpd_220_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_addps_117_h
#define HALIDE__test_op_addps_117_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_addps_117(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_addps_117_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_addps_117_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_addps_117_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_addps_165_h
#define HALIDE__test_op_addps_165_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_addps_165(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_addps_165_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_addps_165_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_addps_165_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_addps_21_h
#define HALIDE__test_op_addps_21_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_addps_21(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_addps_21_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_addps_21_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_addps_21_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_addps_69_h
#define HALIDE__test_op_addps_69_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_addps_69(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_addps_69_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_addps_69_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_addps_69_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_andps_186_h
#define HALIDE__test_op_andps_186_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_andps_186(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_andps_186_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_andps_186_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_andps_186_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_blendvpd_254_h
#define HALIDE__test_op_blendvpd_254_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_blendvpd_254(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_blendvpd_254_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_blendvpd_254_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_blendvpd_254_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_blendvpd_277_h
#define HALIDE__test_op_blendvpd_277_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_blendvpd_277(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_blendvpd_277_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_blendvpd_277_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_blendvpd_277_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_blendvpd_300_h
#define HALIDE__test_op_blendvpd_300_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_blendvpd_300(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_blendvpd_300_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_blendvpd_300_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_blendvpd_300_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_blendvps_253_h
#define HALIDE__test_op_blendvps_253_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_blendvps_253(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_blendvps_253_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_blendvps_253_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_blendvps_253_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_blendvps_276_h
#define HALIDE__test_op_blendvps_276_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_blendvps_276(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_blendvps_276_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_blendvps_276_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_blendvps_276_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_blendvps_299_h
#define HALIDE__test_op_blendvps_299_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_blendvps_299(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_blendvps_299_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_blendvps_299_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_blendvps_299_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpeqpd_197_h
#define HALIDE__test_op_cmpeqpd_197_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpeqpd_197(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpeqpd_197_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpeqpd_197_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpeqpd_197_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpeqpd_212_h
#define HALIDE__test_op_cmpeqpd_212_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpeqpd_212(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpeqpd_212_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpeqpd_212_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpeqpd_212_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpeqpd_227_h
#define HALIDE__test_op_cmpeqpd_227_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpeqpd_227(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpeqpd_227_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpeqpd_227_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpeqpd_227_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpeqps_136_h
#define HALIDE__test_op_cmpeqps_136_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpeqps_136(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpeqps_136_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpeqps_136_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpeqps_136_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpeqps_184_h
#define HALIDE__test_op_cmpeqps_184_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpeqps_184(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpeqps_184_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpeqps_184_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpeqps_184_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpeqps_40_h
#define HALIDE__test_op_cmpeqps_40_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpeqps_40(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpeqps_40_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpeqps_40_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpeqps_40_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpeqps_88_h
#define HALIDE__test_op_cmpeqps_88_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpeqps_88(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpeqps_88_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpeqps_88_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpeqps_88_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpltpd_198_h
#define HALIDE__test_op_cmpltpd_198_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpltpd_198(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpltpd_198_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpltpd_198_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpltpd_198_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpltpd_213_h
#define HALIDE__test_op_cmpltpd_213_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpltpd_213(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpltpd_213_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpltpd_213_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpltpd_213_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpltpd_228_h
#define HALIDE__test_op_cmpltpd_228_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpltpd_228(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpltpd_228_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpltpd_228_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpltpd_228_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpltps_137_h
#define HALIDE__test_op_cmpltps_137_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpltps_137(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpltps_137_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpltps_137_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpltps_137_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpltps_185_h
#define HALIDE__test_op_cmpltps_185_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpltps_185(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpltps_185_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpltps_185_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpltps_185_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpltps_41_h
#define HALIDE__test_op_cmpltps_41_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpltps_41(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpltps_41_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpltps_41_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpltps_41_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_cmpltps_89_h
#define HALIDE__test_op_cmpltps_89_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_cmpltps_89(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_cmpltps_89_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_cmpltps_89_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_cmpltps_89_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_divpd_193_h
#define HALIDE__test_op_divpd_193_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_divpd_193(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_divpd_193_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_divpd_193_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_divpd_193_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_divpd_208_h
#define HALIDE__test_op_divpd_208_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_divpd_208(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_divpd_208_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_divpd_208_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_divpd_208_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_divpd_223_h
#define HALIDE__test_op_divpd_223_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_divpd_223(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_divpd_223_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_divpd_223_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_divpd_223_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_maxpd_195_h
#define HALIDE__test_op_maxpd_195_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_maxpd_195(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_maxpd_195_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_maxpd_195_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_maxpd_195_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_maxpd_210_h
#define HALIDE__test_op_maxpd_210_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_maxpd_210(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_maxpd_210_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_maxpd_210_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_maxpd_210_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_maxpd_225_h
#define HALIDE__test_op_maxpd_225_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_maxpd_225(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_maxpd_225_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_maxpd_225_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_maxpd_225_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_maxps_123_h
#define HALIDE__test_op_maxps_123_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_maxps_123(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_maxps_123_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_maxps_123_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_maxps_123_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_maxps_171_h
#define HALIDE__test_op_maxps_171_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_maxps_171(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_maxps_171_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_maxps_171_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_maxps_171_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_maxps_27_h
#define HALIDE__test_op_maxps_27_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_maxps_27(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_maxps_27_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_maxps_27_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_maxps_27_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_maxps_75_h
#define HALIDE__test_op_maxps_75_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_maxps_75(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_maxps_75_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_maxps_75_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_maxps_75_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_minpd_196_h
#define HALIDE__test_op_minpd_196_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_minpd_196(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_minpd_196_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_minpd_196_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_minpd_196_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_minpd_211_h
#define HALIDE__test_op_minpd_211_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_minpd_211(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_minpd_211_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_minpd_211_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_minpd_211_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_minpd_226_h
#define HALIDE__test_op_minpd_226_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_minpd_226(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_minpd_226_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_minpd_226_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_minpd_226_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_minps_124_h
#define HALIDE__test_op_minps_124_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_minps_124(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_minps_124_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_minps_124_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_minps_124_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_minps_172_h
#define HALIDE__test_op_minps_172_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_minps_172(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_minps_172_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_minps_172_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_minps_172_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_minps_28_h
#define HALIDE__test_op_minps_28_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_minps_28(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_minps_28_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_minps_28_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_minps_28_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_minps_76_h
#define HALIDE__test_op_minps_76_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_minps_76(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_minps_76_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_minps_76_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_minps_76_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_mulpd_192_h
#define HALIDE__test_op_mulpd_192_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_mulpd_192(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_mulpd_192_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_mulpd_192_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_mulpd_192_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_mulpd_207_h
#define HALIDE__test_op_mulpd_207_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_mulpd_207(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_mulpd_207_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_mulpd_207_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_mulpd_207_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_mulpd_222_h
#define HALIDE__test_op_mulpd_222_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_mulpd_222(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_mulpd_222_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_mulpd_222_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_mulpd_222_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_mulps_119_h
#define HALIDE__test_op_mulps_119_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_mulps_119(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_mulps_119_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_mulps_119_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_mulps_119_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_mulps_167_h
#define HALIDE__test_op_mulps_167_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_mulps_167(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_mulps_167_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_mulps_167_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_mulps_167_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_mulps_23_h
#define HALIDE__test_op_mulps_23_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_mulps_23(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_mulps_23_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_mulps_23_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_mulps_23_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_mulps_71_h
#define HALIDE__test_op_mulps_71_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_mulps_71(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_mulps_71_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_mulps_71_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_mulps_71_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_orps_187_h
#define HALIDE__test_op_orps_187_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_orps_187(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_orps_187_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_orps_187_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_orps_187_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsb_235_h
#define HALIDE__test_op_pabsb_235_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsb_235(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsb_235_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsb_235_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsb_235_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsb_238_h
#define HALIDE__test_op_pabsb_238_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsb_238(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsb_238_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsb_238_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsb_238_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsb_241_h
#define HALIDE__test_op_pabsb_241_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsb_241(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsb_241_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsb_241_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsb_241_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsd_237_h
#define HALIDE__test_op_pabsd_237_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsd_237(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsd_237_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsd_237_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsd_237_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsd_240_h
#define HALIDE__test_op_pabsd_240_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsd_240(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsd_240_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsd_240_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsd_240_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsd_243_h
#define HALIDE__test_op_pabsd_243_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsd_243(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsd_243_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsd_243_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsd_243_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsw_236_h
#define HALIDE__test_op_pabsw_236_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsw_236(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsw_236_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsw_236_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsw_236_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsw_239_h
#define HALIDE__test_op_pabsw_239_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsw_239(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsw_239_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsw_239_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsw_239_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pabsw_242_h
#define HALIDE__test_op_pabsw_242_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pabsw_242(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pabsw_242_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pabsw_242_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pabsw_242_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packssdw_202_h
#define HALIDE__test_op_packssdw_202_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packssdw_202(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packssdw_202_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packssdw_202_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packssdw_202_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packssdw_217_h
#define HALIDE__test_op_packssdw_217_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packssdw_217(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packssdw_217_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packssdw_217_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packssdw_217_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packssdw_232_h
#define HALIDE__test_op_packssdw_232_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packssdw_232(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packssdw_232_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packssdw_232_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packssdw_232_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packsswb_203_h
#define HALIDE__test_op_packsswb_203_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packsswb_203(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packsswb_203_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packsswb_203_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packsswb_203_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packsswb_218_h
#define HALIDE__test_op_packsswb_218_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packsswb_218(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packsswb_218_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packsswb_218_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packsswb_218_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packsswb_233_h
#define HALIDE__test_op_packsswb_233_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packsswb_233(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packsswb_233_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packsswb_233_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packsswb_233_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packusdw_273_h
#define HALIDE__test_op_packusdw_273_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packusdw_273(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packusdw_273_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packusdw_273_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packusdw_273_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packusdw_296_h
#define HALIDE__test_op_packusdw_296_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packusdw_296(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packusdw_296_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packusdw_296_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packusdw_296_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packusdw_319_h
#define HALIDE__test_op_packusdw_319_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packusdw_319(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packusdw_319_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packusdw_319_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packusdw_319_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packuswb_204_h
#define HALIDE__test_op_packuswb_204_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packuswb_204(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packuswb_204_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packuswb_204_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packuswb_204_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packuswb_219_h
#define HALIDE__test_op_packuswb_219_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packuswb_219(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packuswb_219_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packuswb_219_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packuswb_219_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_packuswb_234_h
#define HALIDE__test_op_packuswb_234_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_packuswb_234(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_packuswb_234_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_packuswb_234_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_packuswb_234_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddb_138_h
#define HALIDE__test_op_paddb_138_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddb_138(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddb_138_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddb_138_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddb_138_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddb_42_h
#define HALIDE__test_op_paddb_42_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddb_42(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddb_42_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddb_42_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddb_42_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddb_90_h
#define HALIDE__test_op_paddb_90_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddb_90(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddb_90_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddb_90_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddb_90_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddd_143_h
#define HALIDE__test_op_paddd_143_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddd_143(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddd_143_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddd_143_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddd_143_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddd_47_h
#define HALIDE__test_op_paddd_47_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddd_47(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddd_47_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddd_47_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddd_47_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddd_95_h
#define HALIDE__test_op_paddd_95_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddd_95(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddd_95_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddd_95_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddd_95_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddq_199_h
#define HALIDE__test_op_paddq_199_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddq_199(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddq_199_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddq_199_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddq_199_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddq_214_h
#define HALIDE__test_op_paddq_214_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddq_214(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddq_214_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddq_214_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddq_214_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddq_229_h
#define HALIDE__test_op_paddq_229_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddq_229(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddq_229_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddq_229_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddq_229_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsb_145_h
#define HALIDE__test_op_paddsb_145_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsb_145(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsb_145_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsb_145_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsb_145_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsb_146_h
#define HALIDE__test_op_paddsb_146_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsb_146(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsb_146_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsb_146_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsb_146_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsb_1_h
#define HALIDE__test_op_paddsb_1_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsb_1(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsb_1_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsb_1_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsb_1_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsb_2_h
#define HALIDE__test_op_paddsb_2_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsb_2(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsb_2_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsb_2_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsb_2_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsb_49_h
#define HALIDE__test_op_paddsb_49_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsb_49(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsb_49_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsb_49_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsb_49_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsb_50_h
#define HALIDE__test_op_paddsb_50_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsb_50(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsb_50_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsb_50_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsb_50_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsb_97_h
#define HALIDE__test_op_paddsb_97_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsb_97(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsb_97_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsb_97_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsb_97_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsb_98_h
#define HALIDE__test_op_paddsb_98_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsb_98(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsb_98_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsb_98_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsb_98_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsw_102_h
#define HALIDE__test_op_paddsw_102_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsw_102(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsw_102_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsw_102_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsw_102_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsw_150_h
#define HALIDE__test_op_paddsw_150_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsw_150(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsw_150_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsw_150_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsw_150_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsw_54_h
#define HALIDE__test_op_paddsw_54_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsw_54(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsw_54_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsw_54_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsw_54_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddsw_6_h
#define HALIDE__test_op_paddsw_6_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddsw_6(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddsw_6_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddsw_6_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddsw_6_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddusb_100_h
#define HALIDE__test_op_paddusb_100_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddusb_100(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddusb_100_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddusb_100_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddusb_100_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddusb_148_h
#define HALIDE__test_op_paddusb_148_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddusb_148(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddusb_148_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddusb_148_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddusb_148_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddusb_4_h
#define HALIDE__test_op_paddusb_4_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddusb_4(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddusb_4_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddusb_4_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddusb_4_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddusb_52_h
#define HALIDE__test_op_paddusb_52_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddusb_52(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddusb_52_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddusb_52_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddusb_52_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddusw_104_h
#define HALIDE__test_op_paddusw_104_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddusw_104(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddusw_104_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddusw_104_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddusw_104_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddusw_152_h
#define HALIDE__test_op_paddusw_152_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddusw_152(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddusw_152_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddusw_152_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddusw_152_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddusw_56_h
#define HALIDE__test_op_paddusw_56_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddusw_56(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddusw_56_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddusw_56_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddusw_56_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddusw_8_h
#define HALIDE__test_op_paddusw_8_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddusw_8(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddusw_8_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddusw_8_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddusw_8_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddw_140_h
#define HALIDE__test_op_paddw_140_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddw_140(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddw_140_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddw_140_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddw_140_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddw_44_h
#define HALIDE__test_op_paddw_44_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddw_44(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddw_44_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddw_44_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddw_44_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_paddw_92_h
#define HALIDE__test_op_paddw_92_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_paddw_92(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_paddw_92_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_paddw_92_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_paddw_92_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgb_125_h
#define HALIDE__test_op_pavgb_125_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgb_125(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgb_125_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgb_125_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgb_125_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgb_126_h
#define HALIDE__test_op_pavgb_126_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgb_126(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgb_126_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgb_126_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgb_126_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgb_173_h
#define HALIDE__test_op_pavgb_173_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgb_173(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgb_173_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgb_173_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgb_173_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgb_174_h
#define HALIDE__test_op_pavgb_174_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgb_174(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgb_174_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgb_174_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgb_174_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgb_29_h
#define HALIDE__test_op_pavgb_29_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgb_29(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgb_29_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgb_29_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgb_29_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgb_30_h
#define HALIDE__test_op_pavgb_30_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgb_30(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgb_30_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgb_30_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgb_30_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgb_77_h
#define HALIDE__test_op_pavgb_77_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgb_77(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgb_77_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgb_77_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgb_77_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgb_78_h
#define HALIDE__test_op_pavgb_78_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgb_78(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgb_78_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgb_78_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgb_78_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgw_127_h
#define HALIDE__test_op_pavgw_127_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgw_127(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgw_127_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgw_127_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgw_127_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgw_128_h
#define HALIDE__test_op_pavgw_128_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgw_128(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgw_128_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgw_128_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgw_128_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgw_175_h
#define HALIDE__test_op_pavgw_175_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgw_175(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgw_175_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgw_175_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgw_175_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgw_176_h
#define HALIDE__test_op_pavgw_176_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgw_176(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgw_176_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgw_176_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgw_176_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgw_31_h
#define HALIDE__test_op_pavgw_31_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgw_31(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgw_31_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgw_31_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgw_31_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgw_32_h
#define HALIDE__test_op_pavgw_32_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgw_32(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgw_32_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgw_32_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgw_32_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgw_79_h
#define HALIDE__test_op_pavgw_79_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgw_79(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgw_79_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgw_79_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgw_79_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pavgw_80_h
#define HALIDE__test_op_pavgw_80_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pavgw_80(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pavgw_80_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pavgw_80_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pavgw_80_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_255_h
#define HALIDE__test_op_pblendvb_255_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_255(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_255_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_255_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_255_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_256_h
#define HALIDE__test_op_pblendvb_256_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_256(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_256_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_256_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_256_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_257_h
#define HALIDE__test_op_pblendvb_257_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_257(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_257_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_257_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_257_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_278_h
#define HALIDE__test_op_pblendvb_278_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_278(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_278_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_278_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_278_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_279_h
#define HALIDE__test_op_pblendvb_279_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_279(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_279_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_279_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_279_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_280_h
#define HALIDE__test_op_pblendvb_280_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_280(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_280_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_280_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_280_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_301_h
#define HALIDE__test_op_pblendvb_301_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_301(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_301_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_301_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_301_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_302_h
#define HALIDE__test_op_pblendvb_302_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_302(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_302_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_302_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_302_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pblendvb_303_h
#define HALIDE__test_op_pblendvb_303_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pblendvb_303(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pblendvb_303_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pblendvb_303_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pblendvb_303_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqb_111_h
#define HALIDE__test_op_pcmpeqb_111_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqb_111(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqb_111_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqb_111_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqb_111_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqb_159_h
#define HALIDE__test_op_pcmpeqb_159_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqb_159(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqb_159_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqb_159_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqb_159_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqb_15_h
#define HALIDE__test_op_pcmpeqb_15_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqb_15(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqb_15_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqb_15_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqb_15_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqb_63_h
#define HALIDE__test_op_pcmpeqb_63_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqb_63(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqb_63_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqb_63_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqb_63_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqd_115_h
#define HALIDE__test_op_pcmpeqd_115_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqd_115(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqd_115_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqd_115_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqd_115_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqd_163_h
#define HALIDE__test_op_pcmpeqd_163_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqd_163(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqd_163_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqd_163_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqd_163_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqd_19_h
#define HALIDE__test_op_pcmpeqd_19_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqd_19(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqd_19_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqd_19_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqd_19_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqd_67_h
#define HALIDE__test_op_pcmpeqd_67_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqd_67(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqd_67_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqd_67_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqd_67_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqq_272_h
#define HALIDE__test_op_pcmpeqq_272_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqq_272(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqq_272_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqq_272_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqq_272_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqq_295_h
#define HALIDE__test_op_pcmpeqq_295_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqq_295(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqq_295_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqq_295_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqq_295_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqq_318_h
#define HALIDE__test_op_pcmpeqq_318_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqq_318(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqq_318_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqq_318_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqq_318_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqw_113_h
#define HALIDE__test_op_pcmpeqw_113_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqw_113(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqw_113_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqw_113_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqw_113_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqw_161_h
#define HALIDE__test_op_pcmpeqw_161_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqw_161(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqw_161_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqw_161_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqw_161_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqw_17_h
#define HALIDE__test_op_pcmpeqw_17_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqw_17(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqw_17_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqw_17_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqw_17_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpeqw_65_h
#define HALIDE__test_op_pcmpeqw_65_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpeqw_65(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpeqw_65_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpeqw_65_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpeqw_65_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtb_112_h
#define HALIDE__test_op_pcmpgtb_112_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtb_112(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtb_112_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtb_112_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtb_112_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtb_160_h
#define HALIDE__test_op_pcmpgtb_160_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtb_160(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtb_160_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtb_160_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtb_160_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtb_16_h
#define HALIDE__test_op_pcmpgtb_16_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtb_16(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtb_16_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtb_16_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtb_16_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtb_64_h
#define HALIDE__test_op_pcmpgtb_64_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtb_64(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtb_64_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtb_64_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtb_64_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtd_116_h
#define HALIDE__test_op_pcmpgtd_116_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtd_116(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtd_116_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtd_116_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtd_116_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtd_164_h
#define HALIDE__test_op_pcmpgtd_164_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtd_164(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtd_164_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtd_164_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtd_164_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtd_20_h
#define HALIDE__test_op_pcmpgtd_20_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtd_20(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtd_20_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtd_20_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtd_20_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtd_68_h
#define HALIDE__test_op_pcmpgtd_68_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtd_68(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtd_68_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtd_68_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtd_68_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtq_320_h
#define HALIDE__test_op_pcmpgtq_320_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtq_320(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtq_320_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtq_320_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtq_320_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtw_114_h
#define HALIDE__test_op_pcmpgtw_114_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtw_114(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtw_114_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtw_114_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtw_114_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtw_162_h
#define HALIDE__test_op_pcmpgtw_162_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtw_162(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtw_162_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtw_162_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtw_162_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtw_18_h
#define HALIDE__test_op_pcmpgtw_18_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtw_18(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtw_18_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtw_18_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtw_18_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pcmpgtw_66_h
#define HALIDE__test_op_pcmpgtw_66_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pcmpgtw_66(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pcmpgtw_66_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pcmpgtw_66_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pcmpgtw_66_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaddwd_244_h
#define HALIDE__test_op_pmaddwd_244_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaddwd_244(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaddwd_244_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaddwd_244_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaddwd_244_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaddwd_245_h
#define HALIDE__test_op_pmaddwd_245_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaddwd_245(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaddwd_245_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaddwd_245_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaddwd_245_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaddwd_246_h
#define HALIDE__test_op_pmaddwd_246_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaddwd_246(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaddwd_246_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaddwd_246_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaddwd_246_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaddwd_247_h
#define HALIDE__test_op_pmaddwd_247_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaddwd_247(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaddwd_247_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaddwd_247_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaddwd_247_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaddwd_248_h
#define HALIDE__test_op_pmaddwd_248_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaddwd_248(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaddwd_248_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaddwd_248_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaddwd_248_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaddwd_249_h
#define HALIDE__test_op_pmaddwd_249_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaddwd_249(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaddwd_249_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaddwd_249_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaddwd_249_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaddwd_250_h
#define HALIDE__test_op_pmaddwd_250_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaddwd_250(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaddwd_250_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaddwd_250_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaddwd_250_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsb_258_h
#define HALIDE__test_op_pmaxsb_258_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsb_258(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsb_258_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsb_258_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsb_258_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsb_281_h
#define HALIDE__test_op_pmaxsb_281_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsb_281(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsb_281_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsb_281_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsb_281_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsb_304_h
#define HALIDE__test_op_pmaxsb_304_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsb_304(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsb_304_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsb_304_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsb_304_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsd_264_h
#define HALIDE__test_op_pmaxsd_264_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsd_264(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsd_264_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsd_264_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsd_264_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsd_287_h
#define HALIDE__test_op_pmaxsd_287_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsd_287(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsd_287_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsd_287_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsd_287_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsd_310_h
#define HALIDE__test_op_pmaxsd_310_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsd_310(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsd_310_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsd_310_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsd_310_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsw_129_h
#define HALIDE__test_op_pmaxsw_129_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsw_129(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsw_129_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsw_129_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsw_129_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsw_177_h
#define HALIDE__test_op_pmaxsw_177_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsw_177(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsw_177_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsw_177_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsw_177_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsw_33_h
#define HALIDE__test_op_pmaxsw_33_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsw_33(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsw_33_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsw_33_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsw_33_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxsw_81_h
#define HALIDE__test_op_pmaxsw_81_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxsw_81(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxsw_81_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxsw_81_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxsw_81_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxub_131_h
#define HALIDE__test_op_pmaxub_131_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxub_131(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxub_131_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxub_131_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxub_131_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxub_179_h
#define HALIDE__test_op_pmaxub_179_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxub_179(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxub_179_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxub_179_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxub_179_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxub_35_h
#define HALIDE__test_op_pmaxub_35_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxub_35(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxub_35_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxub_35_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxub_35_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxub_83_h
#define HALIDE__test_op_pmaxub_83_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxub_83(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxub_83_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxub_83_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxub_83_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxud_262_h
#define HALIDE__test_op_pmaxud_262_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxud_262(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxud_262_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxud_262_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxud_262_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxud_285_h
#define HALIDE__test_op_pmaxud_285_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxud_285(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxud_285_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxud_285_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxud_285_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxud_308_h
#define HALIDE__test_op_pmaxud_308_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxud_308(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxud_308_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxud_308_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxud_308_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxuw_260_h
#define HALIDE__test_op_pmaxuw_260_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxuw_260(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxuw_260_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxuw_260_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxuw_260_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxuw_283_h
#define HALIDE__test_op_pmaxuw_283_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxuw_283(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxuw_283_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxuw_283_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxuw_283_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmaxuw_306_h
#define HALIDE__test_op_pmaxuw_306_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmaxuw_306(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmaxuw_306_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmaxuw_306_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmaxuw_306_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsb_259_h
#define HALIDE__test_op_pminsb_259_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsb_259(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsb_259_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsb_259_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsb_259_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsb_282_h
#define HALIDE__test_op_pminsb_282_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsb_282(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsb_282_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsb_282_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsb_282_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsb_305_h
#define HALIDE__test_op_pminsb_305_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsb_305(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsb_305_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsb_305_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsb_305_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsd_265_h
#define HALIDE__test_op_pminsd_265_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsd_265(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsd_265_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsd_265_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsd_265_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsd_288_h
#define HALIDE__test_op_pminsd_288_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsd_288(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsd_288_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsd_288_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsd_288_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsd_311_h
#define HALIDE__test_op_pminsd_311_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsd_311(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsd_311_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsd_311_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsd_311_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsw_130_h
#define HALIDE__test_op_pminsw_130_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsw_130(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsw_130_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsw_130_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsw_130_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsw_178_h
#define HALIDE__test_op_pminsw_178_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsw_178(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsw_178_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsw_178_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsw_178_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsw_34_h
#define HALIDE__test_op_pminsw_34_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsw_34(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsw_34_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsw_34_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsw_34_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminsw_82_h
#define HALIDE__test_op_pminsw_82_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminsw_82(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminsw_82_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminsw_82_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminsw_82_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminub_132_h
#define HALIDE__test_op_pminub_132_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminub_132(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminub_132_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminub_132_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminub_132_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminub_180_h
#define HALIDE__test_op_pminub_180_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminub_180(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminub_180_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminub_180_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminub_180_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminub_36_h
#define HALIDE__test_op_pminub_36_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminub_36(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminub_36_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminub_36_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminub_36_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminub_84_h
#define HALIDE__test_op_pminub_84_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminub_84(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminub_84_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminub_84_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminub_84_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminud_263_h
#define HALIDE__test_op_pminud_263_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminud_263(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminud_263_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminud_263_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminud_263_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminud_286_h
#define HALIDE__test_op_pminud_286_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminud_286(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminud_286_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminud_286_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminud_286_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminud_309_h
#define HALIDE__test_op_pminud_309_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminud_309(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminud_309_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminud_309_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminud_309_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminuw_261_h
#define HALIDE__test_op_pminuw_261_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminuw_261(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminuw_261_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminuw_261_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminuw_261_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminuw_284_h
#define HALIDE__test_op_pminuw_284_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminuw_284(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminuw_284_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminuw_284_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminuw_284_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pminuw_307_h
#define HALIDE__test_op_pminuw_307_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pminuw_307(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pminuw_307_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pminuw_307_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pminuw_307_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_110_h
#define HALIDE__test_op_pmulhuw_110_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_110(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_110_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_110_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_110_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_133_h
#define HALIDE__test_op_pmulhuw_133_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_133(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_133_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_133_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_133_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_134_h
#define HALIDE__test_op_pmulhuw_134_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_134(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_134_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_134_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_134_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_135_h
#define HALIDE__test_op_pmulhuw_135_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_135(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_135_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_135_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_135_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_14_h
#define HALIDE__test_op_pmulhuw_14_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_14(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_14_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_14_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_14_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_158_h
#define HALIDE__test_op_pmulhuw_158_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_158(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_158_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_158_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_158_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_181_h
#define HALIDE__test_op_pmulhuw_181_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_181(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_181_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_181_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_181_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_182_h
#define HALIDE__test_op_pmulhuw_182_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_182(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_182_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_182_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_182_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_183_h
#define HALIDE__test_op_pmulhuw_183_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_183(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_183_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_183_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_183_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_37_h
#define HALIDE__test_op_pmulhuw_37_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_37(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_37_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_37_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_37_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_38_h
#define HALIDE__test_op_pmulhuw_38_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_38(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_38_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_38_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_38_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_39_h
#define HALIDE__test_op_pmulhuw_39_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_39(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_39_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_39_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_39_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_62_h
#define HALIDE__test_op_pmulhuw_62_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_62(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_62_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_62_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_62_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_85_h
#define HALIDE__test_op_pmulhuw_85_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_85(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_85_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_85_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_85_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_86_h
#define HALIDE__test_op_pmulhuw_86_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_86(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_86_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_86_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_86_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhuw_87_h
#define HALIDE__test_op_pmulhuw_87_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhuw_87(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhuw_87_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhuw_87_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhuw_87_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_106_h
#define HALIDE__test_op_pmulhw_106_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_106(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_106_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_106_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_106_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_107_h
#define HALIDE__test_op_pmulhw_107_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_107(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_107_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_107_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_107_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_108_h
#define HALIDE__test_op_pmulhw_108_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_108(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_108_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_108_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_108_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_109_h
#define HALIDE__test_op_pmulhw_109_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_109(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_109_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_109_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_109_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_10_h
#define HALIDE__test_op_pmulhw_10_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_10(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_10_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_10_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_10_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_11_h
#define HALIDE__test_op_pmulhw_11_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_11(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_11_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_11_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_11_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_12_h
#define HALIDE__test_op_pmulhw_12_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_12(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_12_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_12_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_12_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_13_h
#define HALIDE__test_op_pmulhw_13_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_13(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_13_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_13_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_13_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_154_h
#define HALIDE__test_op_pmulhw_154_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_154(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_154_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_154_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_154_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_155_h
#define HALIDE__test_op_pmulhw_155_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_155(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_155_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_155_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_155_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_156_h
#define HALIDE__test_op_pmulhw_156_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_156(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_156_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_156_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_156_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_157_h
#define HALIDE__test_op_pmulhw_157_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_157(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_157_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_157_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_157_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_58_h
#define HALIDE__test_op_pmulhw_58_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_58(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_58_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_58_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_58_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_59_h
#define HALIDE__test_op_pmulhw_59_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_59(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_59_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_59_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_59_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_60_h
#define HALIDE__test_op_pmulhw_60_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_60(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_60_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_60_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_60_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulhw_61_h
#define HALIDE__test_op_pmulhw_61_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulhw_61(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulhw_61_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulhw_61_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulhw_61_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulld_252_h
#define HALIDE__test_op_pmulld_252_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulld_252(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulld_252_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulld_252_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulld_252_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulld_275_h
#define HALIDE__test_op_pmulld_275_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulld_275(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulld_275_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulld_275_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulld_275_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmulld_298_h
#define HALIDE__test_op_pmulld_298_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmulld_298(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmulld_298_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmulld_298_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmulld_298_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmullw_142_h
#define HALIDE__test_op_pmullw_142_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmullw_142(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmullw_142_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmullw_142_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmullw_142_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmullw_46_h
#define HALIDE__test_op_pmullw_46_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmullw_46(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmullw_46_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmullw_46_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmullw_46_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmullw_94_h
#define HALIDE__test_op_pmullw_94_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmullw_94(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmullw_94_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmullw_94_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmullw_94_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmuludq_201_h
#define HALIDE__test_op_pmuludq_201_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmuludq_201(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmuludq_201_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmuludq_201_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmuludq_201_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmuludq_216_h
#define HALIDE__test_op_pmuludq_216_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmuludq_216(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmuludq_216_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmuludq_216_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmuludq_216_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmuludq_231_h
#define HALIDE__test_op_pmuludq_231_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmuludq_231(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmuludq_231_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmuludq_231_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmuludq_231_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmuludq_251_h
#define HALIDE__test_op_pmuludq_251_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmuludq_251(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmuludq_251_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmuludq_251_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmuludq_251_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmuludq_274_h
#define HALIDE__test_op_pmuludq_274_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmuludq_274(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmuludq_274_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmuludq_274_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmuludq_274_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_pmuludq_297_h
#define HALIDE__test_op_pmuludq_297_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_pmuludq_297(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_pmuludq_297_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_pmuludq_297_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_pmuludq_297_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubb_139_h
#define HALIDE__test_op_psubb_139_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubb_139(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubb_139_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubb_139_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubb_139_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubb_43_h
#define HALIDE__test_op_psubb_43_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubb_43(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubb_43_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubb_43_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubb_43_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubb_91_h
#define HALIDE__test_op_psubb_91_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubb_91(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubb_91_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubb_91_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubb_91_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubd_144_h
#define HALIDE__test_op_psubd_144_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubd_144(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubd_144_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubd_144_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubd_144_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubd_48_h
#define HALIDE__test_op_psubd_48_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubd_48(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubd_48_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubd_48_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubd_48_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubd_96_h
#define HALIDE__test_op_psubd_96_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubd_96(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubd_96_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubd_96_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubd_96_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubq_200_h
#define HALIDE__test_op_psubq_200_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubq_200(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubq_200_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubq_200_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubq_200_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubq_215_h
#define HALIDE__test_op_psubq_215_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubq_215(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubq_215_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubq_215_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubq_215_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubq_230_h
#define HALIDE__test_op_psubq_230_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubq_230(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubq_230_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubq_230_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubq_230_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubsb_147_h
#define HALIDE__test_op_psubsb_147_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubsb_147(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubsb_147_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubsb_147_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubsb_147_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubsb_3_h
#define HALIDE__test_op_psubsb_3_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubsb_3(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubsb_3_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubsb_3_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubsb_3_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubsb_51_h
#define HALIDE__test_op_psubsb_51_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubsb_51(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubsb_51_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubsb_51_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubsb_51_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubsb_99_h
#define HALIDE__test_op_psubsb_99_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubsb_99(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubsb_99_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubsb_99_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubsb_99_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubsw_103_h
#define HALIDE__test_op_psubsw_103_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubsw_103(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubsw_103_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubsw_103_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubsw_103_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubsw_151_h
#define HALIDE__test_op_psubsw_151_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubsw_151(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubsw_151_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubsw_151_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubsw_151_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubsw_55_h
#define HALIDE__test_op_psubsw_55_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubsw_55(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubsw_55_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubsw_55_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubsw_55_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubsw_7_h
#define HALIDE__test_op_psubsw_7_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubsw_7(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubsw_7_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubsw_7_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubsw_7_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubusb_101_h
#define HALIDE__test_op_psubusb_101_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubusb_101(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubusb_101_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubusb_101_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubusb_101_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubusb_149_h
#define HALIDE__test_op_psubusb_149_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubusb_149(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubusb_149_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubusb_149_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubusb_149_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubusb_53_h
#define HALIDE__test_op_psubusb_53_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubusb_53(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubusb_53_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubusb_53_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubusb_53_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubusb_5_h
#define HALIDE__test_op_psubusb_5_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubusb_5(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubusb_5_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubusb_5_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubusb_5_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubusw_105_h
#define HALIDE__test_op_psubusw_105_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubusw_105(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubusw_105_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubusw_105_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubusw_105_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubusw_153_h
#define HALIDE__test_op_psubusw_153_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubusw_153(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubusw_153_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubusw_153_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubusw_153_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubusw_57_h
#define HALIDE__test_op_psubusw_57_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubusw_57(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubusw_57_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubusw_57_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubusw_57_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubusw_9_h
#define HALIDE__test_op_psubusw_9_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubusw_9(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubusw_9_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubusw_9_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubusw_9_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubw_141_h
#define HALIDE__test_op_psubw_141_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubw_141(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubw_141_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubw_141_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubw_141_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubw_45_h
#define HALIDE__test_op_psubw_45_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubw_45(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubw_45_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubw_45_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubw_45_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_psubw_93_h
#define HALIDE__test_op_psubw_93_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_psubw_93(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_psubw_93_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_psubw_93_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_psubw_93_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_rcpps_120_h
#define HALIDE__test_op_rcpps_120_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_rcpps_120(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_rcpps_120_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_rcpps_120_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_rcpps_120_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_rcpps_168_h
#define HALIDE__test_op_rcpps_168_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_rcpps_168(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_rcpps_168_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_rcpps_168_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_rcpps_168_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_rcpps_24_h
#define HALIDE__test_op_rcpps_24_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_rcpps_24(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_rcpps_24_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_rcpps_24_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_rcpps_24_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_rcpps_72_h
#define HALIDE__test_op_rcpps_72_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_rcpps_72(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_rcpps_72_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_rcpps_72_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_rcpps_72_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_267_h
#define HALIDE__test_op_roundpd_267_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_267(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_267_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_267_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_267_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_269_h
#define HALIDE__test_op_roundpd_269_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_269(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_269_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_269_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_269_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_271_h
#define HALIDE__test_op_roundpd_271_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_271(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_271_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_271_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_271_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_290_h
#define HALIDE__test_op_roundpd_290_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_290(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_290_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_290_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_290_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_292_h
#define HALIDE__test_op_roundpd_292_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_292(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_292_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_292_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_292_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_294_h
#define HALIDE__test_op_roundpd_294_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_294(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_294_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_294_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_294_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_313_h
#define HALIDE__test_op_roundpd_313_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_313(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_313_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_313_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_313_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_315_h
#define HALIDE__test_op_roundpd_315_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_315(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_315_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_315_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_315_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundpd_317_h
#define HALIDE__test_op_roundpd_317_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundpd_317(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundpd_317_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundpd_317_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundpd_317_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_266_h
#define HALIDE__test_op_roundps_266_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_266(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_266_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_266_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_266_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_268_h
#define HALIDE__test_op_roundps_268_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_268(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_268_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_268_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_268_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_270_h
#define HALIDE__test_op_roundps_270_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_270(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_270_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_270_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_270_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_289_h
#define HALIDE__test_op_roundps_289_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_289(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_289_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_289_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_289_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_291_h
#define HALIDE__test_op_roundps_291_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_291(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_291_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_291_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_291_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_293_h
#define HALIDE__test_op_roundps_293_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_293(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_293_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_293_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_293_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_312_h
#define HALIDE__test_op_roundps_312_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_312(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_312_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_312_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_312_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_314_h
#define HALIDE__test_op_roundps_314_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_314(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_314_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_314_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_314_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_roundps_316_h
#define HALIDE__test_op_roundps_316_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_roundps_316(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_roundps_316_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_roundps_316_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_roundps_316_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_rsqrtps_122_h
#define HALIDE__test_op_rsqrtps_122_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_rsqrtps_122(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_rsqrtps_122_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_rsqrtps_122_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_rsqrtps_122_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_rsqrtps_170_h
#define HALIDE__test_op_rsqrtps_170_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_rsqrtps_170(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_rsqrtps_170_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_rsqrtps_170_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_rsqrtps_170_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_rsqrtps_26_h
#define HALIDE__test_op_rsqrtps_26_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_rsqrtps_26(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_rsqrtps_26_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_rsqrtps_26_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_rsqrtps_26_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_rsqrtps_74_h
#define HALIDE__test_op_rsqrtps_74_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_rsqrtps_74(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_rsqrtps_74_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_rsqrtps_74_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_rsqrtps_74_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_shufps_189_h
#define HALIDE__test_op_shufps_189_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_shufps_189(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_shufps_189_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_shufps_189_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_shufps_189_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_sqrtpd_194_h
#define HALIDE__test_op_sqrtpd_194_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_sqrtpd_194(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_sqrtpd_194_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_sqrtpd_194_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_sqrtpd_194_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_sqrtpd_209_h
#define HALIDE__test_op_sqrtpd_209_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_sqrtpd_209(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_sqrtpd_209_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_sqrtpd_209_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_sqrtpd_209_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_sqrtpd_224_h
#define HALIDE__test_op_sqrtpd_224_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_sqrtpd_224(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_sqrtpd_224_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_sqrtpd_224_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_sqrtpd_224_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_sqrtps_121_h
#define HALIDE__test_op_sqrtps_121_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_sqrtps_121(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_sqrtps_121_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_sqrtps_121_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_sqrtps_121_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_sqrtps_169_h
#define HALIDE__test_op_sqrtps_169_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_sqrtps_169(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_sqrtps_169_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_sqrtps_169_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_sqrtps_169_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_sqrtps_25_h
#define HALIDE__test_op_sqrtps_25_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_sqrtps_25(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_sqrtps_25_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_sqrtps_25_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_sqrtps_25_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_sqrtps_73_h
#define HALIDE__test_op_sqrtps_73_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_sqrtps_73(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_sqrtps_73_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_sqrtps_73_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_sqrtps_73_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_subpd_191_h
#define HALIDE__test_op_subpd_191_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_subpd_191(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_subpd_191_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_subpd_191_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_subpd_191_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_subpd_206_h
#define HALIDE__test_op_subpd_206_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_subpd_206(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_subpd_206_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_subpd_206_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_subpd_206_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_subpd_221_h
#define HALIDE__test_op_subpd_221_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_subpd_221(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_subpd_221_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_subpd_221_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_subpd_221_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_subps_118_h
#define HALIDE__test_op_subps_118_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_subps_118(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_subps_118_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_subps_118_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_subps_118_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_subps_166_h
#define HALIDE__test_op_subps_166_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_subps_166(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_subps_166_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_subps_166_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_subps_166_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_subps_22_h
#define HALIDE__test_op_subps_22_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_subps_22(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_subps_22_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_subps_22_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_subps_22_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_subps_70_h
#define HALIDE__test_op_subps_70_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_subps_70(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_subps_70_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_subps_70_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_subps_70_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vaddpd_326_h
#define HALIDE__test_op_vaddpd_326_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vaddpd_326(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vaddpd_326_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vaddpd_326_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vaddpd_326_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vaddps_325_h
#define HALIDE__test_op_vaddps_325_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vaddps_325(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vaddps_325_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vaddps_325_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vaddps_325_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vblendvpd_342_h
#define HALIDE__test_op_vblendvpd_342_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vblendvpd_342(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vblendvpd_342_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vblendvpd_342_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vblendvpd_342_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vblendvps_341_h
#define HALIDE__test_op_vblendvps_341_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vblendvps_341(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vblendvps_341_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vblendvps_341_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vblendvps_341_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcmpeqpd_337_h
#define HALIDE__test_op_vcmpeqpd_337_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcmpeqpd_337(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcmpeqpd_337_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcmpeqpd_337_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcmpeqpd_337_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcmpeqps_339_h
#define HALIDE__test_op_vcmpeqps_339_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcmpeqps_339(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcmpeqps_339_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcmpeqps_339_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcmpeqps_339_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcmpltpd_338_h
#define HALIDE__test_op_vcmpltpd_338_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcmpltpd_338(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcmpltpd_338_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcmpltpd_338_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcmpltpd_338_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcmpltps_340_h
#define HALIDE__test_op_vcmpltps_340_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcmpltps_340(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcmpltps_340_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcmpltps_340_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcmpltps_340_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcvtdq2pd_346_h
#define HALIDE__test_op_vcvtdq2pd_346_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcvtdq2pd_346(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcvtdq2pd_346_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcvtdq2pd_346_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcvtdq2pd_346_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcvtdq2ps_344_h
#define HALIDE__test_op_vcvtdq2ps_344_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcvtdq2ps_344(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcvtdq2ps_344_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcvtdq2ps_344_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcvtdq2ps_344_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcvtpd2ps_348_h
#define HALIDE__test_op_vcvtpd2ps_348_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcvtpd2ps_348(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcvtpd2ps_348_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcvtpd2ps_348_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcvtpd2ps_348_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcvtps2pd_347_h
#define HALIDE__test_op_vcvtps2pd_347_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcvtps2pd_347(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcvtps2pd_347_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcvtps2pd_347_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcvtps2pd_347_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcvttpd2dq_345_h
#define HALIDE__test_op_vcvttpd2dq_345_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcvttpd2dq_345(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcvttpd2dq_345_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcvttpd2dq_345_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcvttpd2dq_345_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vcvttps2dq_343_h
#define HALIDE__test_op_vcvttps2dq_343_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vcvttps2dq_343(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vcvttps2dq_343_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vcvttps2dq_343_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vcvttps2dq_343_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vmaxpd_334_h
#define HALIDE__test_op_vmaxpd_334_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vmaxpd_334(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vmaxpd_334_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vmaxpd_334_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vmaxpd_334_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vmaxps_333_h
#define HALIDE__test_op_vmaxps_333_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vmaxps_333(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vmaxps_333_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vmaxps_333_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vmaxps_333_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vminpd_332_h
#define HALIDE__test_op_vminpd_332_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vminpd_332(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vminpd_332_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vminpd_332_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vminpd_332_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vminps_331_h
#define HALIDE__test_op_vminps_331_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vminps_331(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vminps_331_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vminps_331_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vminps_331_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vmulpd_328_h
#define HALIDE__test_op_vmulpd_328_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vmulpd_328(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vmulpd_328_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vmulpd_328_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vmulpd_328_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vmulps_327_h
#define HALIDE__test_op_vmulps_327_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vmulps_327(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vmulps_327_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vmulps_327_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vmulps_327_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vrcpps_324_h
#define HALIDE__test_op_vrcpps_324_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vrcpps_324(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vrcpps_324_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vrcpps_324_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vrcpps_324_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vroundpd_336_h
#define HALIDE__test_op_vroundpd_336_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vroundpd_336(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vroundpd_336_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vroundpd_336_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vroundpd_336_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vroundps_335_h
#define HALIDE__test_op_vroundps_335_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vroundps_335(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vroundps_335_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vroundps_335_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vroundps_335_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vrsqrtps_323_h
#define HALIDE__test_op_vrsqrtps_323_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vrsqrtps_323(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vrsqrtps_323_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vrsqrtps_323_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vrsqrtps_323_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vsqrtpd_322_h
#define HALIDE__test_op_vsqrtpd_322_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vsqrtpd_322(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vsqrtpd_322_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vsqrtpd_322_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vsqrtpd_322_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vsqrtps_321_h
#define HALIDE__test_op_vsqrtps_321_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vsqrtps_321(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vsqrtps_321_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vsqrtps_321_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vsqrtps_321_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vsubpd_330_h
#define HALIDE__test_op_vsubpd_330_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vsubpd_330(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vsubpd_330_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vsubpd_330_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vsubpd_330_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_vsubps_329_h
#define HALIDE__test_op_vsubps_329_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_vsubps_329(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_vsubps_329_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_vsubps_329_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_vsubps_329_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
#ifndef HALIDE__test_op_xorps_188_h
#define HALIDE__test_op_xorps_188_h
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifdef __cplusplus
extern "C" {
#endif
int test_op_xorps_188(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_op_xorps_188_buffer) HALIDE_FUNCTION_ATTRS;
int test_op_xorps_188_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_op_xorps_188_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif
#endif
