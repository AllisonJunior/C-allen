/*
LICENSE
*/



# ifndef _MACROS_
# define _MACROS_

// Typedefs
typedef unsigned int uint; 
//*

// Pre-Processors
# define inc_for(size) for ( uint kaj = 0 ; kaj < size ; kaj ++ )
//*

// Simplifiers
# define m_PAUSE    system ( "pause > nul" );
# define m_CLEAR    system ( "cls" );
# define m_IPCONFIG system ( "ipconfig" );  

# define m_CURSOR_UP      printf ( "\x1b[1A" );   
# define m_CURSOR_DOWN    printf ( "\x1b[1B" );   
# define m_CURSOR_LEFT    printf ( "\x1b[1D" );   
# define m_CURSOR_RIGHT   printf ( "\x1b[1C" );
# define m_CURSOR_TO(x,y) printf ( "\x1b[%d;%df" , x , y );   
//*

// ASCII
# define ascii_atsign 64



# endif