# include <windows.h>

# include "../../allen/system.h"

void setLanguage ( int region_id )
{
    SetConsoleOutputCP ( region_id );
}