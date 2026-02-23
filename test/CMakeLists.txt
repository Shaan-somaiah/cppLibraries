add_executable(cppLibraries_test test.cpp)
target_link_libraries(cppLibraries_test PRIVATE cppLibraries)
add_test(NAME cppLibraries.test COMMAND cppLibraries_test)
