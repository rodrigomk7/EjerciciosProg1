/*  p6 eje 7 */
#include<stdio.h>
#include<string.h>
#include <stdlib.h>
#include"fn_archivos_roh.h"
//void mayus_despd_pto_y_coma(char cad[]);
int hay_pto_y_coma(char cad[]);
int main(int argc, char *argv[])
{
FILE *p;
int n,i=0,r=0,f=0;
char nombre[]="prob7.txt";
char cad[50],cad1[50];

p = fopen(nombre,"w+");
do{
printf("\n ingrese la cantidad de alumnos a ingresar:");
scanf("%d",&n);
getchar();
}while(n<=0);

printf("\n ingrese datos en el sig formato (Apellido;Nombre;Carrera;CX)\n ");
for(;i<n;i++)
    {
	do{
	printf("\n alumno n° %d.:",f=i+1);
	fgets(cad,50,stdin);
	cad[strlen(cad)-1]='\0';
	r=hay_pto_y_coma(cad);
	mayus_despd_pto_y_coma(cad);
	}while(r!=1);
		fputs(cad,p);
		fputs("\n",p);
		}
printf("\n los datos ingresados son: \n");
fclose(p);
	mostrar_arch(nombre);
return 0;
}

int hay_pto_y_coma(char cad[])
{
	int i,cont=0;
	for(i=0;i<strlen(cad);i++)
	{
		if(cad[i]==';')
			cont++;
	}
	if(cont==3)
		return 1;
	else
		return 0;
}
/*
void mayus_despd_pto_y_coma(char cad[])
{
	int i;
	for(i=0;i<strlen(cad);i++)
	{
		cad[0]=toupper(cad[0]);
		if(cad[i]==';')
			cad[i+1]=toupper(cad[i+1]);
	}
} */