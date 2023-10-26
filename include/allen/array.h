# ifndef _ALLEN_HEADER_FOR_THE_ARRAY_USAGE_
# define _ALLEN_HEADER_FOR_THE_ARRAY_USAGE_
# endif

// Integer Dynamic Array //
typedef struct 
{
       int * list_d;
       int start;
       int end;
       int size;
}
IntArray;

// array_int
// array_float
// array_char
// array_double
// array_string

// barray_int
// barray_float


// 
void initArray ( IntArray * int_array , int size );
void printArray ( IntArray * int_array );