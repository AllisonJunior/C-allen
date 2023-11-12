# include <stdio.h>
# include <stdlib.h>
# include <allen/print.h>
# include <allen/props.h>

int main ( int argc , char * argv [] )
{  
   double var;
   putf ( "* Insira a media do aluno: " );
   scanf ( "%lf" , &var );

   putf ( "* Media salva do aluno 1 = @d<2>" , var );
   m_PAUSE
}
