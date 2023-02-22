/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 2
	
	Ejemplo 7
	Punteros
*/

#include <stdio.h> 

int main(int argc, char *argv[])
{
	
	int var1, var2, *ptr;
	
	printf("\n    Valor de var1: %10d    Direccion de var1: %10p ", var1, &var1);
	printf("\n    Valor de ptr: %10d     Direccion de ptr: %10p ",  *ptr, &ptr);
	
	ptr = &var1; 	// (1)
	printf("\n\n(1)    Valor de var1: %10d    Direccion de var1: %10p ", var1, &var1);

	printf("\n(1)    Valor de ptr: %10d     Direccion de ptr: %10p ",  *ptr, &ptr);
	
	var2 = 10;  // (2)
	printf("\n\n(2)    Valor de var1: %10d    Direccion de var1: %10p ", var1, &var1);

	printf("\n(2)    Valor de var2: %10d    Direccion de var2: %10p ", var2, &var2);

	printf("\n(2)    Valor de ptr: %10d     Direccion de ptr: %10p ",  *ptr, &ptr);
	
	*ptr = var2; // (3)
	printf("\n\n(3)    Valor de var1: %10d    Direccion de var1: %10p ", var1, &var1);
	printf("\n(3)    Valor de var2: %10d    Direccion de var2: %10p ", var2, &var2);
	printf("\n(3)    Valor de ptr: %10d     Direccion de ptr: %10p ",  *ptr, &ptr);

	var1+= *ptr; // (4)
	printf("\n\n(4)    Valor de var1: %10d    Direccion de var1: %10p ", var1, &var1);
	printf("\n(4)    Valor de var2: %10d    Direccion de var2: %10p ", var2, &var2);
	printf("\n(4)    Valor de ptr: %10d     Direccion de ptr: %10p ",  *ptr, &ptr);
		
printf("\n\n");	
return 0;
}


