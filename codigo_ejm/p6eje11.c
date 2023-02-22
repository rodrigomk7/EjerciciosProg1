/* p6- eje 11*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>
#include"fn_archivos_roh.h"
#include"fn_estru_roh.h"

int main(int argc,char argv[])
{
FILE *p;
datos9 P, d[80],e[80];
char nombre[]="prob9.txt";
char cad1[50];
int b=0,l=0;

apertura(nombre);
printf("\n##### El archivo leido es:######\n");
mostrar_arch(nombre);
load_vector9(&l,nombre,d);

printf("\n Ingrese un apellido a buscar:");
fgets(cad1,50,stdin);
cad1[strlen(cad1)-1]='\0';
mayus_prim_letra(cad1);

buscar_ape(&b,l,cad1,e,d);

if(b!=0)
{
	printf("\n ### Lista con el apellido - %s - ###",cad1);
    mostrar_d9(b,e);
}
else
	printf("\n ### El apellido - %s -  NO esta en la lista ###\n",cad1);
return 0;
}
