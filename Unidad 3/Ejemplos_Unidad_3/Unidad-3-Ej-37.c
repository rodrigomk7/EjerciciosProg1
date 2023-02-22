/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 37
	Datos tipo char: Declaración e inicialización
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
