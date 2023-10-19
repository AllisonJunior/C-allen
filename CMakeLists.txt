cmake_minimum_required ( VERSION 3.5 )

project ( allen_v2 VERSION 1.0 ) 

include_directories ( include )

set ( SOURCES
             # ALLEN #
             include/allen.h             

             # INPUT #
             include/allen/input.h 

             # PRINT #
             include/allen/print.h
             include/impel/print/int.c
             include/impel/print/float.c
             include/impel/print/double.c
             include/impel/print/char.c

             # SYSTEM #
             include/allen/system.h
             include/impel/system/sys.c

             # ARRAY #
             include/allen/arrays.h
             include/impel/arrays/int_array.c

             # Your project files here #
             src/main.c )

add_executable ( runnable ${SOURCES} ) 

set_target_properties ( runnable PROPERTIES RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin )

