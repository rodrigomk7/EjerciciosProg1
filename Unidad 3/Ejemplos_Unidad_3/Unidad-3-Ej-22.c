/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 22
	Operaciones con arreglos: Suma de vectores
*/

#include <stdio.h>
#include <time.h>
#include "func_vectores.h"

int main (int argc, char *argv[])
{
	
	int	v1[10], v2[10], s[10];
	float   	y1[10], y2[10], sf[10];
	int	n =10;	
		
	time_t t;
	
	time(&t);
	srand(t);

	cargaAlVectInt(n, v1);
	cargaAlVectInt(n, v2);
	sumaVectInt(n, v1, v2, s);
	
	cargaAlVectFloat(n, y1);
	cargaAlVectFloat(n, y2);
	sumaVectFloat(n, y1, y2, sf);
	
	printf("\n Suma de vectores de enteros\n v1:   ");
	verVectInt(n, v1);
	printf("\n\n v2:   ");
	verVectInt(n, v2);
	printf("\n\n  s:   ");
	verVectInt(n, s);
	
	printf("\n\nSuma de vectores de punto flotante\n y1:   ");
	verVectFloat(n, y1);
	printf("\n\n y2:   ");
	verVectFloat(n, y2);
	printf("\n\n sf:   ");
	verVectFloat(n, sf);
					
printf("\n\n");	
return 0;	
}
