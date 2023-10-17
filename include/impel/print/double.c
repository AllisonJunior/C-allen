# include <stdio.h>

# include "../../allen/print.h"





// Prints a double value on the console //
void put_double ( const double double_var )
{
    printf ( "%lf" , double_var );
}


// Prints a formated double value on the console //
void put_fdouble ( const double double_var , int commas_howmany )
{
    printf ( "%.*lf" , commas_howmany , double_var );
}