add_library(cppLibraries)

target_link_libraries(cppLibraries PUBLIC cppLibrary_options)

target_include_directories(cppLibraries
  PUBLIC
    $<BUILD_INTERFACE:${PROJECT_SOURCE_DIR}/include>
    $<INSTALL_INTERFACE:include>
)

add_subdirectory(logger)
