/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen/macros.h"

/* =============================================================================================== */

# include <stdio.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINTS A CHAR VALUE ON THE CONSOLE 'n' TIMES //  
void putChar ( const char _value , const int _times )
{
    inc_for ( _times )
           printf ( "%c" , _value );
}


// PRINTS A CHAR ARRAY ON THE CONSOLE //
void putChar_array ( const int _size , const char * _array )
{
    for ( uint kaj = 0 ; kaj < _size ; kaj ++ )
    {
       printf ( "%c" , _array [ kaj ] );
       
       //* If the _array [ kaj ] isn't the last, so print ' '
       if ( kaj < _size - 1 ) printf ( " " );
    }
}


// PRINTS A BIDIMENSIONAL CHAR ARRAY ON THE CONSOLE //
void putChar_barray ( const int _lines , const int _cols , const char _barray [ _lines ] [ _cols ] )
{
    for ( uint kaj = 0 ; kaj < _lines ; kaj ++ )
    for ( uint jak = 0 ; jak < _cols  ; jak ++ )
    {
       printf ( "%c" , _barray [ kaj ] [ jak ] );
       
       //* If the _barray [ kaj ] [ jak ] isn't the last, so print ' ' 
       if ( jak != _cols - 1 || kaj != _lines - 1 ) printf (" ");
    }
}