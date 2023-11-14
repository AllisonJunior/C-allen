/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen/props.h"

/* =============================================================================================== */

# include <stdio.h>
# include <stdarg.h>
# include <string.h>
# include <stdlib.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINT ' ' CHARACTERS n TIMES ON THE CONSOLE // 
void put_spaces ( const int _times )
{   
    //* Simple Error handling
    if ( _times > 0 ) 
      inc_for ( _times ) printf ( " " );
}


// PRINT '\n' CHARACTERS n TIMES ON THE CONSOLE // 
void put_lines ( const int _times )
{
    //* Simple Error handling
    if ( _times > 0 )
      inc_for ( _times ) printf ( "\n" );
}


// PRINTF FUNCTION BUFFED WITH NEW DATA TYPES AND FORMATING OPTIONS //
void putf ( const char * _string , ... )
{   
    va_list args;
    va_start ( args , _string ); 

    int count = 0;

    while ( * _string )
    {
         if ( * _string == '@' )
         {
           _string ++;

           switch ( * _string )
           {     
                 //* int
                 case 'i': 
                          // Write the 'int' value
                          printf ( "%d" , va_arg ( args , int ) );     
                 break;
                 
                 //* double
                 case 'd':
                          // Write the 'double' value
                          printf ( "%lf" , va_arg ( args , double ) );
                 break;
                
                 //* float
                 case 'f': 
                          // Write the 'float' value
                          printf ( "%f" , va_arg ( args , double ) );  
                 break;
                 
                 //* char
                 case 'c': 
                          // Write the 'char' value
                          printf ( "%c" , va_arg ( args , int ) );     
                 break;
                 
                 //* string ( char * )
                 case 's': 
                          // Write the 'string' value
                          printf ( "%s" , va_arg ( args , char * ) );  
                 break;

                 //* Random
                 case '@': printf ( "@" ); break;
                 default: printf ( "@" );  break;
           }
         }
         // else printf ( "%c" , * _string );
         
         _string ++;
    }
     
    va_end ( args );
}




