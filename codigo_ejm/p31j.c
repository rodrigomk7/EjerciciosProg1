/*    */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include"fn_archivos_roh.h"
#include"control_cadena.h"

void ca_ar(char name[]);
void mayu(char name[]);

int main (int argc, char *argv[])
{
char name[]="p31c.txt";
ca_ar(name);

printf("\n Busqueda de cadenas que comiensen con dos o mas digitos: ");
mayu(name);
printf("\n ###El archivo creado es:\n");
mostrar_arch(name);
return 0;	
}

void ca_ar(char name[])
{
	FILE *p;
	int n,x,i;
	char c[40],cad[50];
	
	apertura(name);
	p=fopen(name,"w+");
		do{
			do{
			printf("\n Ingrese la cantidad de cadenas a ingresar: ");
			fgets(c,40,stdin);
			c[strlen(c)-1]='\0';
			x=control_numero(c);
			}while(x==0);
		  n=atoi(c);
		}while(n==0);
		for(i=0;i<n;i++)
		{
			printf("\n ingrese una cadena: ");
			fgets(cad,50,stdin);
			cad[strlen(cad)-1]='\0';
			fputs(cad,p);
			fputs("\n",p);
		}
		fclose(p);
}

void mayu(char name[])
{
	  FILE *p;
	  int tam,r=0,f=0,d=0,j;
	  char cad[50];
	  
	 apertura(name);
	 p=fopen(name,"r+");
	 fseek(p,0,2);
	 tam=ftell(p);
	 rewind(p);
	 while(!feof(p) && ftell(p)<tam)
	 {
		 r++;
		 fgets(cad,50,p);
		 cad[strlen(cad)-1]='\0';
		 
		 for(j=0;j<strlen(cad);j++)
		    if(isdigit(cad[j])!=0)
			     d++;
			 
		if(d>=2)
			{d=0;
			printf("\n %s ",cad);
			}
		else
			f++;
	 }
	fclose(p);
	 if(f==r)
		 printf("\n NO hay cadenas que comiensen en 2 o mas digitos...\n");
}