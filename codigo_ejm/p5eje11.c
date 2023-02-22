/*11. Agregar al menú del problema anterior(10) las opciones de: búsqueda y modificación. Para ello debe 
utilizar como clave de búsqueda el campo apellido de la persona. NOTA: En la opción 
modificación, tener en cuenta que se puede modificar uno o más campos de la estructura, por 
lo tanto se debe poder elegir una de estas opciones utilizando un submenú. 
*/

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include"fn_estru_roh.h"


void menu2(int n,datos_prs per[]);
void menu3(int n, datos_prs v[],int);
void busqueda_y_modificacion(int n, datos_prs v[]);
void busqueda_ape(int n,datos_prs v[], char [],int *);


void cambiar_dat_ap(int n,datos_prs v[],int );
void cambiar_dat_nom(int n,datos_prs v[],int );
void cambiar_dat_tele(int n,datos_prs v[],int );

int main(int argc, char *argv[])
{
	int n=0;
	datos_prs per[30];
	menu2(n,per);
	return 0;
}

void menu2(int n,datos_prs v[])
{
int opc;
	do{
		printf("\n\n\t###########################");
		printf("\n\t 1.- Agregar Persona ");  
		printf("\n\t 2.- Mostrar Ordenado Alfabeticamente "); 
		printf("\n\t 3.- Busqueda y Modificacion. ");  
		printf("\n\t 4.- Salir ");
		printf("\n\n\t\t Ingrese opcion: ");
		scanf("%d", &opc);
		fgetc(stdin);
		
	switch(opc){
			
		case 1: 
				ingresar_datos_prs(n,v);
				n++;
				break;
		case 2:
				ordenar_alfab(n,v);
				mostrar_datos_prs(n,v);
				break;
		case 3:
				busqueda_y_modificacion(n,v);
				break;
		}
	}while(opc!=4);
}


void busqueda_y_modificacion(int n, datos_prs v[])
{
	int i,d=0;
	char palab[30];
	do{
	printf("\n Ingrese un apellido para buscar en la lista:");
	fgets(palab,29,stdin);
	palab[strlen(palab)-1]='\0';
	solo_letras_y_espacio(palab,&d);
	mayus_prim_letra(palab); //mayus despues de un espacio y las demas nimuscula
	}while(d==0);
	d=0;
	busqueda_ape(n,v,palab,&d);
	if(d !=0)
	{
	printf("\n \"Se encontro coincidencia\"");
	menu3(n,v,d=d-1);
	}else
		printf("\n NO se encontraron coincidencias \n");
}

void busqueda_ape(int n,datos_prs v[],char e[],int *d)
{
	int i;
	for(i=0;i<n;i++)
		if(strcmp(v[i].apellidos,e)==0)
			(*d)=i+1;
}



void menu3(int n, datos_prs v[],int d)
{
int opc;
	do{
		printf("\n\n\t###########################");
		printf("\n\t 1.- Cambiar Apellido/s ");  
		printf("\n\t 2.- Cambiar Nombre/s "); 
		printf("\n\t 3.- Cambiar fecha/s ");  
		printf("\n\t 4.- Cambiar telefono ");
		printf("\n\t 5.- Salir ");
		printf("\n\n\t\t Ingrese opcion: ");
		scanf("%d", &opc);
		fgetc(stdin);
		
	switch(opc){
					case 1: 
							cambiar_dat_ap(n,v,d);
							break;
					case 2:
					    	cambiar_dat_nom(n,v,d);
							break;
					case 3:
							//cambiar_dat(n,v,d);
							v[d].fnac=cargar_fecha();
							getchar();
							break;
					case 4:
							cambiar_dat_tele(n,v,d);
							break;
		        }
	}while(opc!=5);
}

void cambiar_dat_ap(int n,datos_prs v[],int d)
{
	int i,x=0;
	char pala[30];
	do{
	printf("\n Ingrese nuevo:");
	fgets(pala,29,stdin);
	pala[strlen(pala)-1]='\0';
	solo_letras_numeros_espacio(pala,&x);
	mayus_prim_letra(pala); //mayus despues de un espacio y las demas nimuscula
	}while(x==0);
	strcpy(v[d].apellidos,pala);
}

void cambiar_dat_nom(int n,datos_prs v[],int d)
{
	int i,x=0;
	char pala[30];
	do{
	printf("\n Ingrese nuevo:");
	fgets(pala,29,stdin);
	pala[strlen(pala)-1]='\0';
	solo_letras_numeros_espacio(pala,&x);
	mayus_prim_letra(pala); //mayus despues de un espacio y las demas nimuscula
	}while(x==0);
	strcpy(v[d].nombre,pala);
}
void cambiar_dat_tele(int n,datos_prs v[],int d)
{
	int i,x=0;
	char pala[30];
	do{
	printf("\n Ingrese nuevo:");
	fgets(pala,29,stdin);
	pala[strlen(pala)-1]='\0';
	solo_numeros(pala,&x);
	}while(x==0);
	strcpy(v[d].telefono,pala);
}