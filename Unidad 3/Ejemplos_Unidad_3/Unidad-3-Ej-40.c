/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 40
	Cadenas de caracteres: Longitud f�sica
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	char calle[10] = "Monteagudo"; 
	char nombre[] = {'P', 'u', 'e', 'b', 'l', 'o'};
	char cadena[] = "Pueblo";
	
	printf("\nCalle: %15s ", calle);
	printf("\n\t%20s %10d", "Longitud fisica: ", sizeof(calle) );
	printf("\nNombre: %15s ", nombre);
	printf("\n\t%20s %10d", "Longitud fisica: ", sizeof(nombre) );
	printf("\nCadena: %15s", cadena);
	printf("\n\t%20s %10d", "Longitud fisica: ", sizeof(cadena) );
printf("\n");	
return 0;	
}
