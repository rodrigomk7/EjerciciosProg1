/*
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 22
	Funci�n recursiva: Producto
*/

#include <stdio.h>

float prod(float, int);

int main(int argc, char* argv[])
{
	float 	x = 5.1;
	int 	n = 3;
	
	printf("\n %5.2f  *  %i  =  %5.2f", x, n, prod(x, n));
	
printf("\n\n");
return 0;
}

float prod (float x, int n)
{
	float 	pro;
	
	if  (n == 0)  
		return 0;
	else
		//pro = x + prod( x , n - 1 );
		//pro = x + prod ( x, --n );
		 pro = x + prod ( x , n-- );
		
return pro;
}

