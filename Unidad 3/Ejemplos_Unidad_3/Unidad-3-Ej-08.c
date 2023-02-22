/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 8
	
	Arreglos unidimensionales: Inicialización secuencial
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	char 	vectChar [5];
	int 	lista [4], vecInt[25];
	short	edades[3];
	float 	vector_1 [10], vector_2 [4];
		
	int i;
	
	printf("\n Carga de datos \n");
	for (i=0 ; i < sizeof(vectChar)/sizeof(char) ; i++)
	{
		printf(" vectChar[%d]: ", i);
		scanf("%c", &vectChar[i]);
		fgetc(stdin);
	}
	
	printf("\n\n");
	for (i=0 ; i < sizeof(lista)/sizeof(int) ; i++)
	{
		printf(" lista[%d]: ", i);
		scanf("%d", &lista[i]);
	}
	
	printf("\n\n");
	for (i=0 ; i < sizeof(edades)/sizeof(short) ; i++)
	{
		printf(" edades[%d]: ", i);
		scanf("%d", &edades[i]);
	}
	
	printf("\n\n");
	for (i=0 ; i < sizeof(vector_2)/sizeof(float) ; i++)
	{
		printf(" vector_2[%d]: ", i);
		scanf("%f", &vector_2[i]);
	}
	
		
	printf("\n\n Mostrar datos \n");
	printf(" vectChar: \n");
	for (i=0 ; i < sizeof(vectChar)/sizeof(char) ; i++)
		printf(" %5c", vectChar[i]);
	
	printf("\n\n");
	printf(" lista: \n");
	for (i=0 ; i < sizeof(lista)/sizeof(int) ; i++)
		printf(" %5d", lista[i]);
	
	printf("\n\n");
	printf(" edades: \n");
	for (i=0 ; i < sizeof(edades)/sizeof(short) ; i++)
		printf(" %5d", edades[i]);
	
	printf("\n\n");
	printf(" vector_2 \n");
	for (i=0 ; i < sizeof(vector_2)/sizeof(float) ; i++)
		printf(" %5.2f", vector_2[i]);
		
printf("\n\n");	
return 0;	
}
