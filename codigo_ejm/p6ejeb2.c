/* p6 eje 2 bin*/

#include<stdio.h>
#include<string.h>
//#include"fn_archivos_roh.h"
#include"fn_estru_roh.h"

typedef struct{
				char marca[50];
				char precio[50];
				fecha f;
            }autom;
 autom cargar_auto();

void cargar_bin(char [],autom );

void mosda(char []);

void mosRegistro(autom d);

 int main(int argc,char *argv[])
{
	autom d;
FILE *p;
char nombre[]="bin2.dat";
apertura(nombre);


d=cargar_auto();
printf("\nc");
mosRegistro(d);
printf("\nc");
cargar_bin(nombre,d);
mosda(nombre);
return 0;
}

 autom cargar_auto()
 {
	autom d;
	fecha f;
	 int x=0;
		do{
			 printf("\n Ingrese el automovil: ");
			 fgets(d.marca,29,stdin);
			 d.marca[strlen(d.marca)-1]='\0';
			 solo_letras(d.marca,&x);
			 mayus_prim_letra(d.marca);
		 }while(x==0);
		do{
			 printf("\n Ingrese precio auto: ");
			 fgets(d.precio,29,stdin);
			 d.precio[strlen(d.precio)-1]='\0';
			 solo_numeros(d.precio,&x);
			  }while(x==0);
			 printf("\n Ingrese fecha de compra: ");
			 d.f=cargar_fecha(); 
return d;

}
 
 void cargar_bin(char nombre[],autom d)
 {
	 FILE *p;
   	p=fopen(nombre,"w+");
	fwrite(&d,sizeof(d),1,p);
    fclose(p);
 }
 
void mosda(char n[])
{
	FILE *p;
	autom d;	
	p=fopen( n,"r");
	printf("\n Auto ingresado!\n");
	fread(&d,sizeof(d),1,p);
	mosRegistro(d);
fclose(p);
return;
}  



void mosRegistro(autom d)
{
	printf("\n marca: %s", d.marca);
	printf("\n precio: %s", d.precio);
	printf("\n Fecha de nacimiento: %d/%d/%d ",d.f.dia,d.f.mes,d.f.anio);

return;
}


/*
 
void moslis(char n[]){
	autom d;
	FILE *p;
	int i,tam;
	
	printf("\n Listar()");
	if( (p = fopen(n,"r+")) == NULL)   // nodo lectura 
			{
		     	printf("El archivo no existe");
		     	fgetc(stdin);
		     	exit(1);
		     	}
	fseek(p, 0 , 2);
	tam = ftell(p) / sizeof(autom);
	printf("\ntamaño= %d \n",tam);
	rewind(p);
	printf("\n\n\n");
	
	for(i=0 ; i<tam ; i++)
		{
		fread(&d, sizeof(d), 1, p);
		mosRegistro(d);
		}
	fclose(p);
return; 
}*/

 

