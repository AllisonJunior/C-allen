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
    char * init , * endt;

    while ( * _string )
    {
         if ( * _string == '@' )
         {
           _string ++;

           switch ( * _string )
           {     
                 //* Default Data Types 
                 case 'i': 
                          printf ( "%d" , va_arg ( args , int ) );     
                 break;

                 case 'd':
                          init = strchr ( _string , '<' );
                          endt = strchr ( _string , '>' );

                          if ( ( init != NULL ) && ( endt != NULL ) )
                          {
                            size_t length = endt - init - 1;
                            char format [ length + 1 ];
                            strncpy ( format , init + 1 , length );
                            format [ length ] = '\0';

                            int commas = atoi ( format );
                            printf ( "%.*lf" , commas , va_arg ( args , double ) ); 

                            _string += length + 2;
                          }
                          else 
                              printf ( "%lf" , va_arg ( args , double ) );
                 break;

                 case 'f': 
                          printf ( "%f" , va_arg ( args , double ) );  
                 break;

                 case 'c': 
                          printf ( "%c" , va_arg ( args , int ) );     
                 break;

                 case 's': 
                          printf ( "%s" , va_arg ( args , char * ) );  
                 break;

                 //* Random
                 case '@': printf ( "@" ); break;
                 default: printf ( "@" );  break;
           }
         }
         else printf ( "%c" , * _string );
         
         _string ++;
    }
     
    va_end ( args );
}




