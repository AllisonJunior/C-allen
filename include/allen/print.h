/*
LICENSE
*/



# ifndef _PRINT_
# define _PRINT_



// ------------------------------------------------------------------------------------------------
// int << -----------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

/*
>=================================================================================================<
 Function Description: "Prints an integer value or variable to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 @param-1: A variable of type 'int' that will have its value printed to the console.
>=================================================================================================< 
$*/
void putInt ( const signed int _value );

/*
>=================================================================================================<
 Function Description: "Prints an integer array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 @param-1: A variable of type 'int' that will set the array size.
 @param-2: A array of type 'int' that will have its values printed to the console.
>=================================================================================================< 
$*/
void putInt_array ( const unsigned int _size , const signed int * _array );

/*
>=================================================================================================<
 Function Description: "Prints an integer bidimensional array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 @param-1: A variable of type 'int' that will set how many lines the b.array have.
 @param-2: A variable of type 'int' that will set how many columns the b.array have.
 @param-3: A bidimensional array of type 'int' that will have its values printed to the console.
>=================================================================================================< 
$*/
void putInt_barray ( const unsigned int _lines , const unsigned int _cols , const int _barray [ _lines ] [ _cols ] );



// ------------------------------------------------------------------------------------------------
// char << ----------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

/*
>=================================================================================================<
 Function Description: "Prints an integer bidimensional array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
 @param-1: A variable of type 'int' that will set how many lines the b.array have.
 @param-2: A variable of type 'int' that will set how many columns the b.array have.
 @param-3: A bidimensional array of type 'int' that will have its values printed to the console.
>=================================================================================================< 
$*/
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

// =====================================================
// Func: Prints a float array ( static or dinamic ) on the console
// @param1: Receives a int value to set how many commas the 
//          print will have
// @param2: Receives a int value to set the array size 
// @param3: Receives a float array to be printed on the console
// ===================================================== 
void put_floatArray ( const int commas_howmany , const int array_size , const float * restrict float_array );

// =====================================================
// Func: Prints a bidimensional float array ( static or dinamic ) on the console
// @param1: Receives a int value to set how many commas the 
//          print will have
// @param2: Receives a int value to set how many lines exists on the array
// @param3: Receives a int value to set how many cols exists on the array
// @param4: Receives a bidimensional float array to be printed on the console
// ===================================================== 
void put_floatBarray ( const int commas_howmany , const int array_lines , const int array_cols , const float float_barray [ array_lines ] [ array_cols ] );





// ------------------------------------------------------------------------------------------------
// double << --------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------

// =====================================================
// Func: Prints a formated double value on the console ( commas )
// @param1: Receives a double value to print on the console 
// @param2: Receives a int value to set how many commas the 
//          print will have
// ===================================================== 
void put_double ( const double double_var , const int commas_howmany );

// =====================================================
// Func: Prints a double array ( static or dinamic ) on the console
// @param1: Receives a int value to set how many commas the 
//          print will have
// @param2: Receives a int value to set the array size 
// @param3: Receives a double array to be printed on the console
// ===================================================== 
void put_doubleArray ( const int commas_howmany , const int array_size , const double * double_array );

// =====================================================
// Func: Prints a bidimensional double array ( static or dinamic ) on the console
// @param1: Receives a int value to set how many commas the 
//          print will have
// @param2: Receives a int value to set how many lines exists on the array
// @param3: Receives a int value to set how many cols exists on the array
// @param4: Receives a bidimensional double array to be printed on the console
// ===================================================== 
void put_doubleBarray ( const int commas_howmany , const int array_lines , const int array_cols , const double double_barray [ array_lines ] [ array_cols ] );





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
void putf ( const char * string_text , ... );

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



# endif