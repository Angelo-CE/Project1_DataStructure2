# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/Project1-DataStructure2_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/Project1-DataStructure2_autogen.dir/ParseCache.txt"
  "CMakeFiles/build_server_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/build_server_autogen.dir/ParseCache.txt"
  "Project1-DataStructure2_autogen"
  "build_server_autogen"
  )
endif()
