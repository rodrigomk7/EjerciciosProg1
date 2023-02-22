/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 35
	Búsqueda secuencial
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
	verVectInt(n, vect);
	printf("\n Ingresar el elemento a buscar: ");
	scanf("%d", &cb);
	pos = busquedaLinealInt(n, vect, cb);
	
	if (pos<n)
		printf("\n El elemento esta en la posicion: %d", pos);
	else
		printf("\n El elemento NO esta en el arreglo");
	
printf("\n\n");	
return 0;	
}
