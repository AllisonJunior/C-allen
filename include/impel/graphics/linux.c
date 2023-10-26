# include "../../allen/graphics.h"

# if defined ( __unix__ ) || defined ( __linux__ ) || defined ( __APPLE__ )

# include <stdio.h>


void createMessageBox ( void )
{
    printf ( "* Essa janela simples de dialógo foi criada.\n" );
}

# endif 