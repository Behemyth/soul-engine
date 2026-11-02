cmake_minimum_required(VERSION 4.5 FATAL_ERROR)

set(CMAKE_CXX_MODULE_STD ON)

project(Viewer)

add_executable(viewer)

set_target_properties(viewer
    PROPERTIES
    LINKER_LANGUAGE CXX
    CXX_EXTENSIONS OFF
    CXX_STANDARD 23
)

target_link_libraries(viewer
    PUBLIC

    INTERFACE

    PRIVATE
    synodic::soul-engine
)

if(WIN32)
    # Use CONSOLE subsystem for debugging output
    set_target_properties(viewer PROPERTIES LINK_FLAGS "/SUBSYSTEM:CONSOLE")
endif()

add_subdirectory(src)

# Resolve example assets independently of the working directory
cmake_path(SET VIEWER_ASSET_DIR NORMALIZE "${CMAKE_SOURCE_DIR}/resources/assets")
target_compile_definitions(viewer PRIVATE
    SOUL_ASSET_DIR="${VIEWER_ASSET_DIR}"
)
