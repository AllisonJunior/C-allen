# include <stdio.h>

# include "../../allen/print.h"





// Prints a int value on the console //  
void put_int ( const int int_var ) 
{ 
    printf ( "%d" , int_var ); 
}


// Prints a list ( 1 , 2 , 3 ... ) of the int array on the console //
void put_int_array ( const int * int_array_var , const int array_size )
{
    for ( int kaj = 0 ; kaj < array_size ; kaj ++ )
    {
       printf ( "%d" , int_array_var [ kaj ] );
       if ( kaj < array_size - 1 ) 
         printf ( " " );   
    }
}


// Prints a list ( 1 , 2 , 3 ... ) of a bidimensional array //
void put_int_barray ( const int array_lines , const int array_cols , const int int_barray_var [ array_lines ] [ array_cols ] )
{   
    for ( int kaj = 0 ; kaj < array_lines ; kaj ++ )
       for ( int jak = 0 ; jak < array_cols ; jak ++ )
       {
          printf ( "%d" , int_barray_var [ kaj ] [ jak ] );
          if ( jak != array_cols - 1 || kaj != array_lines - 1 )
            printf (" ");
       }
}