
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"fn_archivos_roh.h"

//void gen_otro_arc(char cad[], char cad1[]);

int main(int argc, char *arv[])
{
	char nombre[]="prob1.txt";
	char nombre2[]="prob6.txt";
	apertura(nombre);
	printf("\n ### Archivo inicial (prob1.txt)\n");
	mostrar_arch(nombre);
	gen_otro_arc(nombre,nombre2);
	printf("\n ### Nuevo archivo (prob6.txt) \n");
	mostrar_arch(nombre2);
	
	return 0;
}

/*
void gen_otro_arc(char cad[], char cad1[])
{
	FILE *p, *r;
	char c,cad2[50];
	
	int cant;
	p=fopen(cad,"r");
	r=fopen(cad1,"w+");
	
	fseek(p,0,2);
	cant=ftell(p); 
	rewind(p);
	
	while(!feof(p) && ftell(p)<cant)
	{  
		fscanf(p, "%s",cad2);
		
		if(isupper(cad2[0])!=0 || cad2[0]==' ')
		{
			fputs(cad2,r);
	        fputs("\n",r);
		}
	}
		
fclose(r);
fclose(p);
} */