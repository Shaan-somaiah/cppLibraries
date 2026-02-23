cmake_minimum_required(VERSION 3.20)
project(cppLibraries VERSION 0.1.0 LANGUAGES CXX)

include(cmake/CompilerOptions.cmake)
add_subdirectory(src)

option(CPP_LIBRARIES_BUILD_TESTS "Build cppLibraries tests" ON)

if(CPP_LIBRARIES_BUILD_TESTS AND CMAKE_BUILD_TYPE STREQUAL "Debug")
  enable_testing()
  add_subdirectory(test)
endif()
