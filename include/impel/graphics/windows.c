# include "../../allen/graphics.h"

# if defined ( _WIN32 ) || defined ( _WIN64 )

# include <windows.h>

void createMessageBox ( const char * restrict message , const char * restrict title )
{
    MessageBox ( NULL , message , title , MB_OK | MB_ICONINFORMATION );
}

# endif 

