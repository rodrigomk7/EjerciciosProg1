/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 41
	Cadenas de caracteres: Longitudes f�sica y l�gica
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char calle[10] = "Monteagudo";
	char nombre[] = {'P', 'u', 'e', 'b', 'l', 'o'};
	char cadena[] = "Pueblo";
		
	printf("\nCalle: %15s", calle);
	printf("\n\t %20s %d", "Longitud fisica: ", sizeof(calle));
	printf("\n\t %20s %d", "Longitud logica: ",strlen(calle));
	
	printf("\nNombre: %15s", nombre);
	printf("\n\t %20s %d", "Longitud fisica: ", sizeof(nombre));
	printf("\n\t %20s %d", "Longitud logica: ",strlen(nombre));
	
	printf("\nCadena: %15s", cadena);
	printf("\n\t %20s %d", "Longitud fisica: ", sizeof(cadena));
	printf("\n\t %20s %d", "Longitud logica: ",strlen(cadena));
		
printf("\n\n");	
return 0;	
}
