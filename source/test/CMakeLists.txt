include_directories(${CMAKE_CURRENT_SOURCE_DIR}/../lib)

add_executable(test "main.cpp")

target_link_libraries(test lib)