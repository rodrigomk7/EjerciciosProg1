/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 30
	Operaciones con arreglos: Hacer cero cruz de una matriz con M impar y N par
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"
#include "func_matrices2.h"

int main (int argc, char *argv[])
{
	
	int	mat[30][30], m, n;
	time_t t;
	
	time(&t);
	srand(t);
	m = 5, n = 4;	

	cargaAlMatInt(m, n, mat);
	printf("\n\t\t Matriz A");
	verMatInt(m, n, mat);
	cruzCero2Int(m, n, mat);
	printf("\n\t\t Matriz A con cruz en cero");
	verMatInt(m, n, mat);
	
printf("\n\n");	
return 0;	
}
