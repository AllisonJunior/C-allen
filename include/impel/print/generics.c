/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen/props.h"
# include "../../allen/simple.h"

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


// REDEFINED PRINTF WITH NEW DATA TYPES //
void putf ( const char * _string , ... )
{   
    va_list args;
    va_start ( args , _string ); 

    //* Chars *, used for check for '<>' 
    char * init , * endt;

    //* Char Print Loop 
    while ( * _string )
    {    
         //* Checking if the '@' was writed
         if ( * _string == '@' )
         {
           _string ++;

           switch ( * _string )
           {     
                 //* @i <- int //
                 case 'i':
                          //* Check the Parameters
                          init = strchr ( _string , '<' );
                          endt = strchr ( _string , '>' );
                          

                          //* Check if they are '!=' of NULL
                          if ( ( init != NULL ) && ( endt != NULL ) && ( init < endt ) )
                          {
                            init ++; 

                            //* Set some support variables 
                            int length = endt - init , fill_with_zeros = 0 , count = 0;
                            char buffer [ length + 1 ] , value [ length + 1 ];
                            
                            //* Copy to 'buffer' the text within the '<>'
                            strncpy ( buffer , init , length );                            
                            buffer [ length ] = '\0';
                            _string = endt;

                            //* Writes on 'value' all the integer values  
                            for ( int kaj = 0 ; kaj < length ; kaj ++ )
                               if ( ( buffer [ kaj ] >= '0' ) && ( buffer [ kaj ] <= '9' ) || buffer [ kaj ] == '-' )
                               {
                                 value [ count ] = buffer [ kaj ];
                                 count ++;
                               }
                            value [ count ] = '\0';   

                            //* Checks on 'buffer' if 'z' exists 
                            for ( int kaj = 0 ; kaj < length ; kaj ++ )                       
                               if ( buffer [ kaj ] == 'z' ) { fill_with_zeros = 1; break; }
                            
                            //* Print normal spacement or zero fillment
                            if ( fill_with_zeros == 0 ) printf ( "%*d" , atoi ( value ) , va_arg ( args , int ) );
                            else                        printf ( "%0*d" , atoi ( value ) , va_arg ( args , int ) );
                          }
                          else 
                              printf ( "%d" , va_arg ( args , int ) );     
                 break;
                 

                 //* @d <- double //
                 case 'd':
                          //* Check if "<>" exists
                          init = strchr ( _string , '<' );
                          endt = strchr ( _string , '>' );
                          

                          //* Process of checking the argument
                          if ( ( init != NULL ) && ( endt != NULL ) && ( init < endt ) )
                          {
                            init ++; 

                            int length = endt - init;
                            char buffer [ length + 1 ];

                            strncpy ( buffer , init , length );

                            buffer [ length ] = '\0';
                            _string = endt;

                            printf ( "%.*lf" , atoi ( buffer ) , va_arg ( args , double ) );
                          }
                          else 
                              printf ( "%lf" , va_arg ( args , double ) );                    
                 break;
                

                 //* @f <- float //
                 case 'f':
                          //* Check if "<>" exists
                          init = strchr ( _string , '<' );
                          endt = strchr ( _string , '>' );
                          

                          //* Process of checking the argument
                          if ( ( init != NULL ) && ( endt != NULL ) && ( init < endt ) )
                          {
                            init ++; 

                            int length = endt - init;
                            char buffer [ length + 1 ];

                            strncpy ( buffer , init , length ); 
                            
                            buffer [ length ] = '\0';
                            _string = endt;

                            printf ( "%.*f" , atoi ( buffer ) , va_arg ( args , double ) );
                          }
                          else 
                              printf ( "%f" , va_arg ( args , double ) );
                 break;
                 

                 //* @c <- char //
                 case 'c': 
                          // Write the 'char' value
                          printf ( "%c" , va_arg ( args , int ) );     
                 break;
                 

                 //* @s <- char * ( string ) //
                 case 's': 
                          // Write the 'string' value
                          printf ( "%s" , va_arg ( args , char * ) );  
                 break;
                 

                 //* @e <- exponential floating-point number //
                 case 'e': 
                 break;


                 //* @o <- octal number // 
                 case 'o': 
                 break; 


                 //* @x <- hexadecimal number // 
                 case 'x': 
                 break;                 
        

                 //* Random //
                 case '@': printf ( "@" ); break;
                 default: printf ( "@" );  break;
           }
         }
         
         //* ASCII FIX ON WINDOWS 
         # if defined ( _WIN32 ) || defined ( _WIN64 )

         else if ( * _string == -61 )
         {
             * _string ++;
             printf ( "%c" , check_ascii_chars ( * _string ) );
         }
          	  
         # endif 
        
          
         //* If the '%c' is not '@' print anyway
         else printf ( "%c" , * _string );
         
         
         _string ++;
    }
     
    va_end ( args );
}


