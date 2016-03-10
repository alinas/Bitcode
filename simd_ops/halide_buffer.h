#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#ifndef HALIDE_ATTRIBUTE_ALIGN
  #ifdef _MSC_VER
    #define HALIDE_ATTRIBUTE_ALIGN(x) __declspec(align(x))
  #else
    #define HALIDE_ATTRIBUTE_ALIGN(x) __attribute__((aligned(x)))
  #endif
#endif
#ifndef BUFFER_T_DEFINED
#define BUFFER_T_DEFINED
#include <stdbool.h>
#include <stdint.h>
typedef struct buffer_t {
    uint64_t dev;
    uint8_t* host;
    int32_t extent[4];
    int32_t stride[4];
    int32_t min[4];
    int32_t elem_size;
    HALIDE_ATTRIBUTE_ALIGN(1) bool host_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) bool dev_dirty;
    HALIDE_ATTRIBUTE_ALIGN(1) uint8_t _padding[10 - sizeof(void *)];
} buffer_t;
#endif
struct halide_filter_metadata_t;
#ifndef HALIDE_FUNCTION_ATTRS
#define HALIDE_FUNCTION_ATTRS
#endif
#ifndef FILTER_T_DEFINED
#define FILTER_T_DEFINED
typedef struct filter {
    const char *name;
    int (*fn)(buffer_t *, // float32
              buffer_t *, // float64
              buffer_t *, // int8
              buffer_t *, // uint8
              buffer_t *, // int16
              buffer_t *, // uint16
              buffer_t *, // int32
              buffer_t *, // uint32
              buffer_t *, // int64
              buffer_t *, // uint64
              buffer_t *); // output
} filter;
#endif

