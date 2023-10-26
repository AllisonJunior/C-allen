# ifndef _ALLEN_PRINT_
# define _ALLEN_PRINT_
# endif

// ------------------------------------------------------------------------------------------------
// int // -----------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a int value on the console
// @param1: Receives a int value to print on the console 
// ===================================================== 
void put_int ( const signed int int_variable );

// =====================================================
// Func: Prints a int array ( static or dinamic ) on the console
// @param1: Receives a int value to set the array size
// @param2: Receives a int array to print on the console 
// ===================================================== 
void put_intArray ( const signed int array_size , const int * restrict int_array );

// =====================================================
// Func: Prints a bidimensional int array ( static or dinamic ) on the console
// @param1: Receives a int value to set array lines
// @param2: Receives a int value to set array cols
// @param3: Receives a int array to print on the console 
// ===================================================== 
void put_intBarray ( const signed int array_lines , const signed int array_cols , const int int_barray [ array_lines ] [ array_cols ] );





// ------------------------------------------------------------------------------------------------
// char // ----------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a char value on the console n times
// @param1: Receives a char value to print on the console 
// @param2: Receives a int value to set how many times the
//          char will be printed
// ===================================================== 
void put_char ( const char char_var , const signed int times_loop );





// ------------------------------------------------------------------------------------------------
// float // ---------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a formated float value on the console ( commas )
// @param1: Receives a float value to print on the console 
// @param2: Receives a int value to set how many commas the 
//          print will have
// ===================================================== 
void put_float ( const float float_var , const signed int commas_howmany );

// =====================================================
// Func: Prints a float array ( static or dinamic ) on the console
// @param1: Receives a int value to set how many commas the 
//          print will have
// @param2: Receives a int value to set the array size 
// @param3: Receives a float array to be printed on the console
// ===================================================== 
void put_floatArray ( const signed int commas_howmany , const signed int array_size , const float * restrict float_array );

// =====================================================
// Func: Prints a bidimensional float array ( static or dinamic ) on the console
// @param1: Receives a int value to set how many commas the 
//          print will have
// @param2: Receives a int value to set how many lines exists on the array
// @param3: Receives a int value to set how many cols exists on the array
// @param4: Receives a bidimensional float array to be printed on the console
// ===================================================== 
void put_floatBarray ( const signed int commas_howmany , const signed int array_lines , const signed int array_cols , const float float_barray [ array_lines ] [ array_cols ] );





// ------------------------------------------------------------------------------------------------
// double // --------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a formated double value on the console ( commas )
// @param1: Receives a double value to print on the console 
// @param2: Receives a int value to set how many commas the 
//          print will have
// ===================================================== 
void put_double ( const double double_var , const signed int commas_howmany );

// =====================================================
// Func: Prints a double array ( static or dinamic ) on the console
// @param1: Receives a int value to set how many commas the 
//          print will have
// @param2: Receives a int value to set the array size 
// @param3: Receives a double array to be printed on the console
// ===================================================== 
void put_doubleArray ( const signed int commas_howmany , const signed int array_size , const double * restrict double_array );

// =====================================================
// Func: Prints a bidimensional double array ( static or dinamic ) on the console
// @param1: Receives a int value to set how many commas the 
//          print will have
// @param2: Receives a int value to set how many lines exists on the array
// @param3: Receives a int value to set how many cols exists on the array
// @param4: Receives a bidimensional double array to be printed on the console
// ===================================================== 
void put_doubleBarray ( const signed int commas_howmany , const signed int array_lines , const signed int array_cols , const double double_barray [ array_lines ] [ array_cols ] );





// ------------------------------------------------------------------------------------------------
// Generics // ------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a formated string based on the second optional
//       argument
// @param1: Receives a string text
// @param2 <OPTIONAL>: Receives a format option ( string )
// normal: [ inverted , uppercase , lowercase ]
// format: [ format::password()() ]
// =====================================================
void putf ( const char * restrict string_text , ... );

// =====================================================
// Func: Prints on the console n '\n' characters
// @param1: The amount of times that '\n' will be printed
// ===================================================== 
void putlines ( const signed int write_times );

// =====================================================
// Func: Prints on the console n ' ' characters
// @param1: The amount of times that ' ' will be printed
// ===================================================== 
void putspaces ( const signed int write_times );