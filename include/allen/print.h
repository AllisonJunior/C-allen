# ifndef _ALLEN_HEADER_FOR_PRINT_EASY_CONTROL_
# define _ALLEN_HEADER_FOR_PRINT_EASY_CONTROL_
# endif

// ------------------------------------------------------------------------------------------------
// int // -----------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a int value on the console
// @param1: Receives a int value to print on the console 
// ===================================================== 
void put_int ( const int int_variable );

// =====================================================
// Func: Prints a int array ( static or dinamic ) on the console
// @param1: Receives a int value to set the array size
// @param2: Receives a int array to print on the console 
// ===================================================== 
void put_intArray ( const int array_size , const int * int_array );

// =====================================================
// Func: Prints a bidimensional int array ( static or dinamic ) on the console
// @param1: Receives a int value to set array lines
// @param2: Receives a int value to set array cols
// @param3: Receives a int array to print on the console 
// ===================================================== 
void put_intBarray ( const int array_lines , const int array_cols , const int int_barray [ array_lines ] [ array_cols ] );





// ------------------------------------------------------------------------------------------------
// char // ----------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a char value on the console n times
// @param1: Receives a char value to print on the console 
// @param2: Receives a int value to set how many times the
//          char will be printed
// ===================================================== 
void put_char ( const char char_var , const int times_loop );





// ------------------------------------------------------------------------------------------------
// float // ---------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a formated float value on the console ( commas )
// @param1: Receives a float value to print on the console 
// @param2: Receives a int value to set how many commas the 
//          print will have
// ===================================================== 
void put_float ( const float float_var , const int commas_howmany );





// ------------------------------------------------------------------------------------------------
// double // --------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a formated double value on the console ( commas )
// @param1: Receives a double value to print on the console 
// @param2: Receives a int value to set how many commas the 
//          print will have
// ===================================================== 
void put_double ( const double double_var , const int commas_howmany );





// ------------------------------------------------------------------------------------------------
// Generics // ------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Remake of printf function
// @param1: Receives a string text with support to masks
// @param2: Receives a int value to set how many commas the 
//          print will have
// =====================================================
void putf ( char * string_text , ... );

// =====================================================
// Func: Prints on the console n '\n' characters
// @param1: The amount of times that '\n' will be printed
// ===================================================== 
void putlines ( const int write_times );

// =====================================================
// Func: Prints on the console n ' ' characters
// @param1: The amount of times that ' ' will be printed
// ===================================================== 
void putspaces ( const int write_times );