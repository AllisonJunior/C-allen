cmake_minimum_required(VERSION 3.5)

project(allen_v2 VERSION 1.0)

include_directories(include)

file(GLOB_RECURSE GENERICS "include/*.h")
file(GLOB_RECURSE HEADERS "include/allen/*.h")
file(GLOB_RECURSE IMPLEMENTATIONS "include/impel/*.c")
file(GLOB_RECURSE SOURCES "src/*.c")

add_executable(runnable ${GENERICS} ${HEADERS} ${SOURCES} ${IMPLEMENTATIONS})

set_target_properties(runnable PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
