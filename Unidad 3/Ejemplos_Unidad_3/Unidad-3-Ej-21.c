/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 21
	Arreglos - Matrices t�picas: Matriz transpuesta
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
