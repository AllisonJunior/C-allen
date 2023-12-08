/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //
/* ==> ALLEN HEADERS                                                                                 */
// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen/props.h"

/* =============================================================================================== */
/* ==> DEFAULT HEADERS                                                                             */
/* =============================================================================================== */

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <stdbool.h>
# include <string.h>

/* =============================================================================================== */
/* ==> EXCLUSIVE SUPPORT FUNCTIONS                                                                 */
/* =============================================================================================== */

// This function receives a broken char and returns a working correspondent ascii char //
static inline char EX_ascii_conversion ( const char _broken_char );


// This function receives a char to check if it's true or false and returns the result //
static inline bool EX_is_a_valid_type ( char _check );


// This function basically check if the user passed a argument on the '_format' usage //
static inline int EX_has_a_param ( const char * _format ); 


// This function basically returns the param string //
static inline char * EX_get_param ( char * _init , char * _endt , const char * _format );


// This function basically handle the process of variable formating //
static inline void EX_param_handler ( char * _format , int _type );


// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// >> ALLEN FUNCTIONS << //



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


// BUFFED PRINTF ( NEW SYNTAX, NEW DATA TYPES, NEW MASKS ) //
int putf ( const char * _format , ... )
{
    // Initial data
    va_list args;
    va_start ( args , _format );
    char * init , * endt , * final;

    int __spaces__ = 0;

    // STRING CHECKING LOOP // 
    while ( * _format )
    {
         // Primitive Types
         if ( * _format == '@' )
         {
           _format ++;
           // Checking if the type after '@' is valid and then executing the case of it
           if ( EX_is_a_valid_type ( * _format ) ) switch ( * _format )
           {
             // int
             case 'i':
                      // Checking if the user passed a param or not 
                      if ( -1 < ( __spaces__ = EX_has_a_param ( _format ) ) )
                      {
                        // Getting the param passed
                        final = EX_get_param ( init , endt , _format );
                        
                        // Fixing the position
                        _format += __spaces__;
                        _format += strlen ( final ) - 1;
                        
                        // Support variables
                        char converted [ strlen ( final ) + 1 ];
                        int count = 0 , has_zero = 0 , has_ternary = 0;
                        
                        // Checking if the zero flag will be activated
                        for ( int kaj = 1 ; kaj < strlen ( final ) - 1 ; kaj ++ )
                           if ( ( final [ kaj ] == 'z' ) || ( final [ kaj ] == 'Z' ) ) { has_zero = 1; break; }
                        
                        // Flag Checking
                        if ( has_zero )
                        {
                          if ( ! has_ternary )
                            for ( int kaj = 1 ; kaj < strlen ( final ) - 1 ; kaj ++ )                          
                               if ( ( final [ kaj ] >= '0' ) && ( final [ kaj ] <= '9' ) )
                               {
                                 converted [ count ] = final [ kaj ];
                                 count ++;
                               }
                               else if ( has_ternary ) break;
                        }
                        else if ( ! has_zero )
                        {
                            for ( int kaj = 1 ; kaj < strlen ( final ) - 1 ; kaj ++ )                          
                               if ( ( final [ kaj ] >= '0' ) && ( final [ kaj ] <= '9' ) || ( final [ kaj ] == '-' ) )
                               {
                                 converted [ count ] = final [ kaj ];
                                 count ++;
                               }
                               else if ( has_ternary ) break;
                        }
                        converted [ count ] = '\0';

                        // User passed a value with zero
                        if ( has_zero ) printf ( "%0*d" , atoi ( converted ) , va_arg ( args , int ) );
                        else            printf ( "%*d" , atoi ( converted ) , va_arg ( args , int ) );  
                      }
                      else   
                          printf ( "%d" , va_arg ( args , int ) );
             break;


             // char
             case 'c':
                      if ( -1 < ( __spaces__ == EX_has_a_param ( _format ) ) )
                      {

                      }
                      else printf ( "%c" , va_arg ( args , int ) );
             break;
           }
           // If the type isn't valid then just print the char or chars
           else
           {
               _format --; printf ( "%c" , * _format );
               _format ++; printf ( "%c" , * _format );
           }
         }


         // Primitive Types: Array
         else if ( * _format == '#' )
         {
         }


         // Primitive Types: Bidimensional Array
         else if ( * _format == '$' )
         {
         }


         // C-Allen types:
         else if ( * _format == '%' )
         {
         }

         # if defined ( _WIN32 ) || defined ( _WIN64 )

         else if ( * _format == -61 )
         {
              _format ++;
              printf ( "%c" , EX_ascii_conversion ( * _format ) );
         }

         # endif 


         // PRINT ANY EXPECTED CHAR
         else printf ( "%c" , * _format );
         
         _format ++;
    }
}



// >> EXCLUSIVE FUNCTIONS << //



// ASCII TABLE OF BROKEN CHARS // 
static inline char EX_ascii_conversion ( const char _broken_char )
{   
    switch ( _broken_char )
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

// CHECKS IF THE CHAR PASSED IS VALID // 
static inline bool EX_is_a_valid_type ( char _check )
{     
      switch ( _check )
      {
            case 'i': return true;
            case 'c': return true;
            case 'f': return true;
            case 'd': return true;
            case 's': return true;
            default: return false;
      }       
}

// CHECK IF THE USER PASSED A ARGUMENT // 
static inline int EX_has_a_param ( const char * _format )
{     
      // Getting the args
      char * init = strchr ( _format , '<' );
      char * endt = strchr ( _format , '>' );
 
      // Variable used to return
      int return_spaces = 0;
 
      // If then isn't null then return the size finded of '<'
      if ( ( NULL != init ) && ( NULL != endt ) && ( init < endt ) )
      {
        while ( * _format != '<' ) { * _format ++; return_spaces ++; }
        return return_spaces;
      }

      else return -1;
}

// RETURNS THE PARAM CONTENT //
static inline char * EX_get_param ( char * _init , char * _endt , const char * _format )
{
      // Getting the args
      _init = strchr ( _format , '<' );
      _endt = strchr ( _format , '>' );
      
      // Returnable Buffer
      char * buffer;     

      // If is not NULL for both
      if ( ( NULL != _init ) && ( NULL != _endt ) && ( _init < _endt ) )
      {        
        // Support Variables
        int length = ( _endt - _init ) + 1;
        buffer = ( char * ) malloc ( sizeof ( char ) * ( length ) );

        // Copy to 'i_buffer' the text within the '<' and '>'
        strncpy ( buffer , _init , length );
        buffer [ length ] = '\0';
        
        // Returning the full string jump size
        return buffer;
      }

      else return NULL;
}