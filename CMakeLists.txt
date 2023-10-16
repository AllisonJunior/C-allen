cmake_minimum_required ( VERSION 3.5 )

project ( allen_v2 VERSION 1.0 ) 

include_directories ( allen_lib )

set ( SOURCES
             # ALLEN #
             allen_lib/allen.h             

             # INPUT #
             allen_lib/allen/input.h 

             # PRINT #
             allen_lib/allen/print.h

             # SYSTEM #
             allen_lib/allen/system.h
             allen_lib/impel/system/sys.c
             
             # Your project files here #
             src/main.c )

add_executable ( runnable ${SOURCES} ) 

set_target_properties ( runnable PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )

