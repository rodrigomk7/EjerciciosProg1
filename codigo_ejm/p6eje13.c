/* p6eje 13*/

#include<stdio.h>
#include<string.h>
//#include"fn_archivos_roh.h"
#include"fn_estru_roh.h"

// falta la funcion de los años  

/*
void modificar_ape(datos9 d[],int i);
void editar_prs(char nombre[]);
void buscar_prs_x_ape_y_nombre(int ,int *r,int *pos,char ap[],char name[],datos9 d[]);
void menu13b(char ape[],char name[],datos9 d[],int);
void modificar_ape(datos9 d[],int i);
void load_date_to(int n,datos9 v[],char nombre[]);
void modificar_fe(datos9 d[],int i);
void modificar_name(datos9 d[],int i);

void menu13a(char nombre[]);
*/
int main(int argc,char *argv[])
{
	char nombre[]="prob12.txt";
menu13a(nombre);
return 0;
}


/*
void menu13a(char nombre[])
{
	int opcion;
do{
	printf("\n\n# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # \n");
	printf("\n 1- Agregar informacion de una persona."); //anda 
	printf("\n 2- Mostrar el contenido del archivo.");    //anda
	printf("\n 3- Consulta la informacion de un apellido."); //anda
	printf("\n 4- Consulta la informacion por fechas de nacimiento(ingresando dos fechas.");//no anda
	printf("\n 5- Editar informacion de prs. ");
	printf("\n 6- Salir del programa.\n");
	do{printf("\n Ingrese una opcion:");
	scanf("%d",&opcion);
	getchar();
	}while(opcion<0 || opcion >6);
	printf("\n# # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # \n\n");
switch(opcion){
		case 1:
		cargar_persona(nombre);
		break;
		case 2:
		printf("\n ### El archivo \"prob12.txt\" contiene:\n");
		mostrar_arch(nombre);
		break;
		case 3:
		info_por_apellido(nombre);
		break;
		case 4:
		//info_por_fechas(nombre);
		break;
		case 5:
		editar_prs(nombre);
		break;
	}
}while(opcion!=6);	
	printf("\a\t\t Fin de Programa.\n ");
}



void editar_prs(char nombre[])
{  
    datos9 d[80];
   // char nombre[]="prob12.txt";
	int r=0,l=0,pos=0;
	char name[50],ape[50];
	
	load_vector9(&l,nombre,d);
	printf("\n Ingrese Apellido:");
	ingresar_palabra(ape);
	printf("\n Ingrese Nombre:");
	ingresar_palabra(name);

buscar_prs_x_ape_y_nombre(l,&r,&pos,ape,name,d);
if(r!=0)
{
	printf("\n La prs. si esta en la lista \n");
	menu13b(ape,name,d,pos);
	load_date_to( l,d,nombre);
}
	else
	printf("\n La persona no esta en la lista\n");
return;
}


void buscar_prs_x_ape_y_nombre(int n,int *r,int *pos,char ap[],char name[],datos9 d[])
{
int i;

	for(i=0;i<n;i++)
      	if(strcmp(d[i].apellido,ap)==(0))
		{ 
			if(strcmp(d[i].name,name)==(0))
			{
			(*r)++;
			(*pos)=i;
			}
		}
}

void menu13b(char ape[],char name[],datos9 d[],int pos)
{
	int n;

	do
	{
	printf("\n 1- Modificar Apellido");
	printf("\n 2- Modificar Nombre");
	printf("\n 3- Modificar fecha de Naci.");
	printf("\n 4- Salir.");
	
	printf("\n ingrese opcion: ");
	scanf("%d",&n);
	getchar();
	
	switch(n){
		case 1:
			modificar_ape(d,pos);
			break;
		case 2:
			modificar_name(d,pos);
			break;
		case 3:
			modificar_fe(d,pos);
			break;
	}
	}while(n!=4);

return;
}

void modificar_ape(datos9 d[],int i)
{
	char cad[50];
	printf("\n Ingrese nuevo ape:");
    ingresar_palabra(cad);
    strcpy(d[i].apellido,cad);
}	
void modificar_name(datos9 d[],int i)
{
	char cad[50];
	printf("\n Ingrese nuevo nombre:");
    ingresar_palabra(cad);
    strcpy(d[i].name,cad);
}

void modificar_fe(datos9 d[],int i)
{
	fecha f;
	d[i].f=cargar_fecha();
}


void load_date_to(int n,datos9 v[],char nombre[])
{
	FILE *p;
	int i;
	apertura(nombre);
	p=fopen(nombre, "w");

	for(i=0;i<n;i++)
	{
		fprintf(p, "%s;", v[i].apellido);
		fprintf(p, "%s;", v[i].name);
		fprintf(p, "%d;", v[i].f.dia);
		fprintf(p, "%d;", v[i].f.mes);
		fprintf(p, "%d", v[i].f.anio);
		fprintf(p,"\n");
		
	}
	fclose(p);
} 


*/