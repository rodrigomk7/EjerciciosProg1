/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 55
	Cadenas de caracteres: Punteros a char
	
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	char *s;
	int i;
	
	printf("\n\n Direccion de i: %p", &i);
	printf("\n Direccion de s: %p", s);
//ver Linux
	s = (char*)malloc(20);
	printf("\n Direccion de s: %p", s);

	printf("\n Ingresar una cadena: ");
	fgets(s, 19, stdin);
	fputs(s, stdout);
	
printf("\n\n");	
return 0;	
}

