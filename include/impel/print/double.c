# include <stdio.h>

# include "../../allen/print.h"





// Prints a formated double value on the console //
void put_double ( const double double_var , int commas_howmany )
{
    printf ( "%.*lf" , commas_howmany , double_var );
}


// Prints a list ( 1 , 2 , 3 , 4 ... ) of the double array on the console //
void put_doubleArray ( const signed int commas_howmany , const signed int array_size , const double * restrict double_array )
{
    for ( int kaj = 0 ; kaj < array_size ; kaj ++ )
    {
       printf ( "%.*lf" , commas_howmany , double_array [ kaj ] );
       
       if ( kaj < array_size - 1 )
         printf ( " " );
    }
}


// Prints a list ( 1 , 2 , 3 ... ) of a bidimensional double array //
void put_doubleBarray ( const signed int commas_howmany , const signed int array_lines , const signed int array_cols , const double double_barray [ array_lines ] [ array_cols ] )
{
    for ( int kaj = 0 ; kaj < array_lines ; kaj ++ )
       for ( int jak = 0 ; jak < array_cols ; jak ++ )
       {
          printf ( "%.*lf" , commas_howmany , double_barray [ kaj ] [ jak ] );

          if ( jak != array_cols - 1 || kaj != array_lines - 1 )
            printf ( " " );
       }
}
