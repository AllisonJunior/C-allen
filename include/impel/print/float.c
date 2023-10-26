# include <stdio.h>

# include "../../allen/print.h"





// Prints a formated float value on the console //
void put_float ( const float float_var , const int commas_howmany )
{
    printf ( "%.*f" , commas_howmany , float_var );
}


// Prints a list ( 1 , 2 , 3 , 4 ... ) of the float array on the console //
void put_floatArray ( const signed int commas_howmany , const signed int array_size , const float * restrict float_array )
{
    for ( int kaj = 0 ; kaj < array_size ; kaj ++ )
    {
       printf ( "%.*f" , commas_howmany , float_array [ kaj ] );
       
       if ( kaj < array_size - 1 )
         printf ( " " );
    }
}


// Prints a list ( 1 , 2 , 3 ... ) of a bidimensional float array //
void put_floatBarray ( const signed int commas_howmany , const signed int array_lines , const signed int array_cols , const float float_barray [ array_lines ] [ array_cols ] )
{
    for ( int kaj = 0 ; kaj < array_lines ; kaj ++ )
       for ( int jak = 0 ; jak < array_cols ; jak ++ )
       {
          printf ( "%.*f" , commas_howmany , float_barray [ kaj ] [ jak ] );

          if ( jak != array_cols - 1 || kaj != array_lines - 1 )
            printf ( " " );
       }
}
