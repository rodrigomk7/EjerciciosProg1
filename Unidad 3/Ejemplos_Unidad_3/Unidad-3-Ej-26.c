/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 26
	Operaciones con arreglos: Suma de matrices
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"
#include "func_matrices2.h"

int main (int argc, char *argv[])
{
	
	int	mat1[30][30], mat2[30][30];
	int	matSum[30][30], n, m;
	n = m = 5;	

	cargaAlMatInt(m, n, mat1);
	cargaAlMatInt(m, n, mat2);
	sumaMatInt(m, n, mat1, mat2, matSum);
	printf("\n\t\t Matriz A");
	verMatInt(m, n, mat1);
	printf("\n\n\t\t Matriz B");
	verMatInt(m, n, mat2);
	printf("\n\n\t\t Matriz Suma");
	verMatInt(m, n, matSum);
			
printf("\n\n");	
return 0;	
}
