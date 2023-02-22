/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 5
	
	Arreglos bidimensionales:  Inicialización en la declaración

*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	char	vecStr [8][18] = {{'p','q'},{'f','g'}};
	char    	matChar [5][15] = {{},{}};
	float	tablaMes [][7] = {{},{},{},{0.1, 0.2, 0.3}};
	int	tablaActual [12][12] = {{1, 2, 3, 4},{1,2,3},{1,2}};
	int	tabla[5][5];
	
	int i, j;
	
	printf("\n");
	for (i=0 ; i < 8 ; i++)
	{
		printf("\n");
		for (j=0 ; j<18 ; j++)
			printf(" %3c", vecStr[i][j]);
	}
	
	printf("\n\n");
	for (i=0 ; i < 5 ; i++)
	{
		printf("\n");
		for (j=0 ; j<15 ; j++)
			printf(" %3c", matChar[i][j]);
	}
	
	printf("\n\n");
	for (i=0 ; i < 12 ; i++)
	{
		printf("\n");
		for ( j=0 ; j<12 ; j++)
			printf(" %3d", tablaActual[i][j]);
	}
	
	printf("\n\n");
	for (i=0 ; i <4 ; i++)
	{
		printf("\n");
		for ( j=0 ; j<7 ; j++)
			printf(" %5.2f", tablaMes[i][j]);
	}
	
	printf("\n\n");
	for (i=0 ; i <5 ; i++)
	{
		printf("\n");
		for ( j=0 ; j<5 ; j++)
			printf(" %3d", tabla[i][j]);
	}
	
printf("\n\n");	
return 0;	
}
