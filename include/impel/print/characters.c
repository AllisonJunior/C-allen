/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen.h"

/* =============================================================================================== */

# include <stdio.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINTS A CHAR VALUE ON THE CONSOLE 'n' TIMES //  
void putChar ( const char _value , const unsigned int _times )
{
    for ( uint kaj = 0 ; kaj < _times ; kaj ++ )
       printf ( "%c" , _value );
}