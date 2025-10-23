cmake_minimum_required(VERSION 3.16)

project(hello-cpp-ci
  VERSION 0.1.0
  DESCRIPTION "Hello World with CI, lint, and Doxygen"
  LANGUAGES CXX)

# Require modern C++
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Enable CTest (adds BUILD_TESTING option and 'ctest')
include(CTest)

# Headers
include_directories(${CMAKE_SOURCE_DIR}/include)

# Main executable
add_executable(hello src/main.cpp)

# Simple test executable (no external framework)
add_executable(greeter_test tests/greeter_test.cpp)
if (BUILD_TESTING)
  add_test(NAME greeter_test COMMAND greeter_test)
endif()
