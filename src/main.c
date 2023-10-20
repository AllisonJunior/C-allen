# include <stdio.h>
# include <stdlib.h>
# include <allen/arrays.h>
# include <allen/print.h>

IntArray allen; 

int main ( int argc , char * argv [] )
{  
   initArray ( &allen , 10 );
   printArray ( &allen );
   printf ("\nSize: %d\n" , allen.size );
   put_int ( allen . start );
}  