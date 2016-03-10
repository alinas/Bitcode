# custom simd_op drivers
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_addpd_190.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_addpd_190 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_addpd_205.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_addpd_205 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_addpd_220.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_addpd_220 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_addps_117.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_addps_117 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_addps_165.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_addps_165 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_addps_21.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_addps_21 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_addps_69.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_addps_69 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_andps_186.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_andps_186 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_blendvpd_254.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_blendvpd_254 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_blendvpd_277.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_blendvpd_277 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_blendvpd_300.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_blendvpd_300 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_blendvps_253.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_blendvps_253 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_blendvps_276.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_blendvps_276 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_blendvps_299.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_blendvps_299 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpeqpd_197.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpeqpd_197 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpeqpd_212.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpeqpd_212 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpeqpd_227.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpeqpd_227 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpeqps_136.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpeqps_136 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpeqps_184.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpeqps_184 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpeqps_40.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpeqps_40 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpeqps_88.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpeqps_88 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpltpd_198.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpltpd_198 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpltpd_213.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpltpd_213 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpltpd_228.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpltpd_228 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpltps_137.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpltps_137 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpltps_185.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpltps_185 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpltps_41.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpltps_41 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_cmpltps_89.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_cmpltps_89 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_divpd_193.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_divpd_193 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_divpd_208.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_divpd_208 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_divpd_223.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_divpd_223 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_maxpd_195.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_maxpd_195 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_maxpd_210.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_maxpd_210 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_maxpd_225.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_maxpd_225 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_maxps_123.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_maxps_123 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_maxps_171.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_maxps_171 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_maxps_27.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_maxps_27 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_maxps_75.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_maxps_75 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_minpd_196.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_minpd_196 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_minpd_211.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_minpd_211 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_minpd_226.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_minpd_226 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_minps_124.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_minps_124 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_minps_172.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_minps_172 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_minps_28.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_minps_28 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_minps_76.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_minps_76 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_mulpd_192.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_mulpd_192 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_mulpd_207.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_mulpd_207 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_mulpd_222.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_mulpd_222 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_mulps_119.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_mulps_119 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_mulps_167.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_mulps_167 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_mulps_23.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_mulps_23 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_mulps_71.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_mulps_71 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_orps_187.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_orps_187 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsb_235.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsb_235 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsb_238.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsb_238 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsb_241.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsb_241 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsd_237.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsd_237 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsd_240.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsd_240 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsd_243.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsd_243 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsw_236.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsw_236 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsw_239.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsw_239 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pabsw_242.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pabsw_242 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packssdw_202.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packssdw_202 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packssdw_217.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packssdw_217 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packssdw_232.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packssdw_232 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packsswb_203.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packsswb_203 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packsswb_218.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packsswb_218 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packsswb_233.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packsswb_233 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packusdw_273.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packusdw_273 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packusdw_296.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packusdw_296 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packusdw_319.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packusdw_319 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packuswb_204.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packuswb_204 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packuswb_219.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packuswb_219 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_packuswb_234.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_packuswb_234 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddb_138.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddb_138 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddb_42.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddb_42 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddb_90.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddb_90 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddd_143.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddd_143 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddd_47.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddd_47 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddd_95.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddd_95 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddq_199.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddq_199 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddq_214.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddq_214 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddq_229.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddq_229 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsb_145.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsb_145 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsb_146.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsb_146 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsb_1.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsb_1 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsb_2.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsb_2 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsb_49.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsb_49 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsb_50.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsb_50 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsb_97.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsb_97 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsb_98.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsb_98 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsw_102.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsw_102 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsw_150.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsw_150 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsw_54.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsw_54 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddsw_6.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddsw_6 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddusb_100.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddusb_100 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddusb_148.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddusb_148 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddusb_4.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddusb_4 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddusb_52.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddusb_52 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddusw_104.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddusw_104 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddusw_152.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddusw_152 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddusw_56.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddusw_56 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddusw_8.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddusw_8 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddw_140.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddw_140 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddw_44.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddw_44 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_paddw_92.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_paddw_92 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgb_125.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgb_125 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgb_126.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgb_126 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgb_173.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgb_173 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgb_174.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgb_174 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgb_29.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgb_29 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgb_30.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgb_30 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgb_77.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgb_77 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgb_78.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgb_78 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgw_127.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgw_127 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgw_128.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgw_128 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgw_175.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgw_175 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgw_176.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgw_176 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgw_31.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgw_31 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgw_32.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgw_32 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgw_79.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgw_79 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pavgw_80.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pavgw_80 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_255.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_255 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_256.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_256 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_257.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_257 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_278.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_278 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_279.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_279 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_280.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_280 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_301.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_301 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_302.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_302 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pblendvb_303.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pblendvb_303 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqb_111.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqb_111 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqb_159.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqb_159 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqb_15.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqb_15 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqb_63.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqb_63 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqd_115.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqd_115 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqd_163.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqd_163 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqd_19.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqd_19 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqd_67.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqd_67 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqq_272.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqq_272 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqq_295.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqq_295 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqq_318.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqq_318 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqw_113.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqw_113 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqw_161.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqw_161 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqw_17.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqw_17 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpeqw_65.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpeqw_65 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtb_112.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtb_112 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtb_160.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtb_160 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtb_16.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtb_16 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtb_64.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtb_64 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtd_116.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtd_116 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtd_164.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtd_164 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtd_20.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtd_20 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtd_68.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtd_68 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtq_320.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtq_320 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtw_114.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtw_114 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtw_162.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtw_162 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtw_18.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtw_18 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pcmpgtw_66.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pcmpgtw_66 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaddwd_244.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaddwd_244 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaddwd_245.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaddwd_245 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaddwd_246.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaddwd_246 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaddwd_247.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaddwd_247 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaddwd_248.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaddwd_248 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaddwd_249.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaddwd_249 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaddwd_250.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaddwd_250 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsb_258.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsb_258 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsb_281.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsb_281 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsb_304.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsb_304 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsd_264.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsd_264 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsd_287.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsd_287 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsd_310.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsd_310 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsw_129.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsw_129 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsw_177.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsw_177 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsw_33.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsw_33 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxsw_81.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxsw_81 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxub_131.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxub_131 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxub_179.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxub_179 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxub_35.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxub_35 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxub_83.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxub_83 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxud_262.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxud_262 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxud_285.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxud_285 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxud_308.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxud_308 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxuw_260.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxuw_260 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxuw_283.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxuw_283 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmaxuw_306.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmaxuw_306 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsb_259.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsb_259 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsb_282.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsb_282 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsb_305.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsb_305 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsd_265.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsd_265 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsd_288.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsd_288 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsd_311.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsd_311 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsw_130.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsw_130 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsw_178.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsw_178 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsw_34.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsw_34 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminsw_82.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminsw_82 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminub_132.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminub_132 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminub_180.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminub_180 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminub_36.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminub_36 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminub_84.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminub_84 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminud_263.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminud_263 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminud_286.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminud_286 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminud_309.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminud_309 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminuw_261.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminuw_261 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminuw_284.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminuw_284 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pminuw_307.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pminuw_307 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_110.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_110 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_133.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_133 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_134.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_134 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_135.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_135 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_14.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_14 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_158.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_158 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_181.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_181 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_182.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_182 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_183.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_183 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_37.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_37 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_38.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_38 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_39.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_39 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_62.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_62 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_85.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_85 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_86.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_86 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhuw_87.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhuw_87 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_106.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_106 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_107.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_107 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_108.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_108 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_109.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_109 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_10.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_10 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_11.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_11 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_12.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_12 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_13.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_13 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_154.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_154 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_155.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_155 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_156.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_156 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_157.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_157 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_58.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_58 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_59.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_59 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_60.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_60 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulhw_61.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulhw_61 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulld_252.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulld_252 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulld_275.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulld_275 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmulld_298.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmulld_298 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmullw_142.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmullw_142 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmullw_46.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmullw_46 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmullw_94.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmullw_94 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmuludq_201.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmuludq_201 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmuludq_216.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmuludq_216 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmuludq_231.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmuludq_231 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmuludq_251.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmuludq_251 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmuludq_274.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmuludq_274 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_pmuludq_297.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_pmuludq_297 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubb_139.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubb_139 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubb_43.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubb_43 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubb_91.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubb_91 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubd_144.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubd_144 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubd_48.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubd_48 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubd_96.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubd_96 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubq_200.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubq_200 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubq_215.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubq_215 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubq_230.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubq_230 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubsb_147.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubsb_147 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubsb_3.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubsb_3 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubsb_51.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubsb_51 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubsb_99.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubsb_99 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubsw_103.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubsw_103 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubsw_151.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubsw_151 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubsw_55.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubsw_55 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubsw_7.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubsw_7 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubusb_101.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubusb_101 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubusb_149.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubusb_149 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubusb_53.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubusb_53 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubusb_5.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubusb_5 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubusw_105.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubusw_105 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubusw_153.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubusw_153 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubusw_57.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubusw_57 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubusw_9.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubusw_9 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubw_141.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubw_141 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubw_45.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubw_45 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_psubw_93.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_psubw_93 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_rcpps_120.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_rcpps_120 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_rcpps_168.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_rcpps_168 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_rcpps_24.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_rcpps_24 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_rcpps_72.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_rcpps_72 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_267.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_267 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_269.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_269 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_271.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_271 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_290.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_290 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_292.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_292 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_294.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_294 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_313.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_313 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_315.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_315 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundpd_317.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundpd_317 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_266.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_266 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_268.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_268 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_270.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_270 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_289.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_289 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_291.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_291 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_293.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_293 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_312.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_312 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_314.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_314 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_roundps_316.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_roundps_316 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_rsqrtps_122.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_rsqrtps_122 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_rsqrtps_170.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_rsqrtps_170 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_rsqrtps_26.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_rsqrtps_26 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_rsqrtps_74.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_rsqrtps_74 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_shufps_189.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_shufps_189 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_sqrtpd_194.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_sqrtpd_194 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_sqrtpd_209.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_sqrtpd_209 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_sqrtpd_224.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_sqrtpd_224 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_sqrtps_121.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_sqrtps_121 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_sqrtps_169.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_sqrtps_169 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_sqrtps_25.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_sqrtps_25 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_sqrtps_73.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_sqrtps_73 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_subpd_191.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_subpd_191 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_subpd_206.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_subpd_206 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_subpd_221.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_subpd_221 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_subps_118.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_subps_118 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_subps_166.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_subps_166 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_subps_22.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_subps_22 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_subps_70.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_subps_70 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vaddpd_326.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vaddpd_326 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vaddps_325.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vaddps_325 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vblendvpd_342.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vblendvpd_342 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vblendvps_341.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vblendvps_341 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcmpeqpd_337.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcmpeqpd_337 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcmpeqps_339.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcmpeqps_339 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcmpltpd_338.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcmpltpd_338 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcmpltps_340.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcmpltps_340 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcvtdq2pd_346.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcvtdq2pd_346 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcvtdq2ps_344.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcvtdq2ps_344 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcvtpd2ps_348.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcvtpd2ps_348 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcvtps2pd_347.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcvtps2pd_347 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcvttpd2dq_345.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcvttpd2dq_345 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vcvttps2dq_343.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vcvttps2dq_343 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vmaxpd_334.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vmaxpd_334 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vmaxps_333.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vmaxps_333 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vminpd_332.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vminpd_332 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vminps_331.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vminps_331 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vmulpd_328.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vmulpd_328 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vmulps_327.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vmulps_327 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vrcpps_324.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vrcpps_324 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vroundpd_336.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vroundpd_336 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vroundps_335.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vroundps_335 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vrsqrtps_323.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vrsqrtps_323 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vsqrtpd_322.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vsqrtpd_322 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vsqrtps_321.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vsqrtps_321 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vsubpd_330.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vsubpd_330 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_vsubps_329.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_vsubps_329 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
add_custom_command(
  OUTPUT    ${CMAKE_CURRENT_BINARY_DIR}/cppdrivers/simd_ops_test_op_xorps_188.cpp
  DEPENDS   ${CMAKE_CURRENT_SOURCE_DIR}/simd_ops.cpp
  COMMAND   sh ${CMAKE_CURRENT_SOURCE_DIR}/custom_test.sh test_op_xorps_188 ${CMAKE_CURRENT_SOURCE_DIR}
  COMMENT   Build custom driver for each test
  )
