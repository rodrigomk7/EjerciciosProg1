/*autor:Kameyha, Rodrigo Miguel 
turno de examen:
fecha:
asignatura: Programacion 1
CX:1412772
carrera:ingenieria en computacion*/

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
#include"fn_archivos_roh.h"
#include"control_cadena.h"
typedef struct{
	char nombre[50];
	char laboratorio[50];
	float precio;
	int cantidad_de_stock;
	}medicamento;

void cargar_medi_en_arch(char []);
void menu32(char []);
void consulta(char []);
int gen_vect_medi(char [],medicamento []);
void mostrar_medi(medicamento);

int main(int argc, char *argv[])
{
	char name[]="problema2.txt";
	menu32(name);
return 0;}

void menu32(char name[])
{int op,x=0;
char cad[10];
do{
	printf("\n# # # # # # # # # # # # # # # # # # # # # # # ");
	printf("\n 1- Agregar informacion de un archivo.");
	printf("\n 2- Mostrar contenido del archivo.");
	printf("\n 3- Consulta de medicamentos.");
	printf("\n 4- Salir.");
	do{
		do{
		printf("\n Ingrese una opcion: ");
		fgets(cad,10,stdin);
		cad[strlen(cad)-1]='\0';
		//solo_nume(cad,&x);
		x=control_numero(cad);
		}while(x==0);
		op=atoi(cad);
	}while(0>op && op>5);
	
	switch(op){
		case 1:
		    cargar_medi_en_arch(name);
			break;
		case 2:
		    mostrar_arch(name);
			break;
		case 3:
		    consulta(name);
			break;
	}
}while(op!=4);
	printf("\n Fin del programa...\n");
}	

void cargar_medi_en_arch(char name[])
{
FILE *p;
int x=0;
char cad[10];
medicamento m;

apertura(name);

p=fopen(name,"a+");	

printf("\n Ingreso De Medicamento: ");
printf("\n Nombre: ");
fgets(m.nombre,50,stdin);
m.nombre[strlen(m.nombre)-1]='\0';
fputs(m.nombre,p);
fputs(";",p);

printf("\n Laboratorio: ");
fgets(m.laboratorio,50,stdin);
m.laboratorio[strlen(m.laboratorio)-1]='\0';
fputs(m.laboratorio,p);
fputs(";",p);

do{
	do{
	printf("\n Precio: ");
	fgets(cad,10,stdin);
	cad[strlen(cad)-1]='\0';
	x=control_real(cad);
	}while(x==0);
m.precio=atof(cad);
}while(m.precio<0);
fprintf(p,"%.2f",m.precio);
fputs(";",p);

do{
	do{
    printf("\n Cantidad de stock: ");
    fgets(cad,10,stdin);
	cad[strlen(cad)-1]='\0';
   x=control_numero(cad);
	}while(x==0);
    m.cantidad_de_stock=atoi(cad);
}while(m.cantidad_de_stock<0);

fprintf(p,"%d",m.cantidad_de_stock);
fputs("\n",p);
fclose(p);  }


void consulta(char name[])
{
	medicamento v[50];
	char cad[50],cn[10];
	int n,l=1,a,b,i,h=0,st=0,x=0;
	n=gen_vect_medi(name,v);		
		
		printf("\n Ingrese el nombre a buscar: ");
		fgets(cad,50,stdin);
		cad[strlen(cad)-1]='\0';
do{
	do{
		do{
		printf(" \nIngrese la cantidad minima de stock: ");
		fgets(cn,10,stdin);
		cn[strlen(cn)-1]='\0';
		x=control_numero(cn);
		}while(x==0);
		a=atoi(cn);
	}while(a<=0);
	
	do{
		do{
		printf("\n Ingrese la cantidad maxima de stock: ");
		fgets(cn,10,stdin);
		cn[strlen(cn)-1]='\0';
		x=control_numero(cn);
		}while(x==0);
		b=atoi(cn);
	}while(b<=0);
}while(a==b);	
	for(i=0;i<n;i++)
		{
			if(strcmp(cad,v[i].nombre)==0)
			{
				h++;
				if(a<=v[i].cantidad_de_stock && v[i].cantidad_de_stock<=b)
				{
					printf("\n------------------------------\n");
					printf("\n Medicamento N:%d",l++);
					mostrar_medi(v[i]);
				}
				else
					st++;
			}
		}
	
		if(h==0)
			printf("\n ## El medicamento no esta en la lista...\n");
		if(h!=0 && st==h)
		{
			printf("\n ## El medicamento esta en la lista pero NO hay stock... entre \"%d\" y \"%d\" unidades\n",a,b);
		}
}

int gen_vect_medi(char name[],medicamento d[])
{
	FILE *p;
	int i,n=1,r=0,k=0,cant;
	char cad[50],cad1[10],cad2[10];
	
	p=fopen(name,"r+");

	fseek(p,0,2);
	cant=ftell(p);
	rewind(p);
	
		while(!feof(p) && ftell(p)<cant)
		{
			fgets(cad,50,p);
			cad[strlen(cad)]='\0';
			for(i=0;i<strlen(cad);i++)
			{
				if(cad[i]!=';'&& cad[i]!='\n')
				{  switch(n){
					case 1:
					d[k].nombre[r++]= cad[i]; 
					break;
					 
					case 2:
					d[k].laboratorio[r++]=cad[i];
					break;
					 
					case 3:
					cad1[r++]=cad[i];
					break;
					 
					case 4:
					cad2[r++]=cad[i];
					break;
					}
				}
				else
				{
				switch(n){
						 case 1:
						 d[k].nombre[strlen(d[k].nombre)]='\0';
						 r=0;
						 n=2;
						 break;
						 
						 case 2:
						 d[k].laboratorio[strlen(d[k].laboratorio)]='\0';
						 r=0;
						 n=3;
						 break;
						 
						 case 3:
						 cad1[strlen(cad1)]='\0';
						 d[k].precio=atof(cad1);
						 r=0;
						 n=4;
						 break;
						 
						 case 4:
						 cad2[strlen(cad2)]='\0';
						 d[k].cantidad_de_stock=atoi(cad2);
						 r=0;  
						 n=1;
						 break;
					}     	
				}
            				
			}
		k=k+1; 
		}
return k;
}
	
	
void mostrar_medi(medicamento V)
{
printf("\n Nombre: %s",V.nombre);
printf("\n Laboratorio: %s ",V.laboratorio);
printf("\n Precio: %.2f",V.precio);
printf("\n Cantidad de stock: %d \n",V.cantidad_de_stock);	
}


void solo_nume( char cad[], int *p)
{int i,r=0;
	for(i=0;i<strlen(cad);i++)
	if(isdigit(cad[i])!=0)
		 r++;
	 if(r==i)
		 *p=1;
		 else
	     *p=0;} 









