/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 34
	Ordenamiento: M�todo de la burbuja
*/

#include <stdio.h>
#include <time.h>
#include "func_vectores.h"

int main (int argc, char *argv[])
{
	
	int	vect[30], n;
	time_t 	t;
	
	time(&t);
	srand(t);
	n = 12;	

	cargaAlVectInt(n, vect);
	printf("\n Vector sin ordenar: ");
	verVectInt(n, vect);
	
	burbujaInt(n, vect);
	printf("\n Vector ordenado :   ");
	verVectInt(n, vect);
	
printf("\n\n");	
return 0;	
}
