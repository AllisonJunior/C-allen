# include <stdio.h>

# include "../../allen/print.h"





// Prints a float value on the console //
void put_float ( const float float_var )
{
    printf ( "%f" , float_var );
}


// Prints a formated float value on the console //
void put_ffloat ( const float float_var , const int commas_howmany )
{
    printf ( "%.*f" , commas_howmany , float_var );
}
