/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 50
	Cadenas de caracteres: Vector de cadena de caracteres
	
*/

#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
	
	char vectCad[15][20];
	int i;
	
	printf("\n\n Nro filas: %8d", sizeof(vectCad)/sizeof(vectCad[0]));
	printf("\n Nro columnas: %8d", sizeof(vectCad[0]));
	printf("\n\n");
	
	for (i=0; i< 4; i++)
	{
		printf("Ingresar una cadena: ");
		fgets(vectCad[i], 13, stdin);
	}
	
	for (i=0; i< 4; i++)
	{
		fputs(vectCad[i],  stdout);
	}

printf("\n\n");
return 0;	
}

