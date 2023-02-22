/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 57
	Cadenas de caracteres - Punteros a caracter.
	Busqueda lineal
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "cadenas2.h"


int busqLinealPtrVecCh(int n, char *cad, int k, char *cb);


int main( int argc, char *argv[])
{
	char *ptrVecCh, *str;
	int cant, longFisica, pos;
	cant = 5;
	longFisica = 15;
	
	printf("\n\t\t Busqueda lineal en un vector de");
	printf("\n\t\t ===============================");
	printf("\n\t\t     cadena de caracteres");
	printf("\n\t\t     ====================");
	printf("\n\t\t   tratado como puntero a char");
	printf("\n\t\t   ===========================");
		
	ptrVecCh = (char*) malloc(cant * longFisica);
	str = (char*) malloc(15);
	
	printf("\n Carga del arreglo de cadenas\n");
	cargaPtrVecCh(cant, ptrVecCh, longFisica);
	printf("\n Arreglo cargado\n");
	verPtrVecCh(cant, ptrVecCh, longFisica);
	
	printf("\n Ingresar la cadena a buscar: ");
	scanf("%s",str);
	
	pos = busqLinealPtrVecCh(cant, ptrVecCh, longFisica, str);
	if (pos < cant)
		printf("\n La cadena \"%s\" esta en la posicion %d", str, pos);
	else
		printf("\n La cadena \"%s\" NO esta en el arreglo", str);
	
	free(ptrVecCh);
	free(str);
printf("\n\n");

return 0;	
}

int busqLinealPtrVecCh(int n, char *cad, int k, char *cb)
{
	int i;
	
	for ( i=0 ; i<n ; i++)
	{		
		if ( strcmp((cad+k*i),cb) == 0 )
			break;
	}
return i;
}

