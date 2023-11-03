/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen/macros.h"

/* =============================================================================================== */

# include <stdio.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINTS A INT VALUE ON THE CONSOLE //
void putInt ( const int _value )
{  
    printf ( "%d" , _value ); 
}


// PRINTS A INT ARRAY ON THE CONSOLE //
void putInt_array ( const int _size , const int * _array )
{    
    for ( uint kaj = 0 ; kaj < _size ; kaj ++ )
    {  
       printf ( "%d" , _array [ kaj ] );
       
       //* If the _array [ kaj ] isn't the last, so print ' ' 
       if ( kaj < _size - 1 ) printf ( " " );   
    }      
}


// PRINTS A INT BIDIMENSIONAL ARRAY ON THE CONSOLE //
void putInt_barray ( const int _lines , const int _cols , const int _barray [ _lines ] [ _cols ] )
{   
    for ( uint kaj = 0 ; kaj < _lines ; kaj ++ )
    for ( uint jak = 0 ; jak < _cols  ; jak ++ )
    {
       printf ( "%d" , _barray [ kaj ] [ jak ] );
       
       //* If the _barray [ kaj ] [ jak ] isn't the last, so print ' ' 
       if ( jak != _cols - 1 || kaj != _lines - 1 ) printf (" ");
    }
}