/* 
	Universidad Nacional de Tucumán
	Facultad de Ciencias Exactas y Tecnología
	Departamento de Electricidad, Electrónica y Computación
	Año 2016
	
	Programación I
	Ingenierías: Eléctrica, Electrónica y en Computación
	Profesor: Ing. Jorge Steifensand
	
	Unidad 3
	
	Ejemplo 3
	
	Arreglos:  Inicialización en la declaración
*/
#include <stdio.h>

int main (int argc, char *argv[])
{
	char	vectChar [18] = {'a', 'e', 'i', 'o', 'u'};
	int 	lista [15] = {}, vecInt[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	short	edades[7] = {25, 19, 18, 21, 19, 17, 20};    //, 22, 16};
	float  	vector_1 [] = {}, vector_2 [9] = {1.1, 2.2, 3.3, 4.4};
		
	char	vecStr [8][18] = {{'p','q'},{'f','g'}};
	char    	matChar [5][15] = {{},{}};
	int	tablaActual [12][12] = {{1, 2, 3, 4},{1,2,3},{1,2}};
	float	tablaMes [][7] = {{},{},{},{0.1, 0.2, 0.3}};
	
	printf("\n vectChar: %d", sizeof(vectChar));
	printf("\t lista: %d", sizeof(lista));
	printf("\t vecInt: %d", sizeof(vecInt));
	printf("\t edades: %d", sizeof(edades));
	printf("\n vector_1: %d", sizeof(vector_1));
	printf("\t vector_2: %d", sizeof(vector_2));
	
	printf("\n\n vecStr: %d", sizeof(vecStr));
	printf("\t matChar: %d", sizeof(matChar));
	printf("\t tablaActual: %d", sizeof(tablaActual));
	printf("\n tablaMes: %d", sizeof(tablaMes));
	
printf("\n\n");
return 0;	
}
