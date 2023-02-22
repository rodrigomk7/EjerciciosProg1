/*Ingresar los datos de N productos alimenticios en un arreglo de estructuras, los campos de la 
estructura, deben almacenar los siguientes datos: nombre comercial, precio y fecha de 
vencimiento. Luego presentar por pantalla el contenido de las estructuras, en donde la fecha de 
vencimiento sea posterior a una fecha cualquiera ingresada por teclado*/

//## REVISAR EJECUCION PROBLEMA EN SELECCIONAR DIAS## 

#include<stdio.h>
#include<string.h>
#include"fn_estru_roh.h"
/*
typedef struct {
				char nombre_prod[30];
				char precio[30];
				fecha fven;
				}productos;
		*/		
productos cargar_producto();
//void buscar_fecha_post(int, int *,fecha fec,productos v[], productos e[]);
void mostrar_pro(int n, productos e[]);

int main (int argc, char *arv[])
{
	productos v[50], e[50];
	fecha fec;
	int n,i,k=0,h=0;
	float pre;
	do{
	printf("\n Ingrese el numero de producto a ingresar:");
	scanf("%d",&n);}while(n<=0);
	getchar();
	for(i=0;i<n;i++)
	{printf("\n Producto num.%d: ",h=i+1);
	v[i]=cargar_producto();
	}
	//fgetc(stdin);

	printf("\n ######Ingrese fecha de venc. a buscar.##########");
	fec=cargar_fecha();
	
	buscar_fecha_post(n,&k,fec,v,e);
    if(k!=0)
	{
		printf("\n los prod. con las fechas posteriores son: ");
		mostrar_pro(k,e);
	}else
	{printf("\n ## No existen vencimientos posteriores ## ");
	}
	printf("\n\n");
return 0;
}

productos cargar_producto()
{
productos I;

//fgetc(stdin);
printf("\n ingrese nombre: ");
fgets(I.nombre_prod, 29,stdin);
I.nombre_prod[strlen(I.nombre_prod)-1]='\0';
printf("\n ingrese precio: ");
fgets(I.precio,29,stdin);
I.precio[strlen(I.precio)-1]='\0';
printf("\n ingrese fecha de vencimiento: \n");
I.fven = cargar_fecha();
getchar();
return I;
}
/*
void buscar_fecha_post(int n,int *u,fecha fec,productos v[], productos e[])
{
	int i;
	for(i=0;i<n;i++)
	{	
	if(fec.anio < v[i].fven.anio)
		e[(*u)++]=v[i];
		else
		{
			if(fec.anio == v[i].fven.anio)
			{
				if(fec.mes < v[i].fven.mes)
				    e[(*u)++]=v[i];
					else
					{
						if(fec.mes == v[i].fven.mes)
						{
							if(fec.dia < v[i].fven.dia)
				                   e[(*u)++]=v[i];
							  
								   
					    }
					}
			}
		}
	}
}
*/
void mostrar_pro(int n, productos e[])
{
	int i;
	fecha fven;
	for(i=0;i<n;i++)
	{
	printf("\n El Nombre es: %s ",e[i].nombre_prod); 
	printf("\n El Erecio es: %s ",e[i].precio);
	printf("\n Fecha de Ven: %d/%d/%d ", e[i].fven.dia, e[i].fven.mes, e[i].fven.anio);
	}
}