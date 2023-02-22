/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 7
	
	Arreglos:  Inicializaci�n aleatoria
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	char	vecStr [8][18],  matChar [5][15];
	int	tablaActual [12][12];
	float	tablaMes [5][7];
	
	int i, j;

	vecStr [3][1] = 'z';
	matChar [3][3] = '3';
	tablaActual [1][2] = 12;
	tablaMes [2][0] = 0.12;
	
	printf("\n");
	for (i=0 ; i < 8 ; i++)
	{
		printf("\n");
		for (j=0 ; j<18 ; j++)
			printf(" %2c", vecStr[i][j]);
	}
	
	printf("\n\n");
	for (i=0 ; i < 5 ; i++)
	{
		printf("\n");
		for (j=0 ; j<15 ; j++)
			printf(" %2c", matChar[i][j]);
	}
	printf("\n\n");
	for (i=0 ; i < 12 ; i++)
	{
		printf("\n");
		for ( j=0 ; j<12 ; j++)
			printf(" %3d", tablaActual[i][j]);
	}
	
	printf("\n\n");
	for (i=0 ; i <5 ; i++)
	{
		printf("\n");
		for ( j=0 ; j<7 ; j++)
			printf(" %5.2f", tablaMes[i][j]);
	}
	
printf("\n\n");	
return 0;	
}
