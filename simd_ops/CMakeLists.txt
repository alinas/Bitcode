file(GLOB bcsources ${CMAKE_CURRENT_SOURCE_DIR}/host_bcfiles/*.bc)
SET_SOURCE_FILES_PROPERTIES(${bcsources} PROPERTIES LANGUAGE CXX)
file(GLOB uosources ${CMAKE_CURRENT_SOURCE_DIR}/unopt_bcfiles/*.bc)
SET_SOURCE_FILES_PROPERTIES(${uosources} PROPERTIES LANGUAGE CXX)
SET_SOURCE_FILES_PROPERTIES(${CMAKE_CURRENT_SOURCE_DIR}/simd_op_check_runtime.bc PROPERTIES LANGUAGE CXX)

list(APPEND LDFLAGS -lpthread -ldl)

foreach(sourcebc ${bcsources})
  string(REGEX REPLACE ".[cp]+$" "" pathbc ${sourcebc})
  string(REGEX REPLACE ".*/" "" namebc ${pathbc})
  string(REPLACE "." "" namebc ${namebc})
  set(Source ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp ${CMAKE_CURRENT_SOURCE_DIR}/host_bcfiles/${namebc}.bc ${CMAKE_CURRENT_SOURCE_DIR}/simd_op_check_runtime.bc ${CMAKE_CURRENT_SOURCE_DIR}/unopt_bcfiles/unopt_${namebc}.bc)
  set(PROG simd_ops_${namebc})
  llvm_multisource()
endforeach()


