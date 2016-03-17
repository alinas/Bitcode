; ModuleID = '../simd_ops/host_bcfiles/test_op_addpd_190.bc'
target datalayout = "e-m:e-i64:64-f80:128-n8:16:32:64-S128"
target triple = "x86_64--linux-gnu"

%struct.halide_filter_argument_t = type { i8*, i32, i32, i32, i32, %struct.halide_scalar_value_t*, %struct.halide_scalar_value_t*, %struct.halide_scalar_value_t* }
%struct.halide_scalar_value_t = type { %union.anon }
%union.anon = type { double }
%struct.halide_filter_metadata_t = type { i32, i32, %struct.halide_filter_argument_t*, i8*, i8* }
%struct.buffer_t = type { i64, i8*, [4 x i32], [4 x i32], [4 x i32], i32, i8, i8, [2 x i8] }

@str = private constant [7 x i8] c"in_f32\00", align 32
@str.2 = private constant [7 x i8] c"in_f64\00", align 32
@str.3 = private constant [6 x i8] c"in_i8\00", align 32
@str.4 = private constant [6 x i8] c"in_u8\00", align 32
@str.5 = private constant [7 x i8] c"in_i16\00", align 32
@str.6 = private constant [7 x i8] c"in_u16\00", align 32
@str.7 = private constant [7 x i8] c"in_i32\00", align 32
@str.8 = private constant [7 x i8] c"in_u32\00", align 32
@str.9 = private constant [7 x i8] c"in_i64\00", align 32
@str.10 = private constant [7 x i8] c"in_u64\00", align 32
@str.11 = private constant [19 x i8] c"error_op_addpd_190\00", align 32
@str.12 = private constant [33 x i8] c"Output buffer error_op_addpd_190\00", align 32
@str.13 = private constant [8 x i8] c"float64\00", align 32
@str.14 = private constant [20 x i8] c"Input buffer in_f64\00", align 32
@str.15 = private constant [16 x i8] c"in_f64.stride.0\00", align 32
@str.16 = private constant [2 x i8] c"1\00", align 32
@0 = private constant [11 x %struct.halide_filter_argument_t] [%struct.halide_filter_argument_t { i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i32 0, i32 0), i32 1, i32 1, i32 2, i32 32, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.2, i32 0, i32 0), i32 1, i32 1, i32 2, i32 64, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.3, i32 0, i32 0), i32 1, i32 1, i32 0, i32 8, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.4, i32 0, i32 0), i32 1, i32 1, i32 1, i32 8, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.5, i32 0, i32 0), i32 1, i32 1, i32 0, i32 16, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.6, i32 0, i32 0), i32 1, i32 1, i32 1, i32 16, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.7, i32 0, i32 0), i32 1, i32 1, i32 0, i32 32, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.8, i32 0, i32 0), i32 1, i32 1, i32 1, i32 32, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.9, i32 0, i32 0), i32 1, i32 1, i32 0, i32 64, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.10, i32 0, i32 0), i32 1, i32 1, i32 1, i32 64, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }, %struct.halide_filter_argument_t { i8* getelementptr inbounds ([19 x i8], [19 x i8]* @str.11, i32 0, i32 0), i32 2, i32 0, i32 2, i32 64, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null, %struct.halide_scalar_value_t* null }]
@str.17 = private constant [59 x i8] c"x86-64-linux-avx-f16c-fma-no_bounds_query-no_runtime-sse41\00", align 32
@str.18 = private constant [8 x i8] c"test_op\00", align 32
@test_op_metadata = constant %struct.halide_filter_metadata_t { i32 0, i32 11, %struct.halide_filter_argument_t* getelementptr inbounds ([11 x %struct.halide_filter_argument_t], [11 x %struct.halide_filter_argument_t]* @0, i32 0, i32 0), i8* getelementptr inbounds ([59 x i8], [59 x i8]* @str.17, i32 0, i32 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.18, i32 0, i32 0) }

declare i32 @halide_error_access_out_of_bounds(i8*, i8*, i32, i32, i32, i32, i32) #0

declare i32 @halide_error_bad_elem_size(i8*, i8*, i8*, i32, i32) #0

declare i32 @halide_error_buffer_argument_is_null(i8*, i8*) #0

declare i32 @halide_error_constraint_violated(i8*, i8*, i32, i8*, i32) #0

declare i32 @halide_error_out_of_memory(i8*) #0

declare void @halide_free(i8*, i8*) #0

declare noalias i8* @halide_malloc(i8*, i64) #0

; Function Attrs: nounwind
define i32 @__test_op(%struct.buffer_t* noalias readnone %in_f32.buffer, %struct.buffer_t* noalias readonly %in_f64.buffer, %struct.buffer_t* noalias readnone %in_i8.buffer, %struct.buffer_t* noalias readnone %in_u8.buffer, %struct.buffer_t* noalias readnone %in_i16.buffer, %struct.buffer_t* noalias readnone %in_u16.buffer, %struct.buffer_t* noalias readnone %in_i32.buffer, %struct.buffer_t* noalias readnone %in_u32.buffer, %struct.buffer_t* noalias readnone %in_i64.buffer, %struct.buffer_t* noalias readnone %in_u64.buffer, %struct.buffer_t* noalias readonly %error_op_addpd_190.buffer) #1 {
entry:
  %0 = icmp eq %struct.buffer_t* %in_f32.buffer, null
  br i1 %0, label %"assert failed", label %"assert succeeded", !prof !4

"assert failed":                                  ; preds = %entry
  %1 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded":                               ; preds = %entry
  %2 = icmp eq %struct.buffer_t* %in_f64.buffer, null
  br i1 %2, label %"assert failed10", label %"assert succeeded11", !prof !4

call_destructor.exit:                             ; preds = %"consume op_addpd_190"
  %3 = tail call i32 @halide_error_out_of_memory(i8* null) #1
  %should_call.not.i215 = icmp eq i32 %3, 0
  br i1 %should_call.not.i215, label %call_destructor.exit218, label %if.then.i217

if.then.i217:                                     ; preds = %call_destructor.exit
  tail call void @halide_free(i8* null, i8* nonnull %op_addpd_190.host) #2
  br label %call_destructor.exit218

call_destructor.exit218:                          ; preds = %"consume maximum$12", %"assert failed210", %"assert failed206", %"assert failed204", %"assert failed202", %"assert failed200", %"assert failed181", %"assert failed162", %"assert failed143", %"assert failed124", %"assert failed105", %"assert failed86", %"assert failed67", %"assert failed48", %"assert failed29", %"assert failed10", %if.then.i217, %call_destructor.exit, %"assert failed"
  %4 = phi i32 [ 0, %call_destructor.exit ], [ %3, %if.then.i217 ], [ %1, %"assert failed" ], [ %5, %"assert failed10" ], [ %8, %"assert failed29" ], [ %10, %"assert failed48" ], [ %12, %"assert failed67" ], [ %14, %"assert failed86" ], [ %16, %"assert failed105" ], [ %18, %"assert failed124" ], [ %20, %"assert failed143" ], [ %22, %"assert failed162" ], [ %24, %"assert failed181" ], [ %27, %"assert failed200" ], [ %29, %"assert failed202" ], [ %36, %"assert failed204" ], [ %38, %"assert failed206" ], [ %42, %"assert failed210" ], [ 0, %"consume maximum$12" ]
  ret i32 %4

"assert failed10":                                ; preds = %"assert succeeded"
  %5 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.2, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded11":                             ; preds = %"assert succeeded"
  %buf_host12 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %in_f64.buffer, i64 0, i32 1
  %6 = bitcast i8** %buf_host12 to double**
  %in_f64.host231 = load double*, double** %6, align 8
  %buf_extent16 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %in_f64.buffer, i64 0, i32 2, i64 0
  %in_f64.extent.0 = load i32, i32* %buf_extent16, align 4
  %buf_stride20 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %in_f64.buffer, i64 0, i32 3, i64 0
  %in_f64.stride.0 = load i32, i32* %buf_stride20, align 4
  %buf_min24 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %in_f64.buffer, i64 0, i32 4, i64 0
  %in_f64.min.0 = load i32, i32* %buf_min24, align 4
  %buf_elem_size28 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %in_f64.buffer, i64 0, i32 5
  %in_f64.elem_size = load i32, i32* %buf_elem_size28, align 4
  %7 = icmp eq %struct.buffer_t* %in_i8.buffer, null
  br i1 %7, label %"assert failed29", label %"assert succeeded30", !prof !4

"assert failed29":                                ; preds = %"assert succeeded11"
  %8 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.3, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded30":                             ; preds = %"assert succeeded11"
  %9 = icmp eq %struct.buffer_t* %in_u8.buffer, null
  br i1 %9, label %"assert failed48", label %"assert succeeded49", !prof !4

"assert failed48":                                ; preds = %"assert succeeded30"
  %10 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.4, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded49":                             ; preds = %"assert succeeded30"
  %11 = icmp eq %struct.buffer_t* %in_i16.buffer, null
  br i1 %11, label %"assert failed67", label %"assert succeeded68", !prof !4

"assert failed67":                                ; preds = %"assert succeeded49"
  %12 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.5, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded68":                             ; preds = %"assert succeeded49"
  %13 = icmp eq %struct.buffer_t* %in_u16.buffer, null
  br i1 %13, label %"assert failed86", label %"assert succeeded87", !prof !4

"assert failed86":                                ; preds = %"assert succeeded68"
  %14 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.6, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded87":                             ; preds = %"assert succeeded68"
  %15 = icmp eq %struct.buffer_t* %in_i32.buffer, null
  br i1 %15, label %"assert failed105", label %"assert succeeded106", !prof !4

"assert failed105":                               ; preds = %"assert succeeded87"
  %16 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.7, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded106":                            ; preds = %"assert succeeded87"
  %17 = icmp eq %struct.buffer_t* %in_u32.buffer, null
  br i1 %17, label %"assert failed124", label %"assert succeeded125", !prof !4

"assert failed124":                               ; preds = %"assert succeeded106"
  %18 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.8, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded125":                            ; preds = %"assert succeeded106"
  %19 = icmp eq %struct.buffer_t* %in_i64.buffer, null
  br i1 %19, label %"assert failed143", label %"assert succeeded144", !prof !4

"assert failed143":                               ; preds = %"assert succeeded125"
  %20 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.9, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded144":                            ; preds = %"assert succeeded125"
  %21 = icmp eq %struct.buffer_t* %in_u64.buffer, null
  br i1 %21, label %"assert failed162", label %"assert succeeded163", !prof !4

"assert failed162":                               ; preds = %"assert succeeded144"
  %22 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.10, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded163":                            ; preds = %"assert succeeded144"
  %23 = icmp eq %struct.buffer_t* %error_op_addpd_190.buffer, null
  br i1 %23, label %"assert failed181", label %"assert succeeded182", !prof !4

"assert failed181":                               ; preds = %"assert succeeded163"
  %24 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @str.11, i64 0, i64 0)) #1
  br label %call_destructor.exit218

"assert succeeded182":                            ; preds = %"assert succeeded163"
  %buf_host183 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %error_op_addpd_190.buffer, i64 0, i32 1
  %25 = bitcast i8** %buf_host183 to double**
  %error_op_addpd_190.host226227232 = load double*, double** %25, align 8
  %buf_elem_size199 = getelementptr inbounds %struct.buffer_t, %struct.buffer_t* %error_op_addpd_190.buffer, i64 0, i32 5
  %error_op_addpd_190.elem_size = load i32, i32* %buf_elem_size199, align 4
  %26 = icmp eq i32 %error_op_addpd_190.elem_size, 8
  br i1 %26, label %"assert succeeded201", label %"assert failed200", !prof !5

"assert failed200":                               ; preds = %"assert succeeded182"
  %27 = tail call i32 @halide_error_bad_elem_size(i8* null, i8* getelementptr inbounds ([33 x i8], [33 x i8]* @str.12, i64 0, i64 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.13, i64 0, i64 0), i32 %error_op_addpd_190.elem_size, i32 8) #1
  br label %call_destructor.exit218

"assert succeeded201":                            ; preds = %"assert succeeded182"
  %28 = icmp eq i32 %in_f64.elem_size, 8
  br i1 %28, label %"assert succeeded203", label %"assert failed202", !prof !5

"assert failed202":                               ; preds = %"assert succeeded201"
  %29 = tail call i32 @halide_error_bad_elem_size(i8* null, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @str.14, i64 0, i64 0), i8* getelementptr inbounds ([8 x i8], [8 x i8]* @str.13, i64 0, i64 0), i32 %in_f64.elem_size, i32 8) #1
  br label %call_destructor.exit218

"assert succeeded203":                            ; preds = %"assert succeeded201"
  %30 = sub nsw i32 784, %in_f64.extent.0
  %31 = icmp sle i32 %30, %in_f64.min.0
  %32 = icmp slt i32 %in_f64.min.0, 1
  %33 = and i1 %32, %31
  br i1 %33, label %"assert succeeded205", label %"assert failed204", !prof !5

"assert failed204":                               ; preds = %"assert succeeded203"
  %34 = add i32 %in_f64.extent.0, -1
  %35 = add i32 %34, %in_f64.min.0
  %36 = tail call i32 @halide_error_access_out_of_bounds(i8* null, i8* getelementptr inbounds ([20 x i8], [20 x i8]* @str.14, i64 0, i64 0), i32 0, i32 0, i32 783, i32 %in_f64.min.0, i32 %35) #1
  br label %call_destructor.exit218

"assert succeeded205":                            ; preds = %"assert succeeded203"
  %37 = icmp eq i32 %in_f64.stride.0, 1
  br i1 %37, label %"assert succeeded209", label %"assert failed206", !prof !5

"assert failed206":                               ; preds = %"assert succeeded205"
  %38 = tail call i32 @halide_error_constraint_violated(i8* null, i8* getelementptr inbounds ([16 x i8], [16 x i8]* @str.15, i64 0, i64 0), i32 %in_f64.stride.0, i8* getelementptr inbounds ([2 x i8], [2 x i8]* @str.16, i64 0, i64 0), i32 1) #1
  br label %call_destructor.exit218

"assert succeeded209":                            ; preds = %"assert succeeded205"
  %op_addpd_190.host = tail call i8* @halide_malloc(i8* null, i64 614408)
  %39 = icmp eq i8* %op_addpd_190.host, null
  br i1 %39, label %"assert failed210", label %"for op_addpd_190.s0.y.preheader", !prof !4

"for op_addpd_190.s0.y.preheader":                ; preds = %"assert succeeded209"
  %40 = sext i32 %in_f64.min.0 to i64
  %41 = bitcast i8* %op_addpd_190.host to double*
  br label %"for op_addpd_190.s0.y"

"assert failed210":                               ; preds = %"assert succeeded209"
  %42 = tail call i32 @halide_error_out_of_memory(i8* null) #1
  br label %call_destructor.exit218

"for op_addpd_190.s0.y":                          ; preds = %"end for op_addpd_190.s0.x.x", %"for op_addpd_190.s0.y.preheader"
  %indvars.iv247 = phi i64 [ 0, %"for op_addpd_190.s0.y.preheader" ], [ %indvars.iv.next248, %"end for op_addpd_190.s0.x.x" ]
  %43 = mul nuw nsw i64 %indvars.iv247, 768
  br label %"for op_addpd_190.s0.x.x"

"for op_addpd_190.s0.x.x":                        ; preds = %"for op_addpd_190.s0.x.x", %"for op_addpd_190.s0.y"
  %indvars.iv245 = phi i64 [ 0, %"for op_addpd_190.s0.y" ], [ %indvars.iv.next246, %"for op_addpd_190.s0.x.x" ]
  %44 = shl nsw i64 %indvars.iv245, 1
  %45 = sub nsw i64 %44, %40
  %46 = add nsw i64 %45, 16
  %47 = getelementptr inbounds double, double* %in_f64.host231, i64 %46
  %48 = bitcast double* %47 to <2 x double>*
  %49 = load <2 x double>, <2 x double>* %48, align 8, !tbaa !6
  %50 = getelementptr inbounds double, double* %in_f64.host231, i64 %45
  %51 = bitcast double* %50 to <2 x double>*
  %52 = load <2 x double>, <2 x double>* %51, align 8, !tbaa !6
  %53 = fadd <2 x double> %49, %52
  %54 = add nuw nsw i64 %44, %43
  %55 = getelementptr inbounds double, double* %41, i64 %54
  %56 = bitcast double* %55 to <2 x double>*
  store <2 x double> %53, <2 x double>* %56, align 16, !tbaa !9
  %indvars.iv.next246 = add nuw nsw i64 %indvars.iv245, 1
  %57 = icmp eq i64 %indvars.iv.next246, 384
  br i1 %57, label %"end for op_addpd_190.s0.x.x", label %"for op_addpd_190.s0.x.x"

"end for op_addpd_190.s0.x.x":                    ; preds = %"for op_addpd_190.s0.x.x"
  %indvars.iv.next248 = add nuw nsw i64 %indvars.iv247, 1
  %58 = icmp eq i64 %indvars.iv.next248, 100
  br i1 %58, label %"consume op_addpd_190", label %"for op_addpd_190.s0.y"

"consume op_addpd_190":                           ; preds = %"end for op_addpd_190.s0.x.x"
  %scalar_op_addpd_190.host = tail call i8* @halide_malloc(i8* null, i64 614408)
  %59 = icmp eq i8* %scalar_op_addpd_190.host, null
  br i1 %59, label %call_destructor.exit, label %"for scalar_op_addpd_190.s0.y.preheader", !prof !4

"for scalar_op_addpd_190.s0.y.preheader":         ; preds = %"consume op_addpd_190"
  %60 = bitcast i8* %scalar_op_addpd_190.host to double*
  br label %"for scalar_op_addpd_190.s0.y"

"for scalar_op_addpd_190.s0.y":                   ; preds = %"end for scalar_op_addpd_190.s0.x", %"for scalar_op_addpd_190.s0.y.preheader"
  %indvars.iv243 = phi i64 [ 0, %"for scalar_op_addpd_190.s0.y.preheader" ], [ %indvars.iv.next244, %"end for scalar_op_addpd_190.s0.x" ]
  %61 = mul nuw nsw i64 %indvars.iv243, 768
  br label %"for scalar_op_addpd_190.s0.x"

"for scalar_op_addpd_190.s0.x":                   ; preds = %"for scalar_op_addpd_190.s0.x", %"for scalar_op_addpd_190.s0.y"
  %indvars.iv241 = phi i64 [ 0, %"for scalar_op_addpd_190.s0.y" ], [ %indvars.iv.next242, %"for scalar_op_addpd_190.s0.x" ]
  %62 = sub nsw i64 %indvars.iv241, %40
  %63 = add nsw i64 %62, 16
  %64 = getelementptr inbounds double, double* %in_f64.host231, i64 %63
  %65 = load double, double* %64, align 8, !tbaa !6
  %66 = getelementptr inbounds double, double* %in_f64.host231, i64 %62
  %67 = load double, double* %66, align 8, !tbaa !6
  %68 = fadd double %65, %67
  %69 = add nuw nsw i64 %indvars.iv241, %61
  %70 = getelementptr inbounds double, double* %60, i64 %69
  store double %68, double* %70, align 8, !tbaa !11
  %indvars.iv.next242 = add nuw nsw i64 %indvars.iv241, 1
  %71 = icmp eq i64 %indvars.iv.next242, 768
  br i1 %71, label %"end for scalar_op_addpd_190.s0.x", label %"for scalar_op_addpd_190.s0.x"

"end for scalar_op_addpd_190.s0.x":               ; preds = %"for scalar_op_addpd_190.s0.x"
  %indvars.iv.next244 = add nuw nsw i64 %indvars.iv243, 1
  %72 = icmp eq i64 %indvars.iv.next244, 100
  br i1 %72, label %"for maximum$12.s1.r$12.y$r", label %"for scalar_op_addpd_190.s0.y"

"for maximum$12.s1.r$12.y$r":                     ; preds = %"end for maximum$12.s1.r$12.x$r", %"end for scalar_op_addpd_190.s0.x"
  %indvars.iv239 = phi i64 [ %indvars.iv.next240, %"end for maximum$12.s1.r$12.x$r" ], [ 0, %"end for scalar_op_addpd_190.s0.x" ]
  %"maximum$12.host.sroa.0.0" = phi i64 [ %86, %"end for maximum$12.s1.r$12.x$r" ], [ -4503599627370497, %"end for scalar_op_addpd_190.s0.x" ]
  %73 = mul nuw nsw i64 %indvars.iv239, 768
  br label %"for maximum$12.s1.r$12.x$r"

"for maximum$12.s1.r$12.x$r":                     ; preds = %"for maximum$12.s1.r$12.x$r", %"for maximum$12.s1.r$12.y$r"
  %indvars.iv = phi i64 [ 0, %"for maximum$12.s1.r$12.y$r" ], [ %indvars.iv.next, %"for maximum$12.s1.r$12.x$r" ]
  %"maximum$12.host.sroa.0.1" = phi i64 [ %"maximum$12.host.sroa.0.0", %"for maximum$12.s1.r$12.y$r" ], [ %86, %"for maximum$12.s1.r$12.x$r" ]
  %74 = add nuw nsw i64 %indvars.iv, %73
  %75 = bitcast i64 %"maximum$12.host.sroa.0.1" to double
  %76 = getelementptr inbounds double, double* %60, i64 %74
  %77 = load double, double* %76, align 8, !tbaa !11
  %78 = getelementptr inbounds double, double* %41, i64 %74
  %79 = load double, double* %78, align 8, !tbaa !9
  %80 = fsub double %79, %77
  %81 = fcmp oge double %80, 0.000000e+00
  %82 = fsub double 0.000000e+00, %80
  %83 = select i1 %81, double %80, double %82
  %84 = fcmp olt double %75, %83
  %85 = select i1 %84, double %83, double %75
  %86 = bitcast double %85 to i64
  %indvars.iv.next = add nuw nsw i64 %indvars.iv, 1
  %87 = icmp eq i64 %indvars.iv.next, 768
  br i1 %87, label %"end for maximum$12.s1.r$12.x$r", label %"for maximum$12.s1.r$12.x$r"

"end for maximum$12.s1.r$12.x$r":                 ; preds = %"for maximum$12.s1.r$12.x$r"
  %indvars.iv.next240 = add nuw nsw i64 %indvars.iv239, 1
  %88 = icmp eq i64 %indvars.iv.next240, 100
  br i1 %88, label %"consume maximum$12", label %"for maximum$12.s1.r$12.y$r"

"consume maximum$12":                             ; preds = %"end for maximum$12.s1.r$12.x$r"
  tail call void @halide_free(i8* null, i8* nonnull %op_addpd_190.host) #2
  tail call void @halide_free(i8* null, i8* nonnull %scalar_op_addpd_190.host) #2
  store double %85, double* %error_op_addpd_190.host226227232, align 8, !tbaa !13
  br label %call_destructor.exit218
}

; Function Attrs: nounwind
define i32 @test_op(%struct.buffer_t* noalias readnone %in_f32.buffer, %struct.buffer_t* noalias readonly %in_f64.buffer, %struct.buffer_t* noalias readnone %in_i8.buffer, %struct.buffer_t* noalias readnone %in_u8.buffer, %struct.buffer_t* noalias readnone %in_i16.buffer, %struct.buffer_t* noalias readnone %in_u16.buffer, %struct.buffer_t* noalias readnone %in_i32.buffer, %struct.buffer_t* noalias readnone %in_u32.buffer, %struct.buffer_t* noalias readnone %in_i64.buffer, %struct.buffer_t* noalias readnone %in_u64.buffer, %struct.buffer_t* noalias readonly %error_op_addpd_190.buffer) #1 {
entry:
  %0 = icmp eq %struct.buffer_t* %in_f32.buffer, null
  br i1 %0, label %"assert failed", label %"assert succeeded", !prof !4

"assert failed":                                  ; preds = %entry
  %1 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded":                               ; preds = %entry
  %2 = icmp eq %struct.buffer_t* %in_f64.buffer, null
  br i1 %2, label %"assert failed10", label %"assert succeeded11", !prof !4

destructor_block:                                 ; preds = %"assert succeeded182", %"assert failed181", %"assert failed162", %"assert failed143", %"assert failed124", %"assert failed105", %"assert failed86", %"assert failed67", %"assert failed48", %"assert failed29", %"assert failed10", %"assert failed"
  %3 = phi i32 [ %1, %"assert failed" ], [ %4, %"assert failed10" ], [ %6, %"assert failed29" ], [ %8, %"assert failed48" ], [ %10, %"assert failed67" ], [ %12, %"assert failed86" ], [ %14, %"assert failed105" ], [ %16, %"assert failed124" ], [ %18, %"assert failed143" ], [ %20, %"assert failed162" ], [ %22, %"assert failed181" ], [ %"__test_op_result$12", %"assert succeeded182" ]
  ret i32 %3

"assert failed10":                                ; preds = %"assert succeeded"
  %4 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.2, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded11":                             ; preds = %"assert succeeded"
  %5 = icmp eq %struct.buffer_t* %in_i8.buffer, null
  br i1 %5, label %"assert failed29", label %"assert succeeded30", !prof !4

"assert failed29":                                ; preds = %"assert succeeded11"
  %6 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.3, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded30":                             ; preds = %"assert succeeded11"
  %7 = icmp eq %struct.buffer_t* %in_u8.buffer, null
  br i1 %7, label %"assert failed48", label %"assert succeeded49", !prof !4

"assert failed48":                                ; preds = %"assert succeeded30"
  %8 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([6 x i8], [6 x i8]* @str.4, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded49":                             ; preds = %"assert succeeded30"
  %9 = icmp eq %struct.buffer_t* %in_i16.buffer, null
  br i1 %9, label %"assert failed67", label %"assert succeeded68", !prof !4

"assert failed67":                                ; preds = %"assert succeeded49"
  %10 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.5, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded68":                             ; preds = %"assert succeeded49"
  %11 = icmp eq %struct.buffer_t* %in_u16.buffer, null
  br i1 %11, label %"assert failed86", label %"assert succeeded87", !prof !4

"assert failed86":                                ; preds = %"assert succeeded68"
  %12 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.6, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded87":                             ; preds = %"assert succeeded68"
  %13 = icmp eq %struct.buffer_t* %in_i32.buffer, null
  br i1 %13, label %"assert failed105", label %"assert succeeded106", !prof !4

"assert failed105":                               ; preds = %"assert succeeded87"
  %14 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.7, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded106":                            ; preds = %"assert succeeded87"
  %15 = icmp eq %struct.buffer_t* %in_u32.buffer, null
  br i1 %15, label %"assert failed124", label %"assert succeeded125", !prof !4

"assert failed124":                               ; preds = %"assert succeeded106"
  %16 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.8, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded125":                            ; preds = %"assert succeeded106"
  %17 = icmp eq %struct.buffer_t* %in_i64.buffer, null
  br i1 %17, label %"assert failed143", label %"assert succeeded144", !prof !4

"assert failed143":                               ; preds = %"assert succeeded125"
  %18 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.9, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded144":                            ; preds = %"assert succeeded125"
  %19 = icmp eq %struct.buffer_t* %in_u64.buffer, null
  br i1 %19, label %"assert failed162", label %"assert succeeded163", !prof !4

"assert failed162":                               ; preds = %"assert succeeded144"
  %20 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([7 x i8], [7 x i8]* @str.10, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded163":                            ; preds = %"assert succeeded144"
  %21 = icmp eq %struct.buffer_t* %error_op_addpd_190.buffer, null
  br i1 %21, label %"assert failed181", label %"assert succeeded182", !prof !4

"assert failed181":                               ; preds = %"assert succeeded163"
  %22 = tail call i32 @halide_error_buffer_argument_is_null(i8* null, i8* getelementptr inbounds ([19 x i8], [19 x i8]* @str.11, i64 0, i64 0)) #1
  br label %destructor_block

"assert succeeded182":                            ; preds = %"assert succeeded163"
  %"__test_op_result$12" = tail call i32 @__test_op(%struct.buffer_t* nonnull %in_f32.buffer, %struct.buffer_t* nonnull %in_f64.buffer, %struct.buffer_t* nonnull %in_i8.buffer, %struct.buffer_t* nonnull %in_u8.buffer, %struct.buffer_t* nonnull %in_i16.buffer, %struct.buffer_t* nonnull %in_u16.buffer, %struct.buffer_t* nonnull %in_i32.buffer, %struct.buffer_t* nonnull %in_u32.buffer, %struct.buffer_t* nonnull %in_i64.buffer, %struct.buffer_t* nonnull %in_u64.buffer, %struct.buffer_t* nonnull %error_op_addpd_190.buffer) #1
  br label %destructor_block
}

; Function Attrs: nounwind
define i32 @test_op_argv(i8** nocapture readonly) #1 {
entry:
  %1 = bitcast i8** %0 to %struct.buffer_t**
  %2 = load %struct.buffer_t*, %struct.buffer_t** %1, align 8
  %3 = getelementptr i8*, i8** %0, i64 1
  %4 = bitcast i8** %3 to %struct.buffer_t**
  %5 = load %struct.buffer_t*, %struct.buffer_t** %4, align 8
  %6 = getelementptr i8*, i8** %0, i64 2
  %7 = bitcast i8** %6 to %struct.buffer_t**
  %8 = load %struct.buffer_t*, %struct.buffer_t** %7, align 8
  %9 = getelementptr i8*, i8** %0, i64 3
  %10 = bitcast i8** %9 to %struct.buffer_t**
  %11 = load %struct.buffer_t*, %struct.buffer_t** %10, align 8
  %12 = getelementptr i8*, i8** %0, i64 4
  %13 = bitcast i8** %12 to %struct.buffer_t**
  %14 = load %struct.buffer_t*, %struct.buffer_t** %13, align 8
  %15 = getelementptr i8*, i8** %0, i64 5
  %16 = bitcast i8** %15 to %struct.buffer_t**
  %17 = load %struct.buffer_t*, %struct.buffer_t** %16, align 8
  %18 = getelementptr i8*, i8** %0, i64 6
  %19 = bitcast i8** %18 to %struct.buffer_t**
  %20 = load %struct.buffer_t*, %struct.buffer_t** %19, align 8
  %21 = getelementptr i8*, i8** %0, i64 7
  %22 = bitcast i8** %21 to %struct.buffer_t**
  %23 = load %struct.buffer_t*, %struct.buffer_t** %22, align 8
  %24 = getelementptr i8*, i8** %0, i64 8
  %25 = bitcast i8** %24 to %struct.buffer_t**
  %26 = load %struct.buffer_t*, %struct.buffer_t** %25, align 8
  %27 = getelementptr i8*, i8** %0, i64 9
  %28 = bitcast i8** %27 to %struct.buffer_t**
  %29 = load %struct.buffer_t*, %struct.buffer_t** %28, align 8
  %30 = getelementptr i8*, i8** %0, i64 10
  %31 = bitcast i8** %30 to %struct.buffer_t**
  %32 = load %struct.buffer_t*, %struct.buffer_t** %31, align 8
  %33 = tail call i32 @test_op(%struct.buffer_t* %2, %struct.buffer_t* %5, %struct.buffer_t* %8, %struct.buffer_t* %11, %struct.buffer_t* %14, %struct.buffer_t* %17, %struct.buffer_t* %20, %struct.buffer_t* %23, %struct.buffer_t* %26, %struct.buffer_t* %29, %struct.buffer_t* %32)
  ret i32 %33
}

attributes #0 = { "disable-tail-calls"="false" "less-precise-fpmad"="false" "no-frame-pointer-elim"="true" "no-frame-pointer-elim-non-leaf" "no-infs-fp-math"="false" "no-nans-fp-math"="false" "stack-protector-buffer-size"="8" "unsafe-fp-math"="false" "use-soft-float"="false" }
attributes #1 = { nounwind "target-cpu"="corei7-avx" "target-features"="+fma,+f16c" }
attributes #2 = { nobuiltin nounwind }

!llvm.ident = !{!0, !0}
!llvm.module.flags = !{!1, !2, !3}

!0 = !{!"clang version 3.9.0 (trunk 263514) (llvm/trunk 263530)"}
!1 = !{i32 2, !"halide_use_soft_float_abi", i32 0}
!2 = !{i32 2, !"halide_mcpu", !"corei7-avx"}
!3 = !{i32 2, !"halide_mattrs", !"+fma,+f16c"}
!4 = !{!"branch_weights", i32 0, i32 1073741824}
!5 = !{!"branch_weights", i32 1073741824, i32 0}
!6 = !{!7, !7, i64 0}
!7 = !{!"in_f64", !8}
!8 = !{!"Halide buffer"}
!9 = !{!10, !10, i64 0}
!10 = !{!"op_addpd_190", !8}
!11 = !{!12, !12, i64 0}
!12 = !{!"scalar_op_addpd_190", !8}
!13 = !{!14, !14, i64 0}
!14 = !{!"error_op_addpd_190.width1.base0", !15}
!15 = !{!"error_op_addpd_190.width2.base0", !16}
!16 = !{!"error_op_addpd_190.width4.base0", !17}
!17 = !{!"error_op_addpd_190.width8.base0", !18}
!18 = !{!"error_op_addpd_190.width16.base0", !19}
!19 = !{!"error_op_addpd_190.width32.base0", !20}
!20 = !{!"error_op_addpd_190.width64.base0", !21}
!21 = !{!"error_op_addpd_190.width128.base0", !22}
!22 = !{!"error_op_addpd_190.width256.base0", !23}
!23 = !{!"error_op_addpd_190.width512.base0", !24}
!24 = !{!"error_op_addpd_190.width1024.base0", !25}
!25 = !{!"error_op_addpd_190", !8}
