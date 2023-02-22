/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 34
	Ordenamiento: Método de la burbuja
*/

#include <stdio.h>
#include <time.h>
#include "func_vectores.h"

int main (int argc, char *argv[])
{
	
	int	vect[30], n;
	time_t 	t;
	
	time(&t);
	srand(t);
	n = 12;	

	cargaAlVectInt(n, vect);
	printf("\n Vector sin ordenar: ");
	verVectInt(n, vect);
	
	burbujaInt(n, vect);
	printf("\n Vector ordenado :   ");
	verVectInt(n, vect);
	
printf("\n\n");	
return 0;	
}
