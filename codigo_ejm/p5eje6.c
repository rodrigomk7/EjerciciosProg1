/*6. Ingresar los datos de N personas en un arreglo de estructuras, 
luego presentar por pantalla el contenido de cada estructura. 
*/

#include<stdio.h>
#include<string.h>
#include"fn_estru_roh.h"
/*
typedef struct{
				char apellidos[30];
				char nombre[30];
				fecha fnaci;
				domicilio dom;
			 }datos_personales;
			 
	*/datos_personales cargar_datos_per(int, datos_personales []);
void mostrar_fecha(datos_personales);
void mostrar_datos(datos_personales);
void mostrar_domi(domicilio);

int main(int argc, char *argv[])
{
	datos_personales v[30];
	int i,n,h;
	do{
		printf("\n Ingrese la cantidad de datos de personas:");
		scanf("%d",&n);	getchar();
	}while(n<=0);

	cargar_datos_per(n,v);
	/*
	for(i=0;i<n;i++)
	{printf("\n prs. #%d:",h=i+1);
	v[i]=cargar_datos_per();
	}*/
    
	for(i=0;i<n;i++)
	{
	mostrar_datos(v[i]);
    printf("\n su nacimiento es:");
    mostrar_fecha(v[i]);
    mostrar_domicilio(v[i].dom);
	}
return 0;
}

void mostrar_domi(domicilio P)
{
printf("\n Pais: %s",P.pais);
printf("\n Provincia: %s",P.provincia);
printf("\n Ciudad: %s",P.ciudad);
printf("\n Calle: %s",P.calle);
printf("\n Numero: %s",P.numero);
}



/*

datos_personales cargar_datos_per(int n,datos_personales v[])
{
	int d=0,i;
	
	for(i=0;i<n;i++)
	{printf("\n prs. #%d:",i+1);
	
	do{
	printf("\n Apellido/s:");
	fgets(v[i].apellidos,29,stdin);
	v[i].apellidos[strlen(v[i].apellidos)-1]='\0';
	solo_letras_y_espacio(v[i].apellidos,&d);
	mayus_prim_letra(v[i].apellidos);
	}while(d==0);
	do{
	printf("\n Nombre/s:");
	fgets(v[i].nombre,29,stdin);
	v[i].nombre[strlen(v[i].nombre)-1]='\0';
	solo_letras_y_espacio(v[i].nombre,&d);
	mayus_prim_letra(v[i].nombre);
	}while(d==0);
	
	v[i].fnaci=cargar_fecha();
	v[i].dom=cargar_domicilio();
	}
	//return p;	
}  */
void mostrar_fecha(datos_personales P)
{
	printf("\n %d/%d/%d \n",P.fnaci.dia,P.fnaci.mes,P.fnaci.anio);
}
void mostrar_datos(datos_personales P)
{
	printf("\n Apellido/s y Nombres/s: %s, %s",P.apellidos,P.nombre);
}  