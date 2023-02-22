/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 24
	Operaciones con arreglos: Producto de un vector por un escalar
*/

#include <stdio.h>
#include <time.h>
#include "func_vectores.h"

int main (int argc, char *argv[])
{
	
	int	v[10], vPorEsc[10];
	float	y[10], yPorEsc[10];
	int	n =10 , k = 4;	
		
	time_t t;
	
	time(&t);
	srand(t);

	
	cargaAlVectInt(n, v);
	vectorPorEscalarInt(n, v, vPorEsc, k);
	
	cargaAlVectFloat(n, y);
	vectorPorEscalarFloat(n, y, yPorEsc, k);
	
	printf("\n Vector de enteros por escalar\n     v: ");
	verVectInt(n, v);
	printf("\n\n %d * v: ", k);
	verVectInt(n, vPorEsc);
		
	printf("\n\nVector de punto flotante por escalar\n     y: ");
	verVectFloat(n, y);
	printf("\n\n %d * y: ", k);
	verVectFloat(n, yPorEsc);
	
					
printf("\n\n");	
return 0;	
}
