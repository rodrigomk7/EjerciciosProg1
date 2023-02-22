/* 
	Universidad Nacional de Tucum�n
	Facultad de Ciencias Exactas y Tecnolog�a
	Departamento de Electricidad, Electr�nica y Computaci�n
	A�o 2016
	
	Programaci�n I
	Ingenier�as: El�ctrica, Electr�nica y en Computaci�n
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 4
	
	Arreglos unidimensionales:  Inicializaci�n en la declaraci�n
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	char	vectChar [18] = {'a', 'e', 'i', 'o', 'u'};
	int 	lista1 [15] = {}, lista2 [15];
	int	vecInt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
short	edades[7] = {25, 19, 18, 21, 19, 17, 20}; //, 22, 16};
	float  	vector_1 [] = {}, vector_2 [9] = {1.1, 2.2, 3.3, 4.4};
	
	int i;
	
	printf("\n");
	for (i=0 ; i < sizeof(vectChar)/sizeof(char) ; i++)
		printf(" %4c", vectChar[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(lista1)/sizeof(int) ; i++)
		printf(" %4d", lista1[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(lista2)/sizeof(int) ; i++)
		printf(" %4d", lista2[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(edades)/sizeof(short) ; i++)
		printf(" %4d", edades[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(vector_1)/sizeof(float) ; i++)
		printf(" %5.2f", vector_1[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(vector_2)/sizeof(float) ; i++)
		printf(" %5.2f", vector_2[i]);
		
printf("\n\n");	
return 0;	
}
