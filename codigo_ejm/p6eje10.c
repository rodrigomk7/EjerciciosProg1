/* p6- eje 10*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"fn_archivos_roh.h"
#include"fn_estru_roh.h"


int main(int argc,char argv[])
{
FILE *p;
datos9 d[80];
char nombre[]="prob9.txt";
char cad[50];
int l=0;

apertura(nombre);

printf("\n##### El archivo leido es:######\n");

mostrar_arch(nombre);

load_vector9(&l,nombre,d);

printf("\n##### La estructuta creada es: ######\n");

mostrar_d9(l,d);

return 0;
}


