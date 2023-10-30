/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen/print.h"
# include "../../allen.h"

/* =============================================================================================== */

# include <stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <ctype.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //



// PRINT ' ' CHARACTERS n TIMES ON THE CONSOLE // 
void put_spaces ( const int _times )
{   
    //* Error handling
    if ( _times > 0 ) 
      for ( uint kaj = 0 ; kaj < _times ; kaj ++ ) printf ( " " );
}


// PRINT '\n' CHARACTERS n TIMES ON THE CONSOLE // 
void put_lines ( const int _times )
{
    //* Error handling
    if ( _times > 0 )
      for ( uint kaj = 0 ; kaj < _times ; kaj ++ ) printf ( "\n" );
}


// Prints a formated string based on the second optional argument
void putf ( const char * string_text , ... )
{   
    va_list args;
    va_start ( args , string_text );
    

    char * TEXT_BUFFER = va_arg ( args , char * );
    char TEXT [ strlen ( string_text ) + 1 ];
    strcpy ( TEXT , string_text );
  

    // -------------------- FORMATING -------------------- //

    int jak = 0;
    
    //if ( strstr ( TEXT_BUFFER , "inverted" ) != NULL )
    
    if ( strstr ( TEXT_BUFFER , "uppercase" ) != NULL )
    {
      for ( int kaj = 0 ; kaj < strlen ( TEXT ) ; kaj ++ )
         TEXT [ kaj ] = toupper ( TEXT [ kaj ] );
    }

    if ( strstr ( TEXT_BUFFER , "lowercase" ) != NULL )
    {
      for ( int kaj = 0 ; kaj < strlen ( TEXT ) ; kaj ++ )
         TEXT [ kaj ] = tolower ( TEXT [ kaj ] );
    }

    // -------------------- FORMAT::?? ------------------- //
    
    if ( ( strstr ( TEXT_BUFFER , "format" ) != NULL ) && ( strstr ( TEXT_BUFFER , "::" ) != NULL ) )
    {
      if ( strstr ( TEXT_BUFFER , "hide" ) != NULL )
      {
        char * ini = strstr ( TEXT_BUFFER , "(" );  
        
        if ( ( ini != NULL ) )
        {
          char * end = strstr ( ini , ")" );
          
          if ( ( end != NULL ) )
          {

            int len = end - ini , jak = 0;
            char PASW [ len ];
            char REPO;

            for ( int kaj = 0 ; kaj < len + 1 ; kaj ++ )
               if ( ( ini [ kaj ] != ' ' ) && ( ini [ kaj ] != '(' ) && ( ini [ kaj ] != ')' ) )
               {
                 PASW [ jak ] = ini [ kaj ];
                 jak ++;
               }
               PASW [ jak ] = '\0';


            ini = strstr ( end , "(" );
            if ( ini != NULL )
            {
              for ( int kaj = 0 ; kaj < strlen ( ini ) ; kaj ++ )
                 if ( ( ini [ kaj ] != ' ' ) && ( ini [ kaj ] != '(' ) && ( ini [ kaj ] != ')' ) )
                 {
                   REPO = ini [ kaj ];
                   break;
                 }
            if ( REPO == '\0' ) REPO = 158;
            
            for ( int kaj = 0 ; kaj < strlen ( TEXT ) ; kaj ++ )
               for ( int jak = 0 ; jak < strlen ( PASW )  ; jak ++ )
                  if ( TEXT [ kaj ] == PASW [ jak ] ) TEXT [ kaj ] = REPO; 
          }
          }
        }
        
      }

      else if ( strstr ( TEXT_BUFFER , "nitta" ) != NULL )
          printf ( "NITTA\n" );
    } 

    // -------------------- FORMATING -------------------- //


    va_end ( args );
    printf ( "%s" , TEXT );
}




