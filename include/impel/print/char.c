# include <stdio.h>

# include "../../allen/print.h"





// Prints char values on the console n times //  
void put_char ( const char char_var , const int times_loop )
{
    for ( int kaj = 0 ; kaj < times_loop ; kaj ++ )
       printf ( "%c" , char_var );
}