# include <stdio.h>
# include <stdlib.h>

# include "../../allen/array.h"

void initArray ( IntArray * int_array , int size )
{   
    int pos = 0;
    
    int_array -> size = size;
    int_array -> start = 0;
    int_array -> end = 0;    
    int_array -> list_d = ( int * ) malloc ( sizeof ( int ) * size );

    while ( pos < size )
    {
         int_array -> list_d [ pos ] = 0;
         pos ++;
    }  
}

void printArray ( IntArray * int_array )
{
    for ( int kaj = 0 ; kaj < int_array -> size ; kaj ++ )
       printf ( "%d " , int_array -> list_d [ kaj ] );
}