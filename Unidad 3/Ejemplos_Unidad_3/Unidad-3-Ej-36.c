/* 
	Universidad Nacional de Tucum?n
	Facultad de Ciencias Exactas y Tecnolog?a
	Departamento de Electricidad, Electr?nica y Computaci?n
	A?o 2016
	
	Programaci?n I
	Ingenier?as: El?ctrica, Electr?nica y en Computaci?n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 36
	B?squeda binaria
*/

#include <stdio.h>
#include <time.h>
#include "func_vectores.h"

int main (int argc, char *argv[])
{
	
	int	vect[30], n, cb, pos;
	time_t t;
	
	time(&t);
	srand(t);
	n = 12;	

	cargaAlVectInt(n, vect);
	printf("\n\nVector sin ordenar");
	verVectInt(n, vect);
	burbujaInt(n, vect);
	printf("\n\nVector ordenado   ");
	verVectInt(n, vect);
	printf("\n\n Ingresar el elemento a buscar: ");
	scanf("%d", &cb);
	pos = busqBinariaInt(n, vect, cb);
	
	if (pos>=0)
		printf("\n El elemento esta en la posicion: %d", pos);
	else
		printf("\n El elemento NO esta en el arreglo");
	
printf("\n\n");	
return 0;	
}
