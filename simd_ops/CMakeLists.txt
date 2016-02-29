file(GLOB bcsources ${CMAKE_CURRENT_SOURCE_DIR}/host_bcfiles/*.bc)

add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/allbitcode.bc
  DEPENDS   ${bcsources}
  COMMAND   llvm-link ${bcsources} -o ${CMAKE_CURRENT_BINARY_DIR}/allbitcode.bc
  COMMENT   "Link all bitcode files into single module"
  )

#TODO: replace command with llc once the mattr and mcpu issue is resolved.
#TODO: clean up .bc and .ll files
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/allbitcode.s
  DEPENDS   ${CMAKE_CURRENT_BINARY_DIR}/allbitcode.bc
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/from_bc_to_s.sh ${CMAKE_CURRENT_BINARY_DIR}/allbitcode.bc
  COMMENT   "Build asm file from merged bitcode module"
  )

set(Source simd_ops.cpp ${CMAKE_CURRENT_BINARY_DIR}/allbitcode.s)
set(PROG simd_ops)
list(APPEND LDFLAGS -lpthread -ldl)

#TODO: split into multiple small tests
#set(RUN_OPTIONS "insert args here")
#TODO: add the runs for ARM arch
#if("${ARCH}" STREQUAL "XCore")
#  set(XCORE_TARGET_NEEDS_MEMORY 256)
#endif()

llvm_multisource()


