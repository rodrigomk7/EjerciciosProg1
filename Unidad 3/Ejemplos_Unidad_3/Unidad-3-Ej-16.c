/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 16
	Arreglos - Matrices t�picas: Matriz escalar
*/

#include <stdio.h>
#include <time.h>
#include "func_matrices.h"

int main (int argc, char *argv[])
{
	
	int	tablaInt [30][30];
	int	m = 8, esc;	
		
	int i, j;
	time_t t;
	
	time(&t);
	srand(t);
	printf("\n Ingresar el valor para matriz escalar: ");
	scanf("%d", &esc);
	
	cargaMatEscalInt(m, m, tablaInt, esc);
	printf("\n\n\t\t Matriz escalar \n ");
	verMatInt(m, m, tablaInt);
					
printf("\n\n");	
return 0;	
}
