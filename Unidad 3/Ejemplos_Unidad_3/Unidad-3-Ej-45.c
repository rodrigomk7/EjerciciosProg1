/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 45
	Cadenas de caracteres: Lectura de cadena de caracteres utilizando juego de inspecci�n
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
