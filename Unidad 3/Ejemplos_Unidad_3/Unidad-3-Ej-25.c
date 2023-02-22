/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 25
	Operaciones con arreglos: Generar vector con la serie de Fibonacci
*/

#include <stdio.h>
#include <time.h>
#include "func_vectores.h"

int main (int argc, char *argv[])
{
	
	int	v[30], n;	

	printf("\n\t Ingrese la cantidad de terminos para generar");
	printf("\n\t\t la sucesion de Fibonacci: ");
	scanf("%d", &n);
	generarFibo(n, v);
	printf("\n Sucesion de Fibonacci \n");
	verVectInt(n, v);
			
printf("\n\n");	
return 0;	
}
