/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 21
	Arreglos - Matrices típicas: Matriz transpuesta
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"

int main (int argc, char *argv[])
{
	
	int	tablaInt [30][30], transp[30][30];
	int	m =8, n = 6;	
		
	int i, j;
	time_t t;
	
	time(&t);
	srand(t);
	
	cargaAlMatInt(m, n, tablaInt);
	matTransp(m, n, tablaInt, transp);
	printf("\n\n\t\t Matriz dada \n ");
	verMatInt(m, n, tablaInt);
	printf("\n\n\t\t Matriz transpuesta \n ");
	verMatInt(n, m, transp);
					
printf("\n\n");	
return 0;	
}
