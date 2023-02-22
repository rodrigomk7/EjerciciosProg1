/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 39
	Cadenas de caracteres: Declaración e inicialización
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char cad1[10];
	char cad2[10] = {};
	char cad3[] = {'C','u', 'r', 's', 'o'};
	char cad4[] = "Curso";
//	char cad5[5] = "Universidad"; 
	char cad6[8] = "clase";
	char cad7[] = {};
	char cad8[7] = {'a', 'e', 'i', 'o', 'u'};
		
	printf("\nCad1: %15s ", cad1 );
	printf("\nCad2: %15s ", cad2);
	printf("\nCad3: %15s ", cad3);
	printf("\nCad4: %15s ", cad4);
//	printf("\nCad5: %15s ", cad5); 
	printf("\nCad6: %15s ", cad6);
	printf("\nCad7: %15s ", cad7);
	printf("\nCad8: %15s ", cad8);
	
printf("\n\n");	
return 0;	
}
