/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 10
	
	Arreglos: cargar con números aleatorios
*/

#include <stdio.h>
#include <time.h>

int main (int argc, char *argv[])
{
	
	int 	lista [15], vecInt[25];
	short	edades[7];
	float 	vector_1 [10], vector_2 [9];
	
	int	tablaActual [12][12];
	float	tablaMes [5][7];
	
	int i, j;
	time_t t;
	
	time(&t);
	srand(t);

	for (i=0 ; i < sizeof(lista)/sizeof(int) ; i++)
		lista[i] = rand() % 90;
	
	for (i=0 ; i < sizeof(edades)/sizeof(short) ; i++)
		edades[i] = rand() % 50;
	
	for (i=0 ; i < 5 ; i++)
		for (j=0 ; j<7 ; j++)
			tablaMes[i][j] = 1.0*(rand()%200)/33.3;
	
	printf("\n Datos cargados: \n\n");
	printf(" lista: \n");
	for (i=0 ; i < sizeof(lista)/sizeof(int) ; i++)
		printf("%3d",lista[i]);
	
	printf("\n\n");
	printf(" edades: \n");
	for (i=0 ; i < sizeof(edades)/sizeof(short) ; i++)
		printf("%3d",edades[i]);
	
	printf("\n\n");
	printf(" tablaMes: ");
	for (i=0 ; i < 5 ; i++)
	{
		printf("\n");
		for (j=0 ; j<7 ; j++)
			printf("%8.2f",tablaMes[i][j]);
	}

printf("\n\n");	
return 0;	
}
