/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 20
	Arreglos - Matrices t�picas: Matriz anti sim�trica
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
