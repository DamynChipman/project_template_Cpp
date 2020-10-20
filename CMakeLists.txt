# CMake Version
cmake_minimum_required(VERSION 3.1)

# Project Name
project(template)

# Configure Input CMakeLists.txt for GTest
configure_file(CMakeLists.txt.in googletest-download/CMakeLists.txt)
execute_process(COMMAND ${CMAKE_COMMAND} -G "${CMAKE_GENERATOR}" . WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
execute_process(COMMAND ${CMAKE_COMMAND} --build . WORKING_DIRECTORY ${CMAKE_BINARY_DIR}/googletest-download )
add_subdirectory(${CMAKE_BINARY_DIR}/googletest-src ${CMAKE_BINARY_DIR}/googletest-build)

# Enable Testing with GTest
enable_testing()
add_subdirectory(test)

# Include Directory (Class Headers)
include_directories("${PROJECT_SOURCE_DIR}/include")

# Create File for Source Files
file(GLOB sources "${PROJECT_SOURCE_DIR}/src/*.cpp")

# Create main Executable
add_executable(main ${sources})
