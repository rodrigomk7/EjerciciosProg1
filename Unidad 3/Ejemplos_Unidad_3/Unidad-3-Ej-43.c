/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 43
	Cadenas de caracteres: Lectura de cadena de caracteres con modificador de longitud
*/

#include <stdio.h>
#include <string.h>

int main (int argc, char *argv[])
{
	char cadena[8] = "camino";
	char calle[8] = "Laprida";
	
	printf("\n %15s %8d %8d", calle, sizeof(calle), strlen(calle) );
	
	printf("\n\n Se ingresa una cadena menor a 7 caracteres con scanf(): ");
	scanf("%6s", calle);
	printf("\n %15s %8d %8d", calle, sizeof(calle), strlen(calle) );
	printf("%15s",cadena);
	printf("\n\n Se ingresa una cadena menor a 6 caracteres con fscanf(): ");
	fscanf(stdin,"%5s", calle);
	printf("\n %15s %8d %8d", calle, sizeof(calle), strlen(calle) );
	printf("%15s",cadena);
	printf("\n\n Se ingresa una cadena menor a 9 caracteres con fgets(): ");
	fgetc(stdin);
	fgets(calle, 9, stdin);
	printf("\n %15s", calle);
	printf("%8d",  sizeof(calle));
	printf("%8d", strlen(calle) );
	printf("%15s",cadena);
	
printf("\n\n");	
return 0;	
}
