/* p6-- eje 9*/

#include<stdio.h>
#include<string.h>
#include"fn_archivos_roh.h"
#include"fn_estru_roh.h"

/*
typedef struct{
	char name[50];
	char apellido[50];
	fecha f;
}datos9;*/

datos9 cargar_date_n_prs(int,datos9 []);	
void load_date_n_prs(int ,datos9 [],char []);

int main(int argc,char *argv[])
{
	FILE *p;
	datos9 d,v[100];
	char nombre[]="prob9.txt";
	int n;
	do{
		printf("\n Ingrese la cantidad de prs.:");
		scanf("%d",&n);
	    getchar();
	  }while(n<=0);
      
	  apertura(nombre);

      cargar_date_n_prs(n,v);

   	  load_date_n_prs(n,v,nombre);
	
      printf("\n\n ### Archivo creado: \n");
	  
	  mostrar_arch(nombre);

printf("\n\n");
return 0;
}


  