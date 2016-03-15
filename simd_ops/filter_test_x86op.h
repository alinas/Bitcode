#include "halide_buffer.h"
#ifdef __cplusplus
extern "C" {
#endif
int test_x86op(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_error_x86op_buffer) HALIDE_FUNCTION_ATTRS;
int test_x86op_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t test_x86op_metadata;

int unopt_test_x86op(buffer_t *_in_f32_buffer, buffer_t *_in_f64_buffer, buffer_t *_in_i8_buffer, buffer_t *_in_u8_buffer, buffer_t *_in_i16_buffer, buffer_t *_in_u16_buffer, buffer_t *_in_i32_buffer, buffer_t *_in_u32_buffer, buffer_t *_in_i64_buffer, buffer_t *_in_u64_buffer, buffer_t *_unopt_error_x86op_buffer) HALIDE_FUNCTION_ATTRS;
int unopt_test_x86op_argv(void **args) HALIDE_FUNCTION_ATTRS;
extern const struct halide_filter_metadata_t unopt_test_x86op_metadata;
#ifdef __cplusplus
}  // extern "C"
#endif

filter filters[] = {
{"test_x86op", &test_x86op},
{"unopt_test_x86op", &unopt_test_x86op},
{NULL, NULL}};
