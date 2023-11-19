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

/* =============================================================================================== */

static char convert_ascii ( const char check );

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
                          printf ( "%e" , va_arg ( args , double ) );
                 break;


                 //* @o <- octal number // 
                 case 'o':
                          printf ( "%o" , va_arg ( args , double ) );
                 break; 


                 //* @x <- hexadecimal number // 
                 case 'x': 
                 break;                 
        

                 //* Random //
                 case '@': printf ( "@" ); break;
                 default:  printf ( "%c" , * _string );  break;
           }
         }
         
         //* ASCII FIX ON WINDOWS 
         # if defined ( _WIN32 ) || defined ( _WIN64 )

          else if ( * _string == -61 )
          {
              * _string ++;
              printf ( "%c" , convert_ascii ( * _string ) );
          }

         # endif 
        
          
         //* If the '%c' is not '@' print anyway
         else printf ( "%c" , * _string );
         
         
         _string ++;
    }
     
    va_end ( args );
}



// EXCLUSIVE FUNCTIONS //


// CHECK FOR THE ESPECIFIC CHAR AND PRINT // 
static char convert_ascii ( const char _check )
{   
    switch ( _check )
    {     
          // 'A' cases //
          case -93:  return 198; //* ã
          case -125: return 199; //* Ã

          case -94:  return 131; //* â                   
          case -126: return 182; //* Â

          case -95:  return 160; //* á 
          case -127: return 181; //* Á 

          case -96:  return 133; //* à
          case -128: return 183; //* À
         
          
          // 'Ç' cases //
          case -89:  return 135; //* ç
          case -121: return 128; //* Ç
          

          // 'E' cases // 
          case -86:  return 136; //* ê  
          case -118: return 210; //* Ê              
          
          case -87:  return 130; //* é 
          case -119: return 144; //* É
          
          case -88:  return 138; //* è 
          case -120: return 212; //* È                    
                   
                   
          // 'I' cases //                   
          case -82:  return 140; //* î 
          case -114: return 215; //* Î               
          
          case -83:  return 161; //* í
          case -115: return 214; //* Í 
          
          case -84:  return 141; //* ì 
          case -116: return 222; //* Ì                    
                   

          // 'O' cases //
          case -75:  return 228; //* õ 
          case -107: return 229; //* Õ
          
          case -76:  return 147; //* ô               
          case -108: return 226; //* Ô 
          
          case -77:  return 162; //* ó   
          case -109: return 224; //* Ó 
            
          case -78:  return 149; //* ò 
          case -110: return 227; //* Ò

          // 'U' cases //
          case -69:  return 150; //* û
          case -101: return 234; //* Û            
          
          case -70:  return 163; //* ú
          case -102: return 233; //* Ú          
          
          case -71:  return 151; //* ù
          case -103: return 235; //* Ù

          // Random Chars //          
    }
}