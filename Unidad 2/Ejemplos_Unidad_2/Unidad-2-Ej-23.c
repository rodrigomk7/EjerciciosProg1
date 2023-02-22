/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 23
	Función recursiva: Factorial
*/

#include <stdio.h>

int factorial(int);

int main(int argc, char* argv[])
{
	int x = 3;
	
	printf("\n %i ! = %d", x, factorial(x));
	
printf("\n\n");
return 0;
}

int factorial (int x)
{
	int fact;
	
	if  ( x == 0 )  
		return 1;
	else
		fact = x * factorial( x - 1 );
	
return fact;
}

