/*
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 23
	Funci�n recursiva: Factorial
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

