cmake_minimum_required(VERSION 4.5 FATAL_ERROR)

set(CMAKE_CXX_MODULE_STD ON)

project(Info)

add_executable(info)

set_target_properties(info
    PROPERTIES
    LINKER_LANGUAGE CXX
    CXX_EXTENSIONS OFF
    CXX_STANDARD 23
)

target_link_libraries(info
    PUBLIC

    INTERFACE

    PRIVATE
    synodic::soul-engine
)

add_subdirectory(src)
