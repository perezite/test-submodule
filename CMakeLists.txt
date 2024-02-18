cmake_minimum_required(VERSION 3.10)

project(lib)


get_directory_property(LIB_PARENT_DIRECTORY PARENT_DIRECTORY)
if (NOT LIB_PARENT_DIRECTORY)
	set(LIB_STANDALONE TRUE)
endif()

if (LIB_STANDALONE)
	# Uncomment, as soon as it's used
	# set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output/binaries)
	# set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/output/binaries)
endif()

add_library(lib STATIC "source/lib/lib.h" "source/lib/lib.cpp")
