/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 12
	
	Arreglos
	Matrices t�picas: Diagonal principal
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
