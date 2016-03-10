file(GLOB bcsources ${CMAKE_CURRENT_SOURCE_DIR}/host_bcfiles/*.bc)
SET_SOURCE_FILES_PROPERTIES( ${bcsources} PROPERTIES LANGUAGE CXX )
file(GLOB uosources ${CMAKE_CURRENT_SOURCE_DIR}/unopt_bcfiles/*.bc)
SET_SOURCE_FILES_PROPERTIES( ${uosources} PROPERTIES LANGUAGE CXX )
SET_SOURCE_FILES_PROPERTIES( ${CMAKE_CURRENT_SOURCE_DIR}/simd_op_check_runtime.bc PROPERTIES LANGUAGE CXX )

#Alternate version: build all into single executable (uncomment #includes in simd_ops.cpp)
#set(Source simd_ops.cpp ${bcsources})
#set(PROG simd_ops)
#list(APPEND LDFLAGS -lpthread -ldl)
#llvm_multisource()

#set(RUN_OPTIONS "insert args here")

#### Duplicated from SingleMultiSource.cmake ####
#### Using this to avoid $no_of_tests reference files ####
#### Go back to multisource() if reference outputs need to differ ####
function(llvm_add_test_common_ref name exename)
  llvm_test_run(${RUN_OPTIONS})
  set(DIFFPROG ${CMAKE_BINARY_DIR}/tools/fpcmp)
  llvm_test_verify("${DIFFPROG} %o ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.reference_output")
  # Replace $EXECUTABLE$ placeholder.
  string(REPLACE "$EXECUTABLE$" "${CMAKE_CURRENT_BINARY_DIR}/${exename}" TESTSCRIPT "${TESTSCRIPT}")
  # Produce .test file
  file(GENERATE OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/${exename}.test
    CONTENT "${TESTSCRIPT}")
endfunction()

macro(test_suite_add_executable_common_ref name mainsource)
  list(FIND PROGRAMS_TO_SKIP ${name} name_idx)
  # Should we skip this?
  if(${name_idx} EQUAL -1)
    get_unique_exe_name(source_exename ${mainsource})
    add_executable(${source_exename} ${ARGN})
    append_compile_flags(${source_exename} ${CFLAGS})
    append_compile_flags(${source_exename} ${CPPFLAGS})
    append_compile_flags(${source_exename} ${CXXFLAGS})
    append_link_flags(${source_exename} ${LDFLAGS})
    if (TEST_SUITE_PROFILE_USE)
      append_compile_flags(${source_exename} -fprofile-instr-use=${CMAKE_CURRENT_BINARY_DIR}/${source_exename}.profdata)
      append_link_flags(${source_exename} -fprofile-instr-use=${CMAKE_CURRENT_BINARY_DIR}/${source_exename}.profdata)
    endif()

    llvm_add_test_common_ref(${name} ${source_exename})
    add_dependencies(${source_exename} timeit-host timeit-target fpcmp-host)
  endif()
endmacro()
##############################################

list(APPEND LDFLAGS -lpthread -ldl)

#TODO: how to invoke the script that gives the .cpp files, without 349 custom commands?
#sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh ${namebc}
include(${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cmake)

foreach(sourcebc ${bcsources})
  string(REGEX REPLACE ".[cp]+$" "" pathbc ${sourcebc})
  string(REGEX REPLACE ".*/" "" namebc ${pathbc})
  string(REPLACE "." "" namebc ${namebc})
  #set(Source ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_${namebc}.cpp ${sourcebc} ${CMAKE_CURRENT_SOURCE_DIR}/simd_op_check_runtime.bc)
  set(Source ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_${namebc}.cpp ${CMAKE_CURRENT_SOURCE_DIR}/host_bcfiles/${namebc}.bc ${CMAKE_CURRENT_SOURCE_DIR}/simd_op_check_runtime.bc ${CMAKE_CURRENT_SOURCE_DIR}/unopt_bcfiles/unopt_${namebc}.bc)
  set(PROG simd_ops_${namebc})

  #Option 1 (&include generated reference files):
  #llvm_multisource()

  #Option 2 (&use common reference file):
  include_directories(${CMAKE_CURRENT_SOURCE_DIR})
  include_directories(${CMAKE_CURRENT_BINARY_DIR})
  test_suite_add_executable_common_ref(${PROG} "${PROG}.c" ${Source})
endforeach()


