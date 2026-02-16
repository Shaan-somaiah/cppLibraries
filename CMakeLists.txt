## TOP LEVEL CMAKE

cmake_minimum_required(VERSION 3.20)

project(learnCpp
		LANGUAGES CXX
)

include(cmake/CompilerOptions.cmake)
add_subdirectory(src)
