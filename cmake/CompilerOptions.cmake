## Compiler options for gcc

add_library(cppLibrary_options INTERFACE)

## Targetting c++ 17 for compatability 
target_compile_features(cppLibrary_options INTERFACE cxx_std_17)

## Encforce extra compile time failuires for learning
target_compile_options(cppLibrary_options INTERFACE
    -Wall
    -Wextra
    -Wpedantic
    -Weffc++
    -Wconversion
    -Wsign-conversion
)

# Debug-only flags
target_compile_options(cppLibrary_options INTERFACE
    $<$<CONFIG:Debug>:-ggdb>
)

