# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GoodHouseClient_1_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GoodHouseClient_1_autogen.dir\\ParseCache.txt"
  "GoodHouseClient_1_autogen"
  )
endif()
