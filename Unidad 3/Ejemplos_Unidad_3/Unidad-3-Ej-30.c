/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
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
