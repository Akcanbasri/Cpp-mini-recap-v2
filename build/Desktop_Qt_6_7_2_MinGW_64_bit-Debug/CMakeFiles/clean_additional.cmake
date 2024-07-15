# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\SecondProject_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\SecondProject_autogen.dir\\ParseCache.txt"
  "SecondProject_autogen"
  )
endif()
