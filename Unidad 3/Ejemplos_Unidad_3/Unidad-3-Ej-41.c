/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 41
	Cadenas de caracteres: Longitudes física y lógica
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
