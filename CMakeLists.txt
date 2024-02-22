cmake_minimum_required(VERSION 3.10)

project(lib)

get_directory_property(LIB_PARENT_DIRECTORY PARENT_DIRECTORY)
if (NOT LIB_PARENT_DIRECTORY)
	set(LIB_STANDALONE TRUE)
endif()

# library
add_subdirectory("source/lib")

# standalone
if (LIB_STANDALONE)
	set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output/binaries)
	set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output/binaries)
	add_subdirectory("source/test")
endif()

# library and standalone
include_directories("lib")

