#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"fn_archivos_roh.h"

//void mayus_x_mis(char[]);

int main(int argc,char *argv[])
{
char nombre[]= "prob2.txt";

apertura(nombre);
printf("\n");
mayus_x_mis(nombre);
mostrar_arch(nombre);
return 0;
}



/*
void apertura(char nombre[])
{
FILE 	*p;
	p = fopen( nombre, "r");
	
	if (p == NULL)
	{
		printf("\n El archivo no existe ");
		
		p = fopen( nombre, "w+"); 
		if (p == NULL)
		{
			printf("\n El archivo no se pudo crear ");
			exit(1);
		}
	}
	else
		printf("\n El archivo se abrio en modo lectura\n");
}


void mostrar_arch(char nombre[])
{
	FILE *p;
	p=fopen(nombre,"r");

	while(!feof(p))
          printf("%c", fgetc(p));
}

*/




