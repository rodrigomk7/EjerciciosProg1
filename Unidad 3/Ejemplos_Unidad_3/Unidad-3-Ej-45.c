/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 45
	Cadenas de caracteres: Lectura de cadena de caracteres utilizando juego de inspección
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char s[15];
	char aux[5];
	
	printf("\n\n Ingresar una cadena en mayusculas: ");
	scanf("%[^a-z \13]s", s);
	printf("\t%s", s);
	
	printf("\n\n Ingresar una cadena en minusculas: ");
	
	//fgetc(stdin);
	fgets(aux, 10, stdin);
	
	fscanf(stdin, "%[^A-Z^0-9]s", s);
	printf("\t%s", s);
	
	printf("\n\n Ingresar una cadena de caracteres numericos: ");
	
	//fgetc(stdin);
	fgets(aux, 10, stdin);
	
	scanf("%[^A-Z^a-z]s", s);
	printf("\t%s", s );
	
printf("\n\n");	
return 0;	
}
