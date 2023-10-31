/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen.h"

/* =============================================================================================== */
/*
   [ PRE-PROCESSORS USED ON THIS FILE ]
   
   {
    defined name  : "inc_for"
    implementation: "for ( int kaj = 0 ; kaj < size ; kaj ++ )"
   }   
   {
    defined name  : "dbg_string"
    implementation: "printf ( "%s" , <string> );"
   }
*/
/* =============================================================================================== */

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <ctype.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINT ' ' CHARACTERS n TIMES ON THE CONSOLE // 
void put_spaces ( const int _times )
{   
    //* Error handling
    if ( _times > 0 ) 
      inc_for ( _times ) printf ( " " );
}


// PRINT '\n' CHARACTERS n TIMES ON THE CONSOLE // 
void put_lines ( const int _times )
{
    //* Error handling
    if ( _times > 0 )
      inc_for ( _times ) printf ( "\n" );
}


// PRINTS A FORMATED STRING BASED ON A FORMAT OPTION //
void put_format ( const char * _string , ... )
{   
    va_list args;
    va_start ( args , _string );

    char * handler = va_arg ( args , char * ); // dbg_string ( handler )

    if ( strstr ( handler , "inverted" ) != NULL )
      llen_InvertString ( _string );
      
    
    va_end ( args );
}




