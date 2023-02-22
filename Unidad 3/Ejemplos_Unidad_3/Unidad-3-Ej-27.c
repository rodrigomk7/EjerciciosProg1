/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
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
