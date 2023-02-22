
#include<stdio.h>
#include<string.h>
#include"fn_archivos_roh.h"
#include"fn_estru_roh.h"



int main(int argc,char *argv[])
{
	FILE *p;
	fecha f;
	char nombre[]="prob8.txt";
	apertura(nombre);
	p=fopen(nombre,"w+");
	f=cargar_fecha();
	
		fprintf(p,"%d;", f.dia);
		fprintf(p,"%d;", f.mes);
		fprintf(p,"%d ", f.anio);
		//fscanf(f.dia,"%s",p);
		//fputs(";",p);
		
		
	fclose(p);
		printf("\n\n ### Archivo creado: \n");
	    mostrar_arch(nombre);
		printf("\n\n");
return 0;
}