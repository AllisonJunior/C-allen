/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen.h"

/* =============================================================================================== */

# include <stdio.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINTS A FORMATED DOUBLE VALUE ON THE CONSOLE // 
void putDouble ( const double _value , const unsigned int _commas )
{
    printf ( "%.*lf" , _commas , _value );
}


// PRINTS A DOUBLE ARRAY ON THE CONSOLE //
void putDouble_array ( const unsigned int _commas , const unsigned int _size , const double * _array )
{
    for ( uint kaj = 0 ; kaj < _size ; kaj ++ )
    {
       printf ( "%.*lf" , _commas , _array [ kaj ] );
       
       //* If the _array [ kaj ] isn't the last, so print ' '
       if ( kaj < _size - 1 ) printf ( " " );
    }
}


// PRINTS A DOUBLE BIDIMENSIONAL ARRAY ON THE CONSOLE //
void putDouble_barray ( const unsigned int _commas , const unsigned int _lines , const unsigned int _cols , const double _barray [ _lines ] [ _cols ] )
{
    for ( uint kaj = 0 ; kaj < _lines ; kaj ++ )
    for ( uint jak = 0 ; jak < _cols  ; jak ++ )
    {
       printf ( "%.*lf" , _commas , _barray [ kaj ] [ jak ] );
        
       //* If the _barray [ kaj ] [ jak ] isn't the last, so print ' '  
       if ( jak != _cols - 1 || kaj != _lines - 1 ) printf ( " " );
    }
}