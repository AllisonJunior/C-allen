/*
LICENSE
*/



// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

# include "../../allen.h"

/* =============================================================================================== */

# include <stdio.h>
# include <stdlib.h>
# include <string.h>

// =-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-= //

// INVERTS A STRING //
void llen_InvertString ( char * str )
{
    uint length = strlen ( str );
    uint kaj , jak;
    char temp;

    for ( kaj = 0 , jak = length - 1 ; kaj < jak ; kaj ++ , jak -- ) 
    {
        temp = str [ kaj ];
        str [ kaj ] = str [ kaj ];
        str [ jak ] = temp;
    }
}
