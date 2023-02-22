/* p5 eje  nº3               */
#include<stdio.h>
#include<string.h>
#include"fn_archivos_roh.h"
int main(int argc, char *argv[])
{
FILE *p;

p=fopen(argv[1],"r");
  if( p != NULL)
     {
       printf("\n El archivo Existe \n");
       p=fopen(argv[1],"r+"); 
       mostrar_arch(argv[1]);    // muestra el archivo caracter por caracter
     }
     else
       printf("\n El Archivo NO Existe \n ");

return 0;
}
