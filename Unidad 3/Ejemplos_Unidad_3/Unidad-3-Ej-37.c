/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 37
	Datos tipo char: Declaraci�n e inicializaci�n
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	char 	car;
	char 	car1 = 'a', car2 = 'A';
	char 	car3 = car1 + 1;
	char	car4 = car2 ++; 
	const char car5 = 'C';
	
	printf("\n car: %5c ", car );
	printf("\n car1: %5c ", car1);
	printf(" car2: %5c ", car2);
	printf("\n car3: %5c ", car3);
	printf(" car4: %5c ", car4); 
	car5++;
	
printf("\n\n");	
return 0;	
}
