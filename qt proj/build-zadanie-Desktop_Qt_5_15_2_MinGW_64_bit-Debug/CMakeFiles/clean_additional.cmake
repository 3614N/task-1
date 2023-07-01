# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\zadanie_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\zadanie_autogen.dir\\ParseCache.txt"
  "zadanie_autogen"
  )
endif()
