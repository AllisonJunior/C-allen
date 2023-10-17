# include <stdio.h>

# include "../../allen/print.h"





// Prints a char value on the console //  
void put_char ( const char char_var )
{ 
    printf ( "%c" , char_var ); 
}


// Prints char values on the console n times //  
void put_chars ( const char char_var , const int times_loop )
{
    for ( int kaj = 0 ; kaj < times_loop ; kaj ++ )
       printf ( "%c" , char_var );
}