## Core cmake lists

add_library(cppLibrary_core)

## gcc options
target_link_libraries(cppLibrary_core PUBLIC cppLibrary_options)

## Public includes
target_include_directories(cppLibrary_core PUBLIC ${PROJECT_SOURCE_DIR}/include)

## src subdirectories 
add_subdirectory(logger)

## Binary built
add_executable(main main.cpp)
target_link_libraries(main PRIVATE cppLibrary_core)

