/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen/macros.h"

/* =============================================================================================== */

# include <stdio.h>
# include <stdarg.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINT ' ' CHARACTERS n TIMES ON THE CONSOLE // 
void put_spaces ( const int _times )
{   
    //* Simple Error handling
    if ( _times > 0 ) 
      inc_for ( _times ) printf ( " " );
}


// PRINT '\n' CHARACTERS n TIMES ON THE CONSOLE // 
void put_lines ( const int _times )
{
    //* Simple Error handling
    if ( _times > 0 )
      inc_for ( _times ) printf ( "\n" );
}


// PRINTS A FORMATED STRING BASED ON A FORMAT OPTION //
void put_format ( const char * _string , ... )
{   
    va_list args;
    va_start ( args , _string );

    /*
    IMPLEMENTATION
    */

    va_end ( args );
}




