/*1. Ingresar N cadenas de caracteres (escribiendo cada cadena a medida que ingresa) en un archivo llamado 
prob1.txt (utilizar una línea o renglón para cada cadena de caracteres escrita en archivo), a continuación 
mostrar por pantalla el contenido de dicho archivo. Luego ingresar una cadena de caracteres y buscar si 
dicha cadena se encuentra en el archivo prob1.txt. Presentar por pantalla el mensaje correspondiente. 
*/
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include"fn_archivos_roh.h"
//int buscar_pala_en_arch(char nombre[],char cad1[]);


int main(int argc, char *argv[])
{

int n,cant,b=0;
char nombre[]="prob1.txt";
char cad1[50];


do{
printf("\n ingrese la cantidad de cadenas a ingresar:");
scanf("%d",&n);
getchar();
}while(n<=0);

ing_n_pala(n,nombre);

	printf("\nArchivo ingresado\n");
	mostrar_arch(nombre);

	printf("\n ingrese una palabra a buscar:");
	fgets(cad1,49,stdin);
	cad1[strlen(cad1)-1]='\0';

   b=buscar_pala_en_arch(nombre,cad1);	  
	
	if(b==1)
		printf("\n la palabra \" %s \" SI esta en el archivo \n",cad1);
	else
		printf("\n la palabra \" %s \" NO esta en el archivo \n",cad1);
return 0;
}







/*busca una palabra en el archivo devuelve 1 si esta en el archivo
la palabras deben estar una por linea*/
 /*
int buscar_pala_en_arch(char nombre[],char cad1[])
{
FILE *p;
char cad[50];
p=fopen(nombre,"r+");
//rewind(p);
while(!feof(p))
	{
		//fgets(cad,50,p);
		fscanf(p, "%s",cad);
		if(strcmp(cad,cad1)==0)
		   return 1;
	}
fclose(p);
}  */