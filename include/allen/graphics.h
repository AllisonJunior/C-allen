# ifndef _ALLEN_GRAPHICS_
# define _ALLEN_GRAPHICS_
# endif

# if defined ( _WIN32 ) || defined ( _WIN64 )

void createMessageBox ( const char * restrict message , const char * restrict title );

# elif defined ( __unix__ ) || defined ( __linux__ ) || defined ( __APPLE__ )

void createMessageBox ();

# endif



