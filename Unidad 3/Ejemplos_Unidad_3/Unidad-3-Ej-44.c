/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 44
	Cadenas de caracteres: Lectura de cadena de caracteres utilizando juego de inspección
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char str[15];
	char auxiliar[5];
		
	printf("\n\n Ingresar una cadena en mayusculas: ");
	scanf("%[A-Z]s", str);
	printf("\t%s", str);
	printf("\n\n Ingresar una cadena en minusculas: ");
	
	//fgetc(stdin);
	fgets(auxiliar, 10, stdin);
		
	fscanf(stdin, "%[a-z]s", str);
	printf("\t%s", str);
	printf("\n\n Ingresar una cadena de caracteres numericos: ");

	//fgetc(stdin);
	//fgets(auxiliar, 10, stdin);

	scanf("%[0-9]s", str);
	printf("\t%s", str);
	
	printf("\n\n Ingresar una cadena (mayusculas y minusculas): ");

	//fgetc(stdin);
	//fgets(auxiliar, 10, stdin);
	
	scanf("%[A-Za-z]s", str);
	printf("\t%s", str);
	
	printf("\n\n Ingresar una cadena (sin simbolos): ");

	//fgetc(stdin);
	//fgets(auxiliar, 10, stdin);
	
	fscanf(stdin, "%[A-Za-z0-9 ]s", str);
	printf("\t%s", str);
	
printf("\n\n");	
return 0;	
}



