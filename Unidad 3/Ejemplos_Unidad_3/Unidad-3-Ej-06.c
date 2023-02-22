/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 6
	
	Arreglos:  Inicialización aleatoria
*/

#include <stdio.h>

int main (int argc, char *argv[])
{
	char 	vectChar [18];
	int 	lista [15], vecInt[25];
	short	edades[7];
	float 	vector_1 [10], vector_2 [9];
		
	int i;
	
	vectChar [1] = 'e';
	lista [15] =  8;
	edades [22] = 17;
	vector_1 [2] = 3.33;
	vector_2 [3] = 0.707;
		
	printf("\n");
	for (i=0 ; i < sizeof(vectChar)/sizeof(char) ; i++)
		printf(" %3c", vectChar[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(lista)/sizeof(int) ; i++)
		printf(" %3d", lista[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(edades)/sizeof(short) ; i++)
		printf(" %3d", edades[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(vector_1)/sizeof(float) ; i++)
		printf(" %5.2f", vector_1[i]);
	
	printf("\n\n");
	for (i=0 ; i < sizeof(vector_2)/sizeof(float) ; i++)
		printf(" %5.2f", vector_2[i]);
		
printf("\n\n");	
return 0;	
}
