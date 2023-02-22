/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 42
	Cadenas de caracteres: Lectura de cadena de caracteres
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{	
	char str[15] = "Laprida";
	
	printf("\n %15s %8d %8d", str, sizeof(str), strlen(str) );
	
	printf("\n Se ingresa una cadena menor a 15 caracteres con scanf(): ");
	scanf("%s", str);
	printf("\n %15s %8d %8d", str, sizeof(str), strlen(str) );
	
	printf("\n Se ingresa una cadena menor a 15 caracteres con fscanf(): ");
	fscanf(stdin,"%s", str);
	printf("\n %15s %8d %8d", str, sizeof(str), strlen(str) );
	
	printf("\n Se ingresa una cadena menor a 14 caracteres con fgets(): ");
	fgetc(stdin);
	fgets(str, 13, stdin);
	printf("\n %15s %8d %8d", str, sizeof(str), strlen(str) );

	str[strlen(str)-1] = '\0';
	printf("\n %15s %8d %8d", str, sizeof(str), strlen(str) );
	
printf("\n\n");	
return 0;	
}

