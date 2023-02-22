/*  */
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"fn_archivos_roh.h"
#include"control_cadena.h"

typedef struct{
	char marca[30];
	int anio_de_compra;
	float precio;
	}automotor;
	
	

automotor c_auto(char []);

void menu32d(char []);
void m_auto(automotor);
void bus_anio(char []);
void c_v_auto(int *,automotor v[],char []);
void m_v_a(int orden,automotor v[]);


int main(int argc, char *argv[])
{
	char name[]="p32d.txt";
	menu32d(name);
return 0;
}

void menu32d(char name[])
{
	int op,x=0;
	char c[30];
do{
	printf("\n # ## ## ## ## ## ## ## ## ## ## #");
		printf("\n 1. Ingresar datos de un automivil." );
		printf("\n 2. Mostrar Arvhivo.");
		printf("\n 3. Busqueda por fecha.");
		printf("\n 4. Salir.\n");
	do{	do{printf("\n Ingrese una opcion: ");
	   fgets(c,30,stdin);
	   c[strlen(c)-1]='\0';
	   x=control_numero(c);
	   }while(x==0);
	   op=atoi(c);
	   printf("\n # ## ## ## ## ## ## ## ## ## ## #\n");
	}while(op<=0 && op>=5);
	switch (op){
			case 1:
			c_auto(name);
			break;
			case 2:
			printf("\n### Archivo creado: \n");
			mostrar_arch(name);
			break;
			case 3:
			printf("\n### Busqueda de automotor por marca y anio:\n");
			bus_anio(name);
			break;
				}
}while(op!=4);
printf("\n fin del programa...");
}

automotor c_auto(char name[])
{
	FILE *p;
	int x=0;
	char c[40];
	automotor r;
	apertura(name);
	p=fopen(name,"a+");
	printf("\n ### Carga de datos de un automovil: \n");
	do{
		printf("\n marca: ");
		fgets(r.marca,30,stdin);
		r.marca[strlen(r.marca)-1]='\0';
		x=control_palabra(r.marca);
	}while(x==0);
	fputs(r.marca,p);
	fputs(";",p);
	do{do{
		printf("\n Anio de compra: ");
		fgets(c,40,stdin);
		c[strlen(c)-1]='\0';
		x=control_numero(c);
	}while(x==0);
	r.anio_de_compra=atoi(c);
	}while(1950>r.anio_de_compra|| r.anio_de_compra>2017);  
	fprintf(p,"%d;",r.anio_de_compra);
	//fputs(r.anio_de_compra,p);
	//fputs(";",p);
	do{
		printf("\n Precio(float): ");
		fgets(c,40,stdin);
		c[strlen(c)-1]='\0';
		x=control_real(c);
	}while(x==0);
	r.precio=atof(c);
	fprintf(p,"%.3f\n",r.precio);
	//fputs(r.precio,p);
	//fputs("\n",p);
fclose(p);		
}

	
	
	
void m_auto(automotor r)
{
	printf("\n- - - - - - - - - - - - - - -");
	printf("\n Marca: %s",r.marca);
	printf("\n Anio de compra: %d",r.anio_de_compra);
	printf("\n Precio: %.3f",r.precio);
	printf("\n- - - - - - - - - - - - - - -");
}


void bus_anio(char name[])
{
	automotor v[100];
	int orden,x=0,anio1,anio2,i,f=0,y=0,o=0,t=0;
	char cad[50],c[40];
	
c_v_auto(&orden,v,name);
	//m_v_a(orden,v);
	do{
		printf("\n Ingrese la marca a buscar: ");
		fgets(cad,50,stdin);
		cad[strlen(cad)-1]='\0';
		x=control_palabra(cad);
	}while(x==0);
	printf("\n Ingreso de periodo (anios):\n");
do{
	do{do{
		printf("\n Anio de compra n.1: ");
		fgets(c,40,stdin);
		c[strlen(c)-1]='\0';
		x=control_numero(c);
	}while(x==0);
	anio1=atoi(c);
	}while(1950>anio1|| anio1>2017);  
	
	do{do{
		printf("\n Anio de compra n.2: ");
		fgets(c,40,stdin);
		c[strlen(c)-1]='\0';
		x=control_numero(c);
	}while(x==0);
	anio2=atoi(c);
	}while(1950>anio2|| anio2>2017);  
  }while(anio1==anio2);
	
	for(i=0;i<orden;i++)
	{
		y++;
		if(strcmp(v[i].marca,cad)==0)
		{
			if(anio1<=v[i].anio_de_compra && v[i].anio_de_compra<=anio2)
			m_auto(v[i]);
			
		}
		else
			f++;
	}
	if(f==y)
	printf("\n EL auto con la marca \" %s\" NO esta en la lista...\n",cad);
	
}


void c_v_auto(int *orden,automotor v[],char name[])
{
	FILE *p;
	int tam,i=0, n=1,r=0,k=0;
	char cad[50],cad1[50],cad2[50];
	apertura(name);
	p=fopen(name,"a+");
	fseek(p,0,2);
	tam=ftell(p);
	rewind(p);
	
	while(!feof(p) && ftell(p)<tam)
	{
		fgets(cad,50,p);
		cad[strlen(cad)]='\0';
		for(i=0;i<strlen(cad);i++)
		{
			if(cad[i]!=';' && cad[i]!= '\n' )
			{
				switch(n){
						case 1:
						v[k].marca[r++]=cad[i];
						break;
						case 2:
						cad1[r++]=cad[i];
						break;
						case 3:
						cad2[r++]=cad[i];
						break;
						}
			}else
			{
				switch(n){
						case 1:
						v[k].marca[strlen(v[k].marca)]='\0';
						r=0;
						n=2;
						break;
						case 2:
						cad1[strlen(cad1)]='\0';
						v[k].anio_de_compra=atoi(cad1);
						r=0;
						n=3;
						break;
						case 3:
						cad2[strlen(cad2)]='\0';
						v[k].precio=atof(cad2);
						r=0;
						n=1;
						break;
				}
			}
		}
		k++;
		
	}
	fclose(p);
	(*orden)=k;
}


/*
void m_v_a(int orden,automotor v[])
{
	int i;
	for(i=0;i<orden;i++)
	m_auto(v[i]);
} */










