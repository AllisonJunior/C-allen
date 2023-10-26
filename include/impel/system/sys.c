# if defined (_WIN32) || defined (_WIN64)

# include <windows.h>

# include "../../allen/system.h"

void setLanguage ( int region_id )
{
    SetConsoleOutputCP ( region_id );
}

# endif