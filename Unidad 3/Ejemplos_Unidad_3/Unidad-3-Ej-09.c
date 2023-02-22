/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 9
	
	Arreglos bidimensionales
		* Inicialización secuencial
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
