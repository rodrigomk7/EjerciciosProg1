/*
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 22
	Función recursiva: Producto
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

