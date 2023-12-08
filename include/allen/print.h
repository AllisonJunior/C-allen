/*
LICENSE
*/



# ifndef _PRINT_
# define _PRINT_



// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// int << -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an integer value or variable to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will have its value printed to the console.
>=================================================================================================================================================================================================<
$*/
void putInt ( const int _value );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an integer array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will set the array size.
 @param-2: A array of type 'int' that will have its values printed to the console.
>=================================================================================================================================================================================================<
$*/
void putInt_array ( const int _size , const int * _array );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an integer bidimensional array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will set how many lines the b.array have.
 @param-2: A variable of type 'int' that will set how many columns the b.array have.
 @param-3: A bidimensional array of type 'int' that will have its values printed to the console.
>=================================================================================================================================================================================================<
$*/
void putInt_barray ( const int _lines , const int _cols , const int _barray [ _lines ] [ _cols ] );





// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// char << ----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an char value or variable to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'char' that will have it's value printed on the console.
 @param-2: A variable of type 'int' that will set how many times the variable defined before will be printed on the console.
>=================================================================================================================================================================================================< 
$*/
void putChar ( const char _value , const int _times );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an char array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will set the size of the array.
 @param-2: A array of type 'char' that will have it's value printed on the console.
>=================================================================================================================================================================================================< 
$*/
void putChar_array ( const int _size , const char * _array );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an bidimensional char array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will set how many lines the b.array have.
 @param-2: A variable of type 'int' that will set how many columns the b.array have.
 @param-3: A bidimensional array of type 'char' that will have it's value printed on the console.
>=================================================================================================================================================================================================< 
$*/
void putChar_barray ( const int _lines , const int _cols , const char _barray [ _lines ] [ _cols ] );



// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// float << ---------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an formated ( how many commas ) float value or variable to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'float' that will have it's value printed on the console.
 @param-2: A variable of type 'int' that will set how many %.*f commas will be printed.
>=================================================================================================================================================================================================< 
$*/
void putFloat ( const float _value , const int _commas );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an float array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will set how many commas will be printed.
 @param-2: A variable of type 'int' that will set the array size.
 @param-3: A array of type 'float' that will have its values printed to the console.
>=================================================================================================================================================================================================<
$*/
void putFloat_array ( const int _commas , const int _size , const float * _array );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an double bidimensional array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will set how many commas will be printed.
 @param-2: A variable of type 'int' that will set how many lines the b.array have.
 @param-3: A variable of type 'int' that will set how many columns the b.array have.
 @param-4: A bidimensional array of type 'float' that will have its values printed to the console.
>=================================================================================================================================================================================================<
$*/
void putFloat_barray ( const int _commas , const int _lines , const int _cols , const float _barray [ _lines ] [ _cols ] );





// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// double << --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an formated ( how many commas ) double value or variable to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'double' that will have it's value printed on the console.
 @param-2: A variable of type 'int' that will set how many %.*f commas will be printed.
>=================================================================================================================================================================================================< 
$*/
void putDouble ( const double _value , const int _commas );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an double array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will set how many commas will be printed.
 @param-2: A variable of type 'int' that will set the array size.
 @param-3: A array of type 'double' that will have its values printed to the console.
>=================================================================================================================================================================================================<
$*/
void putDouble_array ( const int _commas , const int _size , const double * _array );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints an double bidimensional array to the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: A variable of type 'int' that will set how many commas will be printed.
 @param-2: A variable of type 'int' that will set how many lines the b.array have.
 @param-3: A variable of type 'int' that will set how many columns the b.array have.
 @param-4: A bidimensional array of type 'double' that will have its values printed to the console.
>=================================================================================================================================================================================================<
$*/
void putDouble_barray ( const int _commas , const int _lines , const int _cols , const double _barray [ _lines ] [ _cols ] );





// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// generics << ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
// ------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints ' ' character n times on the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: Int value that will set how many ' ' will be printed on the console.
>=================================================================================================================================================================================================<
$*/
void put_spaces ( const int _times );

/*
>=================================================================================================================================================================================================<
 Function Description: "Prints '\n' character n times on the console."
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: Int value that will set how many '\n' will be printed on the console.
>=================================================================================================================================================================================================<
$*/
void put_lines ( const int _times );

/*
>=================================================================================================================================================================================================<
 Function Description: "Printf function with some reorganizations and overall buff ( not only the rework of it's use but the print of new data types of this library will be included )"
 - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
 @param-1: String format value that will be printed on the console.
 @param-2: <optional> Args ( char * , int , double etc. ) used like printf.
>=================================================================================================================================================================================================<
$*/
int putf ( const char * _format , ... );



# endif