/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 27
	Operaciones con arreglos: Hacer cero diagonal principal de una matriz
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"
#include "func_matrices2.h"

int main (int argc, char *argv[])
{
	
	int	mat[30][30], m;
	
	m = 8;	

	cargaAlMatInt(m, m, mat);
	printf("\n\t\t Matriz A");
	verMatInt(m, m, mat);
	ceroDiagPpalInt(m, m, mat);
	printf("\n\t\t Matriz A con diagonal principal en cero");
	verMatInt(m, m, mat);
	
printf("\n\n");	
return 0;	
}
