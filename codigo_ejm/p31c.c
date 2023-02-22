/*    */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include"fn_archivos_roh.h"
#include"control_cadena.h"

void c_ar(char name[]);
void mayu(char name[]);

int main (int argc, char *argv[])
{
FILE *p;
char name[]="p31c.txt";
c_ar(name);
printf("\n ###Busqueda de Pal. que comiensen con mayus o espacio: \n ");		
mayu(name);
printf("\n ###El archivo creado es:\n");
mostrar_arch(name);
return 0;	
}
void c_ar(char name[])
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
	  int tam,r=0,f=0;
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
		 if(isupper(cad[0])!=0 || cad[0]==' ')
			 printf("\n %s ",cad);
	     else
			 f++;
	 }
	fclose(p);
	 if(f==r)
		 printf("\n NO hay cadenas que comiensen en Mayuscula o Esapcio...\n");
}






