/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 53
	Cadenas de caracteres: 
	Búsqueda lineal en vector de cadenas de caracteres
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cadenas.h"

int busqLinealVectStr(int n, char str[15][20], char cb[]);

int main( int argc, char *argv[])
{
	char vectStr[15][20], cad[20];
	int cant, pos;
	cant = 5;
	
	printf("\n\t\t Busqueda lineal en un vector de cadena de caracteres");
	printf("\n\t\t ====================================================\n\n");
	
	printf("\n Carga del arreglo de cadenas\n");
	cargarVectStr(cant, vectStr);
	printf("\n Arreglo cargado\n");
	verVectStr(cant, vectStr);
	
	printf("\n\t Ingresar la cadena a buscar: ");
	fgets(cad, 15, stdin);
	cad[strlen(cad)-1] = '\0';
	
	pos = busqLinealVectStr(cant, vectStr, cad); 
	if(pos < cant)
		printf("\n La cadena \"%s\" esta en la posicion %d", cad, pos);
	else
		printf("\n La cadena \"%s\" NO esta en el arreglo", cad);
	
printf("\n\n");
return 0;	
}

int busqLinealVectStr(int n, char str[15][20], char cb[])
{
	int i;
		
	for ( i=0 ; i<n ; i++)
	{
		if ( strcmp(str[i],cb) == 0 )
			break;
	}
	
return i;	
}

