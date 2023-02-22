/*p6 - eje 4*/


#include<stdio.h>
#include<string.h>
#include"fn_estru_roh.h"
typedef struct{
	           char marca[50];
			   char modelo[50];
			   char precio[50];
			   char stock[50];
				}impresoras4;
impresoras4 ca_impre4();
void mo_impre(char nombre[]);
void mo_impre4(impresoras4 d);
void ca_impre(char nombre[]);
void menu4bin(char nombre[]);
int busk_ap(char apellido[],char cad[]);
void info_por_ap(char nombre[]);

int main(int argc, char *argv[])
{
char nombre[]="bin4.dat";
apertura(nombre);

menu4bin(nombre);
return 0;
}


impresoras4 ca_impre4()
{
	impresoras4 d;
		int x=0;
	  printf("\n Dato Impresora:");
	do{
	 printf("\n marca: ");
     fgets(d.marca,29,stdin);
     d.marca[strlen(d.marca)-1]='\0';
     solo_letras(d.marca,&x);
	 }while(x==0);
	 
	 printf("\n modelo: ");
     fgets(d.modelo,29,stdin);
     d.modelo[strlen(d.modelo)-1]='\0';
     do{
		 printf("\n precio: ");
		  fgets(d.precio,29,stdin);
     d.precio[strlen(d.precio)-1]='\0';
     solo_numeros(d.precio,&x);
	 }while(x==0);
	 
	 do{
		 printf("\n stock: ");
		  fgets(d.stock,29,stdin);
     d.stock[strlen(d.stock)-1]='\0';
     solo_numeros(d.stock,&x);
	 }while(x==0);
return d;
}
	 
	 
	 
	










void menu4bin(char nombre[])
{
int op,n=0;

do{
    printf("\n 1.- Ingresar informacio de una impresora");
	printf("\n 2.- Mostrar por pantalla el contenido");	
	printf("\n 3.- Consultar informacion por marca");
	printf("\n 4.- Salir del programa\n");
	//do{
	printf("\nIngrese una opcion:");
	scanf("%d",&op);
	fgetc(stdin);
	//}while(0<op || op<5 );
switch (op){
		case 1:
		ca_impre(nombre);
		break;
		case 2:
		mo_impre(nombre);
		break;
		case 3:
		info_por_ap(nombre);
		break;
		}
}while(op!=4);

}

void ca_impre(char nombre[])
{
	impresoras4 	d;
	FILE 	*p;
	
	if((p = fopen(nombre,"r+")) == NULL)
		if((p = fopen(nombre,"w+")) == NULL)
			{
		     	printf("Error de apertura de archivo");
		     	fgetc(stdin);
		     	exit(1);
		     	}
	d=ca_impre4();
	
	fseek(p,0,2);	     	
	fwrite(&d, sizeof(d), 1, p);	     	
	fclose(p);
return;
}


void mo_impre(char nombre[])
{
	impresoras4  d;
	FILE *p;
	int i,tam;
	
	printf("\n Lista:");
	printf("\n-------------------\n");
		if((p = fopen(nombre,"r")) == NULL)
					{
					printf("El archivo no existe");
					fgetc(stdin);
					exit(1);
					}
	fseek(p , 0 , 2);
	tam = ftell(p) / sizeof(impresoras4);
	rewind(p);
	for(i=0 ; i<tam ; i++)
		{
		fread(&d, sizeof(impresoras4), 1, p);
		mo_impre4(d);
		}
	fclose(p);
return;
}



void mo_impre4(impresoras4 d)
{ 
	printf("\n Marca: %s",d.marca);
	printf("\n Modelo: %s",d.modelo);
	printf("\n Precio: %s",d.precio);
	printf("\n stock: %s ",d.stock);
printf("\n---------------------------\n");
}






void info_por_ap(char nombre[])
{
	impresoras4  d;
	FILE *p;
	int i,tam,x=0,k=0,b;
	char cad[50];
	
	p=fopen(nombre,"r");
	
	do{
		printf("\n Ingrese marca a buscar en la lista:");
		fgets(cad,49,stdin);
		cad[strlen(cad)-1]='\0';
		solo_letras_y_espacio(cad,&x);
	}while(x==0);
	
	fseek(p , 0 , 2);
	tam = ftell(p) / sizeof(impresoras4);
	rewind(p);
	
	for(i=0 ; i<tam ; i++)
		{
		fread(&d, sizeof(impresoras4), 1, p);
		b=busk_ap(d.marca,cad);
			if(b==1)
				mo_impre4(d);
			else
				k++;
		}
		if(k==i)
			printf("\n La marca NO esta en la lista... \n");
	fclose(p);
return;
}


int busk_ap(char marca[],char cad[])
{
	
	if(strcmp(marca,cad)==0)
		return 1;
	else
		return 0;
}
