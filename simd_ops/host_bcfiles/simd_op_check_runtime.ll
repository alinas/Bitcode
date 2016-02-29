; ModuleID = 'host_bcfiles/simd_op_check_runtime.bc'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64--linux-gnu"

%struct.timespec = type { i64, i64 }
%"struct.Halide::Runtime::Internal::halide_work_queue_t" = type { %struct.pthread_mutex_t, %"struct.Halide::Runtime::Internal::work"*, i32, i32, %struct.pthread_cond_t, %struct.pthread_cond_t, %struct.pthread_cond_t, [64 x i64], i8, [7 x i8] }
%struct.pthread_mutex_t = type { [8 x i64] }
%"struct.Halide::Runtime::Internal::work" = type { %"struct.Halide::Runtime::Internal::work"*, i32 (i8*, i32, i8*)*, i8*, i32, i32, i8*, i32, i32 }
%struct.pthread_cond_t = type { [6 x i64] }
%struct.halide_trace_event = type <{ i8*, i32, i32, i32, i32, i32, i32, i8*, i32, i32* }>
%"struct.Halide::Runtime::Internal::CacheEntry" = type { %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"*, i64, i8*, i32, i32, i32, %struct.buffer_t, [1 x %struct.buffer_t] }
%struct.buffer_t = type { i64, i8*, [4 x i32], [4 x i32], [4 x i32], i32, i8, i8, [2 x i8] }
%"struct.Halide::Runtime::Internal::list_head_t" = type { %struct.pthread_mutex_t, %struct._halide_runtime_internal_registered_filter_t* }
%struct._halide_runtime_internal_registered_filter_t = type { i8*, %struct.halide_filter_metadata_t*, i32 (i8**)* }
%struct.halide_filter_metadata_t = type { i32, i32, %struct.halide_filter_argument_t*, i8*, i8* }
%struct.halide_filter_argument_t = type { i8*, i32, i32, i32, i32, %struct.halide_scalar_value_t*, %struct.halide_scalar_value_t*, %struct.halide_scalar_value_t* }
%struct.halide_scalar_value_t = type { %union.anon.4 }
%union.anon.4 = type { double }
%struct.halide_profiler_state = type { %struct.pthread_mutex_t, %struct.halide_profiler_pipeline_stats*, i32, i32, i32, i8 }
%struct.halide_profiler_pipeline_stats = type { i64, i8*, %struct.halide_profiler_func_stats*, i8*, i32, i32, i32, i32 }
%struct.halide_profiler_func_stats = type { i64, i8* }
%struct.pthread_attr_t = type { i32, i8*, i64, i64, i32, i32 }
%"struct.Halide::Runtime::Internal::halide_tiff_header" = type <{ i16, i16, i32, i16, [15 x %"struct.Halide::Runtime::Internal::tiff_tag"], i32, [2 x i32], [2 x i32] }>
%"struct.Halide::Runtime::Internal::tiff_tag" = type { i16, i16, i32, %union.anon }
%union.anon = type { i32 }
%struct.halide_device_interface = type { void ()*, void ()*, i32 (i8*, %struct.buffer_t*)*, i32 (i8*, %struct.buffer_t*)*, i32 (i8*, %struct.buffer_t*)*, i32 (i8*)*, i32 (i8*, %struct.buffer_t*)*, i32 (i8*, %struct.buffer_t*)* }
%"struct.Halide::Runtime::Internal::device_handle_wrapper" = type { i64, %struct.halide_device_interface* }

@halide_reference_clock_inited = linkonce global i8 0, align 1
@halide_reference_clock = linkonce global %struct.timespec zeroinitializer, align 8
@_ZN6Halide7Runtime8Internal18halide_num_threadsE = linkonce global i32 0, align 4
@_ZN6Halide7Runtime8Internal30halide_thread_pool_initializedE = linkonce global i8 0, align 1
@_ZN6Halide7Runtime8Internal17halide_work_queueE = linkonce global %"struct.Halide::Runtime::Internal::halide_work_queue_t" zeroinitializer, align 8
@_ZN6Halide7Runtime8Internal21halide_custom_do_taskE = linkonce global i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)* @_ZN6Halide7Runtime8Internal15default_do_taskEPvPFiS2_iPhEiS3_, align 8
@_ZN6Halide7Runtime8Internal24halide_custom_do_par_forE = linkonce global i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)* @_ZN6Halide7Runtime8Internal18default_do_par_forEPvPFiS2_iPhEiiS3_, align 8
@.str = private unnamed_addr constant [15 x i8] c"HL_NUM_THREADS\00", align 1
@.str.1 = private unnamed_addr constant [14 x i8] c"HL_NUMTHREADS\00", align 1
@llvm.global_dtors = appending global [4 x { i32, void ()*, i8* }] [{ i32, void ()*, i8* } { i32 65535, void ()* @halide_posix_thread_pool_cleanup, i8* null }, { i32, void ()*, i8* } { i32 65535, void ()* @halide_trace_cleanup, i8* null }, { i32, void ()*, i8* } { i32 65535, void ()* @halide_cache_cleanup, i8* null }, { i32, void ()*, i8* } { i32 65535, void ()* @halide_profiler_shutdown, i8* null }]
@_ZN6Halide7Runtime8Internal17halide_gpu_deviceE = linkonce global i32 0, align 4
@_ZN6Halide7Runtime8Internal22halide_gpu_device_lockE = linkonce global i32 0, align 4
@_ZN6Halide7Runtime8Internal29halide_gpu_device_initializedE = linkonce global i8 0, align 1
@.str.2 = private unnamed_addr constant [14 x i8] c"HL_GPU_DEVICE\00", align 1
@_ZN6Halide7Runtime8Internal17halide_trace_fileE = linkonce global i32 0, align 4
@_ZN6Halide7Runtime8Internal22halide_trace_file_lockE = linkonce global i32 0, align 4
@_ZN6Halide7Runtime8Internal29halide_trace_file_initializedE = linkonce global i8 0, align 1
@_ZN6Halide7Runtime8Internal35halide_trace_file_internally_openedE = linkonce global i8 0, align 1
@_ZN6Halide7Runtime8Internal19halide_custom_traceE = linkonce global i32 (i8*, %struct.halide_trace_event*)* @_ZN6Halide7Runtime8Internal13default_traceEPvPK18halide_trace_event, align 8
@_ZZN6Halide7Runtime8Internal13default_traceEPvPK18halide_trace_eventE3ids = internal global i32 1, align 4
@.str.26 = private unnamed_addr constant [14 x i8] c"HL_TRACE_FILE\00", align 1
@.str.27 = private unnamed_addr constant [132 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/tracing.cpp:211 Assert failed: (fd > 0) && \22Failed to open trace file\5Cn\22\0A\00", align 1
@.str.3 = private unnamed_addr constant [139 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/tracing.cpp:42 Assert failed: total_bytes <= 4096 && \22Tracing packet too large\22\0A\00", align 1
@.str.1.4 = private unnamed_addr constant [143 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/tracing.cpp:77 Assert failed: written == total_bytes && \22Can't write to trace file\22\0A\00", align 1
@.str.2.5 = private unnamed_addr constant [128 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/tracing.cpp:86 Assert failed: print_bits <= 64 && \22Tracing bad type\22\0A\00", align 1
@_ZZN6Halide7Runtime8Internal13default_traceEPvPK18halide_trace_eventE11event_types = private unnamed_addr constant [10 x i8*] [i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.3.6, i32 0, i32 0), i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str.4, i32 0, i32 0), i8* getelementptr inbounds ([18 x i8], [18 x i8]* @.str.5, i32 0, i32 0), i8* getelementptr inbounds ([16 x i8], [16 x i8]* @.str.6, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str.7, i32 0, i32 0), i8* getelementptr inbounds ([7 x i8], [7 x i8]* @.str.8, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str.9, i32 0, i32 0), i8* getelementptr inbounds ([12 x i8], [12 x i8]* @.str.10, i32 0, i32 0), i8* getelementptr inbounds ([15 x i8], [15 x i8]* @.str.11, i32 0, i32 0), i8* getelementptr inbounds ([13 x i8], [13 x i8]* @.str.12, i32 0, i32 0)], align 8
@.str.3.6 = private unnamed_addr constant [5 x i8] c"Load\00", align 1
@.str.4 = private unnamed_addr constant [6 x i8] c"Store\00", align 1
@.str.5 = private unnamed_addr constant [18 x i8] c"Begin realization\00", align 1
@.str.6 = private unnamed_addr constant [16 x i8] c"End realization\00", align 1
@.str.7 = private unnamed_addr constant [8 x i8] c"Produce\00", align 1
@.str.8 = private unnamed_addr constant [7 x i8] c"Update\00", align 1
@.str.9 = private unnamed_addr constant [8 x i8] c"Consume\00", align 1
@.str.10 = private unnamed_addr constant [12 x i8] c"End consume\00", align 1
@.str.11 = private unnamed_addr constant [15 x i8] c"Begin pipeline\00", align 1
@.str.12 = private unnamed_addr constant [13 x i8] c"End pipeline\00", align 1
@.str.16 = private unnamed_addr constant [2 x i8] c"<\00", align 1
@.str.17 = private unnamed_addr constant [5 x i8] c">, <\00", align 1
@.str.18 = private unnamed_addr constant [3 x i8] c", \00", align 1
@.str.19 = private unnamed_addr constant [3 x i8] c">)\00", align 1
@.str.21 = private unnamed_addr constant [5 x i8] c" = <\00", align 1
@.str.22 = private unnamed_addr constant [4 x i8] c" = \00", align 1
@.str.23 = private unnamed_addr constant [131 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/tracing.cpp:154 Assert failed: print_bits >= 16 && \22Tracing a bad type\22\0A\00", align 1
@.str.24 = private unnamed_addr constant [2 x i8] c">\00", align 1
@.str.25 = private unnamed_addr constant [2 x i8] c"\0A\00", align 1
@_ZN6Halide7Runtime8Internal30pixel_type_to_tiff_sample_typeE = linkonce global [10 x i16] [i16 3, i16 3, i16 1, i16 2, i16 1, i16 2, i16 1, i16 2, i16 1, i16 2], align 2
@.str.28 = private unnamed_addr constant [3 x i8] c"wb\00", align 1
@_ZN6Halide7Runtime8Internal13custom_mallocE = linkonce global i8* (i8*, i64)* @_ZN6Halide7Runtime8Internal14default_mallocEPvm, align 8
@_ZN6Halide7Runtime8Internal11custom_freeE = linkonce global void (i8*, i8*)* @_ZN6Halide7Runtime8Internal12default_freeEPvS2_, align 8
@_ZN6Halide7Runtime8Internal20halide_error_handlerE = linkonce global void (i8*, i8*)* @_ZN6Halide7Runtime8Internal21default_error_handlerEPvPKc, align 8
@.str.33 = private unnamed_addr constant [8 x i8] c"Error: \00", align 1
@.str.1.34 = private unnamed_addr constant [41 x i8] c"Bounds inference call to external stage \00", align 1
@.str.2.35 = private unnamed_addr constant [27 x i8] c" returned non-zero value: \00", align 1
@.str.3.36 = private unnamed_addr constant [24 x i8] c"Call to external stage \00", align 1
@.str.4.37 = private unnamed_addr constant [18 x i8] c"Bounds given for \00", align 1
@.str.5.38 = private unnamed_addr constant [5 x i8] c" in \00", align 1
@.str.6.39 = private unnamed_addr constant [8 x i8] c" (from \00", align 1
@.str.7.40 = private unnamed_addr constant [5 x i8] c" to \00", align 1
@.str.8.41 = private unnamed_addr constant [38 x i8] c") do not cover required region (from \00", align 1
@.str.9.42 = private unnamed_addr constant [2 x i8] c")\00", align 1
@.str.10.43 = private unnamed_addr constant [11 x i8] c" has type \00", align 1
@.str.11.44 = private unnamed_addr constant [43 x i8] c" but elem_size of the buffer passed in is \00", align 1
@.str.12.45 = private unnamed_addr constant [13 x i8] c" instead of \00", align 1
@.str.13.46 = private unnamed_addr constant [17 x i8] c" is accessed at \00", align 1
@.str.14.47 = private unnamed_addr constant [28 x i8] c", which is before the min (\00", align 1
@.str.15.48 = private unnamed_addr constant [16 x i8] c") in dimension \00", align 1
@.str.16.49 = private unnamed_addr constant [28 x i8] c", which is beyond the max (\00", align 1
@.str.17.50 = private unnamed_addr constant [29 x i8] c"Total allocation for buffer \00", align 1
@.str.18.51 = private unnamed_addr constant [5 x i8] c" is \00", align 1
@.str.19.52 = private unnamed_addr constant [37 x i8] c", which exceeds the maximum size of \00", align 1
@.str.20.53 = private unnamed_addr constant [31 x i8] c"Product of extents for buffer \00", align 1
@.str.21.54 = private unnamed_addr constant [29 x i8] c"Applying the constraints on \00", align 1
@.str.22.55 = private unnamed_addr constant [42 x i8] c" to the required region made it smaller. \00", align 1
@.str.23.56 = private unnamed_addr constant [16 x i8] c"Required size: \00", align 1
@.str.24.57 = private unnamed_addr constant [3 x i8] c". \00", align 1
@.str.25.58 = private unnamed_addr constant [19 x i8] c"Constrained size: \00", align 1
@.str.27.60 = private unnamed_addr constant [22 x i8] c"Constraint violated: \00", align 1
@.str.28.61 = private unnamed_addr constant [3 x i8] c" (\00", align 1
@.str.29 = private unnamed_addr constant [6 x i8] c") == \00", align 1
@.str.30 = private unnamed_addr constant [11 x i8] c"Parameter \00", align 1
@.str.31 = private unnamed_addr constant [23 x i8] c" but must be at least \00", align 1
@.str.32 = private unnamed_addr constant [22 x i8] c" but must be at most \00", align 1
@.str.33.62 = private unnamed_addr constant [44 x i8] c"Out of memory (halide_malloc returned NULL)\00", align 1
@.str.34 = private unnamed_addr constant [17 x i8] c"Buffer argument \00", align 1
@.str.35 = private unnamed_addr constant [9 x i8] c" is NULL\00", align 1
@.str.36 = private unnamed_addr constant [25 x i8] c"Failed to dump function \00", align 1
@.str.37 = private unnamed_addr constant [10 x i8] c" to file \00", align 1
@.str.38 = private unnamed_addr constant [13 x i8] c" with error \00", align 1
@_ZN6Halide7Runtime8Internal19halide_custom_printE = linkonce global void (i8*, i8*)* @_ZN6Halide7Runtime8Internal17halide_print_implEPvPKc, align 8
@_ZN6Halide7Runtime8Internal16memoization_lockE = linkonce global %struct.pthread_mutex_t zeroinitializer, align 8
@_ZN6Halide7Runtime8Internal13cache_entriesE = linkonce global [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*] zeroinitializer, align 8
@_ZN6Halide7Runtime8Internal18most_recently_usedE = linkonce global %"struct.Halide::Runtime::Internal::CacheEntry"* null, align 8
@_ZN6Halide7Runtime8Internal19least_recently_usedE = linkonce global %"struct.Halide::Runtime::Internal::CacheEntry"* null, align 8
@_ZN6Halide7Runtime8Internal14max_cache_sizeE = linkonce global i64 1048576, align 8
@_ZN6Halide7Runtime8Internal18current_cache_sizeE = linkonce global i64 0, align 8
@.str.66 = private unnamed_addr constant [112 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/cache.cpp:255 Assert failed: prev_hash_entry != NULL\0A\00", align 1
@.str.1.67 = private unnamed_addr constant [115 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/cache.cpp:345 Assert failed: entry->more_recent != NULL\0A\00", align 1
@.str.2.68 = private unnamed_addr constant [117 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/cache.cpp:349 Assert failed: least_recently_used == entry\0A\00", align 1
@.str.3.69 = private unnamed_addr constant [115 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/cache.cpp:352 Assert failed: entry->more_recent != NULL\0A\00", align 1
@.str.5.70 = private unnamed_addr constant [111 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/cache.cpp:441 Assert failed: no_host_pointers_equal\0A\00", align 1
@.str.8.71 = private unnamed_addr constant [112 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/cache.cpp:523 Assert failed: entry->in_use_count > 0\0A\00", align 1
@.str.80 = private unnamed_addr constant [5 x i8] c"-nan\00", align 1
@.str.1.81 = private unnamed_addr constant [4 x i8] c"nan\00", align 1
@.str.2.82 = private unnamed_addr constant [5 x i8] c"-inf\00", align 1
@.str.3.83 = private unnamed_addr constant [4 x i8] c"inf\00", align 1
@.str.4.84 = private unnamed_addr constant [14 x i8] c"-0.000000e+00\00", align 1
@.str.5.85 = private unnamed_addr constant [13 x i8] c"0.000000e+00\00", align 1
@.str.6.86 = private unnamed_addr constant [10 x i8] c"-0.000000\00", align 1
@.str.7.87 = private unnamed_addr constant [9 x i8] c"0.000000\00", align 1
@.str.8.88 = private unnamed_addr constant [2 x i8] c"-\00", align 1
@.str.9.89 = private unnamed_addr constant [2 x i8] c".\00", align 1
@.str.10.90 = private unnamed_addr constant [3 x i8] c"e+\00", align 1
@.str.11.91 = private unnamed_addr constant [3 x i8] c"e-\00", align 1
@.str.12.94 = private unnamed_addr constant [17 x i8] c"0123456789abcdef\00", align 1
@_ZN6Halide7Runtime8Internal17device_copy_mutexE = linkonce global %struct.pthread_mutex_t zeroinitializer, align 8
@.str.22.95 = private unnamed_addr constant [116 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/device_interface.cpp:138 Assert failed: !buf->host_dirty\0A\00", align 1
@.str.37.98 = private unnamed_addr constant [113 x i8] c"/usr/local/google/home/asbirlea/Halide/Halide/src/runtime/device_interface.cpp:248 Assert failed: buf->dev == 0\0A\00", align 1
@_ZN6Halide7Runtime8Internal9list_headE = linkonce global %"struct.Halide::Runtime::Internal::list_head_t" zeroinitializer, align 8
@_ZZ25halide_profiler_get_stateE1s = internal global %struct.halide_profiler_state { %struct.pthread_mutex_t zeroinitializer, %struct.halide_profiler_pipeline_stats* null, i32 1, i32 0, i32 0, i8 0 }, align 8
@.str.100 = private unnamed_addr constant [15 x i8] c"  total time: \00", align 1
@.str.1.101 = private unnamed_addr constant [4 x i8] c" ms\00", align 1
@.str.2.102 = private unnamed_addr constant [12 x i8] c"  samples: \00", align 1
@.str.3.103 = private unnamed_addr constant [9 x i8] c"  runs: \00", align 1
@.str.4.104 = private unnamed_addr constant [17 x i8] c"  time per run: \00", align 1
@.str.5.105 = private unnamed_addr constant [5 x i8] c" ms\0A\00", align 1
@.str.6.106 = private unnamed_addr constant [3 x i8] c"  \00", align 1
@.str.7.107 = private unnamed_addr constant [3 x i8] c": \00", align 1
@.str.8.108 = private unnamed_addr constant [2 x i8] c" \00", align 1
@.str.9.109 = private unnamed_addr constant [3 x i8] c"ms\00", align 1
@.str.10.110 = private unnamed_addr constant [2 x i8] c"(\00", align 1
@.str.11.111 = private unnamed_addr constant [4 x i8] c"%)\0A\00", align 1

; Function Attrs: nounwind
define weak i32 @halide_start_clock(i8* %user_context) #0 {
entry:
  %0 = load i8, i8* @halide_reference_clock_inited, align 1, !tbaa !4, !range !8
  %tobool = icmp eq i8 %0, 0
  br i1 %tobool, label %if.then, label %if.end

if.then:                                          ; preds = %entry
  %call = tail call i32 (i32, ...) @syscall(i32 228, i32 0, %struct.timespec* nonnull @halide_reference_clock) #6
  store i8 1, i8* @halide_reference_clock_inited, align 1, !tbaa !4
  br label %if.end

if.end:                                           ; preds = %if.then, %entry
  ret i32 0
}

declare i32 @syscall(i32, ...) #1

; Function Attrs: nounwind
define weak i64 @halide_current_time_ns(i8* %user_context) #0 {
entry:
  %now = alloca %struct.timespec, align 8
  %0 = bitcast %struct.timespec* %now to i8*
  call void @llvm.lifetime.start(i64 16, i8* %0) #7
  %call = call i32 (i32, ...) @syscall(i32 228, i32 0, %struct.timespec* nonnull %now) #6
  %tv_sec = getelementptr inbounds %struct.timespec, %struct.timespec* %now, i64 0, i32 0
  %1 = load i64, i64* %tv_sec, align 8, !tbaa !9
  %2 = load i64, i64* getelementptr inbounds (%struct.timespec, %struct.timespec* @halide_reference_clock, i64 0, i32 0), align 8, !tbaa !9
  %sub = sub nsw i64 %1, %2
  %mul = mul nsw i64 %sub, 1000000000
  %tv_nsec = getelementptr inbounds %struct.timespec, %struct.timespec* %now, i64 0, i32 1
  %3 = load i64, i64* %tv_nsec, align 8, !tbaa !12
  %4 = load i64, i64* getelementptr inbounds (%struct.timespec, %struct.timespec* @halide_reference_clock, i64 0, i32 1), align 8, !tbaa !12
  %sub1 = sub i64 %3, %4
  %add = add nsw i64 %sub1, %mul
  call void @llvm.lifetime.end(i64 16, i8* %0) #7
  ret i64 %add
}

; Function Attrs: argmemonly nounwind
declare void @llvm.lifetime.start(i64, i8* nocapture) #2

; Function Attrs: argmemonly nounwind
declare void @llvm.lifetime.end(i64, i8* nocapture) #2

; Function Attrs: nounwind
define weak void @halide_sleep_ms(i8* %user_context, i32 %ms) #0 {
entry:
  %mul = mul nsw i32 %ms, 1000
  %call = tail call i32 @usleep(i32 %mul) #6
  ret void
}

declare i32 @usleep(i32) #1

; Function Attrs: nounwind
define linkonce void @_ZN6Halide7Runtime8Internal17halide_print_implEPvPKc(i8* %user_context, i8* %str) #0 {
entry:
  %call = tail call i64 @strlen(i8* %str) #6
  %call1 = tail call i64 @write(i32 2, i8* %str, i64 %call) #6
  ret void
}

; Function Attrs: nounwind readonly
declare i64 @strlen(i8* nocapture) #3

declare i64 @write(i32, i8* nocapture readonly, i64) #1

; Function Attrs: nounwind
define weak i32 @halide_host_cpu_count() #0 {
entry:
  %call = tail call i64 @sysconf(i32 84) #6
  %conv = trunc i64 %call to i32
  ret i32 %conv
}

declare i64 @sysconf(i32) #1

; Function Attrs: nounwind
define linkonce i32 @_ZN6Halide7Runtime8Internal15default_do_taskEPvPFiS2_iPhEiS3_(i8* %user_context, i32 (i8*, i32, i8*)* %f, i32 %idx, i8* %closure) #0 {
entry:
  %call = tail call i32 %f(i8* %user_context, i32 %idx, i8* %closure) #6
  ret i32 %call
}

; Function Attrs: nounwind
define linkonce i32 @_ZN6Halide7Runtime8Internal18default_do_par_forEPvPFiS2_iPhEiiS3_(i8* %user_context, i32 (i8*, i32, i8*)* %f, i32 %min, i32 %size, i8* %closure) #0 {
entry:
  %job = alloca %"struct.Halide::Runtime::Internal::work", align 8
  %call = tail call i32 @pthread_mutex_lock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %0 = load i8, i8* @_ZN6Halide7Runtime8Internal30halide_thread_pool_initializedE, align 1, !tbaa !4, !range !8
  %tobool = icmp eq i8 %0, 0
  br i1 %tobool, label %if.then, label %entry.if.end24_crit_edge

entry.if.end24_crit_edge:                         ; preds = %entry
  %.pre = load i32, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4
  %.pre59 = load i32, i32* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 2), align 8, !tbaa !13
  br label %if.end24

if.then:                                          ; preds = %entry
  store i8 0, i8* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 8), align 8, !tbaa !19
  %call1 = tail call i32 @pthread_cond_init(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 4), i64* null) #6
  %call2 = tail call i32 @pthread_cond_init(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 5), i64* null) #6
  %call3 = tail call i32 @pthread_cond_init(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 6), i64* null) #6
  store %"struct.Halide::Runtime::Internal::work"* null, %"struct.Halide::Runtime::Internal::work"** getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 1), align 8, !tbaa !20
  %1 = load i32, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  %tobool4 = icmp eq i32 %1, 0
  br i1 %tobool4, label %if.then5, label %if.end15

if.then5:                                         ; preds = %if.then
  %call6 = tail call i8* @getenv(i8* getelementptr inbounds ([15 x i8], [15 x i8]* @.str, i64 0, i64 0)) #6
  %tobool7 = icmp eq i8* %call6, null
  br i1 %tobool7, label %if.end, label %if.then11

if.end:                                           ; preds = %if.then5
  %call9 = tail call i8* @getenv(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @.str.1, i64 0, i64 0)) #6
  %tobool10 = icmp eq i8* %call9, null
  br i1 %tobool10, label %if.else, label %if.then11

if.then11:                                        ; preds = %if.end, %if.then5
  %threads_str.054 = phi i8* [ %call9, %if.end ], [ %call6, %if.then5 ]
  %call12 = tail call i32 @atoi(i8* nonnull %threads_str.054) #6
  br label %if.end14

if.else:                                          ; preds = %if.end
  %call13 = tail call i32 @halide_host_cpu_count() #6
  br label %if.end14

if.end14:                                         ; preds = %if.else, %if.then11
  %storemerge = phi i32 [ %call13, %if.else ], [ %call12, %if.then11 ]
  store i32 %storemerge, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  br label %if.end15

if.end15:                                         ; preds = %if.end14, %if.then
  %2 = phi i32 [ %1, %if.then ], [ %storemerge, %if.end14 ]
  %cmp = icmp sgt i32 %2, 64
  br i1 %cmp, label %for.cond.preheader.thread, label %if.else17

for.cond.preheader.thread:                        ; preds = %if.end15
  store i32 64, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  br label %for.body

if.else17:                                        ; preds = %if.end15
  %cmp18 = icmp slt i32 %2, 1
  br i1 %cmp18, label %for.cond.preheader.thread61, label %for.cond.preheader

for.cond.preheader.thread61:                      ; preds = %if.else17
  store i32 1, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  br label %for.cond.cleanup

for.cond.preheader:                               ; preds = %if.else17
  %cmp2256 = icmp sgt i32 %2, 1
  br i1 %cmp2256, label %for.body, label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.body, %for.cond.preheader, %for.cond.preheader.thread61
  %.lcssa = phi i32 [ 1, %for.cond.preheader ], [ 1, %for.cond.preheader.thread61 ], [ %3, %for.body ]
  store i32 %.lcssa, i32* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 2), align 8, !tbaa !13
  store i8 1, i8* @_ZN6Halide7Runtime8Internal30halide_thread_pool_initializedE, align 1, !tbaa !4
  br label %if.end24

for.body:                                         ; preds = %for.body, %for.cond.preheader, %for.cond.preheader.thread
  %indvars.iv = phi i64 [ %indvars.iv.next, %for.body ], [ 0, %for.cond.preheader ], [ 0, %for.cond.preheader.thread ]
  %add.ptr = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 7, i64 %indvars.iv
  %call23 = tail call i32 @pthread_create(i64* %add.ptr, %struct.pthread_attr_t* null, i8* (i8*)* nonnull @_ZN6Halide7Runtime8Internal20halide_worker_threadEPv, i8* null) #6
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %3 = load i32, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  %sub = add nsw i32 %3, -1
  %4 = sext i32 %sub to i64
  %cmp22 = icmp slt i64 %indvars.iv.next, %4
  br i1 %cmp22, label %for.body, label %for.cond.cleanup

if.end24:                                         ; preds = %for.cond.cleanup, %entry.if.end24_crit_edge
  %5 = phi i32 [ %.pre59, %entry.if.end24_crit_edge ], [ %.lcssa, %for.cond.cleanup ]
  %6 = phi i32 [ %.pre, %entry.if.end24_crit_edge ], [ %.lcssa, %for.cond.cleanup ]
  %7 = bitcast %"struct.Halide::Runtime::Internal::work"* %job to i8*
  call void @llvm.lifetime.start(i64 48, i8* %7) #7
  %f25 = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %job, i64 0, i32 1
  store i32 (i8*, i32, i8*)* %f, i32 (i8*, i32, i8*)** %f25, align 8, !tbaa !22
  %user_context26 = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %job, i64 0, i32 2
  store i8* %user_context, i8** %user_context26, align 8, !tbaa !24
  %next = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %job, i64 0, i32 3
  store i32 %min, i32* %next, align 8, !tbaa !25
  %add = add nsw i32 %size, %min
  %max = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %job, i64 0, i32 4
  store i32 %add, i32* %max, align 4, !tbaa !26
  %closure27 = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %job, i64 0, i32 5
  store i8* %closure, i8** %closure27, align 8, !tbaa !27
  %exit_status = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %job, i64 0, i32 7
  store i32 0, i32* %exit_status, align 4, !tbaa !28
  %active_workers = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %job, i64 0, i32 6
  store i32 0, i32* %active_workers, align 8, !tbaa !29
  %8 = load %"struct.Halide::Runtime::Internal::work"*, %"struct.Halide::Runtime::Internal::work"** getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 1), align 8, !tbaa !20
  %tobool28 = icmp eq %"struct.Halide::Runtime::Internal::work"* %8, null
  %cmp29 = icmp sgt i32 %6, %size
  %or.cond = and i1 %cmp29, %tobool28
  %storemerge52 = select i1 %or.cond, i32 %size, i32 %6
  store i32 %storemerge52, i32* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 3), align 4, !tbaa !30
  %cmp33 = icmp slt i32 %5, %size
  %9 = ptrtoint %"struct.Halide::Runtime::Internal::work"* %8 to i64
  %10 = bitcast %"struct.Halide::Runtime::Internal::work"* %job to i64*
  store i64 %9, i64* %10, align 8, !tbaa !31
  store %"struct.Halide::Runtime::Internal::work"* %job, %"struct.Halide::Runtime::Internal::work"** getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 1), align 8, !tbaa !20
  %call34 = call i32 @pthread_mutex_unlock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %call35 = call i32 @pthread_cond_broadcast(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 5)) #6
  br i1 %cmp33, label %if.then37, label %if.end39

if.then37:                                        ; preds = %if.end24
  %call38 = call i32 @pthread_cond_broadcast(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 6)) #6
  br label %if.end39

if.end39:                                         ; preds = %if.then37, %if.end24
  %call40 = call i8* @_ZN6Halide7Runtime8Internal20halide_worker_threadEPv(i8* %7) #8
  %11 = load i32, i32* %exit_status, align 4, !tbaa !28
  call void @llvm.lifetime.end(i64 48, i8* %7) #7
  ret i32 %11
}

declare i32 @pthread_mutex_lock(%struct.pthread_mutex_t*) #1

declare i32 @pthread_cond_init(%struct.pthread_cond_t*, i64*) #1

; Function Attrs: nounwind readonly
declare i8* @getenv(i8* nocapture) #3

; Function Attrs: nounwind readonly
declare i32 @atoi(i8* nocapture) #3

; Function Attrs: nounwind
define linkonce i8* @_ZN6Halide7Runtime8Internal20halide_worker_threadEPv(i8* %void_arg) #0 {
entry:
  %0 = bitcast i8* %void_arg to %"struct.Halide::Runtime::Internal::work"*
  %call = tail call i32 @pthread_mutex_lock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %active_workers.i = getelementptr inbounds i8, i8* %void_arg, i64 40
  %1 = bitcast i8* %active_workers.i to i32*
  %cmp = icmp eq i8* %void_arg, null
  %next.i = getelementptr inbounds i8, i8* %void_arg, i64 24
  %2 = bitcast i8* %next.i to i64*
  br i1 %cmp, label %cond.false.preheader, label %cond.true.us

cond.false.preheader:                             ; preds = %entry
  %3 = load i8, i8* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 8), align 8, !tbaa !19, !range !8
  %lnot.i79 = icmp eq i8 %3, 0
  br i1 %lnot.i79, label %while.body, label %while.end

cond.true.us:                                     ; preds = %if.then4.us, %if.then30.us, %_ZN6Halide7Runtime8Internal4work7runningEv.exit73.us, %if.end25.us, %entry
  %4 = load i64, i64* %2, align 8
  %5 = trunc i64 %4 to i32
  %6 = lshr i64 %4, 32
  %7 = trunc i64 %6 to i32
  %cmp.i.us = icmp slt i32 %5, %7
  br i1 %cmp.i.us, label %while.body.us, label %cond.end.us

cond.end.us:                                      ; preds = %cond.true.us
  %8 = load i32, i32* %1, align 8, !tbaa !29
  %cmp2.i.us = icmp sgt i32 %8, 0
  br i1 %cmp2.i.us, label %while.body.us, label %while.end

while.body.us:                                    ; preds = %cond.end.us, %cond.true.us
  %9 = load %"struct.Halide::Runtime::Internal::work"*, %"struct.Halide::Runtime::Internal::work"** getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 1), align 8, !tbaa !20
  %cmp3.us = icmp eq %"struct.Halide::Runtime::Internal::work"* %9, null
  br i1 %cmp3.us, label %if.then4.us, label %if.else12.us

if.else12.us:                                     ; preds = %while.body.us
  %myjob.sroa.3.0..sroa_idx38.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %9, i64 0, i32 1
  %myjob.sroa.3.0.copyload.us = load i32 (i8*, i32, i8*)*, i32 (i8*, i32, i8*)** %myjob.sroa.3.0..sroa_idx38.us, align 8
  %myjob.sroa.4.0..sroa_idx40.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %9, i64 0, i32 2
  %myjob.sroa.4.0.copyload.us = load i8*, i8** %myjob.sroa.4.0..sroa_idx40.us, align 8
  %myjob.sroa.5.0..sroa_idx42.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %9, i64 0, i32 3
  %10 = bitcast i32* %myjob.sroa.5.0..sroa_idx42.us to i64*
  %myjob.sroa.5.0.copyload.us = load i64, i64* %10, align 8
  %11 = trunc i64 %myjob.sroa.5.0.copyload.us to i32
  %myjob.sroa.646.0..sroa_idx47.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %9, i64 0, i32 5
  %myjob.sroa.646.0.copyload.us = load i8*, i8** %myjob.sroa.646.0..sroa_idx47.us, align 8
  %inc13.us = add nsw i32 %11, 1
  store i32 %inc13.us, i32* %myjob.sroa.5.0..sroa_idx42.us, align 8, !tbaa !25
  %12 = lshr i64 %myjob.sroa.5.0.copyload.us, 32
  %13 = trunc i64 %12 to i32
  %cmp15.us = icmp eq i32 %inc13.us, %13
  br i1 %cmp15.us, label %if.then16.us, label %if.end17.us

if.then16.us:                                     ; preds = %if.else12.us
  %14 = bitcast %"struct.Halide::Runtime::Internal::work"* %9 to i64*
  %15 = load i64, i64* %14, align 8, !tbaa !31
  store i64 %15, i64* bitcast (%"struct.Halide::Runtime::Internal::work"** getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 1) to i64*), align 8, !tbaa !20
  br label %if.end17.us

if.end17.us:                                      ; preds = %if.then16.us, %if.else12.us
  %active_workers.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %9, i64 0, i32 6
  %16 = load i32, i32* %active_workers.us, align 8, !tbaa !29
  %inc18.us = add nsw i32 %16, 1
  store i32 %inc18.us, i32* %active_workers.us, align 8, !tbaa !29
  %call19.us = tail call i32 @pthread_mutex_unlock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %call21.us = tail call i32 @halide_do_task(i8* %myjob.sroa.4.0.copyload.us, i32 (i8*, i32, i8*)* %myjob.sroa.3.0.copyload.us, i32 %11, i8* %myjob.sroa.646.0.copyload.us) #8
  %call22.us = tail call i32 @pthread_mutex_lock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %tobool23.us = icmp eq i32 %call21.us, 0
  br i1 %tobool23.us, label %if.end25.us, label %if.then24.us

if.then24.us:                                     ; preds = %if.end17.us
  %exit_status.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %9, i64 0, i32 7
  store i32 %call21.us, i32* %exit_status.us, align 4, !tbaa !28
  br label %if.end25.us

if.end25.us:                                      ; preds = %if.then24.us, %if.end17.us
  %17 = load i32, i32* %active_workers.us, align 8, !tbaa !29
  %dec27.us = add nsw i32 %17, -1
  store i32 %dec27.us, i32* %active_workers.us, align 8, !tbaa !29
  %18 = load i64, i64* %10, align 8
  %19 = trunc i64 %18 to i32
  %20 = lshr i64 %18, 32
  %21 = trunc i64 %20 to i32
  %cmp.i69.us = icmp slt i32 %19, %21
  br i1 %cmp.i69.us, label %cond.true.us, label %_ZN6Halide7Runtime8Internal4work7runningEv.exit73.us

_ZN6Halide7Runtime8Internal4work7runningEv.exit73.us: ; preds = %if.end25.us
  %cmp2.i71.us = icmp sgt i32 %17, 1
  %cmp29.us = icmp eq %"struct.Halide::Runtime::Internal::work"* %9, %0
  %or.cond.us = or i1 %cmp29.us, %cmp2.i71.us
  br i1 %or.cond.us, label %cond.true.us, label %if.then30.us

if.then30.us:                                     ; preds = %_ZN6Halide7Runtime8Internal4work7runningEv.exit73.us
  %call31.us = tail call i32 @pthread_cond_broadcast(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 4)) #6
  br label %cond.true.us

if.then4.us:                                      ; preds = %while.body.us
  %call5.us = tail call i32 @pthread_cond_wait(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 4), %struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  br label %cond.true.us

while.body:                                       ; preds = %cond.false.backedge, %cond.false.preheader
  %22 = load %"struct.Halide::Runtime::Internal::work"*, %"struct.Halide::Runtime::Internal::work"** getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 1), align 8, !tbaa !20
  %cmp3 = icmp eq %"struct.Halide::Runtime::Internal::work"* %22, null
  br i1 %cmp3, label %if.else, label %if.else12

if.else:                                          ; preds = %while.body
  %23 = load i64, i64* bitcast (i32* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 2) to i64*), align 8
  %24 = trunc i64 %23 to i32
  %25 = lshr i64 %23, 32
  %26 = trunc i64 %25 to i32
  %cmp6 = icmp sgt i32 %24, %26
  br i1 %cmp6, label %if.else9, label %if.then7

if.then7:                                         ; preds = %if.else
  %call8 = tail call i32 @pthread_cond_wait(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 5), %struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  br label %cond.false.backedge

if.else9:                                         ; preds = %if.else
  %dec = add nsw i32 %24, -1
  store i32 %dec, i32* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 2), align 8, !tbaa !13
  %call10 = tail call i32 @pthread_cond_wait(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 6), %struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %27 = load i32, i32* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 2), align 8, !tbaa !13
  %inc = add nsw i32 %27, 1
  store i32 %inc, i32* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 2), align 8, !tbaa !13
  br label %cond.false.backedge

cond.false.backedge:                              ; preds = %if.then30, %_ZN6Halide7Runtime8Internal4work7runningEv.exit73, %if.end25, %if.else9, %if.then7
  %28 = load i8, i8* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 8), align 8, !tbaa !19, !range !8
  %lnot.i = icmp eq i8 %28, 0
  br i1 %lnot.i, label %while.body, label %while.end

if.else12:                                        ; preds = %while.body
  %myjob.sroa.3.0..sroa_idx38 = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %22, i64 0, i32 1
  %myjob.sroa.3.0.copyload = load i32 (i8*, i32, i8*)*, i32 (i8*, i32, i8*)** %myjob.sroa.3.0..sroa_idx38, align 8
  %myjob.sroa.4.0..sroa_idx40 = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %22, i64 0, i32 2
  %myjob.sroa.4.0.copyload = load i8*, i8** %myjob.sroa.4.0..sroa_idx40, align 8
  %myjob.sroa.5.0..sroa_idx42 = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %22, i64 0, i32 3
  %29 = bitcast i32* %myjob.sroa.5.0..sroa_idx42 to i64*
  %myjob.sroa.5.0.copyload = load i64, i64* %29, align 8
  %30 = trunc i64 %myjob.sroa.5.0.copyload to i32
  %myjob.sroa.646.0..sroa_idx47 = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %22, i64 0, i32 5
  %myjob.sroa.646.0.copyload = load i8*, i8** %myjob.sroa.646.0..sroa_idx47, align 8
  %inc13 = add nsw i32 %30, 1
  store i32 %inc13, i32* %myjob.sroa.5.0..sroa_idx42, align 8, !tbaa !25
  %31 = lshr i64 %myjob.sroa.5.0.copyload, 32
  %32 = trunc i64 %31 to i32
  %cmp15 = icmp eq i32 %inc13, %32
  br i1 %cmp15, label %if.then16, label %if.end17

if.then16:                                        ; preds = %if.else12
  %33 = bitcast %"struct.Halide::Runtime::Internal::work"* %22 to i64*
  %34 = load i64, i64* %33, align 8, !tbaa !31
  store i64 %34, i64* bitcast (%"struct.Halide::Runtime::Internal::work"** getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 1) to i64*), align 8, !tbaa !20
  br label %if.end17

if.end17:                                         ; preds = %if.then16, %if.else12
  %active_workers = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %22, i64 0, i32 6
  %35 = load i32, i32* %active_workers, align 8, !tbaa !29
  %inc18 = add nsw i32 %35, 1
  store i32 %inc18, i32* %active_workers, align 8, !tbaa !29
  %call19 = tail call i32 @pthread_mutex_unlock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %call21 = tail call i32 @halide_do_task(i8* %myjob.sroa.4.0.copyload, i32 (i8*, i32, i8*)* %myjob.sroa.3.0.copyload, i32 %30, i8* %myjob.sroa.646.0.copyload) #8
  %call22 = tail call i32 @pthread_mutex_lock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %tobool23 = icmp eq i32 %call21, 0
  br i1 %tobool23, label %if.end25, label %if.then24

if.then24:                                        ; preds = %if.end17
  %exit_status = getelementptr inbounds %"struct.Halide::Runtime::Internal::work", %"struct.Halide::Runtime::Internal::work"* %22, i64 0, i32 7
  store i32 %call21, i32* %exit_status, align 4, !tbaa !28
  br label %if.end25

if.end25:                                         ; preds = %if.then24, %if.end17
  %36 = load i32, i32* %active_workers, align 8, !tbaa !29
  %dec27 = add nsw i32 %36, -1
  store i32 %dec27, i32* %active_workers, align 8, !tbaa !29
  %37 = load i64, i64* %29, align 8
  %38 = trunc i64 %37 to i32
  %39 = lshr i64 %37, 32
  %40 = trunc i64 %39 to i32
  %cmp.i69 = icmp slt i32 %38, %40
  br i1 %cmp.i69, label %cond.false.backedge, label %_ZN6Halide7Runtime8Internal4work7runningEv.exit73

_ZN6Halide7Runtime8Internal4work7runningEv.exit73: ; preds = %if.end25
  %cmp2.i71 = icmp sgt i32 %36, 1
  %cmp29 = icmp eq %"struct.Halide::Runtime::Internal::work"* %22, %0
  %or.cond = or i1 %cmp29, %cmp2.i71
  br i1 %or.cond, label %cond.false.backedge, label %if.then30

if.then30:                                        ; preds = %_ZN6Halide7Runtime8Internal4work7runningEv.exit73
  %call31 = tail call i32 @pthread_cond_broadcast(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 4)) #6
  br label %cond.false.backedge

while.end:                                        ; preds = %cond.false.backedge, %cond.end.us, %cond.false.preheader
  %call34 = tail call i32 @pthread_mutex_unlock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  ret i8* null
}

declare i32 @pthread_mutex_unlock(%struct.pthread_mutex_t*) #1

; Function Attrs: nounwind
define weak i32 @halide_do_task(i8* %user_context, i32 (i8*, i32, i8*)* %f, i32 %idx, i8* %closure) #0 {
entry:
  %0 = load i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)*, i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)** @_ZN6Halide7Runtime8Internal21halide_custom_do_taskE, align 8, !tbaa !32
  %call = tail call i32 %0(i8* %user_context, i32 (i8*, i32, i8*)* %f, i32 %idx, i8* %closure) #6
  ret i32 %call
}

declare i32 @pthread_cond_broadcast(%struct.pthread_cond_t*) #1

declare i32 @pthread_cond_wait(%struct.pthread_cond_t*, %struct.pthread_mutex_t*) #1

declare i32 @pthread_create(i64*, %struct.pthread_attr_t*, i8* (i8*)*, i8*) #1

; Function Attrs: nounwind
define weak void @halide_posix_thread_pool_cleanup() #0 {
entry:
  tail call void @halide_shutdown_thread_pool() #8
  ret void
}

; Function Attrs: nounwind
define weak void @halide_shutdown_thread_pool() #0 {
entry:
  %retval = alloca i8*, align 8
  %0 = load i8, i8* @_ZN6Halide7Runtime8Internal30halide_thread_pool_initializedE, align 1, !tbaa !4, !range !8
  %tobool = icmp eq i8 %0, 0
  br i1 %tobool, label %return, label %if.end

if.end:                                           ; preds = %entry
  %call = tail call i32 @pthread_mutex_lock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  store i8 1, i8* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 8), align 8, !tbaa !19
  %call1 = tail call i32 @pthread_cond_broadcast(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 4)) #6
  %call2 = tail call i32 @pthread_cond_broadcast(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 5)) #6
  %call3 = tail call i32 @pthread_cond_broadcast(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 6)) #6
  %call4 = tail call i32 @pthread_mutex_unlock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %1 = load i32, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  %cmp15 = icmp sgt i32 %1, 1
  br i1 %cmp15, label %for.body.lr.ph, label %for.cond.cleanup

for.body.lr.ph:                                   ; preds = %if.end
  %2 = bitcast i8** %retval to i8*
  br label %for.body

for.cond.cleanup:                                 ; preds = %for.body, %if.end
  %call6 = call i32 @pthread_mutex_destroy(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0)) #6
  %call7 = call i32 @pthread_mutex_init(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 0), i64* null) #6
  %call8 = call i32 @pthread_cond_destroy(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 4)) #6
  %call9 = call i32 @pthread_cond_destroy(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 5)) #6
  %call10 = call i32 @pthread_cond_destroy(%struct.pthread_cond_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 6)) #6
  store i8 0, i8* @_ZN6Halide7Runtime8Internal30halide_thread_pool_initializedE, align 1, !tbaa !4
  br label %return

for.body:                                         ; preds = %for.body, %for.body.lr.ph
  %indvars.iv = phi i64 [ 0, %for.body.lr.ph ], [ %indvars.iv.next, %for.body ]
  call void @llvm.lifetime.start(i64 8, i8* %2) #7
  %arrayidx = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_work_queue_t", %"struct.Halide::Runtime::Internal::halide_work_queue_t"* @_ZN6Halide7Runtime8Internal17halide_work_queueE, i64 0, i32 7, i64 %indvars.iv
  %3 = load i64, i64* %arrayidx, align 8, !tbaa !33
  %call5 = call i32 @pthread_join(i64 %3, i8** nonnull %retval) #6
  call void @llvm.lifetime.end(i64 8, i8* %2) #7
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %4 = load i32, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  %sub = add nsw i32 %4, -1
  %5 = sext i32 %sub to i64
  %cmp = icmp slt i64 %indvars.iv.next, %5
  br i1 %cmp, label %for.body, label %for.cond.cleanup

return:                                           ; preds = %for.cond.cleanup, %entry
  ret void
}

declare i32 @pthread_mutex_destroy(%struct.pthread_mutex_t*) #1

declare i32 @pthread_mutex_init(%struct.pthread_mutex_t*, i64*) #1

declare i32 @pthread_cond_destroy(%struct.pthread_cond_t*) #1

declare i32 @pthread_join(i64, i8**) #1

; Function Attrs: nounwind
define linkonce i8* @_ZN6Halide7Runtime8Internal26halide_spawn_thread_helperEPv(i8* %arg) #0 {
entry:
  %f = bitcast i8* %arg to void (i8*)**
  %0 = load void (i8*)*, void (i8*)** %f, align 8, !tbaa !34
  %closure = getelementptr inbounds i8, i8* %arg, i64 8
  %1 = bitcast i8* %closure to i8**
  %2 = load i8*, i8** %1, align 8, !tbaa !36
  tail call void %0(i8* %2) #6
  tail call void @free(i8* %arg) #6
  ret i8* null
}

; Function Attrs: nounwind
declare void @free(i8* nocapture) #0

; Function Attrs: nounwind
define weak void @halide_spawn_thread(i8* %user_context, void (i8*)* %f, i8* %closure) #0 {
entry:
  %thread = alloca i64, align 8
  %0 = bitcast i64* %thread to i8*
  call void @llvm.lifetime.start(i64 8, i8* %0) #7
  %call = tail call i8* @malloc(i64 16) #6
  %f1 = bitcast i8* %call to void (i8*)**
  store void (i8*)* %f, void (i8*)** %f1, align 8, !tbaa !34
  %closure2 = getelementptr inbounds i8, i8* %call, i64 8
  %1 = bitcast i8* %closure2 to i8**
  store i8* %closure, i8** %1, align 8, !tbaa !36
  %call3 = call i32 @pthread_create(i64* nonnull %thread, %struct.pthread_attr_t* null, i8* (i8*)* nonnull @_ZN6Halide7Runtime8Internal26halide_spawn_thread_helperEPv, i8* %call) #6
  call void @llvm.lifetime.end(i64 8, i8* %0) #7
  ret void
}

; Function Attrs: nounwind
declare noalias i8* @malloc(i64) #0

; Function Attrs: nounwind
define weak void @halide_mutex_cleanup(%struct.pthread_mutex_t* %mutex_arg) #0 {
entry:
  %call = tail call i32 @pthread_mutex_destroy(%struct.pthread_mutex_t* %mutex_arg) #6
  %0 = bitcast %struct.pthread_mutex_t* %mutex_arg to i8*
  %call1 = tail call i8* @memset(i8* %0, i32 0, i64 64) #6
  ret void
}

declare i8* @memset(i8*, i32, i64) #1

; Function Attrs: nounwind
define weak void @halide_mutex_lock(%struct.pthread_mutex_t* %mutex_arg) #0 {
entry:
  %call = tail call i32 @pthread_mutex_lock(%struct.pthread_mutex_t* %mutex_arg) #6
  ret void
}

; Function Attrs: nounwind
define weak void @halide_mutex_unlock(%struct.pthread_mutex_t* %mutex_arg) #0 {
entry:
  %call = tail call i32 @pthread_mutex_unlock(%struct.pthread_mutex_t* %mutex_arg) #6
  ret void
}

; Function Attrs: nounwind
define weak void @halide_set_num_threads(i32 %n) #0 {
entry:
  %0 = load i32, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  %cmp = icmp eq i32 %0, %n
  br i1 %cmp, label %return, label %if.end

if.end:                                           ; preds = %entry
  %1 = load i8, i8* @_ZN6Halide7Runtime8Internal30halide_thread_pool_initializedE, align 1, !tbaa !4, !range !8
  %tobool = icmp eq i8 %1, 0
  br i1 %tobool, label %if.end2, label %if.then1

if.then1:                                         ; preds = %if.end
  tail call void @halide_shutdown_thread_pool() #8
  br label %if.end2

if.end2:                                          ; preds = %if.then1, %if.end
  store i32 %n, i32* @_ZN6Halide7Runtime8Internal18halide_num_threadsE, align 4, !tbaa !21
  br label %return

return:                                           ; preds = %if.end2, %entry
  ret void
}

; Function Attrs: norecurse nounwind
define weak i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)* @halide_set_custom_do_task(i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)* %f) #4 {
entry:
  %0 = load i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)*, i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)** @_ZN6Halide7Runtime8Internal21halide_custom_do_taskE, align 8, !tbaa !32
  store i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)* %f, i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)** @_ZN6Halide7Runtime8Internal21halide_custom_do_taskE, align 8, !tbaa !32
  ret i32 (i8*, i32 (i8*, i32, i8*)*, i32, i8*)* %0
}

; Function Attrs: norecurse nounwind
define weak i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)* @halide_set_custom_do_par_for(i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)* %f) #4 {
entry:
  %0 = load i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)*, i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)** @_ZN6Halide7Runtime8Internal24halide_custom_do_par_forE, align 8, !tbaa !32
  store i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)* %f, i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)** @_ZN6Halide7Runtime8Internal24halide_custom_do_par_forE, align 8, !tbaa !32
  ret i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)* %0
}

; Function Attrs: nounwind
define weak i32 @halide_do_par_for(i8* %user_context, i32 (i8*, i32, i8*)* %f, i32 %min, i32 %size, i8* %closure) #0 {
entry:
  %0 = load i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)*, i32 (i8*, i32 (i8*, i32, i8*)*, i32, i32, i8*)** @_ZN6Halide7Runtime8Internal24halide_custom_do_par_forE, align 8, !tbaa !32
  %call = tail call i32 %0(i8* %user_context, i32 (i8*, i32, i8*)* %f, i32 %min, i32 %size, i8* %closure) #6
  ret i32 %call
}

; Function Attrs: nounwind
define weak i8* @halide_get_symbol(i8* %name) #0 {
entry:
  %call = tail call i8* @dlsym(i8* null, i8* %name) #6
  ret i8* %call
}

declare i8* @dlsym(i8*, i8*) #1

; Function Attrs: nounwind
define weak i8* @halide_load_library(i8* %name) #0 {
entry:
  %call = tail call i8* @dlopen(i8* %name, i32 1) #6
  ret i8* %call
}

declare i8* @dlopen(i8*, i32) #1

; Function Attrs: nounwind
define weak i8* @halide_get_library_symbol(i8* %lib, i8* %name) #0 {
entry:
  %call = tail call i8* @dlsym(i8* %lib, i8* %name) #6
  ret i8* %call
}

; Function Attrs: norecurse nounwind
define weak void @halide_set_gpu_device(i32 %d) #4 {
entry:
  store i32 %d, i32* @_ZN6Halide7Runtime8Internal17halide_gpu_deviceE, align 4, !tbaa !21
  store i8 1, i8* @_ZN6Halide7Runtime8Internal29halide_gpu_device_initializedE, align 1, !tbaa !4
  ret void
}

; Function Attrs: nounwind
define weak i32 @halide_get_gpu_device(i8* %user_context) #0 {
entry:
  br label %while.cond.i

while.cond.i:                                     ; preds = %while.cond.i, %entry
  %0 = atomicrmw xchg i32* @_ZN6Halide7Runtime8Internal22halide_gpu_device_lockE, i32 1 seq_cst
  %tobool.i = icmp eq i32 %0, 0
  br i1 %tobool.i, label %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit, label %while.cond.i

_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit: ; preds = %while.cond.i
  %1 = load i8, i8* @_ZN6Halide7Runtime8Internal29halide_gpu_device_initializedE, align 1, !tbaa !4, !range !8
  %tobool = icmp eq i8 %1, 0
  br i1 %tobool, label %if.then, label %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit.if.end4_crit_edge

_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit.if.end4_crit_edge: ; preds = %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit
  %.pre = load i32, i32* @_ZN6Halide7Runtime8Internal17halide_gpu_deviceE, align 4, !tbaa !21
  br label %if.end4

if.then:                                          ; preds = %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit
  %call = tail call i8* @getenv(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @.str.2, i64 0, i64 0)) #6
  %tobool1 = icmp eq i8* %call, null
  br i1 %tobool1, label %if.end, label %if.then2

if.then2:                                         ; preds = %if.then
  %call3 = tail call i32 @atoi(i8* nonnull %call) #6
  br label %if.end

if.end:                                           ; preds = %if.then2, %if.then
  %storemerge = phi i32 [ %call3, %if.then2 ], [ -1, %if.then ]
  store i32 %storemerge, i32* @_ZN6Halide7Runtime8Internal17halide_gpu_deviceE, align 4, !tbaa !21
  store i8 1, i8* @_ZN6Halide7Runtime8Internal29halide_gpu_device_initializedE, align 1, !tbaa !4
  br label %if.end4

if.end4:                                          ; preds = %if.end, %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit.if.end4_crit_edge
  %2 = phi i32 [ %.pre, %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit.if.end4_crit_edge ], [ %storemerge, %if.end ]
  store atomic i32 0, i32* @_ZN6Halide7Runtime8Internal22halide_gpu_device_lockE release, align 4
  ret i32 %2
}

; Function Attrs: nounwind
define linkonce i32 @_ZN6Halide7Runtime8Internal13default_traceEPvPK18halide_trace_event(i8* %user_context, %struct.halide_trace_event* %e) #0 {
entry:
  %buffer = alloca [4096 x i8], align 4
  %0 = atomicrmw add i32* @_ZZN6Halide7Runtime8Internal13default_traceEPvPK18halide_trace_eventE3ids, i32 1 seq_cst
  %call = tail call i32 @halide_get_trace_file(i8* %user_context) #8
  %cmp = icmp sgt i32 %call, 0
  br i1 %cmp, label %if.then, label %if.else

if.then:                                          ; preds = %entry
  %vector_width = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 5
  %1 = load i32, i32* %vector_width, align 1, !tbaa !37
  %dimensions = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 8
  %2 = load i32, i32* %dimensions, align 1, !tbaa !40
  %bits = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 4
  %3 = load i32, i32* %bits, align 1, !tbaa !41
  br label %while.cond

while.cond:                                       ; preds = %while.cond, %if.then
  %bytes.0 = phi i32 [ %shl, %while.cond ], [ 1, %if.then ]
  %mul = shl nsw i32 %bytes.0, 3
  %cmp10 = icmp slt i32 %mul, %3
  %shl = shl i32 %bytes.0, 1
  br i1 %cmp10, label %while.cond, label %while.end

while.end:                                        ; preds = %while.cond
  %phitmp = trunc i32 %1 to i8
  %phitmp382 = trunc i32 %2 to i8
  %cmp1 = icmp slt i32 %1, 256
  %phitmp. = select i1 %cmp1, i8 %phitmp, i8 -1
  %cmp3 = icmp slt i32 %2, 256
  %cond8 = select i1 %cmp3, i8 %phitmp382, i8 -1
  %conv11 = zext i8 %phitmp. to i32
  %mul12 = mul nsw i32 %bytes.0, %conv11
  %conv13 = sext i32 %mul12 to i64
  %conv14 = zext i8 %cond8 to i64
  %mul15 = shl nuw nsw i64 %conv14, 2
  %add = add nsw i64 %conv13, 48
  %add16 = add nsw i64 %add, %mul15
  %4 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 0
  call void @llvm.lifetime.start(i64 4096, i8* %4) #7
  %cmp17 = icmp ult i64 %add16, 4097
  br i1 %cmp17, label %if.end, label %if.then18

if.then18:                                        ; preds = %while.end
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([139 x i8], [139 x i8]* @.str.3, i64 0, i64 0)) #6
  tail call void @abort() #6
  %.pre = load i32, i32* %bits, align 1, !tbaa !41
  br label %if.end

if.end:                                           ; preds = %if.then18, %while.end
  %5 = phi i32 [ %.pre, %if.then18 ], [ %3, %while.end ]
  %6 = bitcast [4096 x i8]* %buffer to i32*
  store i32 %0, i32* %6, align 4, !tbaa !21
  %parent_id = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 2
  %7 = load i32, i32* %parent_id, align 1, !tbaa !42
  %arrayidx20 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 4
  %8 = bitcast i8* %arrayidx20 to i32*
  store i32 %7, i32* %8, align 4, !tbaa !21
  %event = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 1
  %9 = load i32, i32* %event, align 1, !tbaa !43
  %conv21 = trunc i32 %9 to i8
  %arrayidx22 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 8
  store i8 %conv21, i8* %arrayidx22, align 4, !tbaa !44
  %type_code = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 3
  %10 = load i32, i32* %type_code, align 1, !tbaa !45
  %conv23 = trunc i32 %10 to i8
  %arrayidx24 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 9
  store i8 %conv23, i8* %arrayidx24, align 1, !tbaa !44
  %conv26 = trunc i32 %5 to i8
  %arrayidx27 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 10
  store i8 %conv26, i8* %arrayidx27, align 2, !tbaa !44
  %arrayidx28 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 11
  store i8 %phitmp., i8* %arrayidx28, align 1, !tbaa !44
  %value_index = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 6
  %11 = load i32, i32* %value_index, align 1, !tbaa !46
  %conv29 = trunc i32 %11 to i8
  %arrayidx30 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 12
  store i8 %conv29, i8* %arrayidx30, align 4, !tbaa !44
  %arrayidx31 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 13
  store i8 %cond8, i8* %arrayidx31, align 1, !tbaa !44
  %func = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 0
  %.pre576 = load i8*, i8** %func, align 1, !tbaa !47
  br label %for.body

for.body43.preheader:                             ; preds = %for.inc, %for.body
  %i.1563.ph = phi i64 [ %i.0564, %for.body ], [ 47, %for.inc ]
  %12 = sub i64 48, %i.1563.ph
  %min.iters.check = icmp ult i64 %12, 4
  br i1 %min.iters.check, label %for.body43.preheader3, label %min.iters.checked

for.body43.preheader3:                            ; preds = %vector.body.preheader, %min.iters.checked, %for.body43.preheader
  %i.1563.ph4 = phi i64 [ %i.1563.ph, %min.iters.checked ], [ %i.1563.ph, %for.body43.preheader ], [ %ind.end, %vector.body.preheader ]
  %scevgep9 = getelementptr [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %i.1563.ph4
  %13 = sub i64 48, %i.1563.ph4
  call void @llvm.memset.p0i8.i64(i8* %scevgep9, i8 0, i64 %13, i32 1, i1 false)
  br label %for.cond49.preheader

min.iters.checked:                                ; preds = %for.body43.preheader
  %n.vec = and i64 %12, -4
  %cmp.zero = icmp eq i64 %n.vec, 0
  br i1 %cmp.zero, label %for.body43.preheader3, label %vector.body.preheader

vector.body.preheader:                            ; preds = %min.iters.checked
  %ind.end = add i64 %n.vec, %i.1563.ph
  %scevgep10 = getelementptr [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %i.1563.ph
  call void @llvm.memset.p0i8.i64(i8* %scevgep10, i8 0, i64 %n.vec, i32 1, i1 false)
  %cmp.n = icmp eq i64 %12, %n.vec
  br i1 %cmp.n, label %for.cond49.preheader, label %for.body43.preheader3

for.body:                                         ; preds = %for.inc, %if.end
  %i.0564 = phi i64 [ 14, %if.end ], [ %inc, %for.inc ]
  %sub33 = add nsw i64 %i.0564, -14
  %arrayidx34 = getelementptr inbounds i8, i8* %.pre576, i64 %sub33
  %14 = load i8, i8* %arrayidx34, align 1, !tbaa !44
  %arrayidx35 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %i.0564
  store i8 %14, i8* %arrayidx35, align 1, !tbaa !44
  %cmp38 = icmp eq i8 %14, 0
  br i1 %cmp38, label %for.body43.preheader, label %for.inc

for.inc:                                          ; preds = %for.body
  %inc = add nuw nsw i64 %i.0564, 1
  %cmp32 = icmp ult i64 %inc, 47
  br i1 %cmp32, label %for.body, label %for.body43.preheader

for.cond49.preheader:                             ; preds = %vector.body.preheader, %for.body43.preheader3
  %cmp50560 = icmp eq i32 %mul12, 0
  br i1 %cmp50560, label %for.cond59.preheader, label %for.body51.lr.ph

for.body51.lr.ph:                                 ; preds = %for.cond49.preheader
  %value = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 7
  %.pre577 = load i8*, i8** %value, align 1, !tbaa !48
  %15 = icmp ugt i64 %conv13, 1
  %umax = select i1 %15, i64 %conv13, i64 1
  %min.iters.check587 = icmp ult i64 %umax, 4
  br i1 %min.iters.check587, label %for.body51, label %min.iters.checked588

min.iters.checked588:                             ; preds = %for.body51.lr.ph
  %n.vec590 = and i64 %umax, -4
  %cmp.zero591 = icmp eq i64 %n.vec590, 0
  br i1 %cmp.zero591, label %for.body51, label %vector.memcheck

vector.memcheck:                                  ; preds = %min.iters.checked588
  %scevgep = getelementptr [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 48
  %16 = add nsw i64 %umax, 47
  %scevgep594 = getelementptr [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %16
  %17 = add nsw i64 %umax, -1
  %scevgep595 = getelementptr i8, i8* %.pre577, i64 %17
  %bound0 = icmp ule i8* %scevgep, %scevgep595
  %bound1 = icmp ule i8* %.pre577, %scevgep594
  %memcheck.conflict = and i1 %bound1, %bound0
  br i1 %memcheck.conflict, label %for.body51, label %vector.body584

vector.body584:                                   ; preds = %vector.body584, %vector.memcheck
  %index597 = phi i64 [ %index.next598, %vector.body584 ], [ 0, %vector.memcheck ]
  %18 = getelementptr inbounds i8, i8* %.pre577, i64 %index597
  %19 = bitcast i8* %18 to i32*
  %wide.load638 = load i32, i32* %19, align 1, !tbaa !44
  %20 = add i64 %index597, 48
  %21 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %20
  %22 = bitcast i8* %21 to i32*
  store i32 %wide.load638, i32* %22, align 4, !tbaa !44
  %index.next598 = add i64 %index597, 4
  %23 = icmp eq i64 %index.next598, %n.vec590
  br i1 %23, label %middle.block585, label %vector.body584, !llvm.loop !49

middle.block585:                                  ; preds = %vector.body584
  %cmp.n600 = icmp eq i64 %umax, %n.vec590
  br i1 %cmp.n600, label %for.cond59.preheader, label %for.body51

for.cond59.preheader:                             ; preds = %for.body51, %middle.block585, %for.cond49.preheader
  %cmp60558 = icmp eq i8 %cond8, 0
  br i1 %cmp60558, label %while.cond.i, label %for.body62.lr.ph

for.body62.lr.ph:                                 ; preds = %for.cond59.preheader
  %coordinates = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 9
  %24 = bitcast i32** %coordinates to i8**
  %.pre578 = load i8*, i8** %24, align 1, !tbaa !52
  %25 = icmp ugt i64 %mul15, 1
  %umax609 = select i1 %25, i64 %mul15, i64 1
  %min.iters.check610 = icmp ult i64 %umax609, 4
  br i1 %min.iters.check610, label %for.body62, label %min.iters.checked611

min.iters.checked611:                             ; preds = %for.body62.lr.ph
  %n.vec613 = and i64 %umax609, 1020
  %cmp.zero614 = icmp eq i64 %n.vec613, 0
  br i1 %cmp.zero614, label %for.body62, label %vector.memcheck624

vector.memcheck624:                               ; preds = %min.iters.checked611
  %scevgep616 = getelementptr [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %add
  %26 = add nuw nsw i64 %umax609, 47
  %27 = add nsw i64 %26, %conv13
  %scevgep618 = getelementptr [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %27
  %28 = add nsw i64 %umax609, -1
  %scevgep619 = getelementptr i8, i8* %.pre578, i64 %28
  %bound0620 = icmp ule i8* %scevgep616, %scevgep619
  %bound1621 = icmp ule i8* %.pre578, %scevgep618
  %memcheck.conflict623 = and i1 %bound1621, %bound0620
  br i1 %memcheck.conflict623, label %for.body62, label %vector.body606

vector.body606:                                   ; preds = %vector.body606, %vector.memcheck624
  %index626 = phi i64 [ %index.next627, %vector.body606 ], [ 0, %vector.memcheck624 ]
  %29 = getelementptr inbounds i8, i8* %.pre578, i64 %index626
  %30 = bitcast i8* %29 to i32*
  %wide.load633639 = load i32, i32* %30, align 1, !tbaa !44
  %31 = add i64 %index626, %add
  %32 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %31
  %33 = bitcast i8* %32 to i32*
  store i32 %wide.load633639, i32* %33, align 1, !tbaa !44
  %index.next627 = add i64 %index626, 4
  %34 = icmp eq i64 %index.next627, %n.vec613
  br i1 %34, label %middle.block607, label %vector.body606, !llvm.loop !53

middle.block607:                                  ; preds = %vector.body606
  %cmp.n629 = icmp eq i64 %umax609, %n.vec613
  br i1 %cmp.n629, label %while.cond.i, label %for.body62

for.body51:                                       ; preds = %for.body51, %middle.block585, %vector.memcheck, %min.iters.checked588, %for.body51.lr.ph
  %i48.0561 = phi i64 [ %inc56, %for.body51 ], [ %n.vec590, %middle.block585 ], [ 0, %for.body51.lr.ph ], [ 0, %min.iters.checked588 ], [ 0, %vector.memcheck ]
  %arrayidx52 = getelementptr inbounds i8, i8* %.pre577, i64 %i48.0561
  %35 = load i8, i8* %arrayidx52, align 1, !tbaa !44
  %add53 = add i64 %i48.0561, 48
  %arrayidx54 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %add53
  store i8 %35, i8* %arrayidx54, align 1, !tbaa !44
  %inc56 = add nuw i64 %i48.0561, 1
  %cmp50 = icmp ult i64 %inc56, %conv13
  br i1 %cmp50, label %for.body51, label %for.cond59.preheader, !llvm.loop !54

while.cond.i:                                     ; preds = %for.body62, %while.cond.i, %middle.block607, %for.cond59.preheader
  %36 = atomicrmw xchg i32* @_ZN6Halide7Runtime8Internal22halide_trace_file_lockE, i32 1 seq_cst
  %tobool.i = icmp eq i32 %36, 0
  br i1 %tobool.i, label %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit, label %while.cond.i

_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit: ; preds = %while.cond.i
  %call71 = call i64 @write(i32 %call, i8* %4, i64 %add16) #6
  %cmp72 = icmp eq i64 %call71, %add16
  br i1 %cmp72, label %if.end74, label %if.then73

for.body62:                                       ; preds = %for.body62, %middle.block607, %vector.memcheck624, %min.iters.checked611, %for.body62.lr.ph
  %i58.0559 = phi i64 [ %inc68, %for.body62 ], [ %n.vec613, %middle.block607 ], [ 0, %for.body62.lr.ph ], [ 0, %min.iters.checked611 ], [ 0, %vector.memcheck624 ]
  %arrayidx63 = getelementptr inbounds i8, i8* %.pre578, i64 %i58.0559
  %37 = load i8, i8* %arrayidx63, align 1, !tbaa !44
  %add65 = add nsw i64 %i58.0559, %add
  %arrayidx66 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buffer, i64 0, i64 %add65
  store i8 %37, i8* %arrayidx66, align 1, !tbaa !44
  %inc68 = add nuw nsw i64 %i58.0559, 1
  %cmp60 = icmp ult i64 %inc68, %mul15
  br i1 %cmp60, label %for.body62, label %while.cond.i, !llvm.loop !55

if.then73:                                        ; preds = %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit
  call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([143 x i8], [143 x i8]* @.str.1.4, i64 0, i64 0)) #6
  call void @abort() #6
  br label %if.end74

if.end74:                                         ; preds = %if.then73, %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit
  store atomic i32 0, i32* @_ZN6Halide7Runtime8Internal22halide_trace_file_lockE release, align 4
  call void @llvm.lifetime.end(i64 4096, i8* %4) #7
  br label %if.end269

if.else:                                          ; preds = %entry
  %call.i395 = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i395, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %bits76 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 4
  %38 = load i32, i32* %bits76, align 1, !tbaa !41
  br label %while.cond75

while.cond75:                                     ; preds = %while.cond75, %if.else
  %print_bits.0 = phi i32 [ 8, %if.else ], [ %shl79, %while.cond75 ]
  %cmp77 = icmp slt i32 %print_bits.0, %38
  %shl79 = shl i32 %print_bits.0, 1
  br i1 %cmp77, label %while.cond75, label %while.end80

while.end80:                                      ; preds = %while.cond75
  %cmp81 = icmp slt i32 %print_bits.0, 65
  br i1 %cmp81, label %if.end83, label %if.then82

if.then82:                                        ; preds = %while.end80
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([128 x i8], [128 x i8]* @.str.2.5, i64 0, i64 0)) #6
  tail call void @abort() #6
  br label %if.end83

if.end83:                                         ; preds = %if.then82, %while.end80
  %event84 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 1
  %39 = load i32, i32* %event84, align 1, !tbaa !43
  %cmp85 = icmp slt i32 %39, 2
  %idxprom = zext i32 %39 to i64
  %arrayidx87 = getelementptr inbounds [10 x i8*], [10 x i8*]* @_ZZN6Halide7Runtime8Internal13default_traceEPvPK18halide_trace_eventE11event_types, i64 0, i64 %idxprom
  %40 = load i8*, i8** %arrayidx87, align 8, !tbaa !32
  %call.i400 = tail call i8* @halide_string_to_string(i8* %call.i395, i8* %add.ptr.i, i8* %40) #6
  %call.i403 = tail call i8* @halide_string_to_string(i8* %call.i400, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8.108, i64 0, i64 0)) #6
  %func90 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 0
  %41 = load i8*, i8** %func90, align 1, !tbaa !47
  %call.i406 = tail call i8* @halide_string_to_string(i8* %call.i403, i8* %add.ptr.i, i8* %41) #6
  %call.i409 = tail call i8* @halide_string_to_string(i8* %call.i406, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.9.89, i64 0, i64 0)) #6
  %value_index93 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 6
  %42 = load i32, i32* %value_index93, align 1, !tbaa !46
  %conv.i = sext i32 %42 to i64
  %call.i412 = tail call i8* @halide_int64_to_string(i8* %call.i409, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  %call.i415 = tail call i8* @halide_string_to_string(i8* %call.i412, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10.110, i64 0, i64 0)) #6
  %vector_width96 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 5
  %43 = load i32, i32* %vector_width96, align 1, !tbaa !37
  %cmp97 = icmp sgt i32 %43, 1
  br i1 %cmp97, label %if.then98, label %for.cond102.preheader

if.then98:                                        ; preds = %if.end83
  %call.i418 = tail call i8* @halide_string_to_string(i8* %call.i415, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.16, i64 0, i64 0)) #6
  br label %for.cond102.preheader

for.cond102.preheader:                            ; preds = %if.then98, %if.end83
  %ss.sroa.5.0.ph = phi i8* [ %call.i415, %if.end83 ], [ %call.i418, %if.then98 ]
  %dimensions103 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 8
  %44 = load i32, i32* %dimensions103, align 1, !tbaa !40
  %cmp104569 = icmp sgt i32 %44, 0
  br i1 %cmp104569, label %for.body106.lr.ph, label %for.cond.cleanup105

for.body106.lr.ph:                                ; preds = %for.cond102.preheader
  %coordinates120 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 9
  br label %for.body106

for.cond.cleanup105:                              ; preds = %if.end118, %for.cond102.preheader
  %ss.sroa.5.0.lcssa = phi i8* [ %ss.sroa.5.0.ph, %for.cond102.preheader ], [ %call.i428, %if.end118 ]
  %45 = load i32, i32* %vector_width96, align 1, !tbaa !37
  %cmp127 = icmp sgt i32 %45, 1
  br i1 %cmp127, label %if.then128, label %if.else130

for.body106:                                      ; preds = %if.end118, %for.body106.lr.ph
  %indvars.iv574 = phi i64 [ 0, %for.body106.lr.ph ], [ %indvars.iv.next575, %if.end118 ]
  %ss.sroa.5.0570 = phi i8* [ %ss.sroa.5.0.ph, %for.body106.lr.ph ], [ %call.i428, %if.end118 ]
  %cmp107 = icmp sgt i64 %indvars.iv574, 0
  br i1 %cmp107, label %if.then108, label %if.end118

if.then108:                                       ; preds = %for.body106
  %46 = load i32, i32* %vector_width96, align 1, !tbaa !37
  %cmp110 = icmp sgt i32 %46, 1
  br i1 %cmp110, label %land.lhs.true, label %if.else115

land.lhs.true:                                    ; preds = %if.then108
  %47 = trunc i64 %indvars.iv574 to i32
  %rem = srem i32 %47, %46
  %cmp112 = icmp eq i32 %rem, 0
  br i1 %cmp112, label %if.then113, label %if.else115

if.then113:                                       ; preds = %land.lhs.true
  %call.i421 = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.0570, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.17, i64 0, i64 0)) #6
  br label %if.end118

if.else115:                                       ; preds = %land.lhs.true, %if.then108
  %call.i424 = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.0570, i8* %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.18, i64 0, i64 0)) #6
  br label %if.end118

if.end118:                                        ; preds = %if.else115, %if.then113, %for.body106
  %ss.sroa.5.1 = phi i8* [ %call.i421, %if.then113 ], [ %call.i424, %if.else115 ], [ %ss.sroa.5.0570, %for.body106 ]
  %48 = load i32*, i32** %coordinates120, align 1, !tbaa !52
  %arrayidx121 = getelementptr inbounds i32, i32* %48, i64 %indvars.iv574
  %49 = load i32, i32* %arrayidx121, align 4, !tbaa !21
  %conv.i427 = sext i32 %49 to i64
  %call.i428 = tail call i8* @halide_int64_to_string(i8* %ss.sroa.5.1, i8* %add.ptr.i, i64 %conv.i427, i32 1) #6
  %indvars.iv.next575 = add nuw nsw i64 %indvars.iv574, 1
  %50 = load i32, i32* %dimensions103, align 1, !tbaa !40
  %51 = sext i32 %50 to i64
  %cmp104 = icmp slt i64 %indvars.iv.next575, %51
  br i1 %cmp104, label %for.body106, label %for.cond.cleanup105

if.then128:                                       ; preds = %for.cond.cleanup105
  %call.i431 = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.0.lcssa, i8* %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.19, i64 0, i64 0)) #6
  br label %if.end132

if.else130:                                       ; preds = %for.cond.cleanup105
  %call.i434 = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.0.lcssa, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.9.42, i64 0, i64 0)) #6
  br label %if.end132

if.end132:                                        ; preds = %if.else130, %if.then128
  %ss.sroa.5.2 = phi i8* [ %call.i431, %if.then128 ], [ %call.i434, %if.else130 ]
  br i1 %cmp85, label %if.then133, label %if.end265

if.then133:                                       ; preds = %if.end132
  %52 = load i32, i32* %vector_width96, align 1, !tbaa !37
  %cmp135 = icmp sgt i32 %52, 1
  br i1 %cmp135, label %if.then136, label %if.else138

if.then136:                                       ; preds = %if.then133
  %call.i437 = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.2, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.21, i64 0, i64 0)) #6
  br label %for.cond142.preheader

if.else138:                                       ; preds = %if.then133
  %call.i440 = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.2, i8* %add.ptr.i, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.22, i64 0, i64 0)) #6
  br label %for.cond142.preheader

for.cond142.preheader:                            ; preds = %if.else138, %if.then136
  %ss.sroa.5.3.ph = phi i8* [ %call.i440, %if.else138 ], [ %call.i437, %if.then136 ]
  %53 = load i32, i32* %vector_width96, align 1, !tbaa !37
  %cmp144565 = icmp sgt i32 %53, 0
  br i1 %cmp144565, label %for.body146.lr.ph, label %if.end265

for.body146.lr.ph:                                ; preds = %for.cond142.preheader
  %type_code151 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 3
  %cmp170 = icmp eq i32 %print_bits.0, 32
  %value173 = getelementptr inbounds %struct.halide_trace_event, %struct.halide_trace_event* %e, i64 0, i32 7
  %54 = bitcast i8** %value173 to i16**
  %cmp222 = icmp sgt i32 %print_bits.0, 15
  %55 = bitcast i8** %value173 to float**
  %cmp232 = icmp eq i32 %print_bits.0, 16
  %56 = bitcast i8** %value173 to i8***
  br label %for.body146

for.cond.cleanup145:                              ; preds = %for.inc257
  %cmp261 = icmp sgt i32 %87, 1
  br i1 %cmp261, label %if.then262, label %if.end265

for.body146:                                      ; preds = %for.inc257, %for.body146.lr.ph
  %indvars.iv = phi i64 [ 0, %for.body146.lr.ph ], [ %indvars.iv.next, %for.inc257 ]
  %ss.sroa.5.3566 = phi i8* [ %ss.sroa.5.3.ph, %for.body146.lr.ph ], [ %ss.sroa.5.5, %for.inc257 ]
  %cmp147 = icmp sgt i64 %indvars.iv, 0
  br i1 %cmp147, label %if.then148, label %if.end150

if.then148:                                       ; preds = %for.body146
  %call.i443 = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.3566, i8* %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.18, i64 0, i64 0)) #6
  br label %if.end150

if.end150:                                        ; preds = %if.then148, %for.body146
  %ss.sroa.5.4 = phi i8* [ %call.i443, %if.then148 ], [ %ss.sroa.5.3566, %for.body146 ]
  %57 = load i32, i32* %type_code151, align 1, !tbaa !45
  switch i32 %57, label %for.inc257 [
    i32 0, label %if.then153
    i32 1, label %if.then187
    i32 2, label %if.then221
    i32 3, label %if.then248
  ]

if.then153:                                       ; preds = %if.end150
  switch i32 %print_bits.0, label %if.else169 [
    i32 8, label %if.then155
    i32 16, label %if.then163
  ]

if.then155:                                       ; preds = %if.then153
  %58 = load i8*, i8** %value173, align 1, !tbaa !48
  %arrayidx158 = getelementptr inbounds i8, i8* %58, i64 %indvars.iv
  %59 = load i8, i8* %arrayidx158, align 1, !tbaa !44
  %conv.i446 = sext i8 %59 to i64
  %call.i447 = tail call i8* @halide_int64_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i64 %conv.i446, i32 1) #6
  br label %for.inc257

if.then163:                                       ; preds = %if.then153
  %60 = load i16*, i16** %54, align 1, !tbaa !48
  %arrayidx166 = getelementptr inbounds i16, i16* %60, i64 %indvars.iv
  %61 = load i16, i16* %arrayidx166, align 2, !tbaa !56
  %conv.i450 = sext i16 %61 to i64
  %call.i451 = tail call i8* @halide_int64_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i64 %conv.i450, i32 1) #6
  br label %for.inc257

if.else169:                                       ; preds = %if.then153
  %62 = load i8*, i8** %value173, align 1, !tbaa !48
  br i1 %cmp170, label %if.then171, label %if.else176

if.then171:                                       ; preds = %if.else169
  %63 = bitcast i8* %62 to i32*
  %arrayidx174 = getelementptr inbounds i32, i32* %63, i64 %indvars.iv
  %64 = load i32, i32* %arrayidx174, align 4, !tbaa !21
  %conv.i454 = sext i32 %64 to i64
  %call.i455 = tail call i8* @halide_int64_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i64 %conv.i454, i32 1) #6
  br label %for.inc257

if.else176:                                       ; preds = %if.else169
  %65 = bitcast i8* %62 to i64*
  %arrayidx179 = getelementptr inbounds i64, i64* %65, i64 %indvars.iv
  %66 = load i64, i64* %arrayidx179, align 8, !tbaa !58
  %call.i458 = tail call i8* @halide_int64_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i64 %66, i32 1) #6
  br label %for.inc257

if.then187:                                       ; preds = %if.end150
  switch i32 %print_bits.0, label %if.else203 [
    i32 8, label %if.then189
    i32 16, label %if.then197
  ]

if.then189:                                       ; preds = %if.then187
  %67 = load i8*, i8** %value173, align 1, !tbaa !48
  %arrayidx192 = getelementptr inbounds i8, i8* %67, i64 %indvars.iv
  %68 = load i8, i8* %arrayidx192, align 1, !tbaa !44
  %conv.i461 = zext i8 %68 to i64
  %call.i462 = tail call i8* @halide_int64_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i64 %conv.i461, i32 1) #6
  br label %for.inc257

if.then197:                                       ; preds = %if.then187
  %69 = load i16*, i16** %54, align 1, !tbaa !48
  %arrayidx200 = getelementptr inbounds i16, i16* %69, i64 %indvars.iv
  %70 = load i16, i16* %arrayidx200, align 2, !tbaa !56
  %conv.i465 = zext i16 %70 to i64
  %call.i466 = tail call i8* @halide_int64_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i64 %conv.i465, i32 1) #6
  br label %for.inc257

if.else203:                                       ; preds = %if.then187
  %71 = load i8*, i8** %value173, align 1, !tbaa !48
  br i1 %cmp170, label %if.then205, label %if.else210

if.then205:                                       ; preds = %if.else203
  %72 = bitcast i8* %71 to i32*
  %arrayidx208 = getelementptr inbounds i32, i32* %72, i64 %indvars.iv
  %73 = load i32, i32* %arrayidx208, align 4, !tbaa !21
  %conv.i469 = zext i32 %73 to i64
  %call.i470 = tail call i8* @halide_uint64_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i64 %conv.i469, i32 1) #6
  br label %for.inc257

if.else210:                                       ; preds = %if.else203
  %74 = bitcast i8* %71 to i64*
  %arrayidx213 = getelementptr inbounds i64, i64* %74, i64 %indvars.iv
  %75 = load i64, i64* %arrayidx213, align 8, !tbaa !58
  %call.i473 = tail call i8* @halide_uint64_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i64 %75, i32 1) #6
  br label %for.inc257

if.then221:                                       ; preds = %if.end150
  br i1 %cmp222, label %if.end224, label %if.else231.thread

if.else231.thread:                                ; preds = %if.then221
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([131 x i8], [131 x i8]* @.str.23, i64 0, i64 0)) #6
  tail call void @abort() #6
  %76 = load i8*, i8** %value173, align 1, !tbaa !48
  br label %if.else238

if.end224:                                        ; preds = %if.then221
  br i1 %cmp170, label %if.then226, label %if.else231

if.then226:                                       ; preds = %if.end224
  %77 = load float*, float** %55, align 1, !tbaa !48
  %arrayidx229 = getelementptr inbounds float, float* %77, i64 %indvars.iv
  %78 = load float, float* %arrayidx229, align 4, !tbaa !60
  %conv.i476 = fpext float %78 to double
  %call.i477 = tail call i8* @halide_double_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, double %conv.i476, i32 0) #6
  br label %for.inc257

if.else231:                                       ; preds = %if.end224
  %79 = load i8*, i8** %value173, align 1, !tbaa !48
  br i1 %cmp232, label %if.then233, label %if.else238

if.then233:                                       ; preds = %if.else231
  %80 = bitcast i8* %79 to i16*
  %arrayidx236 = getelementptr inbounds i16, i16* %80, i64 %indvars.iv
  %81 = load i16, i16* %arrayidx236, align 2, !tbaa !56
  %call.i478 = tail call double @halide_float16_bits_to_double(i16 zeroext %81) #6
  %call2.i = tail call i8* @halide_double_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, double %call.i478, i32 1) #6
  br label %for.inc257

if.else238:                                       ; preds = %if.else231, %if.else231.thread
  %82 = phi i8* [ %76, %if.else231.thread ], [ %79, %if.else231 ]
  %83 = bitcast i8* %82 to double*
  %arrayidx241 = getelementptr inbounds double, double* %83, i64 %indvars.iv
  %84 = load double, double* %arrayidx241, align 8, !tbaa !62
  %call.i483 = tail call i8* @halide_double_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, double %84, i32 1) #6
  br label %for.inc257

if.then248:                                       ; preds = %if.end150
  %85 = load i8**, i8*** %56, align 1, !tbaa !48
  %arrayidx251 = getelementptr inbounds i8*, i8** %85, i64 %indvars.iv
  %86 = load i8*, i8** %arrayidx251, align 8, !tbaa !32
  %call.i486 = tail call i8* @halide_pointer_to_string(i8* %ss.sroa.5.4, i8* %add.ptr.i, i8* %86) #6
  br label %for.inc257

for.inc257:                                       ; preds = %if.then248, %if.else238, %if.then233, %if.then226, %if.else210, %if.then205, %if.then197, %if.then189, %if.else176, %if.then171, %if.then163, %if.then155, %if.end150
  %ss.sroa.5.5 = phi i8* [ %ss.sroa.5.4, %if.end150 ], [ %call.i486, %if.then248 ], [ %call.i477, %if.then226 ], [ %call2.i, %if.then233 ], [ %call.i483, %if.else238 ], [ %call.i470, %if.then205 ], [ %call.i473, %if.else210 ], [ %call.i466, %if.then197 ], [ %call.i462, %if.then189 ], [ %call.i455, %if.then171 ], [ %call.i458, %if.else176 ], [ %call.i451, %if.then163 ], [ %call.i447, %if.then155 ]
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %87 = load i32, i32* %vector_width96, align 1, !tbaa !37
  %88 = sext i32 %87 to i64
  %cmp144 = icmp slt i64 %indvars.iv.next, %88
  br i1 %cmp144, label %for.body146, label %for.cond.cleanup145

if.then262:                                       ; preds = %for.cond.cleanup145
  %call.i489 = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.5, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.24, i64 0, i64 0)) #6
  br label %if.end265

if.end265:                                        ; preds = %if.then262, %for.cond.cleanup145, %for.cond142.preheader, %if.end132
  %ss.sroa.5.6 = phi i8* [ %call.i489, %if.then262 ], [ %ss.sroa.5.5, %for.cond.cleanup145 ], [ %ss.sroa.5.2, %if.end132 ], [ %ss.sroa.5.3.ph, %for.cond142.preheader ]
  %call.i = tail call i8* @halide_string_to_string(i8* %ss.sroa.5.6, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.25, i64 0, i64 0)) #6
  br label %while.cond.i391

while.cond.i391:                                  ; preds = %while.cond.i391, %if.end265
  %89 = atomicrmw xchg i32* @_ZN6Halide7Runtime8Internal22halide_trace_file_lockE, i32 1 seq_cst
  %tobool.i390 = icmp eq i32 %89, 0
  br i1 %tobool.i390, label %_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi2ELy1024EED2Ev.exit, label %while.cond.i391

_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi2ELy1024EED2Ev.exit: ; preds = %while.cond.i391
  tail call void @halide_print(i8* %user_context, i8* %call.i395) #6
  store atomic i32 0, i32* @_ZN6Halide7Runtime8Internal22halide_trace_file_lockE release, align 4
  tail call void @halide_free(i8* %user_context, i8* %call.i395) #6
  br label %if.end269

if.end269:                                        ; preds = %_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi2ELy1024EED2Ev.exit, %if.end74
  ret i32 %0
}

; Function Attrs: nounwind
define weak i32 @halide_get_trace_file(i8* %user_context) #0 {
entry:
  br label %while.cond.i

while.cond.i:                                     ; preds = %while.cond.i, %entry
  %0 = atomicrmw xchg i32* @_ZN6Halide7Runtime8Internal22halide_trace_file_lockE, i32 1 seq_cst
  %tobool.i = icmp eq i32 %0, 0
  br i1 %tobool.i, label %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit, label %while.cond.i

_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit: ; preds = %while.cond.i
  %1 = load i8, i8* @_ZN6Halide7Runtime8Internal29halide_trace_file_initializedE, align 1, !tbaa !4, !range !8
  %tobool = icmp eq i8 %1, 0
  br i1 %tobool, label %if.then, label %if.end6

if.then:                                          ; preds = %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit
  %call = tail call i8* @getenv(i8* getelementptr inbounds ([14 x i8], [14 x i8]* @.str.26, i64 0, i64 0)) #6
  %tobool1 = icmp eq i8* %call, null
  br i1 %tobool1, label %if.else, label %if.then2

if.then2:                                         ; preds = %if.then
  %call3 = tail call i32 @open(i8* nonnull %call, i32 1089, i32 420) #6
  %cmp = icmp sgt i32 %call3, 0
  br i1 %cmp, label %if.end, label %if.then4

if.then4:                                         ; preds = %if.then2
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([132 x i8], [132 x i8]* @.str.27, i64 0, i64 0)) #6
  tail call void @abort() #6
  br label %if.end

if.end:                                           ; preds = %if.then4, %if.then2
  tail call void @halide_set_trace_file(i32 %call3) #8
  store i8 1, i8* @_ZN6Halide7Runtime8Internal35halide_trace_file_internally_openedE, align 1, !tbaa !4
  br label %if.end6

if.else:                                          ; preds = %if.then
  tail call void @halide_set_trace_file(i32 0) #8
  br label %if.end6

if.end6:                                          ; preds = %if.else, %if.end, %_ZN6Halide7Runtime8Internal14ScopedSpinLockC2EPVi.exit
  %2 = load i32, i32* @_ZN6Halide7Runtime8Internal17halide_trace_fileE, align 4, !tbaa !21
  store atomic i32 0, i32* @_ZN6Halide7Runtime8Internal22halide_trace_file_lockE release, align 4
  ret i32 %2
}

declare i32 @open(i8* nocapture readonly, i32, i32) #1

declare void @abort() #1

; Function Attrs: norecurse nounwind
define weak void @halide_set_trace_file(i32 %fd) #4 {
entry:
  store i32 %fd, i32* @_ZN6Halide7Runtime8Internal17halide_trace_fileE, align 4, !tbaa !21
  store i8 1, i8* @_ZN6Halide7Runtime8Internal29halide_trace_file_initializedE, align 1, !tbaa !4
  ret void
}

; Function Attrs: nounwind
define weak void @halide_trace_cleanup() #0 {
entry:
  %call = tail call i32 @halide_shutdown_trace() #8
  ret void
}

; Function Attrs: nounwind
define weak i32 @halide_shutdown_trace() #0 {
entry:
  %0 = load i8, i8* @_ZN6Halide7Runtime8Internal35halide_trace_file_internally_openedE, align 1, !tbaa !4, !range !8
  %tobool = icmp eq i8 %0, 0
  br i1 %tobool, label %return, label %if.then

if.then:                                          ; preds = %entry
  %1 = load i32, i32* @_ZN6Halide7Runtime8Internal17halide_trace_fileE, align 4, !tbaa !21
  %call = tail call i32 @close(i32 %1) #6
  store i32 0, i32* @_ZN6Halide7Runtime8Internal17halide_trace_fileE, align 4, !tbaa !21
  store i8 0, i8* @_ZN6Halide7Runtime8Internal29halide_trace_file_initializedE, align 1, !tbaa !4
  store i8 0, i8* @_ZN6Halide7Runtime8Internal35halide_trace_file_internally_openedE, align 1, !tbaa !4
  br label %return

return:                                           ; preds = %if.then, %entry
  %retval.0 = phi i32 [ %call, %if.then ], [ 0, %entry ]
  ret i32 %retval.0
}

declare i32 @close(i32) #1

; Function Attrs: norecurse nounwind
define weak i32 (i8*, %struct.halide_trace_event*)* @halide_set_custom_trace(i32 (i8*, %struct.halide_trace_event*)* %t) #4 {
entry:
  %0 = load i32 (i8*, %struct.halide_trace_event*)*, i32 (i8*, %struct.halide_trace_event*)** @_ZN6Halide7Runtime8Internal19halide_custom_traceE, align 8, !tbaa !32
  store i32 (i8*, %struct.halide_trace_event*)* %t, i32 (i8*, %struct.halide_trace_event*)** @_ZN6Halide7Runtime8Internal19halide_custom_traceE, align 8, !tbaa !32
  ret i32 (i8*, %struct.halide_trace_event*)* %0
}

; Function Attrs: nounwind
define weak i32 @halide_trace(i8* %user_context, %struct.halide_trace_event* %e) #0 {
entry:
  %0 = load i32 (i8*, %struct.halide_trace_event*)*, i32 (i8*, %struct.halide_trace_event*)** @_ZN6Halide7Runtime8Internal19halide_custom_traceE, align 8, !tbaa !32
  %call = tail call i32 %0(i8* %user_context, %struct.halide_trace_event* %e) #6
  ret i32 %call
}

; Function Attrs: norecurse nounwind
define linkonce zeroext i1 @_ZN6Halide7Runtime8Internal18has_tiff_extensionEPKc(i8* %filename) #4 {
entry:
  br label %while.cond

while.cond:                                       ; preds = %while.cond, %entry
  %f.0 = phi i8* [ %filename, %entry ], [ %incdec.ptr, %while.cond ]
  %0 = load i8, i8* %f.0, align 1, !tbaa !44
  %cmp = icmp eq i8 %0, 0
  %incdec.ptr = getelementptr inbounds i8, i8* %f.0, i64 1
  br i1 %cmp, label %while.cond1.preheader, label %while.cond

while.cond1.preheader:                            ; preds = %while.cond
  %cmp273 = icmp eq i8* %f.0, %filename
  br i1 %cmp273, label %cleanup, label %land.rhs

land.rhs:                                         ; preds = %while.body5, %while.cond1.preheader
  %cmp977 = phi i1 [ %cmp9, %while.body5 ], [ false, %while.cond1.preheader ]
  %f.176 = phi i8* [ %incdec.ptr6, %while.body5 ], [ %f.0, %while.cond1.preheader ]
  br i1 %cmp977, label %if.end, label %while.body5

while.body5:                                      ; preds = %land.rhs
  %incdec.ptr6 = getelementptr inbounds i8, i8* %f.176, i64 -1
  %cmp2 = icmp eq i8* %incdec.ptr6, %filename
  %.pr = load i8, i8* %incdec.ptr6, align 1, !tbaa !44
  %cmp9 = icmp eq i8 %.pr, 46
  br i1 %cmp2, label %while.end7, label %land.rhs

while.end7:                                       ; preds = %while.body5
  br i1 %cmp9, label %if.end, label %cleanup

if.end:                                           ; preds = %while.end7, %land.rhs
  %f.171 = phi i8* [ %filename, %while.end7 ], [ %f.176, %land.rhs ]
  %incdec.ptr10 = getelementptr inbounds i8, i8* %f.171, i64 1
  %1 = load i8, i8* %incdec.ptr10, align 1, !tbaa !44
  switch i8 %1, label %cleanup [
    i8 116, label %if.end16
    i8 84, label %if.end16
  ]

if.end16:                                         ; preds = %if.end, %if.end
  %incdec.ptr17 = getelementptr inbounds i8, i8* %f.171, i64 2
  %2 = load i8, i8* %incdec.ptr17, align 1, !tbaa !44
  switch i8 %2, label %cleanup [
    i8 105, label %if.end24
    i8 73, label %if.end24
  ]

if.end24:                                         ; preds = %if.end16, %if.end16
  %incdec.ptr25 = getelementptr inbounds i8, i8* %f.171, i64 3
  %3 = load i8, i8* %incdec.ptr25, align 1, !tbaa !44
  switch i8 %3, label %cleanup [
    i8 102, label %if.end32
    i8 70, label %if.end32
  ]

if.end32:                                         ; preds = %if.end24, %if.end24
  %incdec.ptr33 = getelementptr inbounds i8, i8* %f.171, i64 4
  %4 = load i8, i8* %incdec.ptr33, align 1, !tbaa !44
  switch i8 %4, label %if.then43 [
    i8 0, label %cleanup
    i8 102, label %if.end44
    i8 70, label %if.end44
  ]

if.then43:                                        ; preds = %if.end32
  br label %cleanup

if.end44:                                         ; preds = %if.end32, %if.end32
  %incdec.ptr45 = getelementptr inbounds i8, i8* %f.171, i64 5
  %5 = load i8, i8* %incdec.ptr45, align 1, !tbaa !44
  %cmp47 = icmp eq i8 %5, 0
  br label %cleanup

cleanup:                                          ; preds = %if.end44, %if.then43, %if.end32, %if.end24, %if.end16, %if.end, %while.end7, %while.cond1.preheader
  %retval.0 = phi i1 [ false, %if.then43 ], [ %cmp47, %if.end44 ], [ false, %while.end7 ], [ false, %if.end ], [ false, %if.end16 ], [ false, %if.end24 ], [ true, %if.end32 ], [ false, %while.cond1.preheader ]
  ret i1 %retval.0
}

; Function Attrs: nounwind
define weak i32 @halide_debug_to_file(i8* %user_context, i8* %filename, i8* %data, i32 %s0, i32 %s1, i32 %s2, i32 %s3, i32 %type_code, i32 %bytes_per_element) #0 {
entry:
  %header = alloca %"struct.Halide::Runtime::Internal::halide_tiff_header", align 2
  %offset = alloca i32, align 4
  %count = alloca i32, align 4
  %header102 = alloca [5 x i32], align 4
  %call = tail call i8* @fopen(i8* %filename, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.28, i64 0, i64 0)) #6
  %tobool = icmp eq i8* %call, null
  br i1 %tobool, label %cleanup125, label %if.end

if.end:                                           ; preds = %entry
  %conv = sext i32 %s0 to i64
  %mul = mul nsw i32 %s2, %s1
  %mul1 = mul nsw i32 %mul, %s3
  %conv2 = sext i32 %mul1 to i64
  %mul3 = mul nsw i64 %conv2, %conv
  %call4 = tail call zeroext i1 @_ZN6Halide7Runtime8Internal18has_tiff_extensionEPKc(i8* %filename) #8
  br i1 %call4, label %if.then5, label %if.else101

if.then5:                                         ; preds = %if.end
  %0 = or i32 %s3, 1
  %1 = icmp eq i32 %0, 1
  %cmp7 = icmp slt i32 %s2, 5
  %or.cond131 = and i1 %cmp7, %1
  %s2.s3 = select i1 %or.cond131, i32 %s2, i32 %s3
  %.s2 = select i1 %or.cond131, i32 1, i32 %s2
  %2 = bitcast %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header to i8*
  call void @llvm.lifetime.start(i64 210, i8* %2) #7
  %byte_order_marker = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 0
  store i16 18761, i16* %byte_order_marker, align 2, !tbaa !64
  %version = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 1
  store i16 42, i16* %version, align 2, !tbaa !66
  %ifd0_offset = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 2
  store i32 8, i32* %ifd0_offset, align 2, !tbaa !67
  %entry_count = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 3
  store i16 15, i16* %entry_count, align 2, !tbaa !68
  %tag_code2.i = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 0, i32 0
  store i16 256, i16* %tag_code2.i, align 2, !tbaa !69
  %type_code.i = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 0, i32 1
  store i16 4, i16* %type_code.i, align 2, !tbaa !71
  %count3.i = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 0, i32 2
  store i32 1, i32* %count3.i, align 2, !tbaa !72
  %i32.i = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 0, i32 3, i32 0
  store i32 %s0, i32* %i32.i, align 2, !tbaa !21
  %tag_code2.i264 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 1, i32 0
  store i16 257, i16* %tag_code2.i264, align 2, !tbaa !69
  %type_code.i265 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 1, i32 1
  store i16 4, i16* %type_code.i265, align 2, !tbaa !71
  %count3.i266 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 1, i32 2
  store i32 1, i32* %count3.i266, align 2, !tbaa !72
  %i32.i267 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 1, i32 3, i32 0
  store i32 %s1, i32* %i32.i267, align 2, !tbaa !21
  %mul17 = shl nsw i32 %bytes_per_element, 3
  %conv18 = trunc i32 %mul17 to i16
  %tag_code2.i259 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 2, i32 0
  store i16 258, i16* %tag_code2.i259, align 2, !tbaa !69
  %type_code.i260 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 2, i32 1
  store i16 3, i16* %type_code.i260, align 2, !tbaa !71
  %count3.i261 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 2, i32 2
  store i32 1, i32* %count3.i261, align 2, !tbaa !72
  %value4.i262 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 2, i32 3
  %i16.i263 = bitcast %union.anon* %value4.i262 to i16*
  store i16 %conv18, i16* %i16.i263, align 2, !tbaa !56
  %tag_code2.i254 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 3, i32 0
  store i16 259, i16* %tag_code2.i254, align 2, !tbaa !69
  %type_code.i255 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 3, i32 1
  store i16 3, i16* %type_code.i255, align 2, !tbaa !71
  %count3.i256 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 3, i32 2
  store i32 1, i32* %count3.i256, align 2, !tbaa !72
  %value4.i257 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 3, i32 3
  %i16.i258 = bitcast %union.anon* %value4.i257 to i16*
  store i16 1, i16* %i16.i258, align 2, !tbaa !56
  %cmp21 = icmp sgt i32 %s2.s3, 2
  %conv22 = select i1 %cmp21, i16 2, i16 1
  %tag_code2.i249 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 4, i32 0
  store i16 262, i16* %tag_code2.i249, align 2, !tbaa !69
  %type_code.i250 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 4, i32 1
  store i16 3, i16* %type_code.i250, align 2, !tbaa !71
  %count3.i251 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 4, i32 2
  store i32 1, i32* %count3.i251, align 2, !tbaa !72
  %value4.i252 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 4, i32 3
  %i16.i253 = bitcast %union.anon* %value4.i252 to i16*
  store i16 %conv22, i16* %i16.i253, align 2, !tbaa !56
  %tag_code2.i245 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 5, i32 0
  store i16 273, i16* %tag_code2.i245, align 2, !tbaa !69
  %type_code.i246 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 5, i32 1
  store i16 4, i16* %type_code.i246, align 2, !tbaa !71
  %count3.i247 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 5, i32 2
  store i32 %s2.s3, i32* %count3.i247, align 2, !tbaa !72
  %i32.i248 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 5, i32 3, i32 0
  store i32 210, i32* %i32.i248, align 2, !tbaa !21
  %conv25 = trunc i32 %s2.s3 to i16
  %tag_code2.i240 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 6, i32 0
  store i16 277, i16* %tag_code2.i240, align 2, !tbaa !69
  %type_code.i241 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 6, i32 1
  store i16 3, i16* %type_code.i241, align 2, !tbaa !71
  %count3.i242 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 6, i32 2
  store i32 1, i32* %count3.i242, align 2, !tbaa !72
  %value4.i243 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 6, i32 3
  %i16.i244 = bitcast %union.anon* %value4.i243 to i16*
  store i16 %conv25, i16* %i16.i244, align 2, !tbaa !56
  %tag_code2.i236 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 7, i32 0
  store i16 278, i16* %tag_code2.i236, align 2, !tbaa !69
  %type_code.i237 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 7, i32 1
  store i16 4, i16* %type_code.i237, align 2, !tbaa !71
  %count3.i238 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 7, i32 2
  store i32 1, i32* %count3.i238, align 2, !tbaa !72
  %i32.i239 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 7, i32 3, i32 0
  store i32 %s1, i32* %i32.i239, align 2, !tbaa !21
  %cmp28 = icmp eq i32 %s2.s3, 1
  br i1 %cmp28, label %cond.true, label %cond.false

cond.true:                                        ; preds = %if.then5
  %conv29 = sext i32 %bytes_per_element to i64
  %mul30 = mul i64 %mul3, %conv29
  br label %cond.end

cond.false:                                       ; preds = %if.then5
  %conv31 = sext i32 %s2.s3 to i64
  %mul32 = shl nsw i64 %conv31, 2
  %add = add nsw i64 %mul32, 210
  br label %cond.end

cond.end:                                         ; preds = %cond.false, %cond.true
  %cond33 = phi i64 [ %mul30, %cond.true ], [ %add, %cond.false ]
  %conv34 = trunc i64 %cond33 to i32
  %tag_code2.i232 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 8, i32 0
  store i16 279, i16* %tag_code2.i232, align 2, !tbaa !69
  %type_code.i233 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 8, i32 1
  store i16 4, i16* %type_code.i233, align 2, !tbaa !71
  %count3.i234 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 8, i32 2
  store i32 %s2.s3, i32* %count3.i234, align 2, !tbaa !72
  %i32.i235 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 8, i32 3, i32 0
  store i32 %conv34, i32* %i32.i235, align 2, !tbaa !21
  %tag_code2.i228 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 9, i32 0
  store i16 282, i16* %tag_code2.i228, align 2, !tbaa !69
  %type_code3.i229 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 9, i32 1
  store i16 5, i16* %type_code3.i229, align 2, !tbaa !71
  %count4.i230 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 9, i32 2
  store i32 1, i32* %count4.i230, align 2, !tbaa !72
  %i32.i231 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 9, i32 3, i32 0
  store i32 194, i32* %i32.i231, align 2, !tbaa !21
  %tag_code2.i226 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 10, i32 0
  store i16 283, i16* %tag_code2.i226, align 2, !tbaa !69
  %type_code3.i = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 10, i32 1
  store i16 5, i16* %type_code3.i, align 2, !tbaa !71
  %count4.i = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 10, i32 2
  store i32 1, i32* %count4.i, align 2, !tbaa !72
  %i32.i227 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 10, i32 3, i32 0
  store i32 202, i32* %i32.i227, align 2, !tbaa !21
  %tag_code2.i221 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 11, i32 0
  store i16 284, i16* %tag_code2.i221, align 2, !tbaa !69
  %type_code.i222 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 11, i32 1
  store i16 3, i16* %type_code.i222, align 2, !tbaa !71
  %count3.i223 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 11, i32 2
  store i32 1, i32* %count3.i223, align 2, !tbaa !72
  %value4.i224 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 11, i32 3
  %i16.i225 = bitcast %union.anon* %value4.i224 to i16*
  store i16 2, i16* %i16.i225, align 2, !tbaa !56
  %tag_code2.i216 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 12, i32 0
  store i16 296, i16* %tag_code2.i216, align 2, !tbaa !69
  %type_code.i217 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 12, i32 1
  store i16 3, i16* %type_code.i217, align 2, !tbaa !71
  %count3.i218 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 12, i32 2
  store i32 1, i32* %count3.i218, align 2, !tbaa !72
  %value4.i219 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 12, i32 3
  %i16.i220 = bitcast %union.anon* %value4.i219 to i16*
  store i16 1, i16* %i16.i220, align 2, !tbaa !56
  %idxprom = sext i32 %type_code to i64
  %arrayidx40 = getelementptr inbounds [10 x i16], [10 x i16]* @_ZN6Halide7Runtime8Internal30pixel_type_to_tiff_sample_typeE, i64 0, i64 %idxprom
  %3 = load i16, i16* %arrayidx40, align 2, !tbaa !56
  %tag_code2.i213 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 13, i32 0
  store i16 339, i16* %tag_code2.i213, align 2, !tbaa !69
  %type_code.i214 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 13, i32 1
  store i16 3, i16* %type_code.i214, align 2, !tbaa !71
  %count3.i215 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 13, i32 2
  store i32 1, i32* %count3.i215, align 2, !tbaa !72
  %value4.i = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 13, i32 3
  %i16.i = bitcast %union.anon* %value4.i to i16*
  store i16 %3, i16* %i16.i, align 2, !tbaa !56
  %tag_code2.i209 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 14, i32 0
  store i16 -32539, i16* %tag_code2.i209, align 2, !tbaa !69
  %type_code.i210 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 14, i32 1
  store i16 4, i16* %type_code.i210, align 2, !tbaa !71
  %count3.i211 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 14, i32 2
  store i32 1, i32* %count3.i211, align 2, !tbaa !72
  %i32.i212 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 4, i64 14, i32 3, i32 0
  store i32 %.s2, i32* %i32.i212, align 2, !tbaa !21
  %ifd0_end = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 5
  store i32 0, i32* %ifd0_end, align 2, !tbaa !73
  %arrayidx42 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 6, i64 0
  store i32 1, i32* %arrayidx42, align 2, !tbaa !21
  %arrayidx44 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 6, i64 1
  store i32 1, i32* %arrayidx44, align 2, !tbaa !21
  %arrayidx45 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 7, i64 0
  store i32 1, i32* %arrayidx45, align 2, !tbaa !21
  %arrayidx47 = getelementptr inbounds %"struct.Halide::Runtime::Internal::halide_tiff_header", %"struct.Halide::Runtime::Internal::halide_tiff_header"* %header, i64 0, i32 7, i64 1
  store i32 1, i32* %arrayidx47, align 2, !tbaa !21
  %call48 = call i64 @fwrite(i8* %2, i64 210, i64 1, i8* nonnull %call) #6
  %tobool49 = icmp eq i64 %call48, 0
  br i1 %tobool49, label %if.then50, label %if.end52

if.then50:                                        ; preds = %cond.end
  %call51 = tail call i32 @fclose(i8* nonnull %call) #6
  br label %cleanup91

if.end52:                                         ; preds = %cond.end
  %cmp53 = icmp sgt i32 %s2.s3, 1
  br i1 %cmp53, label %for.body.lr.ph, label %cleanup91.thread

for.body.lr.ph:                                   ; preds = %if.end52
  %4 = bitcast i32* %offset to i8*
  call void @llvm.lifetime.start(i64 4, i8* %4) #7
  %mul57 = shl i32 %s2.s3, 3
  %add58 = add i32 %mul57, 210
  store i32 %add58, i32* %offset, align 4, !tbaa !21
  %mul66 = mul nsw i32 %s1, %s0
  %mul67 = mul i32 %mul66, %bytes_per_element
  %mul68 = mul i32 %mul67, %.s2
  br label %for.body

for.body:                                         ; preds = %if.end65, %for.body.lr.ph
  %i.0275 = phi i32 [ 0, %for.body.lr.ph ], [ %inc, %if.end65 ]
  %call61 = call i64 @fwrite(i8* %4, i64 4, i64 1, i8* nonnull %call) #6
  %tobool62 = icmp eq i64 %call61, 0
  br i1 %tobool62, label %cleanup, label %if.end65

if.end65:                                         ; preds = %for.body
  %5 = load i32, i32* %offset, align 4, !tbaa !21
  %add69 = add nsw i32 %5, %mul68
  store i32 %add69, i32* %offset, align 4, !tbaa !21
  %inc = add nuw nsw i32 %i.0275, 1
  %cmp60 = icmp slt i32 %inc, %s2.s3
  br i1 %cmp60, label %for.body, label %for.body76.preheader

cleanup:                                          ; preds = %for.body
  %call64 = tail call i32 @fclose(i8* nonnull %call) #6
  br label %cleanup88.thread

for.body76.preheader:                             ; preds = %if.end65
  %6 = bitcast i32* %count to i8*
  call void @llvm.lifetime.start(i64 4, i8* %6) #7
  %mul71 = mul nsw i32 %.s2, %mul66
  store i32 %mul71, i32* %count, align 4, !tbaa !21
  br label %for.body76

for.cond73:                                       ; preds = %for.body76
  %cmp74 = icmp slt i32 %inc83, %s2.s3
  br i1 %cmp74, label %for.body76, label %cleanup88

for.body76:                                       ; preds = %for.cond73, %for.body76.preheader
  %i72.0273 = phi i32 [ %inc83, %for.cond73 ], [ 0, %for.body76.preheader ]
  %call77 = call i64 @fwrite(i8* %6, i64 4, i64 1, i8* nonnull %call) #6
  %tobool78 = icmp eq i64 %call77, 0
  %inc83 = add nuw nsw i32 %i72.0273, 1
  br i1 %tobool78, label %cleanup84, label %for.cond73

cleanup84:                                        ; preds = %for.body76
  %call80 = tail call i32 @fclose(i8* nonnull %call) #6
  call void @llvm.lifetime.end(i64 4, i8* %6) #7
  br label %cleanup88.thread

cleanup88.thread:                                 ; preds = %cleanup84, %cleanup
  call void @llvm.lifetime.end(i64 4, i8* %4) #7
  br label %cleanup91

cleanup88:                                        ; preds = %for.cond73
  call void @llvm.lifetime.end(i64 4, i8* %6) #7
  call void @llvm.lifetime.end(i64 4, i8* %4) #7
  br label %cleanup91.thread

cleanup91.thread:                                 ; preds = %cleanup88, %if.end52
  call void @llvm.lifetime.end(i64 210, i8* %2) #7
  br label %if.end115

cleanup91:                                        ; preds = %cleanup88.thread, %if.then50
  call void @llvm.lifetime.end(i64 210, i8* %2) #7
  br label %cleanup125

if.else101:                                       ; preds = %if.end
  %7 = bitcast [5 x i32]* %header102 to i8*
  call void @llvm.lifetime.start(i64 20, i8* %7) #7
  %arrayinit.begin = getelementptr inbounds [5 x i32], [5 x i32]* %header102, i64 0, i64 0
  store i32 %s0, i32* %arrayinit.begin, align 4, !tbaa !21
  %arrayinit.element = getelementptr inbounds [5 x i32], [5 x i32]* %header102, i64 0, i64 1
  store i32 %s1, i32* %arrayinit.element, align 4, !tbaa !21
  %arrayinit.element103 = getelementptr inbounds [5 x i32], [5 x i32]* %header102, i64 0, i64 2
  store i32 %s2, i32* %arrayinit.element103, align 4, !tbaa !21
  %arrayinit.element104 = getelementptr inbounds [5 x i32], [5 x i32]* %header102, i64 0, i64 3
  store i32 %s3, i32* %arrayinit.element104, align 4, !tbaa !21
  %arrayinit.element105 = getelementptr inbounds [5 x i32], [5 x i32]* %header102, i64 0, i64 4
  store i32 %type_code, i32* %arrayinit.element105, align 4, !tbaa !21
  %call107 = call i64 @fwrite(i8* %7, i64 20, i64 1, i8* nonnull %call) #6
  %tobool108 = icmp eq i64 %call107, 0
  br i1 %tobool108, label %if.then109, label %cleanup112

if.then109:                                       ; preds = %if.else101
  %call110 = tail call i32 @fclose(i8* nonnull %call) #6
  call void @llvm.lifetime.end(i64 20, i8* %7) #7
  br label %cleanup125

cleanup112:                                       ; preds = %if.else101
  call void @llvm.lifetime.end(i64 20, i8* %7) #7
  br label %if.end115

if.end115:                                        ; preds = %cleanup112, %cleanup91.thread
  %conv116 = sext i32 %bytes_per_element to i64
  %mul117 = mul i64 %conv116, %mul3
  %call118 = tail call i64 @fwrite(i8* %data, i64 %mul117, i64 1, i8* nonnull %call) #6
  %tobool119 = icmp eq i64 %call118, 0
  %call121 = tail call i32 @fclose(i8* nonnull %call) #6
  %. = sext i1 %tobool119 to i32
  br label %cleanup125

cleanup125:                                       ; preds = %if.end115, %if.then109, %cleanup91, %entry
  %retval.7 = phi i32 [ -1, %entry ], [ -2, %cleanup91 ], [ -2, %if.then109 ], [ %., %if.end115 ]
  ret i32 %retval.7
}

; Function Attrs: nounwind
declare noalias i8* @fopen(i8* nocapture readonly, i8* nocapture readonly) #0

; Function Attrs: nounwind
declare i64 @fwrite(i8* nocapture, i64, i64, i8* nocapture) #0

; Function Attrs: nounwind
declare i32 @fclose(i8* nocapture) #0

; Function Attrs: nounwind
define linkonce i8* @_ZN6Halide7Runtime8Internal14default_mallocEPvm(i8* %user_context, i64 %x) #0 {
entry:
  %add = add i64 %x, 128
  %call = tail call i8* @malloc(i64 %add) #6
  %cmp = icmp eq i8* %call, null
  br i1 %cmp, label %cleanup, label %if.end

if.end:                                           ; preds = %entry
  %0 = ptrtoint i8* %call to i64
  %sub = add i64 %0, 135
  %and = and i64 %sub, -128
  %1 = inttoptr i64 %and to i8*
  %2 = inttoptr i64 %and to i8**
  %arrayidx = getelementptr inbounds i8*, i8** %2, i64 -1
  store i8* %call, i8** %arrayidx, align 8, !tbaa !32
  br label %cleanup

cleanup:                                          ; preds = %if.end, %entry
  %retval.0 = phi i8* [ %1, %if.end ], [ null, %entry ]
  ret i8* %retval.0
}

; Function Attrs: nounwind
define linkonce void @_ZN6Halide7Runtime8Internal12default_freeEPvS2_(i8* %user_context, i8* %ptr) #0 {
entry:
  %arrayidx = getelementptr inbounds i8, i8* %ptr, i64 -8
  %0 = bitcast i8* %arrayidx to i8**
  %1 = load i8*, i8** %0, align 8, !tbaa !32
  tail call void @free(i8* %1) #6
  ret void
}

; Function Attrs: norecurse nounwind
define weak i8* (i8*, i64)* @halide_set_custom_malloc(i8* (i8*, i64)* %user_malloc) #4 {
entry:
  %0 = load i8* (i8*, i64)*, i8* (i8*, i64)** @_ZN6Halide7Runtime8Internal13custom_mallocE, align 8, !tbaa !32
  store i8* (i8*, i64)* %user_malloc, i8* (i8*, i64)** @_ZN6Halide7Runtime8Internal13custom_mallocE, align 8, !tbaa !32
  ret i8* (i8*, i64)* %0
}

; Function Attrs: norecurse nounwind
define weak void (i8*, i8*)* @halide_set_custom_free(void (i8*, i8*)* %user_free) #4 {
entry:
  %0 = load void (i8*, i8*)*, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal11custom_freeE, align 8, !tbaa !32
  store void (i8*, i8*)* %user_free, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal11custom_freeE, align 8, !tbaa !32
  ret void (i8*, i8*)* %0
}

; Function Attrs: nounwind
define weak i8* @halide_malloc(i8* %user_context, i64 %x) #0 {
entry:
  %0 = load i8* (i8*, i64)*, i8* (i8*, i64)** @_ZN6Halide7Runtime8Internal13custom_mallocE, align 8, !tbaa !32
  %call = tail call i8* %0(i8* %user_context, i64 %x) #6
  ret i8* %call
}

; Function Attrs: nounwind
define weak void @halide_free(i8* %user_context, i8* %ptr) #0 {
entry:
  %0 = load void (i8*, i8*)*, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal11custom_freeE, align 8, !tbaa !32
  tail call void %0(i8* %user_context, i8* %ptr) #6
  ret void
}

; Function Attrs: nounwind
define linkonce void @_ZN6Halide7Runtime8Internal21default_error_handlerEPvPKc(i8* %user_context, i8* %msg) #0 {
entry:
  %buf = alloca [4096 x i8], align 1
  %0 = getelementptr inbounds [4096 x i8], [4096 x i8]* %buf, i64 0, i64 0
  call void @llvm.lifetime.start(i64 4096, i8* %0) #7
  %add.ptr = getelementptr inbounds [4096 x i8], [4096 x i8]* %buf, i64 0, i64 4094
  %call = call i8* @halide_string_to_string(i8* %0, i8* %add.ptr, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str.33, i64 0, i64 0)) #6
  %call4 = call i8* @halide_string_to_string(i8* %call, i8* %add.ptr, i8* %msg) #6
  %arrayidx = getelementptr inbounds i8, i8* %call4, i64 -1
  %1 = load i8, i8* %arrayidx, align 1, !tbaa !44
  %cmp = icmp eq i8 %1, 10
  br i1 %cmp, label %if.end, label %if.then

if.then:                                          ; preds = %entry
  store i8 10, i8* %call4, align 1, !tbaa !44
  %arrayidx6 = getelementptr inbounds i8, i8* %call4, i64 1
  store i8 0, i8* %arrayidx6, align 1, !tbaa !44
  br label %if.end

if.end:                                           ; preds = %if.then, %entry
  call void @halide_print(i8* %user_context, i8* %0) #6
  call void @abort() #6
  call void @llvm.lifetime.end(i64 4096, i8* %0) #7
  ret void
}

; Function Attrs: nounwind
define weak void @halide_error(i8* %user_context, i8* %msg) #0 {
entry:
  %0 = load void (i8*, i8*)*, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal20halide_error_handlerE, align 8, !tbaa !32
  tail call void %0(i8* %user_context, i8* %msg) #6
  ret void
}

; Function Attrs: norecurse nounwind
define weak void (i8*, i8*)* @halide_set_error_handler(void (i8*, i8*)* %handler) #4 {
entry:
  %0 = load void (i8*, i8*)*, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal20halide_error_handlerE, align 8, !tbaa !32
  store void (i8*, i8*)* %handler, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal20halide_error_handlerE, align 8, !tbaa !32
  ret void (i8*, i8*)* %0
}

; Function Attrs: nounwind
define weak i32 @halide_error_bounds_inference_call_failed(i8* %user_context, i8* %extern_stage_name, i32 %result) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i7 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([41 x i8], [41 x i8]* @.str.1.34, i64 0, i64 0)) #6
  %call.i10 = tail call i8* @halide_string_to_string(i8* %call.i7, i8* %add.ptr.i, i8* %extern_stage_name) #6
  %call.i13 = tail call i8* @halide_string_to_string(i8* %call.i10, i8* %add.ptr.i, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @.str.2.35, i64 0, i64 0)) #6
  %conv.i = sext i32 %result to i64
  %call.i16 = tail call i8* @halide_int64_to_string(i8* %call.i13, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 %result
}

; Function Attrs: nounwind
define weak i32 @halide_error_extern_stage_failed(i8* %user_context, i8* %extern_stage_name, i32 %result) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i7 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([24 x i8], [24 x i8]* @.str.3.36, i64 0, i64 0)) #6
  %call.i10 = tail call i8* @halide_string_to_string(i8* %call.i7, i8* %add.ptr.i, i8* %extern_stage_name) #6
  %call.i13 = tail call i8* @halide_string_to_string(i8* %call.i10, i8* %add.ptr.i, i8* getelementptr inbounds ([27 x i8], [27 x i8]* @.str.2.35, i64 0, i64 0)) #6
  %conv.i = sext i32 %result to i64
  %call.i16 = tail call i8* @halide_int64_to_string(i8* %call.i13, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 %result
}

; Function Attrs: nounwind
define weak i32 @halide_error_explicit_bounds_too_small(i8* %user_context, i8* %func_name, i8* %var_name, i32 %min_bound, i32 %max_bound, i32 %min_required, i32 %max_required) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i15 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([18 x i8], [18 x i8]* @.str.4.37, i64 0, i64 0)) #6
  %call.i18 = tail call i8* @halide_string_to_string(i8* %call.i15, i8* %add.ptr.i, i8* %var_name) #6
  %call.i21 = tail call i8* @halide_string_to_string(i8* %call.i18, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.5.38, i64 0, i64 0)) #6
  %call.i24 = tail call i8* @halide_string_to_string(i8* %call.i21, i8* %add.ptr.i, i8* %func_name) #6
  %call.i27 = tail call i8* @halide_string_to_string(i8* %call.i24, i8* %add.ptr.i, i8* getelementptr inbounds ([8 x i8], [8 x i8]* @.str.6.39, i64 0, i64 0)) #6
  %conv.i = sext i32 %min_bound to i64
  %call.i30 = tail call i8* @halide_int64_to_string(i8* %call.i27, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  %call.i33 = tail call i8* @halide_string_to_string(i8* %call.i30, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.7.40, i64 0, i64 0)) #6
  %conv.i36 = sext i32 %max_bound to i64
  %call.i37 = tail call i8* @halide_int64_to_string(i8* %call.i33, i8* %add.ptr.i, i64 %conv.i36, i32 1) #6
  %call.i40 = tail call i8* @halide_string_to_string(i8* %call.i37, i8* %add.ptr.i, i8* getelementptr inbounds ([38 x i8], [38 x i8]* @.str.8.41, i64 0, i64 0)) #6
  %conv.i43 = sext i32 %min_required to i64
  %call.i44 = tail call i8* @halide_int64_to_string(i8* %call.i40, i8* %add.ptr.i, i64 %conv.i43, i32 1) #6
  %call.i47 = tail call i8* @halide_string_to_string(i8* %call.i44, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.7.40, i64 0, i64 0)) #6
  %conv.i50 = sext i32 %max_required to i64
  %call.i51 = tail call i8* @halide_int64_to_string(i8* %call.i47, i8* %add.ptr.i, i64 %conv.i50, i32 1) #6
  %call.i54 = tail call i8* @halide_string_to_string(i8* %call.i51, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.9.42, i64 0, i64 0)) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -2
}

; Function Attrs: nounwind
define weak i32 @halide_error_bad_elem_size(i8* %user_context, i8* %func_name, i8* %type_name, i32 %elem_size_given, i32 %correct_elem_size) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i9 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* %func_name) #6
  %call.i12 = tail call i8* @halide_string_to_string(i8* %call.i9, i8* %add.ptr.i, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str.10.43, i64 0, i64 0)) #6
  %call.i15 = tail call i8* @halide_string_to_string(i8* %call.i12, i8* %add.ptr.i, i8* %type_name) #6
  %call.i18 = tail call i8* @halide_string_to_string(i8* %call.i15, i8* %add.ptr.i, i8* getelementptr inbounds ([43 x i8], [43 x i8]* @.str.11.44, i64 0, i64 0)) #6
  %conv.i = sext i32 %elem_size_given to i64
  %call.i21 = tail call i8* @halide_int64_to_string(i8* %call.i18, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  %call.i24 = tail call i8* @halide_string_to_string(i8* %call.i21, i8* %add.ptr.i, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @.str.12.45, i64 0, i64 0)) #6
  %conv.i27 = sext i32 %correct_elem_size to i64
  %call.i28 = tail call i8* @halide_int64_to_string(i8* %call.i24, i8* %add.ptr.i, i64 %conv.i27, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -3
}

; Function Attrs: nounwind
define weak i32 @halide_error_access_out_of_bounds(i8* %user_context, i8* %func_name, i32 %dimension, i32 %min_touched, i32 %max_touched, i32 %min_valid, i32 %max_valid) #0 {
entry:
  %cmp = icmp slt i32 %min_touched, %min_valid
  br i1 %cmp, label %_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit, label %if.else

_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit: ; preds = %entry
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i27 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* %func_name) #6
  %call.i30 = tail call i8* @halide_string_to_string(i8* %call.i27, i8* %add.ptr.i, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @.str.13.46, i64 0, i64 0)) #6
  %conv.i = sext i32 %min_touched to i64
  %call.i33 = tail call i8* @halide_int64_to_string(i8* %call.i30, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  %call.i36 = tail call i8* @halide_string_to_string(i8* %call.i33, i8* %add.ptr.i, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @.str.14.47, i64 0, i64 0)) #6
  %conv.i39 = sext i32 %min_valid to i64
  %call.i40 = tail call i8* @halide_int64_to_string(i8* %call.i36, i8* %add.ptr.i, i64 %conv.i39, i32 1) #6
  %call.i43 = tail call i8* @halide_string_to_string(i8* %call.i40, i8* %add.ptr.i, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @.str.15.48, i64 0, i64 0)) #6
  %conv.i46 = sext i32 %dimension to i64
  %call.i47 = tail call i8* @halide_int64_to_string(i8* %call.i43, i8* %add.ptr.i, i64 %conv.i46, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  br label %if.end17

if.else:                                          ; preds = %entry
  %cmp7 = icmp sgt i32 %max_touched, %max_valid
  br i1 %cmp7, label %_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit87, label %if.end17

_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit87: ; preds = %if.else
  %call.i53 = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i56 = getelementptr inbounds i8, i8* %call.i53, i64 1023
  store i8 0, i8* %add.ptr.i56, align 1, !tbaa !44
  %call.i60 = tail call i8* @halide_string_to_string(i8* %call.i53, i8* %add.ptr.i56, i8* %func_name) #6
  %call.i63 = tail call i8* @halide_string_to_string(i8* %call.i60, i8* %add.ptr.i56, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @.str.13.46, i64 0, i64 0)) #6
  %conv.i66 = sext i32 %max_touched to i64
  %call.i67 = tail call i8* @halide_int64_to_string(i8* %call.i63, i8* %add.ptr.i56, i64 %conv.i66, i32 1) #6
  %call.i70 = tail call i8* @halide_string_to_string(i8* %call.i67, i8* %add.ptr.i56, i8* getelementptr inbounds ([28 x i8], [28 x i8]* @.str.16.49, i64 0, i64 0)) #6
  %conv.i73 = sext i32 %max_valid to i64
  %call.i74 = tail call i8* @halide_int64_to_string(i8* %call.i70, i8* %add.ptr.i56, i64 %conv.i73, i32 1) #6
  %call.i77 = tail call i8* @halide_string_to_string(i8* %call.i74, i8* %add.ptr.i56, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @.str.15.48, i64 0, i64 0)) #6
  %conv.i80 = sext i32 %dimension to i64
  %call.i81 = tail call i8* @halide_int64_to_string(i8* %call.i77, i8* %add.ptr.i56, i64 %conv.i80, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i53) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i53) #6
  br label %if.end17

if.end17:                                         ; preds = %_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit87, %if.else, %_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit
  ret i32 -4
}

; Function Attrs: nounwind
define weak i32 @halide_error_buffer_allocation_too_large(i8* %user_context, i8* %buffer_name, i64 %allocation_size, i64 %max_size) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @.str.17.50, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %buffer_name) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.18.51, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_uint64_to_string(i8* %call.i14, i8* %add.ptr.i, i64 %allocation_size, i32 1) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @.str.19.52, i64 0, i64 0)) #6
  %call.i23 = tail call i8* @halide_uint64_to_string(i8* %call.i20, i8* %add.ptr.i, i64 %max_size, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -5
}

; Function Attrs: nounwind
define weak i32 @halide_error_buffer_extents_too_large(i8* %user_context, i8* %buffer_name, i64 %actual_size, i64 %max_size) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([31 x i8], [31 x i8]* @.str.20.53, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %buffer_name) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.18.51, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_int64_to_string(i8* %call.i14, i8* %add.ptr.i, i64 %actual_size, i32 1) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([37 x i8], [37 x i8]* @.str.19.52, i64 0, i64 0)) #6
  %call.i23 = tail call i8* @halide_int64_to_string(i8* %call.i20, i8* %add.ptr.i, i64 %max_size, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -6
}

; Function Attrs: nounwind
define weak i32 @halide_error_constraints_make_required_region_smaller(i8* %user_context, i8* %buffer_name, i32 %dimension, i32 %constrained_min, i32 %constrained_extent, i32 %required_min, i32 %required_extent) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %add = add i32 %required_min, -1
  %sub = add i32 %add, %required_extent
  %add1 = add i32 %constrained_min, -1
  %sub2 = add i32 %add1, %required_extent
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i22 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([29 x i8], [29 x i8]* @.str.21.54, i64 0, i64 0)) #6
  %call.i25 = tail call i8* @halide_string_to_string(i8* %call.i22, i8* %add.ptr.i, i8* %buffer_name) #6
  %call.i28 = tail call i8* @halide_string_to_string(i8* %call.i25, i8* %add.ptr.i, i8* getelementptr inbounds ([42 x i8], [42 x i8]* @.str.22.55, i64 0, i64 0)) #6
  %call.i31 = tail call i8* @halide_string_to_string(i8* %call.i28, i8* %add.ptr.i, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @.str.23.56, i64 0, i64 0)) #6
  %conv.i = sext i32 %required_min to i64
  %call.i34 = tail call i8* @halide_int64_to_string(i8* %call.i31, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  %call.i37 = tail call i8* @halide_string_to_string(i8* %call.i34, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.7.40, i64 0, i64 0)) #6
  %conv.i40 = sext i32 %sub to i64
  %call.i41 = tail call i8* @halide_int64_to_string(i8* %call.i37, i8* %add.ptr.i, i64 %conv.i40, i32 1) #6
  %call.i44 = tail call i8* @halide_string_to_string(i8* %call.i41, i8* %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.24.57, i64 0, i64 0)) #6
  %call.i47 = tail call i8* @halide_string_to_string(i8* %call.i44, i8* %add.ptr.i, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @.str.25.58, i64 0, i64 0)) #6
  %conv.i50 = sext i32 %constrained_min to i64
  %call.i51 = tail call i8* @halide_int64_to_string(i8* %call.i47, i8* %add.ptr.i, i64 %conv.i50, i32 1) #6
  %call.i54 = tail call i8* @halide_string_to_string(i8* %call.i51, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.7.40, i64 0, i64 0)) #6
  %conv.i57 = sext i32 %sub2 to i64
  %call.i58 = tail call i8* @halide_int64_to_string(i8* %call.i54, i8* %add.ptr.i, i64 %conv.i57, i32 1) #6
  %call.i61 = tail call i8* @halide_string_to_string(i8* %call.i58, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.9.89, i64 0, i64 0)) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -7
}

; Function Attrs: nounwind
define weak i32 @halide_error_constraint_violated(i8* %user_context, i8* %var, i32 %val, i8* %constrained_var, i32 %constrained_val) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i12 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @.str.27.60, i64 0, i64 0)) #6
  %call.i15 = tail call i8* @halide_string_to_string(i8* %call.i12, i8* %add.ptr.i, i8* %var) #6
  %call.i18 = tail call i8* @halide_string_to_string(i8* %call.i15, i8* %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.28.61, i64 0, i64 0)) #6
  %conv.i = sext i32 %val to i64
  %call.i21 = tail call i8* @halide_int64_to_string(i8* %call.i18, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  %call.i24 = tail call i8* @halide_string_to_string(i8* %call.i21, i8* %add.ptr.i, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @.str.29, i64 0, i64 0)) #6
  %call.i27 = tail call i8* @halide_string_to_string(i8* %call.i24, i8* %add.ptr.i, i8* %constrained_var) #6
  %call.i30 = tail call i8* @halide_string_to_string(i8* %call.i27, i8* %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.28.61, i64 0, i64 0)) #6
  %call.i33 = tail call i8* @halide_string_to_string(i8* %call.i30, i8* %add.ptr.i, i8* %constrained_var) #6
  %call.i36 = tail call i8* @halide_string_to_string(i8* %call.i33, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.9.42, i64 0, i64 0)) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -8
}

; Function Attrs: nounwind
define weak i32 @halide_error_param_too_small_i64(i8* %user_context, i8* %param_name, i64 %val, i64 %min_val) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str.30, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %param_name) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.18.51, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_int64_to_string(i8* %call.i14, i8* %add.ptr.i, i64 %val, i32 1) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str.31, i64 0, i64 0)) #6
  %call.i23 = tail call i8* @halide_int64_to_string(i8* %call.i20, i8* %add.ptr.i, i64 %min_val, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -9
}

; Function Attrs: nounwind
define weak i32 @halide_error_param_too_small_u64(i8* %user_context, i8* %param_name, i64 %val, i64 %min_val) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str.30, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %param_name) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.18.51, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_uint64_to_string(i8* %call.i14, i8* %add.ptr.i, i64 %val, i32 1) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str.31, i64 0, i64 0)) #6
  %call.i23 = tail call i8* @halide_uint64_to_string(i8* %call.i20, i8* %add.ptr.i, i64 %min_val, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -9
}

; Function Attrs: nounwind
define weak i32 @halide_error_param_too_small_f64(i8* %user_context, i8* %param_name, double %val, double %min_val) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str.30, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %param_name) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.18.51, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_double_to_string(i8* %call.i14, i8* %add.ptr.i, double %val, i32 1) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([23 x i8], [23 x i8]* @.str.31, i64 0, i64 0)) #6
  %call.i23 = tail call i8* @halide_double_to_string(i8* %call.i20, i8* %add.ptr.i, double %min_val, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -9
}

; Function Attrs: nounwind
define weak i32 @halide_error_param_too_large_i64(i8* %user_context, i8* %param_name, i64 %val, i64 %max_val) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str.30, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %param_name) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.18.51, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_int64_to_string(i8* %call.i14, i8* %add.ptr.i, i64 %val, i32 1) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @.str.32, i64 0, i64 0)) #6
  %call.i23 = tail call i8* @halide_int64_to_string(i8* %call.i20, i8* %add.ptr.i, i64 %max_val, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -10
}

; Function Attrs: nounwind
define weak i32 @halide_error_param_too_large_u64(i8* %user_context, i8* %param_name, i64 %val, i64 %max_val) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str.30, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %param_name) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.18.51, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_uint64_to_string(i8* %call.i14, i8* %add.ptr.i, i64 %val, i32 1) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @.str.32, i64 0, i64 0)) #6
  %call.i23 = tail call i8* @halide_uint64_to_string(i8* %call.i20, i8* %add.ptr.i, i64 %max_val, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -10
}

; Function Attrs: nounwind
define weak i32 @halide_error_param_too_large_f64(i8* %user_context, i8* %param_name, double %val, double %max_val) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([11 x i8], [11 x i8]* @.str.30, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %param_name) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.18.51, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_double_to_string(i8* %call.i14, i8* %add.ptr.i, double %val, i32 1) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([22 x i8], [22 x i8]* @.str.32, i64 0, i64 0)) #6
  %call.i23 = tail call i8* @halide_double_to_string(i8* %call.i20, i8* %add.ptr.i, double %max_val, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -10
}

; Function Attrs: nounwind
define weak i32 @halide_error_out_of_memory(i8* %user_context) #0 {
entry:
  tail call void @halide_error(i8* %user_context, i8* getelementptr inbounds ([44 x i8], [44 x i8]* @.str.33.62, i64 0, i64 0)) #8
  ret i32 -11
}

; Function Attrs: nounwind
define weak i32 @halide_error_buffer_argument_is_null(i8* %user_context, i8* %buffer_name) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i5 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @.str.34, i64 0, i64 0)) #6
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i5, i8* %add.ptr.i, i8* %buffer_name) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str.35, i64 0, i64 0)) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -12
}

; Function Attrs: nounwind
define weak i32 @halide_error_debug_to_file_failed(i8* %user_context, i8* %func, i8* %filename, i32 %error_code) #0 {
_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi1ELy1024EED2Ev.exit:
  %call.i = tail call i8* @halide_malloc(i8* %user_context, i64 1024) #6
  %add.ptr.i = getelementptr inbounds i8, i8* %call.i, i64 1023
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %call.i8 = tail call i8* @halide_string_to_string(i8* %call.i, i8* %add.ptr.i, i8* getelementptr inbounds ([25 x i8], [25 x i8]* @.str.36, i64 0, i64 0)) #6
  %call.i11 = tail call i8* @halide_string_to_string(i8* %call.i8, i8* %add.ptr.i, i8* %func) #6
  %call.i14 = tail call i8* @halide_string_to_string(i8* %call.i11, i8* %add.ptr.i, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @.str.37, i64 0, i64 0)) #6
  %call.i17 = tail call i8* @halide_string_to_string(i8* %call.i14, i8* %add.ptr.i, i8* %filename) #6
  %call.i20 = tail call i8* @halide_string_to_string(i8* %call.i17, i8* %add.ptr.i, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @.str.38, i64 0, i64 0)) #6
  %conv.i = sext i32 %error_code to i64
  %call.i23 = tail call i8* @halide_int64_to_string(i8* %call.i20, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  tail call void @halide_error(i8* %user_context, i8* %call.i) #6
  tail call void @halide_free(i8* %user_context, i8* %call.i) #6
  ret i32 -13
}

; Function Attrs: nounwind
define weak void @halide_print(i8* %user_context, i8* %msg) #0 {
entry:
  %0 = load void (i8*, i8*)*, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal19halide_custom_printE, align 8, !tbaa !32
  tail call void %0(i8* %user_context, i8* %msg) #6
  ret void
}

; Function Attrs: norecurse nounwind
define weak void (i8*, i8*)* @halide_set_custom_print(void (i8*, i8*)* %print) #4 {
entry:
  %0 = load void (i8*, i8*)*, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal19halide_custom_printE, align 8, !tbaa !32
  store void (i8*, i8*)* %print, void (i8*, i8*)** @_ZN6Halide7Runtime8Internal19halide_custom_printE, align 8, !tbaa !32
  ret void (i8*, i8*)* %0
}

; Function Attrs: nounwind
define weak void @halide_cache_cleanup() #0 {
entry:
  tail call void @halide_memoization_cache_cleanup() #8
  ret void
}

; Function Attrs: nounwind
define weak void @halide_memoization_cache_cleanup() #0 {
entry:
  br label %for.body

for.cond.cleanup:                                 ; preds = %while.end
  store i64 0, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  tail call void @halide_mutex_cleanup(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  ret void

for.body:                                         ; preds = %while.end, %entry
  %i.019 = phi i64 [ 0, %entry ], [ %inc, %while.end ]
  %arrayidx = getelementptr inbounds [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*], [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*]* @_ZN6Halide7Runtime8Internal13cache_entriesE, i64 0, i64 %i.019
  %0 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %arrayidx, align 8, !tbaa !32
  store %"struct.Halide::Runtime::Internal::CacheEntry"* null, %"struct.Halide::Runtime::Internal::CacheEntry"** %arrayidx, align 8, !tbaa !32
  %cmp517 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %0, null
  br i1 %cmp517, label %while.end, label %while.body

while.body:                                       ; preds = %while.body, %for.body
  %entry3.018 = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %1, %while.body ], [ %0, %for.body ]
  %next7 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.018, i64 0, i32 0
  %1 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %next7, align 8, !tbaa !74
  tail call void @_ZN6Halide7Runtime8Internal10CacheEntry7destroyEv(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %entry3.018) #8
  %2 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.018 to i8*
  tail call void @halide_free(i8* null, i8* %2) #6
  %cmp5 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %1, null
  br i1 %cmp5, label %while.end, label %while.body

while.end:                                        ; preds = %while.body, %for.body
  %inc = add nuw nsw i64 %i.019, 1
  %exitcond = icmp eq i64 %inc, 256
  br i1 %exitcond, label %for.cond.cleanup, label %for.body
}

; Function Attrs: nounwind
define linkonce void @_ZN6Halide7Runtime8Internal10CacheEntry7destroyEv(%"struct.Halide::Runtime::Internal::CacheEntry"* %this) #0 align 2 {
entry:
  %key = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 4
  %0 = load i8*, i8** %key, align 8, !tbaa !77
  tail call void @halide_free(i8* null, i8* %0) #6
  %tuple_count = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 7
  %1 = load i32, i32* %tuple_count, align 8, !tbaa !78
  %cmp8 = icmp eq i32 %1, 0
  br i1 %cmp8, label %for.cond.cleanup, label %for.body

for.cond.cleanup:                                 ; preds = %for.body, %entry
  ret void

for.body:                                         ; preds = %for.body, %entry
  %i.09 = phi i32 [ %inc, %for.body ], [ 0, %entry ]
  %call = tail call dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %this, i32 %i.09) #8
  %call2 = tail call i32 @halide_device_free(i8* null, %struct.buffer_t* nonnull %call) #6
  %call3 = tail call dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %this, i32 %i.09) #8
  %host = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %call3, i64 0, i32 1
  %2 = load i8*, i8** %host, align 8, !tbaa !79
  %add.ptr = getelementptr inbounds i8, i8* %2, i64 -16
  tail call void @halide_free(i8* null, i8* %add.ptr) #6
  %inc = add i32 %i.09, 1
  %3 = load i32, i32* %tuple_count, align 8, !tbaa !78
  %cmp = icmp ult i32 %inc, %3
  br i1 %cmp, label %for.body, label %for.cond.cleanup
}

; Function Attrs: norecurse nounwind
define linkonce dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* %this, i32 %i) #4 align 2 {
entry:
  %idxprom = sext i32 %i to i64
  %arrayidx2 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 9, i64 %idxprom
  ret %struct.buffer_t* %arrayidx2
}

; Function Attrs: norecurse nounwind
define linkonce i64 @_ZN6Halide7Runtime8Internal11full_extentERK8buffer_t(%struct.buffer_t* dereferenceable(72) %buf) #4 {
entry:
  %arrayidx = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 3, i64 0
  %0 = load i32, i32* %arrayidx, align 4, !tbaa !21
  %cmp2 = icmp slt i32 %0, 0
  %sub = sub nsw i32 0, %0
  %positive_stride.0.in = select i1 %cmp2, i32 %sub, i32 %0
  %positive_stride.0 = sext i32 %positive_stride.0.in to i64
  %arrayidx5 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 2, i64 0
  %1 = load i32, i32* %arrayidx5, align 4, !tbaa !21
  %conv6 = sext i32 %1 to i64
  %mul = mul nsw i64 %positive_stride.0, %conv6
  %cmp7 = icmp ugt i64 %mul, 1
  %mul.result.0 = select i1 %cmp7, i64 %mul, i64 1
  %arrayidx.1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 3, i64 1
  %2 = load i32, i32* %arrayidx.1, align 4, !tbaa !21
  %cmp2.1 = icmp slt i32 %2, 0
  %sub.1 = sub nsw i32 0, %2
  %positive_stride.0.in.1 = select i1 %cmp2.1, i32 %sub.1, i32 %2
  %positive_stride.0.1 = sext i32 %positive_stride.0.in.1 to i64
  %arrayidx5.1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 2, i64 1
  %3 = load i32, i32* %arrayidx5.1, align 4, !tbaa !21
  %conv6.1 = sext i32 %3 to i64
  %mul.1 = mul nsw i64 %positive_stride.0.1, %conv6.1
  %cmp7.1 = icmp ugt i64 %mul.1, %mul.result.0
  %mul.result.0.1 = select i1 %cmp7.1, i64 %mul.1, i64 %mul.result.0
  %arrayidx.2 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 3, i64 2
  %4 = load i32, i32* %arrayidx.2, align 4, !tbaa !21
  %cmp2.2 = icmp slt i32 %4, 0
  %sub.2 = sub nsw i32 0, %4
  %positive_stride.0.in.2 = select i1 %cmp2.2, i32 %sub.2, i32 %4
  %positive_stride.0.2 = sext i32 %positive_stride.0.in.2 to i64
  %arrayidx5.2 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 2, i64 2
  %5 = load i32, i32* %arrayidx5.2, align 4, !tbaa !21
  %conv6.2 = sext i32 %5 to i64
  %mul.2 = mul nsw i64 %positive_stride.0.2, %conv6.2
  %cmp7.2 = icmp ugt i64 %mul.2, %mul.result.0.1
  %mul.result.0.2 = select i1 %cmp7.2, i64 %mul.2, i64 %mul.result.0.1
  %arrayidx.3 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 3, i64 3
  %6 = load i32, i32* %arrayidx.3, align 4, !tbaa !21
  %cmp2.3 = icmp slt i32 %6, 0
  %sub.3 = sub nsw i32 0, %6
  %positive_stride.0.in.3 = select i1 %cmp2.3, i32 %sub.3, i32 %6
  %positive_stride.0.3 = sext i32 %positive_stride.0.in.3 to i64
  %arrayidx5.3 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 2, i64 3
  %7 = load i32, i32* %arrayidx5.3, align 4, !tbaa !21
  %conv6.3 = sext i32 %7 to i64
  %mul.3 = mul nsw i64 %positive_stride.0.3, %conv6.3
  %cmp7.3 = icmp ugt i64 %mul.3, %mul.result.0.2
  %mul.result.0.3 = select i1 %cmp7.3, i64 %mul.3, i64 %mul.result.0.2
  ret i64 %mul.result.0.3
}

; Function Attrs: nounwind
define linkonce zeroext i1 @_ZN6Halide7Runtime8Internal10keys_equalEPKhS3_m(i8* %key1, i8* %key2, i64 %key_size) #0 {
entry:
  %call = tail call i32 @memcmp(i8* %key1, i8* %key2, i64 %key_size) #6
  %cmp = icmp eq i32 %call, 0
  ret i1 %cmp
}

; Function Attrs: nounwind readonly
declare i32 @memcmp(i8* nocapture, i8* nocapture, i64) #3

; Function Attrs: norecurse nounwind
define linkonce zeroext i1 @_ZN6Halide7Runtime8Internal12bounds_equalERK8buffer_tS4_(%struct.buffer_t* dereferenceable(72) %buf1, %struct.buffer_t* dereferenceable(72) %buf2) #4 {
entry:
  %elem_size = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 5
  %0 = load i32, i32* %elem_size, align 8, !tbaa !80
  %elem_size1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 5
  %1 = load i32, i32* %elem_size1, align 8, !tbaa !80
  %cmp = icmp eq i32 %0, %1
  br i1 %cmp, label %for.body.preheader, label %cleanup

for.body.preheader:                               ; preds = %entry
  %arrayidx = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 4, i64 0
  %2 = load i32, i32* %arrayidx, align 4, !tbaa !21
  %arrayidx4 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 4, i64 0
  %3 = load i32, i32* %arrayidx4, align 4, !tbaa !21
  %cmp5 = icmp eq i32 %2, %3
  br i1 %cmp5, label %lor.lhs.false, label %cleanup

for.cond:                                         ; preds = %lor.lhs.false10
  %arrayidx.1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 4, i64 1
  %4 = load i32, i32* %arrayidx.1, align 4, !tbaa !21
  %arrayidx4.1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 4, i64 1
  %5 = load i32, i32* %arrayidx4.1, align 4, !tbaa !21
  %cmp5.1 = icmp eq i32 %4, %5
  br i1 %cmp5.1, label %lor.lhs.false.1, label %cleanup

lor.lhs.false:                                    ; preds = %for.body.preheader
  %arrayidx6 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 2, i64 0
  %6 = load i32, i32* %arrayidx6, align 4, !tbaa !21
  %arrayidx8 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 2, i64 0
  %7 = load i32, i32* %arrayidx8, align 4, !tbaa !21
  %cmp9 = icmp eq i32 %6, %7
  br i1 %cmp9, label %lor.lhs.false10, label %cleanup

lor.lhs.false10:                                  ; preds = %lor.lhs.false
  %arrayidx11 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 3, i64 0
  %8 = load i32, i32* %arrayidx11, align 4, !tbaa !21
  %arrayidx13 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 3, i64 0
  %9 = load i32, i32* %arrayidx13, align 4, !tbaa !21
  %cmp14 = icmp eq i32 %8, %9
  br i1 %cmp14, label %for.cond, label %cleanup

cleanup:                                          ; preds = %lor.lhs.false.3, %for.cond.2, %lor.lhs.false10.2, %lor.lhs.false.2, %for.cond.1, %lor.lhs.false10.1, %lor.lhs.false.1, %lor.lhs.false10, %lor.lhs.false, %for.cond, %for.body.preheader, %entry
  ret i1 false

lor.lhs.false.1:                                  ; preds = %for.cond
  %arrayidx6.1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 2, i64 1
  %10 = load i32, i32* %arrayidx6.1, align 4, !tbaa !21
  %arrayidx8.1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 2, i64 1
  %11 = load i32, i32* %arrayidx8.1, align 4, !tbaa !21
  %cmp9.1 = icmp eq i32 %10, %11
  br i1 %cmp9.1, label %lor.lhs.false10.1, label %cleanup

lor.lhs.false10.1:                                ; preds = %lor.lhs.false.1
  %arrayidx11.1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 3, i64 1
  %12 = load i32, i32* %arrayidx11.1, align 4, !tbaa !21
  %arrayidx13.1 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 3, i64 1
  %13 = load i32, i32* %arrayidx13.1, align 4, !tbaa !21
  %cmp14.1 = icmp eq i32 %12, %13
  br i1 %cmp14.1, label %for.cond.1, label %cleanup

for.cond.1:                                       ; preds = %lor.lhs.false10.1
  %arrayidx.2 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 4, i64 2
  %14 = load i32, i32* %arrayidx.2, align 4, !tbaa !21
  %arrayidx4.2 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 4, i64 2
  %15 = load i32, i32* %arrayidx4.2, align 4, !tbaa !21
  %cmp5.2 = icmp eq i32 %14, %15
  br i1 %cmp5.2, label %lor.lhs.false.2, label %cleanup

lor.lhs.false.2:                                  ; preds = %for.cond.1
  %arrayidx6.2 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 2, i64 2
  %16 = load i32, i32* %arrayidx6.2, align 4, !tbaa !21
  %arrayidx8.2 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 2, i64 2
  %17 = load i32, i32* %arrayidx8.2, align 4, !tbaa !21
  %cmp9.2 = icmp eq i32 %16, %17
  br i1 %cmp9.2, label %lor.lhs.false10.2, label %cleanup

lor.lhs.false10.2:                                ; preds = %lor.lhs.false.2
  %arrayidx11.2 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 3, i64 2
  %18 = load i32, i32* %arrayidx11.2, align 4, !tbaa !21
  %arrayidx13.2 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 3, i64 2
  %19 = load i32, i32* %arrayidx13.2, align 4, !tbaa !21
  %cmp14.2 = icmp eq i32 %18, %19
  br i1 %cmp14.2, label %for.cond.2, label %cleanup

for.cond.2:                                       ; preds = %lor.lhs.false10.2
  %arrayidx.3 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 4, i64 3
  %20 = load i32, i32* %arrayidx.3, align 4, !tbaa !21
  %arrayidx4.3 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 4, i64 3
  %21 = load i32, i32* %arrayidx4.3, align 4, !tbaa !21
  %cmp5.3 = icmp eq i32 %20, %21
  br i1 %cmp5.3, label %lor.lhs.false.3, label %cleanup

lor.lhs.false.3:                                  ; preds = %for.cond.2
  %arrayidx6.3 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 2, i64 3
  %22 = load i32, i32* %arrayidx6.3, align 4, !tbaa !21
  %arrayidx8.3 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 2, i64 3
  %23 = load i32, i32* %arrayidx8.3, align 4, !tbaa !21
  %cmp9.3 = icmp eq i32 %22, %23
  br i1 %cmp9.3, label %lor.lhs.false10.3, label %cleanup

lor.lhs.false10.3:                                ; preds = %lor.lhs.false.3
  %arrayidx11.3 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf1, i64 0, i32 3, i64 3
  %24 = load i32, i32* %arrayidx11.3, align 4, !tbaa !21
  %arrayidx13.3 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf2, i64 0, i32 3, i64 3
  %25 = load i32, i32* %arrayidx13.3, align 4, !tbaa !21
  %cmp14.3 = icmp eq i32 %24, %25
  ret i1 %cmp14.3
}

; Function Attrs: nounwind
define linkonce zeroext i1 @_ZN6Halide7Runtime8Internal10CacheEntry4initEPKhmjRK8buffer_tiPPS5_(%"struct.Halide::Runtime::Internal::CacheEntry"* %this, i8* %cache_key, i64 %cache_key_size, i32 %key_hash, %struct.buffer_t* dereferenceable(72) %computed_buf, i32 %tuples, %struct.buffer_t** %tuple_buffers) #0 align 2 {
entry:
  %key_size = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 3
  %0 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"* %this to i8*
  call void @llvm.memset.p0i8.i64(i8* %0, i8 0, i64 24, i32 8, i1 false)
  store i64 %cache_key_size, i64* %key_size, align 8, !tbaa !81
  %hash = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 5
  store i32 %key_hash, i32* %hash, align 8, !tbaa !82
  %in_use_count = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 6
  store i32 0, i32* %in_use_count, align 4, !tbaa !83
  %tuple_count = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 7
  store i32 %tuples, i32* %tuple_count, align 8, !tbaa !78
  %call = tail call i8* @halide_malloc(i8* null, i64 %cache_key_size) #6
  %key = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 4
  store i8* %call, i8** %key, align 8, !tbaa !77
  %cmp = icmp eq i8* %call, null
  br i1 %cmp, label %return, label %if.end

if.end:                                           ; preds = %entry
  %computed_bounds = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %this, i64 0, i32 8
  %1 = bitcast %struct.buffer_t* %computed_bounds to i8*
  %2 = bitcast %struct.buffer_t* %computed_buf to i8*
  tail call void @llvm.memcpy.p0i8.p0i8.i64(i8* %1, i8* %2, i64 72, i32 8, i1 false), !tbaa.struct !84
  call void @llvm.memset.p0i8.i64(i8* %1, i8 0, i64 16, i32 8, i1 false)
  %3 = load i64, i64* %key_size, align 8, !tbaa !81
  %cmp731 = icmp eq i64 %3, 0
  br i1 %cmp731, label %for.cond11.preheader, label %for.body.preheader

for.body.preheader:                               ; preds = %if.end
  %4 = load i8, i8* %cache_key, align 1, !tbaa !44
  store i8 %4, i8* %call, align 1, !tbaa !44
  %5 = load i64, i64* %key_size, align 8, !tbaa !81
  %cmp733 = icmp ugt i64 %5, 1
  br i1 %cmp733, label %for.body.for.body_crit_edge, label %for.cond11.preheader

for.cond11.preheader:                             ; preds = %for.body.for.body_crit_edge, %for.body.preheader, %if.end
  %6 = load i32, i32* %tuple_count, align 8, !tbaa !78
  %cmp1329 = icmp eq i32 %6, 0
  br i1 %cmp1329, label %return, label %for.body15

for.body.for.body_crit_edge:                      ; preds = %for.body.for.body_crit_edge, %for.body.preheader
  %inc34 = phi i64 [ %inc, %for.body.for.body_crit_edge ], [ 1, %for.body.preheader ]
  %.pre = load i8*, i8** %key, align 8, !tbaa !77
  %arrayidx = getelementptr inbounds i8, i8* %cache_key, i64 %inc34
  %7 = load i8, i8* %arrayidx, align 1, !tbaa !44
  %arrayidx9 = getelementptr inbounds i8, i8* %.pre, i64 %inc34
  store i8 %7, i8* %arrayidx9, align 1, !tbaa !44
  %inc = add i64 %inc34, 1
  %8 = load i64, i64* %key_size, align 8, !tbaa !81
  %cmp7 = icmp ult i64 %inc, %8
  br i1 %cmp7, label %for.body.for.body_crit_edge, label %for.cond11.preheader

for.body15:                                       ; preds = %for.body15, %for.cond11.preheader
  %i10.030 = phi i32 [ %inc19, %for.body15 ], [ 0, %for.cond11.preheader ]
  %call16 = tail call dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %this, i32 %i10.030) #8
  %idxprom = zext i32 %i10.030 to i64
  %arrayidx17 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %idxprom
  %9 = bitcast %struct.buffer_t** %arrayidx17 to i8**
  %10 = load i8*, i8** %9, align 8, !tbaa !32
  %11 = bitcast %struct.buffer_t* %call16 to i8*
  tail call void @llvm.memcpy.p0i8.p0i8.i64(i8* %11, i8* %10, i64 72, i32 8, i1 false), !tbaa.struct !84
  %inc19 = add i32 %i10.030, 1
  %12 = load i32, i32* %tuple_count, align 8, !tbaa !78
  %cmp13 = icmp ult i32 %inc19, %12
  br i1 %cmp13, label %for.body15, label %return

return:                                           ; preds = %for.body15, %for.cond11.preheader, %entry
  %retval.0 = phi i1 [ false, %entry ], [ true, %for.cond11.preheader ], [ true, %for.body15 ]
  ret i1 %retval.0
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memcpy.p0i8.p0i8.i64(i8* nocapture, i8* nocapture readonly, i64, i32, i1) #2

; Function Attrs: norecurse nounwind
define linkonce i32 @_ZN6Halide7Runtime8Internal8djb_hashEPKhm(i8* %key, i64 %key_size) #4 {
entry:
  %cmp8 = icmp eq i64 %key_size, 0
  br i1 %cmp8, label %for.cond.cleanup, label %for.body

for.cond.cleanup:                                 ; preds = %for.body, %entry
  %h.0.lcssa = phi i32 [ 5381, %entry ], [ %add1, %for.body ]
  ret i32 %h.0.lcssa

for.body:                                         ; preds = %for.body, %entry
  %i.010 = phi i64 [ %inc, %for.body ], [ 0, %entry ]
  %h.09 = phi i32 [ %add1, %for.body ], [ 5381, %entry ]
  %add = mul i32 %h.09, 33
  %arrayidx = getelementptr inbounds i8, i8* %key, i64 %i.010
  %0 = load i8, i8* %arrayidx, align 1, !tbaa !44
  %conv = zext i8 %0 to i32
  %add1 = add i32 %conv, %add
  %inc = add nuw i64 %i.010, 1
  %exitcond = icmp eq i64 %inc, %key_size
  br i1 %exitcond, label %for.cond.cleanup, label %for.body
}

; Function Attrs: nounwind
define linkonce void @_ZN6Halide7Runtime8Internal11prune_cacheEv() #0 {
entry:
  %0 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal19least_recently_usedE, align 8, !tbaa !32
  %1 = load i64, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  %2 = load i64, i64* @_ZN6Halide7Runtime8Internal14max_cache_sizeE, align 8, !tbaa !58
  %cmp80 = icmp sgt i64 %1, %2
  %cmp181 = icmp ne %"struct.Halide::Runtime::Internal::CacheEntry"* %0, null
  %3 = and i1 %cmp181, %cmp80
  br i1 %3, label %while.body, label %while.end41

while.body:                                       ; preds = %while.cond.backedge, %entry
  %4 = phi i64 [ %28, %while.cond.backedge ], [ %2, %entry ]
  %5 = phi i64 [ %29, %while.cond.backedge ], [ %1, %entry ]
  %prune_candidate.082 = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %6, %while.cond.backedge ], [ %0, %entry ]
  %more_recent2 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %prune_candidate.082, i64 0, i32 1
  %6 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent2, align 8, !tbaa !85
  %in_use_count = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %prune_candidate.082, i64 0, i32 6
  %7 = load i32, i32* %in_use_count, align 4, !tbaa !83
  %cmp3 = icmp eq i32 %7, 0
  br i1 %cmp3, label %if.then, label %while.cond.backedge

if.then:                                          ; preds = %while.body
  %hash = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %prune_candidate.082, i64 0, i32 5
  %8 = load i32, i32* %hash, align 8, !tbaa !82
  %9 = and i32 %8, 255
  %idxprom = zext i32 %9 to i64
  %arrayidx = getelementptr inbounds [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*], [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*]* @_ZN6Halide7Runtime8Internal13cache_entriesE, i64 0, i64 %idxprom
  %10 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %arrayidx, align 8, !tbaa !32
  %cmp5 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %10, %prune_candidate.082
  br i1 %cmp5, label %if.then6, label %while.cond9

if.then6:                                         ; preds = %if.then
  %11 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"* %prune_candidate.082 to i64*
  %12 = load i64, i64* %11, align 8, !tbaa !74
  %13 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %arrayidx to i64*
  store i64 %12, i64* %13, align 8, !tbaa !32
  br label %if.end21

while.cond9:                                      ; preds = %land.rhs11, %if.then
  %prev_hash_entry.0 = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %14, %land.rhs11 ], [ %10, %if.then ]
  %cmp10 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %prev_hash_entry.0, null
  br i1 %cmp10, label %if.then18, label %land.rhs11

land.rhs11:                                       ; preds = %while.cond9
  %next12 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %prev_hash_entry.0, i64 0, i32 0
  %14 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %next12, align 8, !tbaa !74
  %cmp13 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %14, %prune_candidate.082
  br i1 %cmp13, label %if.end, label %while.cond9

if.then18:                                        ; preds = %while.cond9
  tail call void @halide_print(i8* null, i8* getelementptr inbounds ([112 x i8], [112 x i8]* @.str.66, i64 0, i64 0)) #6
  tail call void @abort() #6
  unreachable

if.end:                                           ; preds = %land.rhs11
  %15 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"* %prune_candidate.082 to i64*
  %16 = load i64, i64* %15, align 8, !tbaa !74
  %17 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"* %prev_hash_entry.0 to i64*
  store i64 %16, i64* %17, align 8, !tbaa !74
  br label %if.end21

if.end21:                                         ; preds = %if.end, %if.then6
  %18 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal19least_recently_usedE, align 8, !tbaa !32
  %cmp22 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %18, %prune_candidate.082
  br i1 %cmp22, label %if.then23, label %if.end24

if.then23:                                        ; preds = %if.end21
  store %"struct.Halide::Runtime::Internal::CacheEntry"* %6, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal19least_recently_usedE, align 8, !tbaa !32
  br label %if.end24

if.end24:                                         ; preds = %if.then23, %if.end21
  %cmp25 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %6, null
  %.pre3 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %prune_candidate.082, i64 0, i32 2
  br i1 %cmp25, label %if.end28, label %if.then26

if.then26:                                        ; preds = %if.end24
  %19 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %.pre3 to i64*
  %20 = load i64, i64* %19, align 8, !tbaa !86
  %less_recent27 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %6, i64 0, i32 2
  %21 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %less_recent27 to i64*
  store i64 %20, i64* %21, align 8, !tbaa !86
  br label %if.end28

if.end28:                                         ; preds = %if.then26, %if.end24
  %22 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE, align 8, !tbaa !32
  %cmp29 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %22, %prune_candidate.082
  br i1 %cmp29, label %if.then30, label %if.end32

if.then30:                                        ; preds = %if.end28
  %23 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %.pre3 to i64*
  %24 = load i64, i64* %23, align 8, !tbaa !86
  store i64 %24, i64* bitcast (%"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE to i64*), align 8, !tbaa !32
  br label %if.end32

if.end32:                                         ; preds = %if.then30, %if.end28
  %25 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %.pre3, align 8, !tbaa !86
  %cmp34 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %25, null
  br i1 %cmp34, label %for.cond.preheader, label %if.then35

if.then35:                                        ; preds = %if.end32
  store %"struct.Halide::Runtime::Internal::CacheEntry"* %6, %"struct.Halide::Runtime::Internal::CacheEntry"** %.pre3, align 8, !tbaa !86
  br label %for.cond.preheader

for.cond.preheader:                               ; preds = %if.then35, %if.end32
  %tuple_count = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %prune_candidate.082, i64 0, i32 7
  %26 = load i32, i32* %tuple_count, align 8, !tbaa !78
  %cmp3878 = icmp eq i32 %26, 0
  br i1 %cmp3878, label %for.cond.cleanup, label %for.body

for.cond.cleanup:                                 ; preds = %for.body, %for.cond.preheader
  tail call void @_ZN6Halide7Runtime8Internal10CacheEntry7destroyEv(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %prune_candidate.082) #8
  %27 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"* %prune_candidate.082 to i8*
  tail call void @halide_free(i8* null, i8* %27) #6
  %.pre = load i64, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  %.pre86 = load i64, i64* @_ZN6Halide7Runtime8Internal14max_cache_sizeE, align 8, !tbaa !58
  br label %while.cond.backedge

while.cond.backedge:                              ; preds = %for.cond.cleanup, %while.body
  %28 = phi i64 [ %.pre86, %for.cond.cleanup ], [ %4, %while.body ]
  %29 = phi i64 [ %.pre, %for.cond.cleanup ], [ %5, %while.body ]
  %cmp = icmp sgt i64 %29, %28
  %cmp1 = icmp ne %"struct.Halide::Runtime::Internal::CacheEntry"* %6, null
  %30 = and i1 %cmp1, %cmp
  br i1 %30, label %while.body, label %while.end41

for.body:                                         ; preds = %for.body, %for.cond.preheader
  %i.079 = phi i32 [ %inc, %for.body ], [ 0, %for.cond.preheader ]
  %call = tail call dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %prune_candidate.082, i32 %i.079) #8
  %call39 = tail call i64 @_ZN6Halide7Runtime8Internal11full_extentERK8buffer_t(%struct.buffer_t* nonnull dereferenceable(72) %call) #8
  %31 = load i64, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  %sub = sub i64 %31, %call39
  store i64 %sub, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  %inc = add i32 %i.079, 1
  %32 = load i32, i32* %tuple_count, align 8, !tbaa !78
  %cmp38 = icmp ult i32 %inc, %32
  br i1 %cmp38, label %for.body, label %for.cond.cleanup

while.end41:                                      ; preds = %while.cond.backedge, %entry
  ret void
}

; Function Attrs: nounwind
define weak void @halide_memoization_cache_set_size(i64 %size) #0 {
entry:
  %cmp = icmp eq i64 %size, 0
  %.size = select i1 %cmp, i64 1048576, i64 %size
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  store i64 %.size, i64* @_ZN6Halide7Runtime8Internal14max_cache_sizeE, align 8, !tbaa !58
  tail call void @_ZN6Halide7Runtime8Internal11prune_cacheEv() #8
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  ret void
}

; Function Attrs: nounwind
define weak i32 @halide_memoization_cache_lookup(i8* %user_context, i8* %cache_key, i32 %size, %struct.buffer_t* %computed_bounds, i32 %tuple_count, %struct.buffer_t** %tuple_buffers) #0 {
entry:
  %conv = sext i32 %size to i64
  %call = tail call i32 @_ZN6Halide7Runtime8Internal8djb_hashEPKhm(i8* %cache_key, i64 %conv) #8
  %0 = and i32 %call, 255
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  %idxprom = zext i32 %0 to i64
  %arrayidx = getelementptr inbounds [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*], [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*]* @_ZN6Halide7Runtime8Internal13cache_entriesE, i64 0, i64 %idxprom
  %entry3.0202 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %arrayidx, align 8, !tbaa !32
  %cmp203 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0202, null
  br i1 %cmp203, label %for.cond66.preheader, label %while.body.lr.ph

while.body.lr.ph:                                 ; preds = %entry
  %cmp16199 = icmp sgt i32 %tuple_count, 0
  br i1 %cmp16199, label %while.body.us.preheader, label %while.body

while.body.us.preheader:                          ; preds = %while.body.lr.ph
  %1 = sext i32 %tuple_count to i64
  br label %while.body.us

while.body.us:                                    ; preds = %if.end64.us, %while.body.us.preheader
  %entry3.0204.us = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %entry3.0.us, %if.end64.us ], [ %entry3.0202, %while.body.us.preheader ]
  %hash.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204.us, i64 0, i32 5
  %2 = load i32, i32* %hash.us, align 8, !tbaa !82
  %cmp4.us = icmp eq i32 %2, %call
  br i1 %cmp4.us, label %land.lhs.true.us, label %if.end64.us

land.lhs.true.us:                                 ; preds = %while.body.us
  %key_size.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204.us, i64 0, i32 3
  %3 = load i64, i64* %key_size.us, align 8, !tbaa !81
  %cmp6.us = icmp eq i64 %3, %conv
  br i1 %cmp6.us, label %land.lhs.true7.us, label %if.end64.us

land.lhs.true7.us:                                ; preds = %land.lhs.true.us
  %key.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204.us, i64 0, i32 4
  %4 = load i8*, i8** %key.us, align 8, !tbaa !77
  %call9.us = tail call zeroext i1 @_ZN6Halide7Runtime8Internal10keys_equalEPKhS3_m(i8* %4, i8* %cache_key, i64 %conv) #8
  br i1 %call9.us, label %land.lhs.true10.us, label %if.end64.us

land.lhs.true10.us:                               ; preds = %land.lhs.true7.us
  %computed_bounds11.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204.us, i64 0, i32 8
  %call12.us = tail call zeroext i1 @_ZN6Halide7Runtime8Internal12bounds_equalERK8buffer_tS4_(%struct.buffer_t* dereferenceable(72) %computed_bounds11.us, %struct.buffer_t* dereferenceable(72) %computed_bounds) #8
  br i1 %call12.us, label %land.lhs.true13.us, label %if.end64.us

land.lhs.true13.us:                               ; preds = %land.lhs.true10.us
  %tuple_count14.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204.us, i64 0, i32 7
  %5 = load i32, i32* %tuple_count14.us, align 8, !tbaa !78
  %cmp15.us = icmp eq i32 %5, %tuple_count
  br i1 %cmp15.us, label %for.body.us, label %if.end64.us

if.end64.us:                                      ; preds = %for.cond.for.cond.cleanup_crit_edge.us, %land.lhs.true13.us, %land.lhs.true10.us, %land.lhs.true7.us, %land.lhs.true.us, %while.body.us
  %next.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204.us, i64 0, i32 0
  %entry3.0.us = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %next.us, align 8, !tbaa !32
  %cmp.us = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0.us, null
  br i1 %cmp.us, label %for.cond66.preheader, label %while.body.us

for.body.us:                                      ; preds = %for.body.us, %land.lhs.true13.us
  %indvars.iv216 = phi i64 [ %indvars.iv.next217, %for.body.us ], [ 0, %land.lhs.true13.us ]
  %arrayidx18.us = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv216
  %6 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx18.us, align 8, !tbaa !32
  %7 = trunc i64 %indvars.iv216 to i32
  %call19.us = tail call dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %entry3.0204.us, i32 %7) #8
  %call20.us = tail call zeroext i1 @_ZN6Halide7Runtime8Internal12bounds_equalERK8buffer_tS4_(%struct.buffer_t* nonnull dereferenceable(72) %call19.us, %struct.buffer_t* dereferenceable(72) %6) #8
  %indvars.iv.next217 = add nuw nsw i64 %indvars.iv216, 1
  %cmp16.us = icmp slt i64 %indvars.iv.next217, %1
  %or.cond.us = and i1 %cmp16.us, %call20.us
  br i1 %or.cond.us, label %for.body.us, label %for.cond.for.cond.cleanup_crit_edge.us

for.cond.for.cond.cleanup_crit_edge.us:           ; preds = %for.body.us
  br i1 %call20.us, label %if.then22, label %if.end64.us

for.cond66.preheader:                             ; preds = %if.end64, %if.end64.us, %entry
  %cmp67195 = icmp sgt i32 %tuple_count, 0
  br i1 %cmp67195, label %for.body69.preheader, label %cleanup108

for.body69.preheader:                             ; preds = %for.cond66.preheader
  %8 = sext i32 %tuple_count to i64
  br label %for.body69

while.body:                                       ; preds = %if.end64, %while.body.lr.ph
  %entry3.0204 = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %entry3.0, %if.end64 ], [ %entry3.0202, %while.body.lr.ph ]
  %hash = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204, i64 0, i32 5
  %9 = load i32, i32* %hash, align 8, !tbaa !82
  %cmp4 = icmp eq i32 %9, %call
  br i1 %cmp4, label %land.lhs.true, label %if.end64

land.lhs.true:                                    ; preds = %while.body
  %key_size = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204, i64 0, i32 3
  %10 = load i64, i64* %key_size, align 8, !tbaa !81
  %cmp6 = icmp eq i64 %10, %conv
  br i1 %cmp6, label %land.lhs.true7, label %if.end64

land.lhs.true7:                                   ; preds = %land.lhs.true
  %key = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204, i64 0, i32 4
  %11 = load i8*, i8** %key, align 8, !tbaa !77
  %call9 = tail call zeroext i1 @_ZN6Halide7Runtime8Internal10keys_equalEPKhS3_m(i8* %11, i8* %cache_key, i64 %conv) #8
  br i1 %call9, label %land.lhs.true10, label %if.end64

land.lhs.true10:                                  ; preds = %land.lhs.true7
  %computed_bounds11 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204, i64 0, i32 8
  %call12 = tail call zeroext i1 @_ZN6Halide7Runtime8Internal12bounds_equalERK8buffer_tS4_(%struct.buffer_t* dereferenceable(72) %computed_bounds11, %struct.buffer_t* dereferenceable(72) %computed_bounds) #8
  br i1 %call12, label %land.lhs.true13, label %if.end64

land.lhs.true13:                                  ; preds = %land.lhs.true10
  %tuple_count14 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204, i64 0, i32 7
  %12 = load i32, i32* %tuple_count14, align 8, !tbaa !78
  %cmp15 = icmp eq i32 %12, %tuple_count
  br i1 %cmp15, label %if.then22, label %if.end64

if.then22:                                        ; preds = %land.lhs.true13, %for.cond.for.cond.cleanup_crit_edge.us
  %entry3.0.lcssa191 = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %entry3.0204.us, %for.cond.for.cond.cleanup_crit_edge.us ], [ %entry3.0204, %land.lhs.true13 ]
  %13 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE, align 8, !tbaa !32
  %cmp23 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0.lcssa191, %13
  br i1 %cmp23, label %for.cond52.preheader, label %if.then24

if.then24:                                        ; preds = %if.then22
  %more_recent = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0.lcssa191, i64 0, i32 1
  %14 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent, align 8, !tbaa !85
  %cmp25 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %14, null
  br i1 %cmp25, label %if.then26, label %if.end

if.then26:                                        ; preds = %if.then24
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([115 x i8], [115 x i8]* @.str.1.67, i64 0, i64 0)) #6
  tail call void @abort() #6
  br label %if.end

if.end:                                           ; preds = %if.then26, %if.then24
  %less_recent = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0.lcssa191, i64 0, i32 2
  %15 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %less_recent, align 8, !tbaa !86
  %cmp27 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %15, null
  br i1 %cmp27, label %if.else, label %if.then28

if.then28:                                        ; preds = %if.end
  %16 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent to i64*
  %17 = load i64, i64* %16, align 8, !tbaa !85
  %more_recent31 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %15, i64 0, i32 1
  %18 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent31 to i64*
  store i64 %17, i64* %18, align 8, !tbaa !85
  br label %if.end36

if.else:                                          ; preds = %if.end
  %19 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal19least_recently_usedE, align 8, !tbaa !32
  %cmp32 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %19, %entry3.0.lcssa191
  br i1 %cmp32, label %if.end34, label %if.then33

if.then33:                                        ; preds = %if.else
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([117 x i8], [117 x i8]* @.str.2.68, i64 0, i64 0)) #6
  tail call void @abort() #6
  br label %if.end34

if.end34:                                         ; preds = %if.then33, %if.else
  %20 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent to i64*
  %21 = load i64, i64* %20, align 8, !tbaa !85
  store i64 %21, i64* bitcast (%"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal19least_recently_usedE to i64*), align 8, !tbaa !32
  br label %if.end36

if.end36:                                         ; preds = %if.end34, %if.then28
  %22 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent, align 8, !tbaa !85
  %cmp38 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %22, null
  br i1 %cmp38, label %if.then39, label %if.end40

if.then39:                                        ; preds = %if.end36
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([115 x i8], [115 x i8]* @.str.3.69, i64 0, i64 0)) #6
  tail call void @abort() #6
  %.pre = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent, align 8, !tbaa !85
  br label %if.end40

if.end40:                                         ; preds = %if.then39, %if.end36
  %23 = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %22, %if.end36 ], [ %.pre, %if.then39 ]
  %24 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %less_recent to i64*
  %25 = load i64, i64* %24, align 8, !tbaa !86
  %less_recent43 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %23, i64 0, i32 2
  %26 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %less_recent43 to i64*
  store i64 %25, i64* %26, align 8, !tbaa !86
  store %"struct.Halide::Runtime::Internal::CacheEntry"* null, %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent, align 8, !tbaa !85
  %27 = load i64, i64* bitcast (%"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE to i64*), align 8, !tbaa !32
  store i64 %27, i64* %24, align 8, !tbaa !86
  %28 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE, align 8, !tbaa !32
  %cmp46 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %28, null
  br i1 %cmp46, label %if.end49, label %if.then47

if.then47:                                        ; preds = %if.end40
  %more_recent48 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %28, i64 0, i32 1
  store %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0.lcssa191, %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent48, align 8, !tbaa !85
  br label %if.end49

if.end49:                                         ; preds = %if.then47, %if.end40
  store %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0.lcssa191, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE, align 8, !tbaa !32
  br label %for.cond52.preheader

for.cond52.preheader:                             ; preds = %if.end49, %if.then22
  br i1 %cmp16199, label %for.body55, label %for.cond.cleanup54

for.cond.cleanup54:                               ; preds = %for.body55, %for.cond52.preheader
  %in_use_count = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0.lcssa191, i64 0, i32 6
  %29 = load i32, i32* %in_use_count, align 4, !tbaa !83
  %add = add i32 %29, %tuple_count
  store i32 %add, i32* %in_use_count, align 4, !tbaa !83
  br label %cleanup108

for.body55:                                       ; preds = %for.body55, %for.cond52.preheader
  %indvars.iv214 = phi i64 [ %indvars.iv.next215, %for.body55 ], [ 0, %for.cond52.preheader ]
  %arrayidx58 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv214
  %30 = bitcast %struct.buffer_t** %arrayidx58 to i8**
  %31 = load i8*, i8** %30, align 8, !tbaa !32
  %32 = trunc i64 %indvars.iv214 to i32
  %call59 = tail call dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %entry3.0.lcssa191, i32 %32) #8
  %33 = bitcast %struct.buffer_t* %call59 to i8*
  tail call void @llvm.memcpy.p0i8.p0i8.i64(i8* %31, i8* %33, i64 72, i32 8, i1 false), !tbaa.struct !84
  %indvars.iv.next215 = add nuw nsw i64 %indvars.iv214, 1
  %lftr.wideiv13 = trunc i64 %indvars.iv.next215 to i32
  %exitcond14 = icmp eq i32 %lftr.wideiv13, %tuple_count
  br i1 %exitcond14, label %for.cond.cleanup54, label %for.body55

if.end64:                                         ; preds = %land.lhs.true13, %land.lhs.true10, %land.lhs.true7, %land.lhs.true, %while.body
  %next = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0204, i64 0, i32 0
  %entry3.0 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %next, align 8, !tbaa !32
  %cmp = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %entry3.0, null
  br i1 %cmp, label %for.cond66.preheader, label %while.body

for.body69:                                       ; preds = %for.inc103, %for.body69.preheader
  %indvars.iv212 = phi i64 [ 0, %for.body69.preheader ], [ %indvars.iv.next213, %for.inc103 ]
  %arrayidx72 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv212
  %34 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx72, align 8, !tbaa !32
  %call73 = tail call i64 @_ZN6Halide7Runtime8Internal11full_extentERK8buffer_t(%struct.buffer_t* dereferenceable(72) %34) #8
  %elem_size = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %34, i64 0, i32 5
  %35 = load i32, i32* %elem_size, align 8, !tbaa !80
  %conv74 = sext i32 %35 to i64
  %mul = mul i64 %conv74, %call73
  %add75 = add i64 %mul, 16
  %call76 = tail call i8* @halide_malloc(i8* %user_context, i64 %add75) #6
  %host = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %34, i64 0, i32 1
  store i8* %call76, i8** %host, align 8, !tbaa !79
  %cmp78 = icmp eq i8* %call76, null
  br i1 %cmp78, label %for.cond80.preheader, label %for.inc103

for.cond80.preheader:                             ; preds = %for.body69
  %36 = trunc i64 %indvars.iv212 to i32
  %cmp81193 = icmp sgt i32 %36, 0
  br i1 %cmp81193, label %for.body83.preheader, label %cleanup108

for.body83.preheader:                             ; preds = %for.cond80.preheader
  %sext = shl i64 %indvars.iv212, 32
  %37 = ashr exact i64 %sext, 32
  br label %for.body83

for.body83:                                       ; preds = %for.body83, %for.body83.preheader
  %indvars.iv = phi i64 [ %37, %for.body83.preheader ], [ %indvars.iv.next, %for.body83 ]
  %indvars.iv.next = add nsw i64 %indvars.iv, -1
  %arrayidx85 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv.next
  %38 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx85, align 8, !tbaa !32
  %host86 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %38, i64 0, i32 1
  %39 = load i8*, i8** %host86, align 8, !tbaa !79
  %add.ptr = getelementptr inbounds i8, i8* %39, i64 -16
  tail call void @halide_free(i8* %user_context, i8* %add.ptr) #6
  %40 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx85, align 8, !tbaa !32
  %host90 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %40, i64 0, i32 1
  store i8* null, i8** %host90, align 8, !tbaa !79
  %cmp81 = icmp sgt i64 %indvars.iv, 1
  br i1 %cmp81, label %for.body83, label %cleanup108

for.inc103:                                       ; preds = %for.body69
  %add.ptr96 = getelementptr inbounds i8, i8* %call76, i64 16
  store i8* %add.ptr96, i8** %host, align 8, !tbaa !79
  %41 = bitcast i8* %call76 to i32*
  store i32 %call, i32* %41, align 4, !tbaa !21
  %indvars.iv.next213 = add nuw nsw i64 %indvars.iv212, 1
  %cmp67 = icmp slt i64 %indvars.iv.next213, %8
  br i1 %cmp67, label %for.body69, label %cleanup108

cleanup108:                                       ; preds = %for.inc103, %for.body83, %for.cond80.preheader, %for.cond.cleanup54, %for.cond66.preheader
  %retval.6 = phi i32 [ 0, %for.cond.cleanup54 ], [ -1, %for.cond80.preheader ], [ 1, %for.cond66.preheader ], [ -1, %for.body83 ], [ 1, %for.inc103 ]
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  ret i32 %retval.6
}

; Function Attrs: nounwind
define weak void @halide_memoization_cache_store(i8* %user_context, i8* %cache_key, i32 %size, %struct.buffer_t* %computed_bounds, i32 %tuple_count, %struct.buffer_t** %tuple_buffers) #0 {
entry:
  %0 = load %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, align 8, !tbaa !32
  %host = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %0, i64 0, i32 1
  %1 = load i8*, i8** %host, align 8, !tbaa !79
  %add.ptr = getelementptr inbounds i8, i8* %1, i64 -16
  %2 = bitcast i8* %add.ptr to i32*
  %3 = load i32, i32* %2, align 4, !tbaa !21
  %4 = and i32 %3, 255
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  %idxprom = zext i32 %4 to i64
  %arrayidx7 = getelementptr inbounds [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*], [256 x %"struct.Halide::Runtime::Internal::CacheEntry"*]* @_ZN6Halide7Runtime8Internal13cache_entriesE, i64 0, i64 %idxprom
  %entry6.0252 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %arrayidx7, align 8, !tbaa !32
  %cmp253 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0252, null
  br i1 %cmp253, label %for.cond57.preheader, label %while.body.lr.ph

while.body.lr.ph:                                 ; preds = %entry
  %conv9 = sext i32 %size to i64
  %cmp22246 = icmp sgt i32 %tuple_count, 0
  br i1 %cmp22246, label %while.body.us.preheader, label %while.body

while.body.us.preheader:                          ; preds = %while.body.lr.ph
  %5 = sext i32 %tuple_count to i64
  br label %while.body.us

while.body.us:                                    ; preds = %if.end53.us, %while.body.us.preheader
  %entry6.0254.us = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %entry6.0.us, %if.end53.us ], [ %entry6.0252, %while.body.us.preheader ]
  %hash.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254.us, i64 0, i32 5
  %6 = load i32, i32* %hash.us, align 8, !tbaa !82
  %cmp8.us = icmp eq i32 %6, %3
  br i1 %cmp8.us, label %land.lhs.true.us, label %if.end53.us

land.lhs.true.us:                                 ; preds = %while.body.us
  %key_size.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254.us, i64 0, i32 3
  %7 = load i64, i64* %key_size.us, align 8, !tbaa !81
  %cmp10.us = icmp eq i64 %7, %conv9
  br i1 %cmp10.us, label %land.lhs.true11.us, label %if.end53.us

land.lhs.true11.us:                               ; preds = %land.lhs.true.us
  %key.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254.us, i64 0, i32 4
  %8 = load i8*, i8** %key.us, align 8, !tbaa !77
  %call.us = tail call zeroext i1 @_ZN6Halide7Runtime8Internal10keys_equalEPKhS3_m(i8* %8, i8* %cache_key, i64 %conv9) #8
  br i1 %call.us, label %land.lhs.true13.us, label %if.end53.us

land.lhs.true13.us:                               ; preds = %land.lhs.true11.us
  %computed_bounds14.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254.us, i64 0, i32 8
  %call15.us = tail call zeroext i1 @_ZN6Halide7Runtime8Internal12bounds_equalERK8buffer_tS4_(%struct.buffer_t* dereferenceable(72) %computed_bounds14.us, %struct.buffer_t* dereferenceable(72) %computed_bounds) #8
  br i1 %call15.us, label %land.lhs.true16.us, label %if.end53.us

land.lhs.true16.us:                               ; preds = %land.lhs.true13.us
  %tuple_count17.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254.us, i64 0, i32 7
  %9 = load i32, i32* %tuple_count17.us, align 8, !tbaa !78
  %cmp18.us = icmp eq i32 %9, %tuple_count
  br i1 %cmp18.us, label %for.body.us, label %if.end53.us

if.end53.us:                                      ; preds = %for.cond.for.cond.cleanup_crit_edge.us, %land.lhs.true16.us, %land.lhs.true13.us, %land.lhs.true11.us, %land.lhs.true.us, %while.body.us
  %next.us = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254.us, i64 0, i32 0
  %entry6.0.us = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %next.us, align 8, !tbaa !32
  %cmp.us = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0.us, null
  br i1 %cmp.us, label %for.cond57.preheader, label %while.body.us

for.body.us:                                      ; preds = %for.body.us, %land.lhs.true16.us
  %indvars.iv277 = phi i64 [ %indvars.iv.next278, %for.body.us ], [ 0, %land.lhs.true16.us ]
  %no_host_pointers_equal.0249.us = phi i8 [ %.no_host_pointers_equal.0.us, %for.body.us ], [ 1, %land.lhs.true16.us ]
  %arrayidx25.us = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv277
  %10 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx25.us, align 8, !tbaa !32
  %11 = trunc i64 %indvars.iv277 to i32
  %call26.us = tail call dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %entry6.0254.us, i32 %11) #8
  %call27.us = tail call zeroext i1 @_ZN6Halide7Runtime8Internal12bounds_equalERK8buffer_tS4_(%struct.buffer_t* nonnull dereferenceable(72) %call26.us, %struct.buffer_t* dereferenceable(72) %10) #8
  %call28.us = tail call dereferenceable(72) %struct.buffer_t* @_ZN6Halide7Runtime8Internal10CacheEntry6bufferEi(%"struct.Halide::Runtime::Internal::CacheEntry"* nonnull %entry6.0254.us, i32 %11) #8
  %host29.us = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %call28.us, i64 0, i32 1
  %12 = load i8*, i8** %host29.us, align 8, !tbaa !79
  %host30.us = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %10, i64 0, i32 1
  %13 = load i8*, i8** %host30.us, align 8, !tbaa !79
  %cmp31.us = icmp eq i8* %12, %13
  %.no_host_pointers_equal.0.us = select i1 %cmp31.us, i8 0, i8 %no_host_pointers_equal.0249.us
  %indvars.iv.next278 = add nuw nsw i64 %indvars.iv277, 1
  %cmp22.us = icmp slt i64 %indvars.iv.next278, %5
  %or.cond.us = and i1 %cmp22.us, %call27.us
  br i1 %or.cond.us, label %for.body.us, label %for.cond.for.cond.cleanup_crit_edge.us

for.cond.for.cond.cleanup_crit_edge.us:           ; preds = %for.body.us
  br i1 %call27.us, label %if.then34, label %if.end53.us

for.cond57.preheader:                             ; preds = %if.end53, %if.end53.us, %entry
  %cmp58241 = icmp sgt i32 %tuple_count, 0
  br i1 %cmp58241, label %for.body60, label %for.cond.cleanup59

while.body:                                       ; preds = %if.end53, %while.body.lr.ph
  %entry6.0254 = phi %"struct.Halide::Runtime::Internal::CacheEntry"* [ %entry6.0, %if.end53 ], [ %entry6.0252, %while.body.lr.ph ]
  %hash = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254, i64 0, i32 5
  %14 = load i32, i32* %hash, align 8, !tbaa !82
  %cmp8 = icmp eq i32 %14, %3
  br i1 %cmp8, label %land.lhs.true, label %if.end53

land.lhs.true:                                    ; preds = %while.body
  %key_size = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254, i64 0, i32 3
  %15 = load i64, i64* %key_size, align 8, !tbaa !81
  %cmp10 = icmp eq i64 %15, %conv9
  br i1 %cmp10, label %land.lhs.true11, label %if.end53

land.lhs.true11:                                  ; preds = %land.lhs.true
  %key = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254, i64 0, i32 4
  %16 = load i8*, i8** %key, align 8, !tbaa !77
  %call = tail call zeroext i1 @_ZN6Halide7Runtime8Internal10keys_equalEPKhS3_m(i8* %16, i8* %cache_key, i64 %conv9) #8
  br i1 %call, label %land.lhs.true13, label %if.end53

land.lhs.true13:                                  ; preds = %land.lhs.true11
  %computed_bounds14 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254, i64 0, i32 8
  %call15 = tail call zeroext i1 @_ZN6Halide7Runtime8Internal12bounds_equalERK8buffer_tS4_(%struct.buffer_t* dereferenceable(72) %computed_bounds14, %struct.buffer_t* dereferenceable(72) %computed_bounds) #8
  br i1 %call15, label %land.lhs.true16, label %if.end53

land.lhs.true16:                                  ; preds = %land.lhs.true13
  %tuple_count17 = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254, i64 0, i32 7
  %17 = load i32, i32* %tuple_count17, align 8, !tbaa !78
  %cmp18 = icmp eq i32 %17, %tuple_count
  br i1 %cmp18, label %for.cond40.preheader, label %if.end53

if.then34:                                        ; preds = %for.cond.for.cond.cleanup_crit_edge.us
  %phitmp = and i8 %.no_host_pointers_equal.0.us, 1
  %phitmp279 = icmp eq i8 %phitmp, 0
  br i1 %phitmp279, label %if.then36, label %for.cond40.preheader

if.then36:                                        ; preds = %if.then34
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([111 x i8], [111 x i8]* @.str.5.70, i64 0, i64 0)) #6
  tail call void @abort() #6
  br label %for.cond40.preheader

for.cond40.preheader:                             ; preds = %if.then36, %if.then34, %land.lhs.true16
  br i1 %cmp22246, label %for.body43, label %cleanup147

for.body43:                                       ; preds = %for.body43, %for.cond40.preheader
  %indvars.iv273 = phi i64 [ %indvars.iv.next274, %for.body43 ], [ 0, %for.cond40.preheader ]
  %arrayidx45 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv273
  %18 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx45, align 8, !tbaa !32
  %host46 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %18, i64 0, i32 1
  %19 = load i8*, i8** %host46, align 8, !tbaa !79
  %add.ptr47 = getelementptr inbounds i8, i8* %19, i64 -16
  %20 = bitcast i8* %add.ptr47 to %"struct.Halide::Runtime::Internal::CacheEntry"**
  store %"struct.Halide::Runtime::Internal::CacheEntry"* null, %"struct.Halide::Runtime::Internal::CacheEntry"** %20, align 8, !tbaa !32
  %indvars.iv.next274 = add nuw nsw i64 %indvars.iv273, 1
  %lftr.wideiv13 = trunc i64 %indvars.iv.next274 to i32
  %exitcond14 = icmp eq i32 %lftr.wideiv13, %tuple_count
  br i1 %exitcond14, label %cleanup147, label %for.body43

if.end53:                                         ; preds = %land.lhs.true16, %land.lhs.true13, %land.lhs.true11, %land.lhs.true, %while.body
  %next = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0254, i64 0, i32 0
  %entry6.0 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %next, align 8, !tbaa !32
  %cmp = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %entry6.0, null
  br i1 %cmp, label %for.cond57.preheader, label %while.body

for.cond.cleanup59:                               ; preds = %for.body60, %for.cond57.preheader
  %added_size.0.lcssa = phi i64 [ 0, %for.cond57.preheader ], [ %add, %for.body60 ]
  %21 = load i64, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  %add70 = add i64 %21, %added_size.0.lcssa
  store i64 %add70, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  tail call void @_ZN6Halide7Runtime8Internal11prune_cacheEv() #8
  %sub = add nsw i32 %tuple_count, -1
  %conv72 = sext i32 %sub to i64
  %mul = mul nsw i64 %conv72, 72
  %add73 = add i64 %mul, 200
  %call74 = tail call i8* @halide_malloc(i8* null, i64 %add73) #6
  %cmp75 = icmp eq i8* %call74, null
  br i1 %cmp75, label %if.then76, label %if.end92

for.body60:                                       ; preds = %for.body60, %for.cond57.preheader
  %indvars.iv269 = phi i64 [ %indvars.iv.next270, %for.body60 ], [ 0, %for.cond57.preheader ]
  %added_size.0242 = phi i64 [ %add, %for.body60 ], [ 0, %for.cond57.preheader ]
  %arrayidx64 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv269
  %22 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx64, align 8, !tbaa !32
  %call65 = tail call i64 @_ZN6Halide7Runtime8Internal11full_extentERK8buffer_t(%struct.buffer_t* dereferenceable(72) %22) #8
  %add = add i64 %call65, %added_size.0242
  %indvars.iv.next270 = add nuw nsw i64 %indvars.iv269, 1
  %lftr.wideiv11 = trunc i64 %indvars.iv.next270 to i32
  %exitcond12 = icmp eq i32 %lftr.wideiv11, %tuple_count
  br i1 %exitcond12, label %for.cond.cleanup59, label %for.body60

if.then76:                                        ; preds = %for.cond.cleanup59
  %23 = load i64, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  %sub77 = sub i64 %23, %added_size.0.lcssa
  store i64 %sub77, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  br i1 %cmp58241, label %for.body83, label %cleanup147

for.body83:                                       ; preds = %for.body83, %if.then76
  %indvars.iv = phi i64 [ %indvars.iv.next, %for.body83 ], [ 0, %if.then76 ]
  %arrayidx85 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv
  %24 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx85, align 8, !tbaa !32
  %host86 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %24, i64 0, i32 1
  %25 = load i8*, i8** %host86, align 8, !tbaa !79
  %add.ptr87 = getelementptr inbounds i8, i8* %25, i64 -16
  %26 = bitcast i8* %add.ptr87 to %"struct.Halide::Runtime::Internal::CacheEntry"**
  store %"struct.Halide::Runtime::Internal::CacheEntry"* null, %"struct.Halide::Runtime::Internal::CacheEntry"** %26, align 8, !tbaa !32
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %lftr.wideiv7 = trunc i64 %indvars.iv.next to i32
  %exitcond8 = icmp eq i32 %lftr.wideiv7, %tuple_count
  br i1 %exitcond8, label %cleanup147, label %for.body83

if.end92:                                         ; preds = %for.cond.cleanup59
  %27 = bitcast i8* %call74 to %"struct.Halide::Runtime::Internal::CacheEntry"*
  %conv95 = sext i32 %size to i64
  %call96 = tail call zeroext i1 @_ZN6Halide7Runtime8Internal10CacheEntry4initEPKhmjRK8buffer_tiPPS5_(%"struct.Halide::Runtime::Internal::CacheEntry"* %27, i8* %cache_key, i64 %conv95, i32 %3, %struct.buffer_t* dereferenceable(72) %computed_bounds, i32 %tuple_count, %struct.buffer_t** %tuple_buffers) #8
  br i1 %call96, label %if.end115, label %if.then99

if.then99:                                        ; preds = %if.end92
  %28 = load i64, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  %sub100 = sub i64 %28, %added_size.0.lcssa
  store i64 %sub100, i64* @_ZN6Halide7Runtime8Internal18current_cache_sizeE, align 8, !tbaa !58
  br i1 %cmp58241, label %for.body106, label %for.cond.cleanup105

for.cond.cleanup105:                              ; preds = %for.body106, %if.then99
  tail call void @halide_free(i8* %user_context, i8* nonnull %call74) #6
  br label %cleanup147

for.body106:                                      ; preds = %for.body106, %if.then99
  %indvars.iv265 = phi i64 [ %indvars.iv.next266, %for.body106 ], [ 0, %if.then99 ]
  %arrayidx108 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv265
  %29 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx108, align 8, !tbaa !32
  %host109 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %29, i64 0, i32 1
  %30 = load i8*, i8** %host109, align 8, !tbaa !79
  %add.ptr110 = getelementptr inbounds i8, i8* %30, i64 -16
  %31 = bitcast i8* %add.ptr110 to %"struct.Halide::Runtime::Internal::CacheEntry"**
  store %"struct.Halide::Runtime::Internal::CacheEntry"* null, %"struct.Halide::Runtime::Internal::CacheEntry"** %31, align 8, !tbaa !32
  %indvars.iv.next266 = add nuw nsw i64 %indvars.iv265, 1
  %lftr.wideiv9 = trunc i64 %indvars.iv.next266 to i32
  %exitcond10 = icmp eq i32 %lftr.wideiv9, %tuple_count
  br i1 %exitcond10, label %for.cond.cleanup105, label %for.body106

if.end115:                                        ; preds = %if.end92
  %32 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %arrayidx7 to i64*
  %33 = load i64, i64* %32, align 8, !tbaa !32
  %34 = bitcast i8* %call74 to i64*
  store i64 %33, i64* %34, align 8, !tbaa !74
  %35 = load i64, i64* bitcast (%"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE to i64*), align 8, !tbaa !32
  %less_recent = getelementptr inbounds i8, i8* %call74, i64 16
  %36 = bitcast i8* %less_recent to i64*
  store i64 %35, i64* %36, align 8, !tbaa !86
  %37 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE, align 8, !tbaa !32
  %cmp119 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %37, null
  br i1 %cmp119, label %if.end121, label %if.then120

if.then120:                                       ; preds = %if.end115
  %more_recent = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %37, i64 0, i32 1
  %38 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %more_recent to i8**
  store i8* %call74, i8** %38, align 8, !tbaa !85
  br label %if.end121

if.end121:                                        ; preds = %if.then120, %if.end115
  store i8* %call74, i8** bitcast (%"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal18most_recently_usedE to i8**), align 8, !tbaa !32
  %39 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal19least_recently_usedE, align 8, !tbaa !32
  %cmp122 = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %39, null
  br i1 %cmp122, label %if.then123, label %if.end124

if.then123:                                       ; preds = %if.end121
  store i8* %call74, i8** bitcast (%"struct.Halide::Runtime::Internal::CacheEntry"** @_ZN6Halide7Runtime8Internal19least_recently_usedE to i8**), align 8, !tbaa !32
  br label %if.end124

if.end124:                                        ; preds = %if.then123, %if.end121
  %40 = bitcast %"struct.Halide::Runtime::Internal::CacheEntry"** %arrayidx7 to i8**
  store i8* %call74, i8** %40, align 8, !tbaa !32
  %in_use_count = getelementptr inbounds i8, i8* %call74, i64 44
  %41 = bitcast i8* %in_use_count to i32*
  store i32 %tuple_count, i32* %41, align 4, !tbaa !83
  br i1 %cmp58241, label %for.body132, label %cleanup147

for.body132:                                      ; preds = %for.body132, %if.end124
  %indvars.iv261 = phi i64 [ %indvars.iv.next262, %for.body132 ], [ 0, %if.end124 ]
  %arrayidx134 = getelementptr inbounds %struct.buffer_t*, %struct.buffer_t** %tuple_buffers, i64 %indvars.iv261
  %42 = load %struct.buffer_t*, %struct.buffer_t** %arrayidx134, align 8, !tbaa !32
  %host135 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %42, i64 0, i32 1
  %43 = load i8*, i8** %host135, align 8, !tbaa !79
  %add.ptr136 = getelementptr inbounds i8, i8* %43, i64 -16
  %44 = bitcast i8* %add.ptr136 to i8**
  store i8* %call74, i8** %44, align 8, !tbaa !32
  %indvars.iv.next262 = add nuw nsw i64 %indvars.iv261, 1
  %lftr.wideiv = trunc i64 %indvars.iv.next262 to i32
  %exitcond = icmp eq i32 %lftr.wideiv, %tuple_count
  br i1 %exitcond, label %cleanup147, label %for.body132

cleanup147:                                       ; preds = %for.body132, %if.end124, %for.cond.cleanup105, %for.body83, %if.then76, %for.body43, %for.cond40.preheader
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  ret void
}

; Function Attrs: nounwind
define weak void @halide_memoization_cache_release(i8* %user_context, i8* %host) #0 {
entry:
  %add.ptr = getelementptr inbounds i8, i8* %host, i64 -16
  %0 = bitcast i8* %add.ptr to %"struct.Halide::Runtime::Internal::CacheEntry"**
  %1 = load %"struct.Halide::Runtime::Internal::CacheEntry"*, %"struct.Halide::Runtime::Internal::CacheEntry"** %0, align 8, !tbaa !32
  %cmp = icmp eq %"struct.Halide::Runtime::Internal::CacheEntry"* %1, null
  br i1 %cmp, label %if.then, label %if.else

if.then:                                          ; preds = %entry
  tail call void @halide_free(i8* %user_context, i8* %add.ptr) #6
  br label %if.end7

if.else:                                          ; preds = %entry
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  %in_use_count = getelementptr inbounds %"struct.Halide::Runtime::Internal::CacheEntry", %"struct.Halide::Runtime::Internal::CacheEntry"* %1, i64 0, i32 6
  %2 = load i32, i32* %in_use_count, align 4, !tbaa !83
  %cmp4 = icmp eq i32 %2, 0
  br i1 %cmp4, label %if.then5, label %if.end

if.then5:                                         ; preds = %if.else
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([112 x i8], [112 x i8]* @.str.8.71, i64 0, i64 0)) #6
  tail call void @abort() #6
  %.pre = load i32, i32* %in_use_count, align 4, !tbaa !83
  br label %if.end

if.end:                                           ; preds = %if.then5, %if.else
  %3 = phi i32 [ %2, %if.else ], [ %.pre, %if.then5 ]
  %dec = add i32 %3, -1
  store i32 %dec, i32* %in_use_count, align 4, !tbaa !83
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal16memoization_lockE) #6
  br label %if.end7

if.end7:                                          ; preds = %if.end, %if.then
  ret void
}

; Function Attrs: norecurse nounwind
define weak i8* @halide_string_to_string(i8* %dst, i8* %end, i8* %arg) #4 {
entry:
  %cmp = icmp ult i8* %dst, %end
  br i1 %cmp, label %while.body.preheader, label %return

while.body.preheader:                             ; preds = %entry
  %cmp118 = icmp eq i8* %dst, %end
  br i1 %cmp118, label %if.then2, label %if.end3

if.then2:                                         ; preds = %if.end6, %while.body.preheader
  %dst.addr.0.lcssa = phi i8* [ %dst, %while.body.preheader ], [ %end, %if.end6 ]
  %arrayidx = getelementptr inbounds i8, i8* %dst.addr.0.lcssa, i64 -1
  store i8 0, i8* %arrayidx, align 1, !tbaa !44
  br label %return

if.end3:                                          ; preds = %if.end6, %while.body.preheader
  %arg.addr.020 = phi i8* [ %incdec.ptr7, %if.end6 ], [ %arg, %while.body.preheader ]
  %dst.addr.019 = phi i8* [ %incdec.ptr, %if.end6 ], [ %dst, %while.body.preheader ]
  %0 = load i8, i8* %arg.addr.020, align 1, !tbaa !44
  store i8 %0, i8* %dst.addr.019, align 1, !tbaa !44
  %cmp4 = icmp eq i8 %0, 0
  br i1 %cmp4, label %return, label %if.end6

if.end6:                                          ; preds = %if.end3
  %incdec.ptr = getelementptr inbounds i8, i8* %dst.addr.019, i64 1
  %incdec.ptr7 = getelementptr inbounds i8, i8* %arg.addr.020, i64 1
  %cmp1 = icmp eq i8* %incdec.ptr, %end
  br i1 %cmp1, label %if.then2, label %if.end3

return:                                           ; preds = %if.end3, %if.then2, %entry
  %retval.0 = phi i8* [ %dst.addr.0.lcssa, %if.then2 ], [ %dst, %entry ], [ %dst.addr.019, %if.end3 ]
  ret i8* %retval.0
}

; Function Attrs: nounwind
define weak i8* @halide_uint64_to_string(i8* %dst, i8* %end, i64 %arg, i32 %min_digits) #0 {
entry:
  %buf = alloca [32 x i8], align 1
  %0 = getelementptr inbounds [32 x i8], [32 x i8]* %buf, i64 0, i64 0
  call void @llvm.lifetime.start(i64 32, i8* %0) #7
  %arrayidx = getelementptr inbounds [32 x i8], [32 x i8]* %buf, i64 0, i64 31
  store i8 0, i8* %arrayidx, align 1, !tbaa !44
  %add.ptr = getelementptr inbounds [32 x i8], [32 x i8]* %buf, i64 0, i64 30
  %cmp13 = icmp sgt i32 %min_digits, 0
  %tobool14 = icmp ne i64 %arg, 0
  %1 = or i1 %tobool14, %cmp13
  br i1 %1, label %for.body, label %for.cond.cleanup

for.cond.cleanup:                                 ; preds = %for.body, %entry
  %digits.0.lcssa = phi i8* [ %add.ptr, %entry ], [ %incdec.ptr, %for.body ]
  %incdec.ptr1 = getelementptr inbounds i8, i8* %digits.0.lcssa, i64 1
  %call = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* %incdec.ptr1) #8
  call void @llvm.lifetime.end(i64 32, i8* %0) #7
  ret i8* %call

for.body:                                         ; preds = %for.body, %entry
  %arg.addr.017 = phi i64 [ %div, %for.body ], [ %arg, %entry ]
  %digits.016 = phi i8* [ %incdec.ptr, %for.body ], [ %add.ptr, %entry ]
  %i.015 = phi i32 [ %inc, %for.body ], [ 0, %entry ]
  %div = udiv i64 %arg.addr.017, 10
  %2 = mul i64 %div, -10
  %sub = add i64 %arg.addr.017, 48
  %add = add i64 %sub, %2
  %conv = trunc i64 %add to i8
  store i8 %conv, i8* %digits.016, align 1, !tbaa !44
  %incdec.ptr = getelementptr inbounds i8, i8* %digits.016, i64 -1
  %inc = add nuw nsw i32 %i.015, 1
  %cmp = icmp slt i32 %inc, %min_digits
  %3 = icmp ugt i64 %arg.addr.017, 9
  %4 = or i1 %3, %cmp
  br i1 %4, label %for.body, label %for.cond.cleanup
}

; Function Attrs: nounwind
define weak i8* @halide_int64_to_string(i8* %dst, i8* %end, i64 %arg, i32 %min_digits) #0 {
entry:
  %cmp = icmp sgt i64 %arg, -1
  %cmp1 = icmp ugt i8* %dst, %end
  %or.cond = or i1 %cmp1, %cmp
  br i1 %or.cond, label %if.end, label %if.then

if.then:                                          ; preds = %entry
  %incdec.ptr = getelementptr inbounds i8, i8* %dst, i64 1
  store i8 45, i8* %dst, align 1, !tbaa !44
  %sub = sub nsw i64 0, %arg
  br label %if.end

if.end:                                           ; preds = %if.then, %entry
  %arg.addr.0 = phi i64 [ %sub, %if.then ], [ %arg, %entry ]
  %dst.addr.0 = phi i8* [ %incdec.ptr, %if.then ], [ %dst, %entry ]
  %call = tail call i8* @halide_uint64_to_string(i8* %dst.addr.0, i8* %end, i64 %arg.addr.0, i32 %min_digits) #8
  ret i8* %call
}

; Function Attrs: nounwind
define weak i8* @halide_double_to_string(i8* %dst, i8* %end, double %arg, i32 %scientific) #0 {
entry:
  %arg.addr = alloca double, align 8
  %bits = alloca i64, align 8
  %buf = alloca [512 x i8], align 1
  store double %arg, double* %arg.addr, align 8, !tbaa !62
  %0 = bitcast i64* %bits to i8*
  call void @llvm.lifetime.start(i64 8, i8* %0) #7
  store i64 0, i64* %bits, align 8, !tbaa !58
  %1 = bitcast double* %arg.addr to i8*
  %call = call i8* @memcpy(i8* %0, i8* %1, i64 8) #6
  %2 = load i64, i64* %bits, align 8, !tbaa !58
  %and = and i64 %2, 4503599627370495
  %shr = lshr i64 %2, 52
  %shr.tr = trunc i64 %shr to i32
  %conv = and i32 %shr.tr, 2047
  %shr2 = lshr i64 %2, 63
  %conv3 = trunc i64 %shr2 to i32
  %cmp = icmp eq i32 %conv, 2047
  br i1 %cmp, label %if.then, label %if.else15

if.then:                                          ; preds = %entry
  %tobool = icmp eq i64 %and, 0
  %tobool5 = icmp ne i32 %conv3, 0
  br i1 %tobool, label %if.else9, label %if.then4

if.then4:                                         ; preds = %if.then
  br i1 %tobool5, label %if.then6, label %if.else

if.then6:                                         ; preds = %if.then4
  %call7 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.80, i64 0, i64 0)) #8
  br label %cleanup148

if.else:                                          ; preds = %if.then4
  %call8 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1.81, i64 0, i64 0)) #8
  br label %cleanup148

if.else9:                                         ; preds = %if.then
  br i1 %tobool5, label %if.then11, label %if.else13

if.then11:                                        ; preds = %if.else9
  %call12 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.2.82, i64 0, i64 0)) #8
  br label %cleanup148

if.else13:                                        ; preds = %if.else9
  %call14 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.3.83, i64 0, i64 0)) #8
  br label %cleanup148

if.else15:                                        ; preds = %entry
  %cmp16 = icmp eq i32 %conv, 0
  %cmp17 = icmp eq i64 %and, 0
  %or.cond = and i1 %cmp17, %cmp16
  br i1 %or.cond, label %if.then18, label %if.end32

if.then18:                                        ; preds = %if.else15
  %tobool19 = icmp eq i32 %scientific, 0
  %tobool21 = icmp ne i32 %conv3, 0
  br i1 %tobool19, label %if.else26, label %if.then20

if.then20:                                        ; preds = %if.then18
  br i1 %tobool21, label %if.then22, label %if.else24

if.then22:                                        ; preds = %if.then20
  %call23 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([14 x i8], [14 x i8]* @.str.4.84, i64 0, i64 0)) #8
  br label %cleanup148

if.else24:                                        ; preds = %if.then20
  %call25 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([13 x i8], [13 x i8]* @.str.5.85, i64 0, i64 0)) #8
  br label %cleanup148

if.else26:                                        ; preds = %if.then18
  br i1 %tobool21, label %if.then28, label %if.else30

if.then28:                                        ; preds = %if.else26
  %call29 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([10 x i8], [10 x i8]* @.str.6.86, i64 0, i64 0)) #8
  br label %cleanup148

if.else30:                                        ; preds = %if.else26
  %call31 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str.7.87, i64 0, i64 0)) #8
  br label %cleanup148

if.end32:                                         ; preds = %if.else15
  %tobool33 = icmp eq i32 %conv3, 0
  br i1 %tobool33, label %if.end37, label %if.then34

if.then34:                                        ; preds = %if.end32
  %call35 = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8.88, i64 0, i64 0)) #8
  %sub36 = fsub double -0.000000e+00, %arg
  store double %sub36, double* %arg.addr, align 8, !tbaa !62
  br label %if.end37

if.end37:                                         ; preds = %if.then34, %if.end32
  %.pr = phi double [ %sub36, %if.then34 ], [ %arg, %if.end32 ]
  %dst.addr.0 = phi i8* [ %call35, %if.then34 ], [ %dst, %if.end32 ]
  %tobool38 = icmp eq i32 %scientific, 0
  br i1 %tobool38, label %if.else62, label %while.condthread-pre-split

while.condthread-pre-split:                       ; preds = %if.end37
  %cmp40261 = fcmp olt double %.pr, 1.000000e+00
  br i1 %cmp40261, label %while.body, label %while.cond41thread-pre-split

while.body:                                       ; preds = %while.body, %while.condthread-pre-split
  %exponent_base_10.0262 = phi i32 [ %dec, %while.body ], [ 0, %while.condthread-pre-split ]
  %3 = phi double [ %mul, %while.body ], [ %.pr, %while.condthread-pre-split ]
  %mul = fmul double %3, 1.000000e+01
  %dec = add nsw i32 %exponent_base_10.0262, -1
  %cmp40 = fcmp olt double %mul, 1.000000e+00
  br i1 %cmp40, label %while.body, label %while.cond.while.cond41thread-pre-split_crit_edge

while.cond.while.cond41thread-pre-split_crit_edge: ; preds = %while.body
  store double %mul, double* %arg.addr, align 8, !tbaa !62
  br label %while.cond41thread-pre-split

while.cond41thread-pre-split:                     ; preds = %while.cond.while.cond41thread-pre-split_crit_edge, %while.condthread-pre-split
  %.pr246 = phi double [ %mul, %while.cond.while.cond41thread-pre-split_crit_edge ], [ %.pr, %while.condthread-pre-split ]
  %exponent_base_10.0.lcssa = phi i32 [ %dec, %while.cond.while.cond41thread-pre-split_crit_edge ], [ 0, %while.condthread-pre-split ]
  %cmp42257 = fcmp ult double %.pr246, 1.000000e+01
  br i1 %cmp42257, label %while.end44, label %while.body43

while.body43:                                     ; preds = %while.body43, %while.cond41thread-pre-split
  %exponent_base_10.1258 = phi i32 [ %inc, %while.body43 ], [ %exponent_base_10.0.lcssa, %while.cond41thread-pre-split ]
  %4 = phi double [ %div, %while.body43 ], [ %.pr246, %while.cond41thread-pre-split ]
  %div = fdiv double %4, 1.000000e+01
  %inc = add nsw i32 %exponent_base_10.1258, 1
  %cmp42 = fcmp ult double %div, 1.000000e+01
  br i1 %cmp42, label %while.cond41.while.end44_crit_edge, label %while.body43

while.cond41.while.end44_crit_edge:               ; preds = %while.body43
  store double %div, double* %arg.addr, align 8, !tbaa !62
  br label %while.end44

while.end44:                                      ; preds = %while.cond41.while.end44_crit_edge, %while.cond41thread-pre-split
  %exponent_base_10.1.lcssa = phi i32 [ %inc, %while.cond41.while.end44_crit_edge ], [ %exponent_base_10.0.lcssa, %while.cond41thread-pre-split ]
  %.lcssa = phi double [ %div, %while.cond41.while.end44_crit_edge ], [ %.pr246, %while.cond41thread-pre-split ]
  %mul45 = fmul double %.lcssa, 1.000000e+06
  %add = fadd double %mul45, 5.000000e-01
  %conv46 = fptoui double %add to i64
  %div47 = udiv i64 %conv46, 1000000
  %5 = mul i64 %div47, -1000000
  %sub49 = add i64 %5, %conv46
  %call50 = call i8* @halide_int64_to_string(i8* %dst.addr.0, i8* %end, i64 %div47, i32 1) #8
  %call51 = call i8* @halide_string_to_string(i8* %call50, i8* %end, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.9.89, i64 0, i64 0)) #8
  %call52 = call i8* @halide_int64_to_string(i8* %call51, i8* %end, i64 %sub49, i32 6) #8
  %cmp53 = icmp sgt i32 %exponent_base_10.1.lcssa, -1
  br i1 %cmp53, label %if.then54, label %if.else56

if.then54:                                        ; preds = %while.end44
  %call55 = call i8* @halide_string_to_string(i8* %call52, i8* %end, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.10.90, i64 0, i64 0)) #8
  br label %if.end59

if.else56:                                        ; preds = %while.end44
  %call57 = call i8* @halide_string_to_string(i8* %call52, i8* %end, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.11.91, i64 0, i64 0)) #8
  %sub58 = sub nsw i32 0, %exponent_base_10.1.lcssa
  br label %if.end59

if.end59:                                         ; preds = %if.else56, %if.then54
  %exponent_base_10.2 = phi i32 [ %exponent_base_10.1.lcssa, %if.then54 ], [ %sub58, %if.else56 ]
  %dst.addr.1 = phi i8* [ %call55, %if.then54 ], [ %call57, %if.else56 ]
  %conv60 = sext i32 %exponent_base_10.2 to i64
  %call61 = call i8* @halide_int64_to_string(i8* %dst.addr.1, i8* %end, i64 %conv60, i32 2) #8
  br label %cleanup148

if.else62:                                        ; preds = %if.end37
  br i1 %cmp16, label %if.then64, label %if.end66

if.then64:                                        ; preds = %if.else62
  %call65 = call i8* @halide_double_to_string(i8* %dst.addr.0, i8* %end, double 0.000000e+00, i32 0) #8
  br label %cleanup148

if.end66:                                         ; preds = %if.else62
  %add68 = or i64 %and, 4503599627370496
  %sub70 = add nsw i32 %conv, -1075
  %cmp71 = icmp ult i32 %conv, 1075
  br i1 %cmp71, label %if.then72, label %if.end105

if.then72:                                        ; preds = %if.end66
  %cmp73 = icmp slt i32 %sub70, -52
  br i1 %cmp73, label %if.end84, label %if.else76

if.else76:                                        ; preds = %if.then72
  %sub77 = sub nsw i32 1075, %conv
  %sh_prom = zext i32 %sub77 to i64
  %shr78 = lshr i64 %add68, %sh_prom
  %shl81 = shl i64 %shr78, %sh_prom
  %sub82 = sub i64 %add68, %shl81
  br label %if.end84

if.end84:                                         ; preds = %if.else76, %if.then72
  %integer_part.0 = phi i64 [ %shr78, %if.else76 ], [ 0, %if.then72 ]
  %f.0.in = phi i64 [ %sub82, %if.else76 ], [ %add68, %if.then72 ]
  %f.0 = uitofp i64 %f.0.in to double
  %conv85244 = zext i32 %sub70 to i64
  %shl86 = shl i64 %conv85244, 52
  %add88 = add i64 %shl86, 4696837146684686336
  %6 = bitcast i64 %add88 to double
  %mul90 = fmul double %6, %f.0
  %add91 = fadd double %mul90, 5.000000e-01
  %conv92 = fptoui double %add91 to i64
  %conv93 = uitofp i64 %conv92 to double
  %and96 = and i64 %conv92, 1
  %notlhs = fcmp oeq double %conv93, %add91
  %notrhs = icmp ne i64 %and96, 0
  %not.or.cond245 = and i1 %notrhs, %notlhs
  %dec99 = sext i1 %not.or.cond245 to i64
  %fractional_part.0 = add i64 %dec99, %conv92
  %cmp101 = icmp eq i64 %fractional_part.0, 1000000
  %inc103 = zext i1 %cmp101 to i64
  %inc103.integer_part.0 = add i64 %inc103, %integer_part.0
  %.fractional_part.0 = select i1 %cmp101, i64 0, i64 %fractional_part.0
  br label %if.end105

if.end105:                                        ; preds = %if.end84, %if.end66
  %integer_part.2 = phi i64 [ %inc103.integer_part.0, %if.end84 ], [ %add68, %if.end66 ]
  %integer_exponent.0 = phi i32 [ 0, %if.end84 ], [ %sub70, %if.end66 ]
  %fractional_part.2 = phi i64 [ %.fractional_part.0, %if.end84 ], [ 0, %if.end66 ]
  %7 = getelementptr inbounds [512 x i8], [512 x i8]* %buf, i64 0, i64 0
  call void @llvm.lifetime.start(i64 512, i8* %7) #7
  %add.ptr = getelementptr inbounds [512 x i8], [512 x i8]* %buf, i64 0, i64 512
  %add.ptr106 = getelementptr inbounds [512 x i8], [512 x i8]* %buf, i64 0, i64 480
  %call109 = call i8* @halide_int64_to_string(i8* %add.ptr106, i8* %add.ptr, i64 %integer_part.2, i32 1) #8
  %cmp110252 = icmp sgt i32 %integer_exponent.0, 0
  br i1 %cmp110252, label %for.cond112.preheader, label %for.cond.cleanup

for.cond112.preheader:                            ; preds = %if.end138, %if.end105
  %i.0255 = phi i32 [ %inc140, %if.end138 ], [ 0, %if.end105 ]
  %int_part_ptr.0253 = phi i8* [ %int_part_ptr.1, %if.end138 ], [ %add.ptr106, %if.end105 ]
  %cmp114249 = icmp eq i8* %call109, %int_part_ptr.0253
  br i1 %cmp114249, label %if.end138, label %for.body116

for.cond.cleanup:                                 ; preds = %if.end138, %if.end105
  %int_part_ptr.0.lcssa = phi i8* [ %add.ptr106, %if.end105 ], [ %int_part_ptr.1, %if.end138 ]
  %call142 = call i8* @halide_string_to_string(i8* %dst.addr.0, i8* %end, i8* %int_part_ptr.0.lcssa) #8
  %call143 = call i8* @halide_string_to_string(i8* %call142, i8* %end, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.9.89, i64 0, i64 0)) #8
  %call144 = call i8* @halide_int64_to_string(i8* %call143, i8* %end, i64 %fractional_part.2, i32 6) #8
  call void @llvm.lifetime.end(i64 512, i8* %7) #7
  br label %cleanup148

for.cond.cleanup115:                              ; preds = %for.body116
  br i1 %cmp125, label %if.then136, label %if.end138

for.body116:                                      ; preds = %for.body116, %for.cond112.preheader
  %p.0251.pn = phi i8* [ %p.0251, %for.body116 ], [ %call109, %for.cond112.preheader ]
  %carry.0250 = phi i32 [ %carry.1, %for.body116 ], [ 0, %for.cond112.preheader ]
  %p.0251 = getelementptr inbounds i8, i8* %p.0251.pn, i64 -1
  %8 = load i8, i8* %p.0251, align 1, !tbaa !44
  %sub118 = add i8 %8, -48
  %conv120 = sext i8 %sub118 to i32
  %mul121 = shl nsw i32 %conv120, 1
  %add122 = or i32 %mul121, %carry.0250
  %9 = trunc i32 %add122 to i8
  %cmp125 = icmp sgt i8 %9, 9
  %sub128 = add nsw i32 %add122, 246
  %carry.1 = zext i1 %cmp125 to i32
  %new_digit.0.in = select i1 %cmp125, i32 %sub128, i32 %add122
  %add133 = add nsw i32 %new_digit.0.in, 48
  %conv134 = trunc i32 %add133 to i8
  store i8 %conv134, i8* %p.0251, align 1, !tbaa !44
  %cmp114 = icmp eq i8* %p.0251, %int_part_ptr.0253
  br i1 %cmp114, label %for.cond.cleanup115, label %for.body116

if.then136:                                       ; preds = %for.cond.cleanup115
  %incdec.ptr137 = getelementptr inbounds i8, i8* %int_part_ptr.0253, i64 -1
  store i8 49, i8* %incdec.ptr137, align 1, !tbaa !44
  br label %if.end138

if.end138:                                        ; preds = %if.then136, %for.cond.cleanup115, %for.cond112.preheader
  %int_part_ptr.1 = phi i8* [ %incdec.ptr137, %if.then136 ], [ %int_part_ptr.0253, %for.cond.cleanup115 ], [ %call109, %for.cond112.preheader ]
  %inc140 = add nuw nsw i32 %i.0255, 1
  %exitcond = icmp eq i32 %inc140, %integer_exponent.0
  br i1 %exitcond, label %for.cond.cleanup, label %for.cond112.preheader

cleanup148:                                       ; preds = %for.cond.cleanup, %if.then64, %if.end59, %if.else30, %if.then28, %if.else24, %if.then22, %if.else13, %if.then11, %if.else, %if.then6
  %retval.1 = phi i8* [ %call7, %if.then6 ], [ %call8, %if.else ], [ %call12, %if.then11 ], [ %call14, %if.else13 ], [ %call23, %if.then22 ], [ %call25, %if.else24 ], [ %call29, %if.then28 ], [ %call31, %if.else30 ], [ %call65, %if.then64 ], [ %call61, %if.end59 ], [ %call144, %for.cond.cleanup ]
  call void @llvm.lifetime.end(i64 8, i8* %0) #7
  ret i8* %retval.1
}

; Function Attrs: nounwind
declare i8* @memcpy(i8*, i8* nocapture readonly, i64) #0

; Function Attrs: nounwind
define weak i8* @halide_pointer_to_string(i8* %dst, i8* %end, i8* %arg) #0 {
entry:
  %buf = alloca [20 x i8], align 1
  %0 = getelementptr inbounds [20 x i8], [20 x i8]* %buf, i64 0, i64 0
  call void @llvm.lifetime.start(i64 20, i8* %0) #7
  call void @llvm.memset.p0i8.i64(i8* %0, i8 0, i64 20, i32 1, i1 false)
  %add.ptr = getelementptr inbounds [20 x i8], [20 x i8]* %buf, i64 0, i64 18
  %1 = ptrtoint i8* %arg to i64
  br label %for.body

for.body:                                         ; preds = %for.body, %entry
  %i.018 = phi i32 [ 0, %entry ], [ %inc, %for.body ]
  %bits.017 = phi i64 [ %1, %entry ], [ %shr, %for.body ]
  %buf_ptr.016 = phi i8* [ %add.ptr, %entry ], [ %incdec.ptr, %for.body ]
  %and = and i64 %bits.017, 15
  %arrayidx = getelementptr inbounds [17 x i8], [17 x i8]* @.str.12.94, i64 0, i64 %and
  %2 = load i8, i8* %arrayidx, align 1, !tbaa !44
  %incdec.ptr = getelementptr inbounds i8, i8* %buf_ptr.016, i64 -1
  store i8 %2, i8* %buf_ptr.016, align 1, !tbaa !44
  %shr = lshr i64 %bits.017, 4
  %tobool = icmp ne i64 %shr, 0
  %inc = add nuw nsw i32 %i.018, 1
  %cmp = icmp slt i32 %inc, 16
  %or.cond = and i1 %cmp, %tobool
  br i1 %or.cond, label %for.body, label %cleanup

cleanup:                                          ; preds = %for.body
  %incdec.ptr1 = getelementptr inbounds i8, i8* %buf_ptr.016, i64 -2
  store i8 120, i8* %incdec.ptr, align 1, !tbaa !44
  store i8 48, i8* %incdec.ptr1, align 1, !tbaa !44
  %call = call i8* @halide_string_to_string(i8* %dst, i8* %end, i8* %incdec.ptr1) #8
  call void @llvm.lifetime.end(i64 20, i8* %0) #7
  ret i8* %call
}

; Function Attrs: argmemonly nounwind
declare void @llvm.memset.p0i8.i64(i8* nocapture, i8, i64, i32, i1) #2

; Function Attrs: nounwind
define linkonce i32 @_ZN6Halide7Runtime8Internal27copy_to_host_already_lockedEPvP8buffer_t(i8* %user_context, %struct.buffer_t* %buf) #0 {
entry:
  %dev_dirty = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 7
  %0 = load i8, i8* %dev_dirty, align 1, !tbaa !87, !range !8
  %tobool = icmp eq i8 %0, 0
  br i1 %tobool, label %if.end27, label %if.then

if.then:                                          ; preds = %entry
  %dev = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 0
  %1 = load i64, i64* %dev, align 8, !tbaa !88
  %call = tail call %struct.halide_device_interface* @halide_get_device_interface(i64 %1) #8
  %host_dirty = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 6
  %2 = load i8, i8* %host_dirty, align 4, !tbaa !89, !range !8
  %tobool4 = icmp eq i8 %2, 0
  br i1 %tobool4, label %if.else, label %if.end27

if.else:                                          ; preds = %if.then
  %cmp = icmp eq %struct.halide_device_interface* %call, null
  br i1 %cmp, label %if.end27, label %if.else15

if.else15:                                        ; preds = %if.else
  %copy_to_host = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %call, i64 0, i32 6
  %3 = load i32 (i8*, %struct.buffer_t*)*, i32 (i8*, %struct.buffer_t*)** %copy_to_host, align 8, !tbaa !90
  %call16 = tail call i32 %3(i8* %user_context, %struct.buffer_t* nonnull %buf) #6
  %cmp17 = icmp eq i32 %call16, 0
  br i1 %cmp17, label %if.then18, label %if.end27

if.then18:                                        ; preds = %if.else15
  store i8 0, i8* %dev_dirty, align 1, !tbaa !87
  br label %if.end27

if.end27:                                         ; preds = %if.then18, %if.else15, %if.else, %if.then, %entry
  %result.1 = phi i32 [ 0, %entry ], [ 0, %if.then18 ], [ -14, %if.then ], [ -19, %if.else ], [ -14, %if.else15 ]
  ret i32 %result.1
}

; Function Attrs: norecurse nounwind
define weak %struct.halide_device_interface* @halide_get_device_interface(i64 %dev_field) #4 {
entry:
  %cmp = icmp eq i64 %dev_field, 0
  br i1 %cmp, label %return, label %if.end

if.end:                                           ; preds = %entry
  %0 = inttoptr i64 %dev_field to %"struct.Halide::Runtime::Internal::device_handle_wrapper"*
  %interface = getelementptr inbounds %"struct.Halide::Runtime::Internal::device_handle_wrapper", %"struct.Halide::Runtime::Internal::device_handle_wrapper"* %0, i64 0, i32 1
  %1 = load %struct.halide_device_interface*, %struct.halide_device_interface** %interface, align 8, !tbaa !92
  br label %return

return:                                           ; preds = %if.end, %entry
  %retval.0 = phi %struct.halide_device_interface* [ %1, %if.end ], [ null, %entry ]
  ret %struct.halide_device_interface* %retval.0
}

; Function Attrs: nounwind
define weak i64 @halide_new_device_wrapper(i64 %handle, %struct.halide_device_interface* %device_interface) #0 {
entry:
  %call = tail call i8* @malloc(i64 16) #6
  %cmp = icmp eq i8* %call, null
  br i1 %cmp, label %cleanup, label %if.end

if.end:                                           ; preds = %entry
  %device_handle = bitcast i8* %call to i64*
  store i64 %handle, i64* %device_handle, align 8, !tbaa !94
  %interface = getelementptr inbounds i8, i8* %call, i64 8
  %0 = bitcast i8* %interface to %struct.halide_device_interface**
  store %struct.halide_device_interface* %device_interface, %struct.halide_device_interface** %0, align 8, !tbaa !92
  %use_module = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %device_interface, i64 0, i32 0
  %1 = load void ()*, void ()** %use_module, align 8, !tbaa !95
  tail call void %1() #6
  %2 = ptrtoint i8* %call to i64
  br label %cleanup

cleanup:                                          ; preds = %if.end, %entry
  %retval.0 = phi i64 [ %2, %if.end ], [ 0, %entry ]
  ret i64 %retval.0
}

; Function Attrs: nounwind
define weak void @halide_delete_device_wrapper(i64 %wrapper) #0 {
entry:
  %0 = inttoptr i64 %wrapper to %"struct.Halide::Runtime::Internal::device_handle_wrapper"*
  %interface = getelementptr inbounds %"struct.Halide::Runtime::Internal::device_handle_wrapper", %"struct.Halide::Runtime::Internal::device_handle_wrapper"* %0, i64 0, i32 1
  %1 = load %struct.halide_device_interface*, %struct.halide_device_interface** %interface, align 8, !tbaa !92
  %release_module = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %1, i64 0, i32 1
  %2 = load void ()*, void ()** %release_module, align 8, !tbaa !96
  tail call void %2() #6
  %3 = inttoptr i64 %wrapper to i8*
  tail call void @free(i8* %3) #6
  ret void
}

; Function Attrs: norecurse nounwind
define weak i64 @halide_get_device_handle(i64 %dev_field) #4 {
entry:
  %cmp = icmp eq i64 %dev_field, 0
  br i1 %cmp, label %cleanup, label %if.end

if.end:                                           ; preds = %entry
  %0 = inttoptr i64 %dev_field to %"struct.Halide::Runtime::Internal::device_handle_wrapper"*
  %device_handle = getelementptr inbounds %"struct.Halide::Runtime::Internal::device_handle_wrapper", %"struct.Halide::Runtime::Internal::device_handle_wrapper"* %0, i64 0, i32 0
  %1 = load i64, i64* %device_handle, align 8, !tbaa !94
  br label %cleanup

cleanup:                                          ; preds = %if.end, %entry
  %retval.0 = phi i64 [ %1, %if.end ], [ 0, %entry ]
  ret i64 %retval.0
}

; Function Attrs: nounwind
define weak void @halide_device_release(i8* %user_context, %struct.halide_device_interface* %device_interface) #0 {
entry:
  %device_release = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %device_interface, i64 0, i32 5
  %0 = load i32 (i8*)*, i32 (i8*)** %device_release, align 8, !tbaa !97
  %call = tail call i32 %0(i8* %user_context) #6
  ret void
}

; Function Attrs: nounwind
define weak i32 @halide_copy_to_host(i8* %user_context, %struct.buffer_t* %buf) #0 {
entry:
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal17device_copy_mutexE) #6
  %call = tail call i32 @_ZN6Halide7Runtime8Internal27copy_to_host_already_lockedEPvP8buffer_t(i8* %user_context, %struct.buffer_t* %buf) #8
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal17device_copy_mutexE) #6
  ret i32 %call
}

; Function Attrs: nounwind
define weak i32 @halide_copy_to_device(i8* %user_context, %struct.buffer_t* %buf, %struct.halide_device_interface* %device_interface) #0 {
entry:
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal17device_copy_mutexE) #6
  %dev = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 0
  %host_dirty = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 6
  %dev_dirty = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 7
  %0 = load i64, i64* %dev, align 8, !tbaa !88
  %call = tail call %struct.halide_device_interface* @halide_get_device_interface(i64 %0) #8
  %cmp = icmp eq %struct.halide_device_interface* %device_interface, null
  br i1 %cmp, label %if.then, label %if.end24

if.then:                                          ; preds = %entry
  %cmp18 = icmp eq %struct.halide_device_interface* %call, null
  br i1 %cmp18, label %cleanup, label %if.end24

if.end24:                                         ; preds = %if.then, %entry
  %device_interface.addr.0 = phi %struct.halide_device_interface* [ %device_interface, %entry ], [ %call, %if.then ]
  %1 = load i64, i64* %dev, align 8, !tbaa !88
  %tobool26 = icmp eq i64 %1, 0
  %cmp27 = icmp eq %struct.halide_device_interface* %call, %device_interface.addr.0
  %or.cond = or i1 %cmp27, %tobool26
  br i1 %or.cond, label %if.end60, label %if.then28

if.then28:                                        ; preds = %if.end24
  %cmp33 = icmp eq %struct.halide_device_interface* %call, null
  br i1 %cmp33, label %if.end50, label %land.lhs.true34

land.lhs.true34:                                  ; preds = %if.then28
  %2 = load i8, i8* %dev_dirty, align 1, !tbaa !87, !range !8
  %tobool36 = icmp eq i8 %2, 0
  br i1 %tobool36, label %if.end50, label %if.then37

if.then37:                                        ; preds = %land.lhs.true34
  %3 = load i8, i8* %host_dirty, align 4, !tbaa !89, !range !8
  %tobool39 = icmp eq i8 %3, 0
  br i1 %tobool39, label %if.end41, label %if.then40

if.then40:                                        ; preds = %if.then37
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([116 x i8], [116 x i8]* @.str.22.95, i64 0, i64 0)) #6
  tail call void @abort() #6
  br label %if.end41

if.end41:                                         ; preds = %if.then40, %if.then37
  %call42 = tail call i32 @_ZN6Halide7Runtime8Internal27copy_to_host_already_lockedEPvP8buffer_t(i8* %user_context, %struct.buffer_t* nonnull %buf) #8
  %cmp43 = icmp eq i32 %call42, 0
  br i1 %cmp43, label %if.end50, label %cleanup

if.end50:                                         ; preds = %if.end41, %land.lhs.true34, %if.then28
  %call51 = tail call i32 @halide_device_free(i8* %user_context, %struct.buffer_t* nonnull %buf) #8
  %cmp52 = icmp eq i32 %call51, 0
  br i1 %cmp52, label %if.end58, label %cleanup

if.end58:                                         ; preds = %if.end50
  store i8 1, i8* %host_dirty, align 4, !tbaa !89
  %.pr = load i64, i64* %dev, align 8, !tbaa !88
  br label %if.end60

if.end60:                                         ; preds = %if.end58, %if.end24
  %4 = phi i64 [ %1, %if.end24 ], [ %.pr, %if.end58 ]
  %cmp62 = icmp eq i64 %4, 0
  br i1 %cmp62, label %if.then63, label %if.end72

if.then63:                                        ; preds = %if.end60
  %call64 = tail call i32 @halide_device_malloc(i8* %user_context, %struct.buffer_t* nonnull %buf, %struct.halide_device_interface* nonnull %device_interface.addr.0) #8
  %cmp65 = icmp eq i32 %call64, 0
  br i1 %cmp65, label %if.end72, label %cleanup

if.end72:                                         ; preds = %if.then63, %if.end60
  %5 = bitcast i8* %host_dirty to i16*
  %6 = load i16, i16* %5, align 4
  %7 = trunc i16 %6 to i8
  %tobool74 = icmp ne i8 %7, 0
  %tobool81 = icmp ult i16 %6, 256
  %or.cond157 = and i1 %tobool81, %tobool74
  br i1 %or.cond157, label %if.else, label %cleanup

if.else:                                          ; preds = %if.end72
  %copy_to_device = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %device_interface.addr.0, i64 0, i32 7
  %8 = load i32 (i8*, %struct.buffer_t*)*, i32 (i8*, %struct.buffer_t*)** %copy_to_device, align 8, !tbaa !98
  %call87 = tail call i32 %8(i8* %user_context, %struct.buffer_t* nonnull %buf) #6
  %cmp88 = icmp eq i32 %call87, 0
  br i1 %cmp88, label %if.then89, label %cleanup

if.then89:                                        ; preds = %if.else
  store i8 0, i8* %host_dirty, align 4, !tbaa !89
  br label %cleanup

cleanup:                                          ; preds = %if.then89, %if.else, %if.end72, %if.then63, %if.end50, %if.end41, %if.then
  %retval.0 = phi i32 [ 0, %if.end72 ], [ 0, %if.then89 ], [ -19, %if.then ], [ %call42, %if.end41 ], [ %call51, %if.end50 ], [ %call64, %if.then63 ], [ -15, %if.else ]
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull @_ZN6Halide7Runtime8Internal17device_copy_mutexE) #6
  ret i32 %retval.0
}

; Function Attrs: nounwind
define weak i32 @halide_device_free(i8* %user_context, %struct.buffer_t* %buf) #0 {
entry:
  %tobool = icmp eq %struct.buffer_t* %buf, null
  br i1 %tobool, label %if.end, label %if.then8

if.end:                                           ; preds = %entry
  %call = tail call %struct.halide_device_interface* @halide_get_device_interface(i64 0) #8
  br label %if.end23

if.then8:                                         ; preds = %entry
  %dev = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 0
  %0 = load i64, i64* %dev, align 8, !tbaa !88
  %call42 = tail call %struct.halide_device_interface* @halide_get_device_interface(i64 %0) #8
  %call10 = tail call %struct.halide_device_interface* @halide_get_device_interface(i64 %0) #8
  %cmp11 = icmp eq %struct.halide_device_interface* %call10, null
  br i1 %cmp11, label %if.end23, label %if.then12

if.then12:                                        ; preds = %if.then8
  %use_module = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %call10, i64 0, i32 0
  %1 = load void ()*, void ()** %use_module, align 8, !tbaa !95
  tail call void %1() #6
  %device_free = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %call10, i64 0, i32 3
  %2 = load i32 (i8*, %struct.buffer_t*)*, i32 (i8*, %struct.buffer_t*)** %device_free, align 8, !tbaa !99
  %call14 = tail call i32 %2(i8* %user_context, %struct.buffer_t* nonnull %buf) #6
  %release_module = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %call10, i64 0, i32 1
  %3 = load void ()*, void ()** %release_module, align 8, !tbaa !96
  tail call void %3() #6
  %4 = load i64, i64* %dev, align 8, !tbaa !88
  %cmp16 = icmp eq i64 %4, 0
  br i1 %cmp16, label %cleanup22, label %if.then17

if.then17:                                        ; preds = %if.then12
  tail call void @halide_print(i8* %user_context, i8* getelementptr inbounds ([113 x i8], [113 x i8]* @.str.37.98, i64 0, i64 0)) #6
  tail call void @abort() #6
  br label %cleanup22

cleanup22:                                        ; preds = %if.then17, %if.then12
  %tobool19 = icmp eq i32 %call14, 0
  %. = select i1 %tobool19, i32 0, i32 -18
  br label %cleanup24

if.end23:                                         ; preds = %if.then8, %if.end
  %dev_dirty = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 7
  store i8 0, i8* %dev_dirty, align 1, !tbaa !87
  br label %cleanup24

cleanup24:                                        ; preds = %if.end23, %cleanup22
  %retval.2 = phi i32 [ 0, %if.end23 ], [ %., %cleanup22 ]
  ret i32 %retval.2
}

; Function Attrs: nounwind
define weak i32 @halide_device_malloc(i8* %user_context, %struct.buffer_t* %buf, %struct.halide_device_interface* %device_interface) #0 {
entry:
  %dev = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 0
  %0 = load i64, i64* %dev, align 8, !tbaa !88
  %call = tail call %struct.halide_device_interface* @halide_get_device_interface(i64 %0) #8
  %cmp = icmp eq %struct.halide_device_interface* %call, null
  %cmp17 = icmp eq %struct.halide_device_interface* %call, %device_interface
  %or.cond = or i1 %cmp, %cmp17
  br i1 %or.cond, label %if.end, label %cleanup24

if.end:                                           ; preds = %entry
  %use_module = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %device_interface, i64 0, i32 0
  %1 = load void ()*, void ()** %use_module, align 8, !tbaa !95
  tail call void %1() #6
  %device_malloc = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %device_interface, i64 0, i32 2
  %2 = load i32 (i8*, %struct.buffer_t*)*, i32 (i8*, %struct.buffer_t*)** %device_malloc, align 8, !tbaa !100
  %call21 = tail call i32 %2(i8* %user_context, %struct.buffer_t* nonnull %buf) #6
  %release_module = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %device_interface, i64 0, i32 1
  %3 = load void ()*, void ()** %release_module, align 8, !tbaa !96
  tail call void %3() #6
  %tobool22 = icmp eq i32 %call21, 0
  %. = select i1 %tobool22, i32 0, i32 -16
  br label %cleanup24

cleanup24:                                        ; preds = %if.end, %entry
  %retval.1 = phi i32 [ %., %if.end ], [ -16, %entry ]
  ret i32 %retval.1
}

; Function Attrs: nounwind
define weak i32 @halide_device_sync(i8* %user_context, %struct.buffer_t* %buf) #0 {
entry:
  %tobool = icmp eq %struct.buffer_t* %buf, null
  br i1 %tobool, label %cleanup7, label %if.end

if.end:                                           ; preds = %entry
  %dev = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %buf, i64 0, i32 0
  %0 = load i64, i64* %dev, align 8, !tbaa !88
  %call = tail call %struct.halide_device_interface* @halide_get_device_interface(i64 %0) #8
  %cmp = icmp eq %struct.halide_device_interface* %call, null
  br i1 %cmp, label %cleanup7, label %if.end2

if.end2:                                          ; preds = %if.end
  %device_sync = getelementptr inbounds %struct.halide_device_interface, %struct.halide_device_interface* %call, i64 0, i32 4
  %1 = load i32 (i8*, %struct.buffer_t*)*, i32 (i8*, %struct.buffer_t*)** %device_sync, align 8, !tbaa !101
  %call4 = tail call i32 %1(i8* %user_context, %struct.buffer_t* nonnull %buf) #6
  %tobool5 = icmp eq i32 %call4, 0
  %. = select i1 %tobool5, i32 0, i32 -17
  br label %cleanup7

cleanup7:                                         ; preds = %if.end2, %if.end, %entry
  %retval.1 = phi i32 [ %., %if.end2 ], [ -19, %if.end ], [ -19, %entry ]
  ret i32 %retval.1
}

; Function Attrs: nounwind
define weak void @halide_device_free_as_destructor(i8* %user_context, i8* %obj) #0 {
entry:
  %0 = bitcast i8* %obj to %struct.buffer_t*
  %call = tail call i32 @halide_device_free(i8* %user_context, %struct.buffer_t* %0) #8
  ret void
}

; Function Attrs: nounwind
define weak void @halide_runtime_internal_register_metadata(%struct._halide_runtime_internal_registered_filter_t* %info) #0 {
entry:
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::list_head_t", %"struct.Halide::Runtime::Internal::list_head_t"* @_ZN6Halide7Runtime8Internal9list_headE, i64 0, i32 0)) #6
  %0 = load i64, i64* bitcast (%struct._halide_runtime_internal_registered_filter_t** getelementptr inbounds (%"struct.Halide::Runtime::Internal::list_head_t", %"struct.Halide::Runtime::Internal::list_head_t"* @_ZN6Halide7Runtime8Internal9list_headE, i64 0, i32 1) to i64*), align 8, !tbaa !102
  %1 = bitcast %struct._halide_runtime_internal_registered_filter_t* %info to i64*
  store i64 %0, i64* %1, align 8, !tbaa !105
  store %struct._halide_runtime_internal_registered_filter_t* %info, %struct._halide_runtime_internal_registered_filter_t** getelementptr inbounds (%"struct.Halide::Runtime::Internal::list_head_t", %"struct.Halide::Runtime::Internal::list_head_t"* @_ZN6Halide7Runtime8Internal9list_headE, i64 0, i32 1), align 8, !tbaa !102
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::list_head_t", %"struct.Halide::Runtime::Internal::list_head_t"* @_ZN6Halide7Runtime8Internal9list_headE, i64 0, i32 0)) #6
  ret void
}

; Function Attrs: nounwind
define weak i32 @halide_enumerate_registered_filters(i8* %user_context, i8* %enumerate_context, i32 (i8*, %struct.halide_filter_metadata_t*, i32 (i8**)*)* %func) #0 {
entry:
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::list_head_t", %"struct.Halide::Runtime::Internal::list_head_t"* @_ZN6Halide7Runtime8Internal9list_headE, i64 0, i32 0)) #6
  %f.015 = load %struct._halide_runtime_internal_registered_filter_t*, %struct._halide_runtime_internal_registered_filter_t** getelementptr inbounds (%"struct.Halide::Runtime::Internal::list_head_t", %"struct.Halide::Runtime::Internal::list_head_t"* @_ZN6Halide7Runtime8Internal9list_headE, i64 0, i32 1), align 8, !tbaa !32
  %cmp16 = icmp eq %struct._halide_runtime_internal_registered_filter_t* %f.015, null
  br i1 %cmp16, label %cleanup2, label %for.body

for.body:                                         ; preds = %for.inc, %entry
  %f.017 = phi %struct._halide_runtime_internal_registered_filter_t* [ %f.0, %for.inc ], [ %f.015, %entry ]
  %metadata = getelementptr inbounds %struct._halide_runtime_internal_registered_filter_t, %struct._halide_runtime_internal_registered_filter_t* %f.017, i64 0, i32 1
  %0 = load %struct.halide_filter_metadata_t*, %struct.halide_filter_metadata_t** %metadata, align 8, !tbaa !107
  %argv_func = getelementptr inbounds %struct._halide_runtime_internal_registered_filter_t, %struct._halide_runtime_internal_registered_filter_t* %f.017, i64 0, i32 2
  %1 = load i32 (i8**)*, i32 (i8**)** %argv_func, align 8, !tbaa !108
  %call = tail call i32 %func(i8* %enumerate_context, %struct.halide_filter_metadata_t* %0, i32 (i8**)* %1) #6
  %cmp1 = icmp eq i32 %call, 0
  br i1 %cmp1, label %for.inc, label %cleanup2

for.inc:                                          ; preds = %for.body
  %2 = bitcast %struct._halide_runtime_internal_registered_filter_t* %f.017 to %struct._halide_runtime_internal_registered_filter_t**
  %f.0 = load %struct._halide_runtime_internal_registered_filter_t*, %struct._halide_runtime_internal_registered_filter_t** %2, align 8, !tbaa !32
  %cmp = icmp eq %struct._halide_runtime_internal_registered_filter_t* %f.0, null
  br i1 %cmp, label %cleanup2, label %for.body

cleanup2:                                         ; preds = %for.inc, %for.body, %entry
  %cleanup.dest.slot.1 = phi i32 [ 0, %entry ], [ %call, %for.body ], [ 0, %for.inc ]
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* getelementptr inbounds (%"struct.Halide::Runtime::Internal::list_head_t", %"struct.Halide::Runtime::Internal::list_head_t"* @_ZN6Halide7Runtime8Internal9list_headE, i64 0, i32 0)) #6
  ret i32 %cleanup.dest.slot.1
}

; Function Attrs: nounwind
define weak void @halide_profiler_shutdown() #0 {
entry:
  %call = tail call %struct.halide_profiler_state* @halide_profiler_get_state() #8
  %started = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 5
  %0 = load i8, i8* %started, align 4, !tbaa !109, !range !8
  %tobool = icmp eq i8 %0, 0
  br i1 %tobool, label %cleanup, label %if.end

if.end:                                           ; preds = %entry
  %current_func = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 4
  store i32 -2, i32* %current_func, align 8, !tbaa !111
  br label %do.body

do.body:                                          ; preds = %do.body, %if.end
  fence seq_cst
  %1 = load i8, i8* %started, align 4, !tbaa !109, !range !8
  %tobool2 = icmp eq i8 %1, 0
  br i1 %tobool2, label %do.end, label %do.body

do.end:                                           ; preds = %do.body
  store i32 -1, i32* %current_func, align 8, !tbaa !111
  tail call void @halide_profiler_report_unlocked(i8* null, %struct.halide_profiler_state* nonnull %call) #8
  br label %cleanup

cleanup:                                          ; preds = %do.end, %entry
  ret void
}

; Function Attrs: norecurse nounwind
define weak %struct.halide_profiler_state* @halide_profiler_get_state() #4 {
entry:
  ret %struct.halide_profiler_state* @_ZZ25halide_profiler_get_stateE1s
}

; Function Attrs: nounwind
define weak void @halide_profiler_report_unlocked(i8* %user_context, %struct.halide_profiler_state* %s) #0 {
entry:
  %line_buf = alloca [160 x i8], align 1
  %0 = getelementptr inbounds [160 x i8], [160 x i8]* %line_buf, i64 0, i64 0
  call void @llvm.lifetime.start(i64 160, i8* %0) #7
  %1 = ptrtoint [160 x i8]* %line_buf to i64
  %add.ptr.i = getelementptr inbounds [160 x i8], [160 x i8]* %line_buf, i64 0, i64 159
  store i8 0, i8* %add.ptr.i, align 1, !tbaa !44
  %pipelines = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %s, i64 0, i32 1
  %p.0231 = load %struct.halide_profiler_pipeline_stats*, %struct.halide_profiler_pipeline_stats** %pipelines, align 8, !tbaa !32
  %tobool232 = icmp eq %struct.halide_profiler_pipeline_stats* %p.0231, null
  br i1 %tobool232, label %_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi2ELy160EED2Ev.exit, label %for.body

_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi2ELy160EED2Ev.exit: ; preds = %cleanup59, %entry
  call void @llvm.lifetime.end(i64 160, i8* %0) #7
  ret void

for.body:                                         ; preds = %cleanup59, %entry
  %p.0233 = phi %struct.halide_profiler_pipeline_stats* [ %p.0, %cleanup59 ], [ %p.0231, %entry ]
  %time = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.0233, i64 0, i32 0
  %2 = load i64, i64* %time, align 8, !tbaa !112
  %conv = uitofp i64 %2 to float
  %div = fdiv float %conv, 1.000000e+06
  %runs = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.0233, i64 0, i32 6
  %3 = load i32, i32* %runs, align 8, !tbaa !114
  %tobool1 = icmp eq i32 %3, 0
  br i1 %tobool1, label %cleanup59, label %if.end

if.end:                                           ; preds = %for.body
  store i8 0, i8* %0, align 1, !tbaa !44
  %name = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.0233, i64 0, i32 1
  %4 = load i8*, i8** %name, align 8, !tbaa !115
  %call.i107 = call i8* @halide_string_to_string(i8* %0, i8* %add.ptr.i, i8* %4) #6
  %call.i110 = call i8* @halide_string_to_string(i8* %call.i107, i8* %add.ptr.i, i8* getelementptr inbounds ([15 x i8], [15 x i8]* @.str.100, i64 0, i64 0)) #6
  %conv.i113 = fpext float %div to double
  %call.i114 = call i8* @halide_double_to_string(i8* %call.i110, i8* %add.ptr.i, double %conv.i113, i32 0) #6
  %call.i117 = call i8* @halide_string_to_string(i8* %call.i114, i8* %add.ptr.i, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.1.101, i64 0, i64 0)) #6
  %call.i120 = call i8* @halide_string_to_string(i8* %call.i117, i8* %add.ptr.i, i8* getelementptr inbounds ([12 x i8], [12 x i8]* @.str.2.102, i64 0, i64 0)) #6
  %samples = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.0233, i64 0, i32 7
  %5 = load i32, i32* %samples, align 4, !tbaa !116
  %conv.i123 = sext i32 %5 to i64
  %call.i124 = call i8* @halide_int64_to_string(i8* %call.i120, i8* %add.ptr.i, i64 %conv.i123, i32 1) #6
  %call.i127 = call i8* @halide_string_to_string(i8* %call.i124, i8* %add.ptr.i, i8* getelementptr inbounds ([9 x i8], [9 x i8]* @.str.3.103, i64 0, i64 0)) #6
  %6 = load i32, i32* %runs, align 8, !tbaa !114
  %conv.i130 = sext i32 %6 to i64
  %call.i131 = call i8* @halide_int64_to_string(i8* %call.i127, i8* %add.ptr.i, i64 %conv.i130, i32 1) #6
  %call.i134 = call i8* @halide_string_to_string(i8* %call.i131, i8* %add.ptr.i, i8* getelementptr inbounds ([17 x i8], [17 x i8]* @.str.4.104, i64 0, i64 0)) #6
  %7 = load i32, i32* %runs, align 8, !tbaa !114
  %conv12 = sitofp i32 %7 to float
  %div13 = fdiv float %div, %conv12
  %conv.i137 = fpext float %div13 to double
  %call.i138 = call i8* @halide_double_to_string(i8* %call.i134, i8* %add.ptr.i, double %conv.i137, i32 0) #6
  %call.i141 = call i8* @halide_string_to_string(i8* %call.i138, i8* %add.ptr.i, i8* getelementptr inbounds ([5 x i8], [5 x i8]* @.str.5.105, i64 0, i64 0)) #6
  call void @halide_print(i8* %user_context, i8* %0) #6
  %8 = load i64, i64* %time, align 8, !tbaa !112
  %tobool18 = icmp eq i64 %8, 0
  br i1 %tobool18, label %cleanup59, label %for.cond20.preheader

for.cond20.preheader:                             ; preds = %if.end
  %num_funcs = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.0233, i64 0, i32 4
  %9 = load i32, i32* %num_funcs, align 8, !tbaa !117
  %cmp229 = icmp sgt i32 %9, 0
  br i1 %cmp229, label %for.body22.lr.ph, label %cleanup59

for.body22.lr.ph:                                 ; preds = %for.cond20.preheader
  %funcs = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.0233, i64 0, i32 2
  br label %for.body22

for.body22:                                       ; preds = %cleanup, %for.body22.lr.ph
  %indvars.iv = phi i64 [ 0, %for.body22.lr.ph ], [ %indvars.iv.next, %cleanup ]
  store i8 0, i8* %0, align 1, !tbaa !44
  %10 = load %struct.halide_profiler_func_stats*, %struct.halide_profiler_func_stats** %funcs, align 8, !tbaa !118
  %add.ptr = getelementptr inbounds %struct.halide_profiler_func_stats, %struct.halide_profiler_func_stats* %10, i64 %indvars.iv
  %cmp23 = icmp eq i64 %indvars.iv, 0
  br i1 %cmp23, label %land.lhs.true, label %if.end27

land.lhs.true:                                    ; preds = %for.body22
  %time24 = getelementptr inbounds %struct.halide_profiler_func_stats, %struct.halide_profiler_func_stats* %add.ptr, i64 0, i32 0
  %11 = load i64, i64* %time24, align 8, !tbaa !119
  %cmp25 = icmp eq i64 %11, 0
  br i1 %cmp25, label %cleanup, label %if.end27

if.end27:                                         ; preds = %land.lhs.true, %for.body22
  %call.i152 = call i8* @halide_string_to_string(i8* nonnull %0, i8* nonnull %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.6.106, i64 0, i64 0)) #6
  %name29 = getelementptr inbounds %struct.halide_profiler_func_stats, %struct.halide_profiler_func_stats* %10, i64 %indvars.iv, i32 1
  %12 = load i8*, i8** %name29, align 8, !tbaa !121
  %call.i155 = call i8* @halide_string_to_string(i8* %call.i152, i8* nonnull %add.ptr.i, i8* %12) #6
  %call.i158 = call i8* @halide_string_to_string(i8* %call.i155, i8* nonnull %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.7.107, i64 0, i64 0)) #6
  %13 = ptrtoint i8* %call.i158 to i64
  %sub.ptr.sub.i222 = sub i64 %13, %1
  %cmp33223 = icmp ult i64 %sub.ptr.sub.i222, 25
  br i1 %cmp33223, label %while.body, label %while.end

while.body:                                       ; preds = %while.body, %if.end27
  %call.i158.sink224 = phi i8* [ %call.i167, %while.body ], [ %call.i158, %if.end27 ]
  %call.i167 = call i8* @halide_string_to_string(i8* %call.i158.sink224, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8.108, i64 0, i64 0)) #6
  %14 = ptrtoint i8* %call.i167 to i64
  %sub.ptr.sub.i = sub i64 %14, %1
  %cmp33 = icmp ult i64 %sub.ptr.sub.i, 25
  br i1 %cmp33, label %while.body, label %while.end

while.end:                                        ; preds = %while.body, %if.end27
  %call.i158.sink.lcssa = phi i8* [ %call.i158, %if.end27 ], [ %call.i167, %while.body ]
  %time35 = getelementptr inbounds %struct.halide_profiler_func_stats, %struct.halide_profiler_func_stats* %add.ptr, i64 0, i32 0
  %15 = load i64, i64* %time35, align 8, !tbaa !119
  %conv36 = uitofp i64 %15 to float
  %16 = load i32, i32* %runs, align 8, !tbaa !114
  %conv38 = sitofp i32 %16 to float
  %mul = fmul float %conv38, 1.000000e+06
  %div39 = fdiv float %conv36, %mul
  %conv.i170 = fpext float %div39 to double
  %call.i171 = call i8* @halide_double_to_string(i8* %call.i158.sink.lcssa, i8* %add.ptr.i, double %conv.i170, i32 0) #6
  %call.i164 = call i8* @halide_string_to_string(i8* %call.i171, i8* %add.ptr.i, i8* getelementptr inbounds ([3 x i8], [3 x i8]* @.str.9.109, i64 0, i64 0)) #6
  %17 = ptrtoint i8* %call.i164 to i64
  %sub.ptr.sub.i161225 = sub i64 %17, %1
  %cmp44226 = icmp ult i64 %sub.ptr.sub.i161225, 40
  br i1 %cmp44226, label %while.body45, label %while.end47

while.body45:                                     ; preds = %while.body45, %while.end
  %call.i164.sink227 = phi i8* [ %call.i149, %while.body45 ], [ %call.i164, %while.end ]
  %call.i149 = call i8* @halide_string_to_string(i8* %call.i164.sink227, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.8.108, i64 0, i64 0)) #6
  %18 = ptrtoint i8* %call.i149 to i64
  %sub.ptr.sub.i161 = sub i64 %18, %1
  %cmp44 = icmp ult i64 %sub.ptr.sub.i161, 40
  br i1 %cmp44, label %while.body45, label %while.end47

while.end47:                                      ; preds = %while.body45, %while.end
  %call.i164.sink.lcssa = phi i8* [ %call.i164, %while.end ], [ %call.i149, %while.body45 ]
  %19 = load i64, i64* %time35, align 8, !tbaa !119
  %20 = load i64, i64* %time, align 8, !tbaa !112
  %div50 = udiv i64 %20, 100
  %div51 = udiv i64 %19, %div50
  %call.i144 = call i8* @halide_string_to_string(i8* %call.i164.sink.lcssa, i8* %add.ptr.i, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @.str.10.110, i64 0, i64 0)) #6
  %sext = shl i64 %div51, 32
  %conv.i = ashr exact i64 %sext, 32
  %call.i104 = call i8* @halide_int64_to_string(i8* %call.i144, i8* %add.ptr.i, i64 %conv.i, i32 1) #6
  %call.i = call i8* @halide_string_to_string(i8* %call.i104, i8* %add.ptr.i, i8* getelementptr inbounds ([4 x i8], [4 x i8]* @.str.11.111, i64 0, i64 0)) #6
  call void @halide_print(i8* %user_context, i8* %0) #6
  br label %cleanup

cleanup:                                          ; preds = %while.end47, %land.lhs.true
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %21 = load i32, i32* %num_funcs, align 8, !tbaa !117
  %22 = sext i32 %21 to i64
  %cmp = icmp slt i64 %indvars.iv.next, %22
  br i1 %cmp, label %for.body22, label %cleanup59

cleanup59:                                        ; preds = %cleanup, %for.cond20.preheader, %if.end, %for.body
  %next = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.0233, i64 0, i32 3
  %23 = bitcast i8** %next to %struct.halide_profiler_pipeline_stats**
  %p.0 = load %struct.halide_profiler_pipeline_stats*, %struct.halide_profiler_pipeline_stats** %23, align 8, !tbaa !32
  %tobool = icmp eq %struct.halide_profiler_pipeline_stats* %p.0, null
  br i1 %tobool, label %_ZN6Halide7Runtime8Internal12_GLOBAL__N_17PrinterILi2ELy160EED2Ev.exit, label %for.body
}

; Function Attrs: nounwind
define linkonce %struct.halide_profiler_pipeline_stats* @_ZN6Halide7Runtime8Internal23find_or_create_pipelineEPKciPKy(i8* %pipeline_name, i32 %num_funcs, i64* %func_names) #0 {
entry:
  %call = tail call %struct.halide_profiler_state* @halide_profiler_get_state() #8
  %pipelines = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 1
  %p.074 = load %struct.halide_profiler_pipeline_stats*, %struct.halide_profiler_pipeline_stats** %pipelines, align 8, !tbaa !32
  %tobool75 = icmp eq %struct.halide_profiler_pipeline_stats* %p.074, null
  br i1 %tobool75, label %for.end.critedge, label %for.body

for.body:                                         ; preds = %for.inc, %entry
  %p.076 = phi %struct.halide_profiler_pipeline_stats* [ %p.0, %for.inc ], [ %p.074, %entry ]
  %name = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.076, i64 0, i32 1
  %0 = load i8*, i8** %name, align 8, !tbaa !115
  %cmp = icmp eq i8* %0, %pipeline_name
  br i1 %cmp, label %land.lhs.true, label %for.inc

land.lhs.true:                                    ; preds = %for.body
  %num_funcs1 = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.076, i64 0, i32 4
  %1 = load i32, i32* %num_funcs1, align 8, !tbaa !117
  %cmp2 = icmp eq i32 %1, %num_funcs
  br i1 %cmp2, label %cleanup35, label %for.inc

for.inc:                                          ; preds = %land.lhs.true, %for.body
  %next = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.076, i64 0, i32 3
  %2 = bitcast i8** %next to %struct.halide_profiler_pipeline_stats**
  %p.0 = load %struct.halide_profiler_pipeline_stats*, %struct.halide_profiler_pipeline_stats** %2, align 8, !tbaa !32
  %tobool = icmp eq %struct.halide_profiler_pipeline_stats* %p.0, null
  br i1 %tobool, label %for.end.critedge, label %for.body

for.end.critedge:                                 ; preds = %for.inc, %entry
  %call4 = tail call i8* @malloc(i64 48) #6
  %3 = bitcast i8* %call4 to %struct.halide_profiler_pipeline_stats*
  %tobool5 = icmp eq i8* %call4, null
  br i1 %tobool5, label %cleanup35, label %if.end7

if.end7:                                          ; preds = %for.end.critedge
  %4 = bitcast %struct.halide_profiler_pipeline_stats** %pipelines to i64*
  %5 = load i64, i64* %4, align 8, !tbaa !122
  %next9 = getelementptr inbounds i8, i8* %call4, i64 24
  %6 = bitcast i8* %next9 to i64*
  store i64 %5, i64* %6, align 8, !tbaa !123
  %name10 = getelementptr inbounds i8, i8* %call4, i64 8
  %7 = bitcast i8* %name10 to i8**
  store i8* %pipeline_name, i8** %7, align 8, !tbaa !115
  %first_free_id = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 3
  %8 = load i32, i32* %first_free_id, align 4, !tbaa !124
  %first_func_id = getelementptr inbounds i8, i8* %call4, i64 36
  %9 = bitcast i8* %first_func_id to i32*
  store i32 %8, i32* %9, align 4, !tbaa !125
  %num_funcs11 = getelementptr inbounds i8, i8* %call4, i64 32
  %10 = bitcast i8* %num_funcs11 to i32*
  store i32 %num_funcs, i32* %10, align 8, !tbaa !117
  %runs = getelementptr inbounds i8, i8* %call4, i64 40
  %11 = bitcast i8* %runs to i32*
  store i32 0, i32* %11, align 8, !tbaa !114
  %time = bitcast i8* %call4 to i64*
  store i64 0, i64* %time, align 8, !tbaa !112
  %samples = getelementptr inbounds i8, i8* %call4, i64 44
  %12 = bitcast i8* %samples to i32*
  store i32 0, i32* %12, align 4, !tbaa !116
  %conv = sext i32 %num_funcs to i64
  %mul = shl nsw i64 %conv, 4
  %call12 = tail call i8* @malloc(i64 %mul) #6
  %funcs = getelementptr inbounds i8, i8* %call4, i64 16
  %13 = bitcast i8* %funcs to i8**
  store i8* %call12, i8** %13, align 8, !tbaa !118
  %tobool14 = icmp eq i8* %call12, null
  %14 = bitcast i8* %call12 to %struct.halide_profiler_func_stats*
  br i1 %tobool14, label %if.then15, label %for.cond17.preheader

for.cond17.preheader:                             ; preds = %if.end7
  %cmp1872 = icmp sgt i32 %num_funcs, 0
  br i1 %cmp1872, label %for.body20, label %for.cond.cleanup19

if.then15:                                        ; preds = %if.end7
  tail call void @free(i8* nonnull %call4) #6
  br label %cleanup35

for.cond.cleanup19:                               ; preds = %for.body20, %for.cond17.preheader
  %15 = load i32, i32* %first_free_id, align 4, !tbaa !124
  %add = add nsw i32 %15, %num_funcs
  store i32 %add, i32* %first_free_id, align 4, !tbaa !124
  %16 = bitcast %struct.halide_profiler_pipeline_stats** %pipelines to i8**
  store i8* %call4, i8** %16, align 8, !tbaa !122
  br label %cleanup35

for.body20:                                       ; preds = %for.body20, %for.cond17.preheader
  %indvars.iv = phi i64 [ %indvars.iv.next, %for.body20 ], [ 0, %for.cond17.preheader ]
  %time22 = getelementptr inbounds %struct.halide_profiler_func_stats, %struct.halide_profiler_func_stats* %14, i64 %indvars.iv, i32 0
  store i64 0, i64* %time22, align 8, !tbaa !119
  %arrayidx24 = getelementptr inbounds i64, i64* %func_names, i64 %indvars.iv
  %17 = load i64, i64* %arrayidx24, align 8, !tbaa !58
  %name28 = getelementptr inbounds %struct.halide_profiler_func_stats, %struct.halide_profiler_func_stats* %14, i64 %indvars.iv, i32 1
  %18 = bitcast i8** %name28 to i64*
  store i64 %17, i64* %18, align 8, !tbaa !121
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %lftr.wideiv3 = trunc i64 %indvars.iv.next to i32
  %exitcond4 = icmp eq i32 %lftr.wideiv3, %num_funcs
  br i1 %exitcond4, label %for.cond.cleanup19, label %for.body20

cleanup35:                                        ; preds = %for.cond.cleanup19, %if.then15, %for.end.critedge, %land.lhs.true
  %retval.2 = phi %struct.halide_profiler_pipeline_stats* [ %3, %for.cond.cleanup19 ], [ null, %if.then15 ], [ null, %for.end.critedge ], [ %p.076, %land.lhs.true ]
  ret %struct.halide_profiler_pipeline_stats* %retval.2
}

; Function Attrs: norecurse nounwind
define linkonce void @_ZN6Halide7Runtime8Internal9bill_funcEP21halide_profiler_stateiy(%struct.halide_profiler_state* %s, i32 %func_id, i64 %time) #4 {
entry:
  %pipelines = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %s, i64 0, i32 1
  %p.040 = load %struct.halide_profiler_pipeline_stats*, %struct.halide_profiler_pipeline_stats** %pipelines, align 8, !tbaa !32
  %tobool41 = icmp eq %struct.halide_profiler_pipeline_stats* %p.040, null
  %0 = ptrtoint %struct.halide_profiler_pipeline_stats* %p.040 to i64
  br i1 %tobool41, label %cleanup16, label %for.body

for.body:                                         ; preds = %if.end14, %entry
  %p.043 = phi %struct.halide_profiler_pipeline_stats* [ %p.0, %if.end14 ], [ %p.040, %entry ]
  %p_prev.042 = phi %struct.halide_profiler_pipeline_stats* [ %p.043, %if.end14 ], [ null, %entry ]
  %first_func_id = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.043, i64 0, i32 5
  %1 = load i32, i32* %first_func_id, align 4, !tbaa !125
  %cmp = icmp sgt i32 %1, %func_id
  br i1 %cmp, label %if.end14, label %land.lhs.true

land.lhs.true:                                    ; preds = %for.body
  %num_funcs = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.043, i64 0, i32 4
  %2 = bitcast i32* %num_funcs to i64*
  %3 = load i64, i64* %2, align 8
  %4 = trunc i64 %3 to i32
  %add = add nsw i32 %4, %1
  %cmp2 = icmp sgt i32 %add, %func_id
  br i1 %cmp2, label %if.then, label %if.end14

if.then:                                          ; preds = %land.lhs.true
  %5 = lshr i64 %3, 32
  %6 = trunc i64 %5 to i32
  %tobool3 = icmp eq %struct.halide_profiler_pipeline_stats* %p_prev.042, null
  br i1 %tobool3, label %if.end, label %if.then4

if.then4:                                         ; preds = %if.then
  %next = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.043, i64 0, i32 3
  %7 = bitcast i8** %next to i64*
  %8 = load i64, i64* %7, align 8, !tbaa !123
  %next5 = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p_prev.042, i64 0, i32 3
  %9 = bitcast i8** %next5 to i64*
  store i64 %8, i64* %9, align 8, !tbaa !123
  store i64 %0, i64* %7, align 8, !tbaa !123
  store %struct.halide_profiler_pipeline_stats* %p.043, %struct.halide_profiler_pipeline_stats** %pipelines, align 8, !tbaa !122
  br label %if.end

if.end:                                           ; preds = %if.then4, %if.then
  %sub = sub nsw i32 %func_id, %6
  %idxprom = sext i32 %sub to i64
  %funcs = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.043, i64 0, i32 2
  %10 = load %struct.halide_profiler_func_stats*, %struct.halide_profiler_func_stats** %funcs, align 8, !tbaa !118
  %time10 = getelementptr inbounds %struct.halide_profiler_func_stats, %struct.halide_profiler_func_stats* %10, i64 %idxprom, i32 0
  %11 = load i64, i64* %time10, align 8, !tbaa !119
  %add11 = add i64 %11, %time
  store i64 %add11, i64* %time10, align 8, !tbaa !119
  %time12 = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.043, i64 0, i32 0
  %12 = load i64, i64* %time12, align 8, !tbaa !112
  %add13 = add i64 %12, %time
  store i64 %add13, i64* %time12, align 8, !tbaa !112
  %samples = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.043, i64 0, i32 7
  %13 = load i32, i32* %samples, align 4, !tbaa !116
  %inc = add nsw i32 %13, 1
  store i32 %inc, i32* %samples, align 4, !tbaa !116
  br label %cleanup16

if.end14:                                         ; preds = %land.lhs.true, %for.body
  %next15 = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %p.043, i64 0, i32 3
  %14 = bitcast i8** %next15 to %struct.halide_profiler_pipeline_stats**
  %p.0 = load %struct.halide_profiler_pipeline_stats*, %struct.halide_profiler_pipeline_stats** %14, align 8, !tbaa !32
  %tobool = icmp eq %struct.halide_profiler_pipeline_stats* %p.0, null
  br i1 %tobool, label %cleanup16, label %for.body

cleanup16:                                        ; preds = %if.end14, %if.end, %entry
  ret void
}

; Function Attrs: nounwind
define linkonce void @_ZN6Halide7Runtime8Internal24sampling_profiler_threadEPv(i8*) #0 {
entry:
  %call = tail call %struct.halide_profiler_state* @halide_profiler_get_state() #8
  %lock = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 0
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* %lock) #6
  %current_func = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 4
  %1 = load i32, i32* %current_func, align 8, !tbaa !111
  %cmp36 = icmp eq i32 %1, -2
  br i1 %cmp36, label %while.end13, label %while.body

while.body:                                       ; preds = %entry
  %sleep_time = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 2
  %call1 = tail call i64 @halide_current_time_ns(i8* null) #6
  %call432 = tail call i64 @halide_current_time_ns(i8* null) #6
  %2 = load i32, i32* %current_func, align 8, !tbaa !111
  %cmp633 = icmp eq i32 %2, -2
  br i1 %cmp633, label %while.end13, label %if.else

if.else:                                          ; preds = %cleanup.thread, %while.body
  %3 = phi i32 [ %5, %cleanup.thread ], [ %2, %while.body ]
  %call435 = phi i64 [ %call4, %cleanup.thread ], [ %call432, %while.body ]
  %t.034 = phi i64 [ %call435, %cleanup.thread ], [ %call1, %while.body ]
  %cmp7 = icmp sgt i32 %3, -1
  br i1 %cmp7, label %if.then8, label %cleanup.thread

if.then8:                                         ; preds = %if.else
  %sub = sub i64 %call435, %t.034
  tail call void @_ZN6Halide7Runtime8Internal9bill_funcEP21halide_profiler_stateiy(%struct.halide_profiler_state* nonnull %call, i32 %3, i64 %sub) #8
  br label %cleanup.thread

cleanup.thread:                                   ; preds = %if.then8, %if.else
  %4 = load i32, i32* %sleep_time, align 8, !tbaa !126
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull %lock) #6
  tail call void @halide_sleep_ms(i8* null, i32 %4) #6
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* nonnull %lock) #6
  %call4 = tail call i64 @halide_current_time_ns(i8* null) #6
  %5 = load i32, i32* %current_func, align 8, !tbaa !111
  %cmp6 = icmp eq i32 %5, -2
  br i1 %cmp6, label %while.end13, label %if.else

while.end13:                                      ; preds = %cleanup.thread, %while.body, %entry
  %started = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 5
  store i8 0, i8* %started, align 4, !tbaa !109
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull %lock) #6
  ret void
}

; Function Attrs: nounwind
define weak i32 @halide_profiler_pipeline_start(i8* %user_context, i8* %pipeline_name, i32 %num_funcs, i64* %func_names) #0 {
entry:
  %call = tail call %struct.halide_profiler_state* @halide_profiler_get_state() #8
  %lock1 = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 0
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* %lock1) #6
  %started = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 5
  %0 = load i8, i8* %started, align 4, !tbaa !109, !range !8
  %tobool = icmp eq i8 %0, 0
  br i1 %tobool, label %if.then, label %if.end

if.then:                                          ; preds = %entry
  %call2 = tail call i32 @halide_start_clock(i8* %user_context) #6
  tail call void @halide_spawn_thread(i8* %user_context, void (i8*)* nonnull @_ZN6Halide7Runtime8Internal24sampling_profiler_threadEPv, i8* null) #6
  store i8 1, i8* %started, align 4, !tbaa !109
  br label %if.end

if.end:                                           ; preds = %if.then, %entry
  %call4 = tail call %struct.halide_profiler_pipeline_stats* @_ZN6Halide7Runtime8Internal23find_or_create_pipelineEPKciPKy(i8* %pipeline_name, i32 %num_funcs, i64* %func_names) #8
  %tobool5 = icmp eq %struct.halide_profiler_pipeline_stats* %call4, null
  br i1 %tobool5, label %if.then6, label %if.end8

if.then6:                                         ; preds = %if.end
  %call7 = tail call i32 @halide_error_out_of_memory(i8* %user_context) #6
  br label %cleanup

if.end8:                                          ; preds = %if.end
  %runs = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %call4, i64 0, i32 6
  %1 = load i32, i32* %runs, align 8, !tbaa !114
  %inc = add nsw i32 %1, 1
  store i32 %inc, i32* %runs, align 8, !tbaa !114
  %first_func_id = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %call4, i64 0, i32 5
  %2 = load i32, i32* %first_func_id, align 4, !tbaa !125
  br label %cleanup

cleanup:                                          ; preds = %if.end8, %if.then6
  %retval.0 = phi i32 [ %2, %if.end8 ], [ %call7, %if.then6 ]
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* %lock1) #6
  ret i32 %retval.0
}

; Function Attrs: nounwind
define weak void @halide_profiler_report(i8* %user_context) #0 {
entry:
  %call = tail call %struct.halide_profiler_state* @halide_profiler_get_state() #8
  %lock1 = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 0
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* %lock1) #6
  tail call void @halide_profiler_report_unlocked(i8* %user_context, %struct.halide_profiler_state* %call) #8
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* %lock1) #6
  ret void
}

; Function Attrs: nounwind
define weak void @halide_profiler_reset() #0 {
entry:
  %call = tail call %struct.halide_profiler_state* @halide_profiler_get_state() #8
  %lock1 = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 0
  tail call void @halide_mutex_lock(%struct.pthread_mutex_t* %lock1) #6
  %pipelines = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 1
  %0 = load %struct.halide_profiler_pipeline_stats*, %struct.halide_profiler_pipeline_stats** %pipelines, align 8, !tbaa !122
  %tobool13 = icmp eq %struct.halide_profiler_pipeline_stats* %0, null
  br i1 %tobool13, label %while.end, label %while.body.lr.ph

while.body.lr.ph:                                 ; preds = %entry
  %1 = bitcast %struct.halide_profiler_pipeline_stats** %pipelines to i64*
  br label %while.body

while.body:                                       ; preds = %while.body, %while.body.lr.ph
  %2 = phi %struct.halide_profiler_pipeline_stats* [ %0, %while.body.lr.ph ], [ %8, %while.body ]
  %next = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %2, i64 0, i32 3
  %3 = bitcast i8** %next to i64*
  %4 = load i64, i64* %3, align 8, !tbaa !123
  store i64 %4, i64* %1, align 8, !tbaa !122
  %funcs = getelementptr inbounds %struct.halide_profiler_pipeline_stats, %struct.halide_profiler_pipeline_stats* %2, i64 0, i32 2
  %5 = bitcast %struct.halide_profiler_func_stats** %funcs to i8**
  %6 = load i8*, i8** %5, align 8, !tbaa !118
  tail call void @free(i8* %6) #6
  %7 = bitcast %struct.halide_profiler_pipeline_stats* %2 to i8*
  tail call void @free(i8* %7) #6
  %8 = load %struct.halide_profiler_pipeline_stats*, %struct.halide_profiler_pipeline_stats** %pipelines, align 8, !tbaa !122
  %tobool = icmp eq %struct.halide_profiler_pipeline_stats* %8, null
  br i1 %tobool, label %while.end, label %while.body

while.end:                                        ; preds = %while.body, %entry
  %first_free_id = getelementptr inbounds %struct.halide_profiler_state, %struct.halide_profiler_state* %call, i64 0, i32 3
  store i32 0, i32* %first_free_id, align 4, !tbaa !124
  tail call void @halide_mutex_unlock(%struct.pthread_mutex_t* nonnull %lock1) #6
  ret void
}

; Function Attrs: norecurse nounwind
define weak void @halide_profiler_pipeline_end(i8* %user_context, i8* %state) #4 {
entry:
  %current_func = getelementptr inbounds i8, i8* %state, i64 80
  %0 = bitcast i8* %current_func to i32*
  store i32 -1, i32* %0, align 8, !tbaa !111
  ret void
}

; Function Attrs: nounwind
define weak float @halide_float16_bits_to_float(i16 zeroext %bits) #0 {
entry:
  %conv = zext i16 %bits to i32
  %and = shl nuw i32 %conv, 16
  %shl = and i32 %and, -2147483648
  %and2 = and i32 %conv, 1023
  %and4 = lshr i32 %conv, 10
  %shr54 = and i32 %and4, 31
  %cmp = icmp eq i32 %shr54, 0
  %cmp5 = icmp ne i32 %and2, 0
  %or.cond = and i1 %cmp5, %cmp
  br i1 %or.cond, label %if.then, label %if.else

if.then:                                          ; preds = %entry
  %0 = tail call i32 @llvm.ctlz.i32(i32 %and2, i1 true)
  %sub6 = xor i32 %0, 31
  %shl7 = shl i32 1, %sub6
  %neg = xor i32 %shl7, -1
  %and8 = and i32 %and2, %neg
  %sub9 = sub nsw i32 23, %sub6
  %shl10 = shl i32 %and8, %sub9
  %add11 = shl nuw nsw i32 %sub6, 23
  %shl12 = add nuw nsw i32 %add11, 864026624
  %or = or i32 %shl12, %shl
  %or13 = or i32 %or, %shl10
  br label %if.end28

if.else:                                          ; preds = %entry
  %shl14 = shl nuw nsw i32 %and2, 13
  br i1 %cmp, label %if.end23, label %if.else18

if.else18:                                        ; preds = %if.else
  %cmp19 = icmp eq i32 %shr54, 31
  br i1 %cmp19, label %if.end23, label %if.else21

if.else21:                                        ; preds = %if.else18
  %add22 = shl nuw nsw i32 %shr54, 23
  %phitmp = add nuw nsw i32 %add22, 939524096
  br label %if.end23

if.end23:                                         ; preds = %if.else21, %if.else18, %if.else
  %reEncodedExponent15.0 = phi i32 [ %phitmp, %if.else21 ], [ 0, %if.else ], [ 2139095040, %if.else18 ]
  %or25 = or i32 %shl14, %shl
  %or26 = or i32 %or25, %reEncodedExponent15.0
  br label %if.end28

if.end28:                                         ; preds = %if.end23, %if.then
  %result.sroa.0.0 = phi i32 [ %or13, %if.then ], [ %or26, %if.end23 ]
  %1 = bitcast i32 %result.sroa.0.0 to float
  ret float %1
}

; Function Attrs: nounwind readnone
declare i32 @llvm.ctlz.i32(i32, i1) #5

; Function Attrs: nounwind
define weak double @halide_float16_bits_to_double(i16 zeroext %bits) #0 {
entry:
  %call = tail call float @halide_float16_bits_to_float(i16 zeroext %bits) #8
  %conv = fpext float %call to double
  ret double %conv
}

attributes #0 = { nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #2 = { argmemonly nounwind }
attributes #3 = { nounwind readonly "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #4 = { norecurse nounwind "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #5 = { nounwind readnone }
attributes #6 = { nobuiltin nounwind }
attributes #7 = { nounwind }
attributes #8 = { nobuiltin }

!llvm.ident = !{!0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0, !0}
!llvm.module.flags = !{!1, !2, !3}

!0 = !{!"clang version 3.9.0 (trunk 261047) (llvm/trunk 261044)"}
!1 = !{i32 2, !"halide_use_soft_float_abi", i32 0}
!2 = !{i32 2, !"halide_mcpu", !"corei7-avx"}
!3 = !{i32 2, !"halide_mattrs", !"+fma,+f16c"}
!4 = !{!5, !5, i64 0}
!5 = !{!"bool", !6, i64 0}
!6 = !{!"omnipotent char", !7, i64 0}
!7 = !{!"Simple C++ TBAA"}
!8 = !{i8 0, i8 2}
!9 = !{!10, !11, i64 0}
!10 = !{!"_ZTS8timespec", !11, i64 0, !11, i64 8}
!11 = !{!"long", !6, i64 0}
!12 = !{!10, !11, i64 8}
!13 = !{!14, !17, i64 72}
!14 = !{!"_ZTSN6Halide7Runtime8Internal19halide_work_queue_tE", !15, i64 0, !16, i64 64, !17, i64 72, !17, i64 76, !18, i64 80, !18, i64 128, !18, i64 176, !6, i64 224, !5, i64 736}
!15 = !{!"_ZTS15pthread_mutex_t", !6, i64 0}
!16 = !{!"any pointer", !6, i64 0}
!17 = !{!"int", !6, i64 0}
!18 = !{!"_ZTS14pthread_cond_t", !6, i64 0}
!19 = !{!14, !5, i64 736}
!20 = !{!14, !16, i64 64}
!21 = !{!17, !17, i64 0}
!22 = !{!23, !16, i64 8}
!23 = !{!"_ZTSN6Halide7Runtime8Internal4workE", !16, i64 0, !16, i64 8, !16, i64 16, !17, i64 24, !17, i64 28, !16, i64 32, !17, i64 40, !17, i64 44}
!24 = !{!23, !16, i64 16}
!25 = !{!23, !17, i64 24}
!26 = !{!23, !17, i64 28}
!27 = !{!23, !16, i64 32}
!28 = !{!23, !17, i64 44}
!29 = !{!23, !17, i64 40}
!30 = !{!14, !17, i64 76}
!31 = !{!23, !16, i64 0}
!32 = !{!16, !16, i64 0}
!33 = !{!11, !11, i64 0}
!34 = !{!35, !16, i64 0}
!35 = !{!"_ZTSN6Halide7Runtime8Internal17spawn_thread_taskE", !16, i64 0, !16, i64 8}
!36 = !{!35, !16, i64 8}
!37 = !{!38, !17, i64 24}
!38 = !{!"_ZTS18halide_trace_event", !16, i64 0, !39, i64 8, !17, i64 12, !17, i64 16, !17, i64 20, !17, i64 24, !17, i64 28, !16, i64 32, !17, i64 40, !16, i64 44}
!39 = !{!"_ZTS23halide_trace_event_code", !6, i64 0}
!40 = !{!38, !17, i64 40}
!41 = !{!38, !17, i64 20}
!42 = !{!38, !17, i64 12}
!43 = !{!38, !39, i64 8}
!44 = !{!6, !6, i64 0}
!45 = !{!38, !17, i64 16}
!46 = !{!38, !17, i64 28}
!47 = !{!38, !16, i64 0}
!48 = !{!38, !16, i64 32}
!49 = distinct !{!49, !50, !51}
!50 = !{!"llvm.loop.vectorize.width", i32 1}
!51 = !{!"llvm.loop.interleave.count", i32 1}
!52 = !{!38, !16, i64 44}
!53 = distinct !{!53, !50, !51}
!54 = distinct !{!54, !50, !51}
!55 = distinct !{!55, !50, !51}
!56 = !{!57, !57, i64 0}
!57 = !{!"short", !6, i64 0}
!58 = !{!59, !59, i64 0}
!59 = !{!"long long", !6, i64 0}
!60 = !{!61, !61, i64 0}
!61 = !{!"float", !6, i64 0}
!62 = !{!63, !63, i64 0}
!63 = !{!"double", !6, i64 0}
!64 = !{!65, !57, i64 0}
!65 = !{!"_ZTSN6Halide7Runtime8Internal18halide_tiff_headerE", !57, i64 0, !57, i64 2, !17, i64 4, !57, i64 8, !6, i64 10, !17, i64 190, !6, i64 194, !6, i64 202}
!66 = !{!65, !57, i64 2}
!67 = !{!65, !17, i64 4}
!68 = !{!65, !57, i64 8}
!69 = !{!70, !57, i64 0}
!70 = !{!"_ZTSN6Halide7Runtime8Internal8tiff_tagE", !57, i64 0, !57, i64 2, !17, i64 4, !6, i64 8}
!71 = !{!70, !57, i64 2}
!72 = !{!70, !17, i64 4}
!73 = !{!65, !17, i64 190}
!74 = !{!75, !16, i64 0}
!75 = !{!"_ZTSN6Halide7Runtime8Internal10CacheEntryE", !16, i64 0, !16, i64 8, !16, i64 16, !11, i64 24, !16, i64 32, !17, i64 40, !17, i64 44, !17, i64 48, !76, i64 56, !6, i64 128}
!76 = !{!"_ZTS8buffer_t", !59, i64 0, !16, i64 8, !6, i64 16, !6, i64 32, !6, i64 48, !17, i64 64, !5, i64 68, !5, i64 69, !6, i64 70}
!77 = !{!75, !16, i64 32}
!78 = !{!75, !17, i64 48}
!79 = !{!76, !16, i64 8}
!80 = !{!76, !17, i64 64}
!81 = !{!75, !11, i64 24}
!82 = !{!75, !17, i64 40}
!83 = !{!75, !17, i64 44}
!84 = !{i64 0, i64 8, !58, i64 8, i64 8, !32, i64 16, i64 16, !44, i64 32, i64 16, !44, i64 48, i64 16, !44, i64 64, i64 4, !21, i64 68, i64 1, !4, i64 69, i64 1, !4, i64 70, i64 2, !44}
!85 = !{!75, !16, i64 8}
!86 = !{!75, !16, i64 16}
!87 = !{!76, !5, i64 69}
!88 = !{!76, !59, i64 0}
!89 = !{!76, !5, i64 68}
!90 = !{!91, !16, i64 48}
!91 = !{!"_ZTS23halide_device_interface", !16, i64 0, !16, i64 8, !16, i64 16, !16, i64 24, !16, i64 32, !16, i64 40, !16, i64 48, !16, i64 56}
!92 = !{!93, !16, i64 8}
!93 = !{!"_ZTSN6Halide7Runtime8Internal21device_handle_wrapperE", !59, i64 0, !16, i64 8}
!94 = !{!93, !59, i64 0}
!95 = !{!91, !16, i64 0}
!96 = !{!91, !16, i64 8}
!97 = !{!91, !16, i64 40}
!98 = !{!91, !16, i64 56}
!99 = !{!91, !16, i64 24}
!100 = !{!91, !16, i64 16}
!101 = !{!91, !16, i64 32}
!102 = !{!103, !16, i64 64}
!103 = !{!"_ZTSN6Halide7Runtime8Internal11list_head_tE", !104, i64 0, !16, i64 64}
!104 = !{!"_ZTS12halide_mutex", !6, i64 0}
!105 = !{!106, !16, i64 0}
!106 = !{!"_ZTS44_halide_runtime_internal_registered_filter_t", !16, i64 0, !16, i64 8, !16, i64 16}
!107 = !{!106, !16, i64 8}
!108 = !{!106, !16, i64 16}
!109 = !{!110, !5, i64 84}
!110 = !{!"_ZTS21halide_profiler_state", !104, i64 0, !16, i64 64, !17, i64 72, !17, i64 76, !17, i64 80, !5, i64 84}
!111 = !{!110, !17, i64 80}
!112 = !{!113, !59, i64 0}
!113 = !{!"_ZTS30halide_profiler_pipeline_stats", !59, i64 0, !16, i64 8, !16, i64 16, !16, i64 24, !17, i64 32, !17, i64 36, !17, i64 40, !17, i64 44}
!114 = !{!113, !17, i64 40}
!115 = !{!113, !16, i64 8}
!116 = !{!113, !17, i64 44}
!117 = !{!113, !17, i64 32}
!118 = !{!113, !16, i64 16}
!119 = !{!120, !59, i64 0}
!120 = !{!"_ZTS26halide_profiler_func_stats", !59, i64 0, !16, i64 8}
!121 = !{!120, !16, i64 8}
!122 = !{!110, !16, i64 64}
!123 = !{!113, !16, i64 24}
!124 = !{!110, !17, i64 76}
!125 = !{!113, !17, i64 36}
!126 = !{!110, !17, i64 72}
