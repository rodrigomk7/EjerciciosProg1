/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 46
	Cadenas de caracteres: Mostrar cadenas de caracteres por monitor
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char str[15] = "Anfiteatro";
		
	printf("\n Funcion printf(): %15s", str);
	printf("\n Funcion printf(): %-15s", str);
	
	fprintf(stdout, "\n\n Funcion fprintf(): %15s", str);
	fprintf(stdout, "\n Funcion fprintf(): %-15s", str);
	
	fputs("\n\n", stdout);
	fputs(" Funcion fputs(): ", stdout);
	fputs(str, stdout);
	
printf("\n\n");	
return 0;	
}

