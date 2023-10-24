# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <assert.h>

# include "../../allen/print.h"





// Prints a formated string based on the second optional argument
void putf ( char * string_text , ... )
{   
    va_list args;
    va_start ( args , string_text );
    
    char * TEXT_BUFFER = va_arg ( args , char * );
    // if ( ( TEXT_BUFFER == NULL ) && ( strcmp ( TEXT_BUFFER , "" ) != 0 ) )
    //  return;

    // inverted
    // putf::password(****)
    
    va_end ( args );
    printf ( "%s" , string_text );
}



// Prints on the console '\n' characters the n designed times // 
void putlines ( const int write_times )
{
    for ( int kaj = 0 ; kaj < write_times ; kaj ++ )
       printf ( "\n" );
}


// Prints on the console ' ' characters the n designed times // 
void putspaces ( const int write_times )
{
    for ( int kaj = 0 ; kaj < write_times ; kaj ++ )
       printf ( " " );
}
