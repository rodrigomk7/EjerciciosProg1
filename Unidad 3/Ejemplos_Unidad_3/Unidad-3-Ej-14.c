/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3	
	
	Ejemplo 14
	Arreglos - Matrices típicas: Matriz diagonal
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"

int main (int argc, char *argv[])
{
	
	int	tablaInt [30][30];
	int	m = 8;	
		
	int i, j;
	time_t t;
	
	time(&t);
	srand(t);

	cargaMatDiagInt(m, m, tablaInt);
	printf("\n\n\t\t Matriz diagonal");
	verMatInt(m, m, tablaInt);
					
printf("\n\n");	
return 0;	
}
