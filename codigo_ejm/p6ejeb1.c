/* p6 eje 1 bin*/

#include<stdio.h>
#include<string.h>
#include"fn_archivos_roh.h"

void aperturaI(char nombArch[]);
int main(int argc,char *argv[])
{
FILE *p;
char nombre[]="bin1.dat";
aperturaI(nombre);
return 0;
}


void aperturaI(char nombre[])
{
	FILE *p;
	p = fopen(nombre, "r");
	if(p == NULL)
	{
		printf("\n No se pudo abrir el archivo en modo lectura...\n El archivo se creara... ");
		p = fopen(nombre, "w+");
			
			if(p == NULL)
				printf("\n No se pudo crear el archivo... \n");
			else 
				printf("\n El archivo se creo con exito...\n");
	}
	else
		printf("\n El archivo se abrio en modo lectura...\n");
fclose(p);
}