/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 9
	
	Arreglos bidimensionales
		* Inicializaci�n secuencial
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	char	vecStr [8][18],  matChar [5][15];
	int	tablaActual [12][12];
	float	tablaMes [5][7];
	
	int i, j;

	printf("\n\n");
	for (i=0 ; i < 3 ; i++)
	{
		printf("\n");
		for (j=0 ; j<5 ; j++)
		{
			printf(" tablaMes[%d][%d]: ",i, j);
			scanf("%f", &tablaMes[i][j]);
		}
	}
	printf("\n\n");
	
	for (i=0 ; i <3 ; i++)
	{
		printf("\n");
		for ( j=0 ; j<5 ; j++)
			printf(" %5.2f", tablaMes[i][j]);
	}

printf("\n\n");	
return 0;	
}
