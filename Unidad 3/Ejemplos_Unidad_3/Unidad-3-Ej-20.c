/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 20
	Arreglos - Matrices típicas: Matriz anti simétrica
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
	
	cargaMatAntSimetInt(m, m, tablaInt);
	printf("\n\n\t\t Matriz anti simetrica \n ");
	verMatInt(m, m, tablaInt);
					
printf("\n\n");	
return 0;	
}
