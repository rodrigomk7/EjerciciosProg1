/* Ingresar, en una variable tipo estructura, los datos referentes a una persona (apellido/s
nombre/s, fecha de nacimiento y domicilio). Luego presentar por pantalla el contenido de dich
variable. */

#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include"fn_estru_roh.h"
/*typedef struct{
				char apellidos[30];
				char nombre[30];
				fecha fnaci;
				domicilio dom;
			 }datos_personales;
	*/		 
datos_personales cargar_datos_per();
void mostrar_fecha(datos_personales);
void mostrar_datos(datos_personales);

int main(int argc, char *argv[])
{
datos_personales x;
printf("\n cargar datos personales \n");
x=cargar_datos_per();
mostrar_datos(x);
printf("\n su nacimiento es:");
mostrar_fecha(x);
mostrar_domicilio(x.dom);

return 0;
}

datos_personales cargar_datos_per()
{
	datos_personales p;
	int d=0;
	do{
	printf("\n Apellido/s:");
	fgets(p.apellidos,29,stdin);
	p.apellidos[strlen(p.apellidos)-1]='\0';
	solo_letras_y_espacio(p.apellidos,&d);
	mayus_prim_letra(p.apellidos);
	}while(d==0);
	do{
	printf("\n Nombre/s:");
	fgets(p.nombre,29,stdin);
	p.nombre[strlen(p.nombre)-1]='\0';
	solo_letras_y_espacio(p.nombre,&d);
	mayus_prim_letra(p.nombre);
	}while(d==0);
	
	p.fnaci=cargar_fecha();
	getchar();
	p.dom=cargar_domicilio();
return p;	
}
void mostrar_fecha(datos_personales P)
{
	printf("\n %d/%d/%d \n",P.fnaci.dia,P.fnaci.mes,P.fnaci.anio);
}
void mostrar_datos(datos_personales P)
{
	printf("\n Apellido/s y Nombres/s: %s, %s",P.apellidos,P.nombre);
}