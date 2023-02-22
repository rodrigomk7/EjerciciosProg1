/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 16
	Arreglos - Matrices típicas: Matriz escalar
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
