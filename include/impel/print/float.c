/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen/macros.h"

/* =============================================================================================== */

# include <stdio.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINTS A FORMATED FLOAT VALUE ON THE CONSOLE // 
void putFloat ( const float _value , const int _commas )
{
    printf ( "%.*f" , _commas , _value );
}


// PRINTS A FLOAT ARRAY ON THE CONSOLE //
void putFloat_array ( const int _commas , const int _size , const float * _array )
{
    for ( uint kaj = 0 ; kaj < _size ; kaj ++ )
    {
       printf ( "%.*f" , _commas , _array [ kaj ] );
       
       //* If the _array [ kaj ] isn't the last, so print ' '
       if ( kaj < _size - 1 ) printf ( " " );
    }
}


// PRINTS A FLOAT BIDIMENSIONAL ARRAY ON THE CONSOLE //
void putFloat_barray ( const int _commas , const int _lines , const int _cols , const float _barray [ _lines ] [ _cols ] )
{
    for ( uint kaj = 0 ; kaj < _lines ; kaj ++ )
    for ( uint jak = 0 ; jak < _cols  ; jak ++ )
    {
       printf ( "%.*f" , _commas , _barray [ kaj ] [ jak ] );
        
       //* If the _barray [ kaj ] [ jak ] isn't the last, so print ' '  
       if ( jak != _cols - 1 || kaj != _lines - 1 ) printf ( " " );
    }
}
