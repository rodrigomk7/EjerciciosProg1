/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 11
	
	Arreglos
	Matrices típicas: Matriz cuadrada
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"

int main (int argc, char *argv[])
{
	int	tablaInt [30][30];
	float	tablaFloat [30][30];
	int 	m1 = 8, m2 = 5;
	
	int i, j;
	time_t t;
	
	time(&t);
	srand(t);

	cargaAlMatInt(m1, m1, tablaInt);
	
	cargaAlMatFloat(m2, m2, tablaFloat);
	
	printf(" \n\n tablaInt: ");
	verMatInt(m1, m1, tablaInt);
	
	printf(" \n\n tablaFloat: ");
	verMatFloat(m2, m2, tablaFloat);	
		
printf("\n\n");	
return 0;	
}
