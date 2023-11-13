# include <stdio.h>
# include <stdlib.h>
# include <string.h>
# include <allen/print.h>
# include <allen/props.h>

typedef struct 
{
       void ( * func ) ( void );
       char settings [ 256 ];
       void ( * food ) ( int , double );
}
Bin;

void hello ( void )
{
    printf ( "Hello World" );
}

void food ( int a , double b )
{
    printf ( "Cuscuz <%d,%.2lf>" , a , b );
}

Bin init ( void )
{
   Bin temp;
   temp . food = food;
   temp . func = hello;
   strcpy ( temp . settings , "NOT_DEFINED" );
   return temp;
}

# define initBin init ()

int main ( int argc , char * argv [] )
{
   Bin mmreader = initBin;
   mmreader.func ();
}



