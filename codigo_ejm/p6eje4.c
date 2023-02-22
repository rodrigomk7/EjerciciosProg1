#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include"fn_archivos_roh.h"
/*
typedef struct{
	int ct;
	int cs;
	int ceb;
	int cn;
	int ca;
	int co;
}caracter;

caracter contar_caracteres(char[]);
*/
int main (int argc ,char *argv[])
{
//FILE *p;
caracter x;

if(strcmp(argv[1],"prob1.txt")==0)
{
x=contar_caracteres_arch(argv[1]);
printf("\nCantidad total de caracteres: %d",x.ct);
printf("\nCantidad de caracteres numericos: %d",x.cn);
printf("\nCantidad de caracteres alfabeticos: %d",x.ca);
printf("\nCantidad de espacios en blancos: %d",x.ceb);
printf("\nCantidad de signos: %d",x.cs);
printf("\nCantidad de caracteres de otro tipo: %d",x.co);
}
else
printf("\nEl nombre ingresado debe ser \'prob1.txt\'.");
return 0;
}


