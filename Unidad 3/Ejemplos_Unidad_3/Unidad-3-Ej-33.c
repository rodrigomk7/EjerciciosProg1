/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 33
	Operaciones con arreglos: Producto de matrices
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"
#include "func_matrices2.h"

int main (int argc, char *argv[])
{
	
	int	mat1[30][30], mat2[30][30];
	int	matProd[30][30], m, n, p, q;
	time_t t;
	
	time(&t);
	srand(t);
	m = 4, n = 5;
	p = 5, q = 3;	

	cargaAlMatInt(m, n, mat1);
	cargaAlMatInt(p, q, mat2);
	prodMatInt(m, n, q, mat1, mat2, matProd);
	printf("\n\t\t Matriz A");
	verMatInt(m, n, mat1);
	printf("\n\t\t Matriz B");
	verMatInt(p, q, mat2);
	printf("\n\t\t Matriz producto");
	verMatInt(m, q, matProd);
	
printf("\n\n");	
return 0;	
}
