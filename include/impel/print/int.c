# include <stdio.h>

# include "../../allen/print.h"





// Prints a int value on the console //  
void put_int ( const int int_variable ) 
{ 
    printf ( "%d" , int_variable ); 
}


// Prints a list ( 1 , 2 , 3 ... ) of the int array on the console //
void put_intArray ( const int array_size , const int * restrict int_array )
{
    for ( int kaj = 0 ; kaj < array_size ; kaj ++ )
    {
       printf ( "%d" , int_array [ kaj ] );
       
       if ( kaj < array_size - 1 ) 
         printf ( " " );   
    }
}


// Prints a list ( 1 , 2 , 3 ... ) of a bidimensional array //
void put_intBarray ( const int array_lines , const int array_cols , const int int_barray [ array_lines ] [ array_cols ] )
{   
    for ( int kaj = 0 ; kaj < array_lines ; kaj ++ )
       for ( int jak = 0 ; jak < array_cols ; jak ++ )
       {
          printf ( "%d" , int_barray [ kaj ] [ jak ] );
          
          if ( jak != array_cols - 1 || kaj != array_lines - 1 )
            printf (" ");
       }
}