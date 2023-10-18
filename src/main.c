# include <stdio.h>
# include <stdlib.h>

int array_size ( int * array ) 
{
   int element = sizeof ( array [ 0 ] );
   int total = sizeof ( array [] );
   return total / element;
}

int main ( void )
{ 
   int array [] = { 10 , 20 , 30 , 40 , 50 , 60 , 90 };
   int tamanho = array_size ( array );
   printf("O tamanho do array é %d.\n", tamanho);
}  