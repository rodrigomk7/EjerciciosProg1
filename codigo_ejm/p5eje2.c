/* Ingresar, en una variable tipo estructura,
 los datos referentes a un domicilio (país, provincia,
ciudad, calle, número).
 Luego presentar por pantalla el contenido de dicha variable.
*/
#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"fn_estru_roh.h"
/*typedef struct{
               char pais[30];
               char provincia[30];
               char ciudad[30];
               char calle[30];
               char numero[30];
               }domicilio;
	*/		   
	//domicilio cargar_domicilio();
	//void mostrar_domicilio(domicilio);
	//void solo_letras( char [], int *p);
	//void solo_letras_numeros( char [], int *p);
	//void solo_numeros( char [], int *p);
	
int main(int argc, char *argv[])
 {
 domicilio p;
 
 printf("\n Domicilio \n");
 p=cargar_domicilio();
 mostrar_domicilio(p);
 return 0;
 }     
 /*
domicilio cargar_domicilio()
{
	domicilio P;
	int x=0;
	do{
	 printf("\n pais: ");
     fgets(P.pais,29,stdin);
     P.pais[strlen(P.pais)-1]='\0';
	 
     solo_letras(P.pais,&x);
	  }while(x==0);
	do{
	 printf("\n provincia: ");
     fgets(P.provincia,29,stdin);
     P.provincia[strlen(P.provincia)-1]='\0';
     solo_letras(P.provincia,&x);
	  }while(x==0);
	 do{
	 printf("\n ciudad: ");
     fgets(P.ciudad,29,stdin);
     P.ciudad[strlen(P.ciudad)-1]='\0';
     solo_letras(P.ciudad,&x);
	 }while(x==0);
	 do{
	 printf("\n calle: ");
     fgets(P.calle,29,stdin);
     P.calle[strlen(P.calle)-1]='\0';
     solo_letras_numeros(P.calle,&x);
	  }while(x==0);
	 do{
	 printf("\n numero: ");
     fgets(P.numero,29,stdin);
     P.numero[strlen(P.numero)-1]='\0';
     solo_numeros(P.numero,&x);
	  }while(x==0);
	 return P;
}
void mostrar_domicilio(domicilio P)
{
printf("\nPais: %s",P.pais);
printf("\nProvincia: %s",P.provincia);
printf("\nCiudad: %s",P.ciudad);
printf("\nCalle: %s",P.calle);
printf("\nNumero: %s",P.numero);
}

void solo_letras( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isalpha(cad[i])!=0)
		 r++;
	 if(r ==i)
		 *p=1;
		 else
	     *p=0;}
	 
void solo_letras_numeros( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isalnum(cad[i])!=0)
		 r++;
	 if(r ==i)
		 *p=1;
		 else
	     *p=0;}
	 
void solo_numeros( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isdigit(cad[i])!=0)
		 r++;
	 if(r==i)
		 *p=1;
		 else
	     *p=0;}  */