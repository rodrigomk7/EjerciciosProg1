/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 12
	
	Arreglos
	Matrices típicas: Diagonal principal
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"


int main (int argc, char *argv[])
{
	
	int	tablaInt [30][30];
	int 	m = 8;
	
	int	 i, j;
	time_t 	t;
	
	time(&t);
	srand(t);

	
	cargaAlMatInt(m, m, tablaInt);
	verMatInt(m, m, tablaInt);
	
	// Asignarles 1000 a los elementos de la diagonal principal
	printf("\n\n");
	for (i=0 ; i < m ; i++)
		tablaInt[i][i] = 1000;
	
	verMatInt(m, m, tablaInt);

			
printf("\n\n");	
return 0;	
}
